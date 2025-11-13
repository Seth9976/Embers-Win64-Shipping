// 函数: sub_142869500
// 地址: 0x142869500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t* rcx = *(arg1 + 8)
void* rax = *(rcx + 0xc0)
int32_t rax_1

if ((*(rax + 0x60) & 8) == 0)
    rax_1 = *rcx

int32_t rax_6

if ((*(rax + 0x60) & 8) != 0 || rax_1 s< 0x304 || rax_1 == 0x10000)
    if (sub_142873e80(arg2, 1) == 0)
        sub_142856580(arg1, 0x50, 0x174, 0x44, "ssl\statem\statem_srvr.c", 0xb2c)
    else if (sub_142872060(arg1, arg2) == 0)
        sub_142856580(arg1, 0x50, 0x174, 0x44, "ssl\statem\statem_srvr.c", 0xb2c)
    else if (sub_1428736e0(arg2) == 0)
        sub_142856580(arg1, 0x50, 0x174, 0x44, "ssl\statem\statem_srvr.c", 0xb2c)
    else
        if ((*(*(*(arg1 + 8) + 0xc0) + 0x60) & 2) == 0)
        label_1428696e1:
            rax_6 = sub_14285dde0(arg1, arg2)
            goto label_1428696e6
        
        int16_t* arg_8
        int64_t rax_12 = sub_142864260(arg1, 1, &arg_8)
        
        if (sub_142873e80(arg2, 2) == 0)
            sub_142856580(arg1, 0x50, 0x174, 0x44, "ssl\statem\statem_srvr.c", 0xb3a)
        else if (sub_142873d50(arg2, 1) == 0)
            sub_142856580(arg1, 0x50, 0x174, 0x44, "ssl\statem\statem_srvr.c", 0xb3a)
        else if (sub_142864120(arg1, arg2, arg_8, rax_12) == 0)
            sub_142856580(arg1, 0x50, 0x174, 0x44, "ssl\statem\statem_srvr.c", 0xb3a)
        else
            if (sub_1428736e0(arg2) != 0)
                goto label_1428696e1
            
            sub_142856580(arg1, 0x50, 0x174, 0x44, "ssl\statem\statem_srvr.c", 0xb3a)
else if (arg1[0x1d6] != 3)
    if (sub_142873b60(arg2, 0, 1) != 0)
    label_1428695f8:
        rax_6 = sub_142875910(arg1, arg2, 0x4000, 0, 0)
    label_1428696e6:
        
        if (rax_6 != 0)
            void* rcx_17 = *(arg1 + 0xa8)
            arg1[0x1dc] += 1
            *(rcx_17 + 0x2a0) = 1
            return 1
    else
        sub_142856580(arg1, 0x50, 0x174, 0x44, "ssl\statem\statem_srvr.c", 0xb1a)
else
    sub_1428a6780(*(arg1 + 0x760))
    *(arg1 + 0x768) = 0x20
    int64_t rax_2 = sub_1428a6730(0x20)
    *(arg1 + 0x760) = rax_2
    
    if (rax_2 == 0)
        sub_142856580(arg1, 0x50, 0x174, 0x44, "ssl\statem\statem_srvr.c", 0xb0e)
    else if (sub_142897af0(rax_2, zx.q(arg1[0x1da])) s<= 0)
        sub_142856580(arg1, 0x50, 0x174, 0x44, "ssl\statem\statem_srvr.c", 0xb0e)
    else if (sub_142874080(arg2, *(arg1 + 0x760), *(arg1 + 0x768), 1) == 0)
        sub_142856580(arg1, 0x50, 0x174, 0x44, "ssl\statem\statem_srvr.c", 0xb0e)
    else if (sub_14285f860(arg1) != 0)
        goto label_1428695f8
return 0
