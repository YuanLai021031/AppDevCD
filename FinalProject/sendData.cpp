#include "appdev.h"

void send_data(rock r)
{
    CURL* curl;
    CURLcode res;
    char postdata[100];
    sprintf(postdata, "min=%d&max=$d&user=%s", r.min, r.max, r.rname);

    curl_global_init(CURL_GLOBAL_DEFAULT);

    curl = curl_easy_init();
    if (curl) {
        curl_easy_setopt(curl, CURLOPT_URL, "https://www.cc.puv.fi/~e2000599/AppDev/testCurl1.html");

        curl_easy_setopt(curl, CURLOPT_POSTFIELDS, postdata);

        /* Perform the request, res will get the return code */
        res = curl_easy_perform(curl);
        /* Check for errors */
        if (res != CURLE_OK)
            fprintf(stderr, "curl_easy_perform() failed: %s\n",
                curl_easy_strerror(res));

        /* always cleanup */
        curl_easy_cleanup(curl);
    }

    curl_global_cleanup();

}