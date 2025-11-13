// 函数: sub_142c72360
// 地址: 0x142c72360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 u> 0xa)
    return "SSL_ERROR unknown"

switch (arg1)
    case 0
        return "SSL_ERROR_NONE"
    case 1
        return "SSL_ERROR_SSL"
    case 2
        return "SSL_ERROR_WANT_READ"
    case 3
        return "SSL_ERROR_WANT_WRITE"
    case 4
        return "SSL_ERROR_WANT_X509_LOOKUP"
    case 5
        return "SSL_ERROR_SYSCALL"
    case 6
        return "SSL_ERROR_ZERO_RETURN"
    case 7
        return "SSL_ERROR_WANT_CONNECT"
    case 8
        return "SSL_ERROR_WANT_ACCEPT"
    case 9
        return "SSL_ERROR_WANT_ASYNC"
    case 0xa
        return "SSL_ERROR_WANT_ASYNC_JOB"
