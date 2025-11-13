// 函数: sub_142878240
// 地址: 0x142878240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x38)

switch (*(arg1 + 0x5c) - 0xc)
    case 0
        *arg3 = sub_14287abc0
        *arg4 = 1
        return 1
    case 1
        *arg3 = sub_14287aa60
        *arg4 = 0xb
        return 1
    case 2
        *arg3 = sub_14287b020
        *arg4 = 0x10
        return 1
    case 3
        *arg3 = sub_14285fa30
        *arg4 = 0xf
        return 1
    case 4
        int64_t (* rax_5)(void* arg1, int64_t* arg2) = sub_1428778e0
        
        if ((*(*(*(arg1 + 8) + 0xc0) + 0x60) & 8) == 0)
            rax_5 = sub_14285fda0
        
        *arg3 = rax_5
        *arg4 = 0x101
        return 1
    case 5
        *arg3 = sub_14287b4d0
        *arg4 = 0x43
        return 1
    case 6
        *arg3 = sub_14285fe10
        *arg4 = 0x14
        return 1
    case 0x1f
        *arg3 = sub_142860010
        *arg4 = 0x18
        return 1
    case 0x23
        *arg3 = nullptr
        *arg4 = 0xffffffff
        return 1
    case 0x24
        *arg3 = sub_14287b470
        *arg4 = 5
        return 1

sub_142856580(arg1, 0x50, 0x1ae, 0xec, "ssl\statem\statem_clnt.c", 0x385)
return 0
