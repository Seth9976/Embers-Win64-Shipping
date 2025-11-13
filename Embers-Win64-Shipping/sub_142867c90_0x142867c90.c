// 函数: sub_142867c90
// 地址: 0x142867c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x38)

switch (*(arg1 + 0x5c) - 0x13)
    case 0
        *arg3 = nullptr
        *arg4 = 0
        return 1
    case 2
        *arg3 = sub_142867b60
        *arg4 = 3
        return 1
    case 3
        *arg3 = sub_142869d70
        *arg4 = 2
        return 1
    case 4
        *arg3 = sub_142869c30
        *arg4 = 0xb
        return 1
    case 5
        *arg3 = sub_14286a000
        *arg4 = 0xc
        return 1
    case 6
        *arg3 = sub_142869500
        *arg4 = 0xd
        return 1
    case 7
        *arg3 = sub_142869d30
        *arg4 = 0xe
        return 1
    case 0xe
        *arg3 = sub_1428697a0
        *arg4 = 4
        return 1
    case 0xf
        *arg3 = sub_142869460
        *arg4 = 0x16
        return 1
    case 0x10
        int64_t (* rax_4)(void* arg1, int64_t* arg2) = sub_1428778e0
        
        if ((*(*(*(arg1 + 8) + 0xc0) + 0x60) & 8) == 0)
            rax_4 = sub_14285fda0
        
        *arg3 = rax_4
        *arg4 = 0x101
        return 1
    case 0x11
        *arg3 = sub_14285fe10
        *arg4 = 0x14
        return 1
    case 0x12
        *arg3 = sub_142869760
        *arg4 = 8
        return 1
    case 0x15
        *arg3 = sub_14285fa30
        *arg4 = 0xf
        return 1
    case 0x17
        *arg3 = sub_142860010
        *arg4 = 0x18
        return 1
    case 0x1b
        *arg3 = nullptr
        *arg4 = 0xffffffff
        return 1

sub_142856580(arg1, 0x50, 0x1af, 0xec, "ssl\statem\statem_srvr.c", 0x3e7)
return 0
