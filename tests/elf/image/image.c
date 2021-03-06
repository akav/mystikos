// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

int start_image(void (*callback)(const char* msg))
{
    if (callback)
        (*callback)("hello from the ELF image");

    return 12345;
}

int _start(void (*callback)(const char* msg))
{
    return start_image(callback);
}
