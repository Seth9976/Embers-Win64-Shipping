// 函数: sub_14288e590
// 地址: 0x14288e590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
char* rax = sub_1428a38c0(arg2)

if (rax == 0)
    sub_1428a5670((&rax[0x14]).d, 0xbf, 0x10c, "ssl\ssl_rsa.c", 0x143)
    return 0

int64_t arg_18
void* rax_2 = sub_142854230(rax, &arg_18)

if (rax_2 == 0)
    sub_1428a5670((rax_2 + 0x14).d, 0xbf, 0xf7, "ssl\ssl_rsa.c", 0x148)
    return 0

if (arg_18 == 3)
    int32_t rax_5 = sub_1428c0870(sub_142896700(rax))
    
    if (rax_5 == 0)
        sub_1428a5670(rax_5 + 0x14, 0xbf, 0x13e, "ssl\ssl_rsa.c", 0x14d)
        return 0

int32_t* rdx_1 = arg1[arg_18 * 5 + 5]

if (rdx_1 != 0)
    sub_142896470(rax, rdx_1)
    sub_1428a49e0()
    int32_t rax_9 = sub_1406938b0(arg1[arg_18 * 5 + 5])
    char rax_12
    
    if (rax_9 == 6)
        rax_12 = sub_142897550(sub_142896750(arg1[arg_18 * 5 + 5]))
    
    if ((rax_9 != 6 || (rax_12 & 1) == 0) && sub_1428a36a0(arg2, arg1[arg_18 * 5 + 5]) == 0)
        sub_1428965a0(arg1[arg_18 * 5 + 5])
        arg1[arg_18 * 5 + 5] = 0
        sub_1428a49e0()

sub_1428a2c50(arg1[arg_18 * 5 + 4])
sub_1428a3ba0(arg2)
arg1[arg_18 * 5 + 4] = arg2
*arg1 = &arg1[arg_18 * 5 + 4]
return 1
