// 函数: sub_140fc89f0
// 地址: 0x140fc89f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg2

if (arg2 == 0x38)
    rax = (*(*arg1 + 0xb8))()

if (rax u> 0x37)
    return u"Unknown Error"

switch (rax)
    case 0
        return u"SE_NO_ERROR"
    case 1
        return u"SE_EINTR"
    case 2
        return u"SE_EBADF"
    case 3
        return u"SE_EACCES"
    case 4
        return u"SE_EFAULT"
    case 5
        return u"SE_EINVAL"
    case 6
        return u"SE_EMFILE"
    case 7
        return u"SE_EWOULDBLOCK"
    case 8
        return u"SE_EINPROGRESS"
    case 9
        return u"SE_EALREADY"
    case 0xa
        return u"SE_ENOTSOCK"
    case 0xb
        return u"SE_EDESTADDRREQ"
    case 0xc
        return u"SE_EMSGSIZE"
    case 0xd
        return u"SE_EPROTOTYPE"
    case 0xe
        return u"SE_ENOPROTOOPT"
    case 0xf
        return u"SE_EPROTONOSUPPORT"
    case 0x10
        return u"SE_ESOCKTNOSUPPORT"
    case 0x11
        return u"SE_EOPNOTSUPP"
    case 0x12
        return u"SE_EPFNOSUPPORT"
    case 0x13
        return u"SE_EAFNOSUPPORT"
    case 0x14
        return u"SE_EADDRINUSE"
    case 0x15
        return u"SE_EADDRNOTAVAIL"
    case 0x16
        return u"SE_ENETDOWN"
    case 0x17
        return u"SE_ENETUNREACH"
    case 0x18
        return u"SE_ENETRESET"
    case 0x19
        return u"SE_ECONNABORTED"
    case 0x1a
        return u"SE_ECONNRESET"
    case 0x1b
        return u"SE_ENOBUFS"
    case 0x1c
        return u"SE_EISCONN"
    case 0x1d
        return u"SE_ENOTCONN"
    case 0x1e
        return u"SE_ESHUTDOWN"
    case 0x1f
        return u"SE_ETOOMANYREFS"
    case 0x20
        return u"SE_ETIMEDOUT"
    case 0x21
        return u"SE_ECONNREFUSED"
    case 0x22
        return u"SE_ELOOP"
    case 0x23
        return u"SE_ENAMETOOLONG"
    case 0x24
        return u"SE_EHOSTDOWN"
    case 0x25
        return u"SE_EHOSTUNREACH"
    case 0x26
        return u"SE_ENOTEMPTY"
    case 0x27
        return u"SE_EPROCLIM"
    case 0x28
        return u"SE_EUSERS"
    case 0x29
        return u"SE_EDQUOT"
    case 0x2a
        return u"SE_ESTALE"
    case 0x2b
        return u"SE_EREMOTE"
    case 0x2c
        return u"SE_EDISCON"
    case 0x2d
        return u"SE_SYSNOTREADY"
    case 0x2e
        return u"SE_VERNOTSUPPORTED"
    case 0x2f
        return u"SE_NOTINITIALISED"
    case 0x30
        return u"SE_HOST_NOT_FOUND"
    case 0x31
        return u"SE_TRY_AGAIN"
    case 0x32
        return u"SE_NO_RECOVERY"
    case 0x33
        return u"SE_NO_DATA"
    case 0x34
        return u"SE_UDP_ERR_PORT_UNREACH"
    case 0x35
        return u"SE_ADDRFAMILY"
    case 0x36
        return u"SE_SYSTEM"
    case 0x37
        return u"SE_NODEV"
