if (!window.popupBridge) {
    window.popupBridge = {
        getReturnUrlPrefix: function () {
            return <%s>;
        },
        open: function(checkoutURL) {
            var location = window.popupBridge.getReturnUrlPrefix() + '?ppcheckoutURL=' + encodeURIComponent(checkoutURL) +  '&checkoutjs=true';
            window.location = location;
        },
        end: function(url) {
            var payload = {
                queryItems: parseQueryString(url)
            }
            window.popupBridge.onComplete(null, payload);
        }
    }
}

function parseQueryString(url){
    var query = url.substr(url.indexOf('?')+1);
    var result = {};
    query.split("&").forEach(function(part) {
        var item = part.split("=");
        result[item[0]] = decodeURIComponent(item[1]);
    });
    return result;
}