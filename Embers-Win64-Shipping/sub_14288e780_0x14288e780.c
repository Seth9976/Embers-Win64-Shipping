// 函数: sub_14288e780
// 地址: 0x14288e780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t arg_18
void* rax = sub_142854230(arg2, &arg_18)

if (rax == 0)
    sub_1428a5670((rax + 0x14).d, 0xc1, 0xf7, "ssl\ssl_rsa.c", 0x85)
    return 0

int64_t rdx_1 = arg_18
void* rcx_2 = arg1[rdx_1 * 5 + 4]

if (rcx_2 != 0)
    int32_t* rax_3 = sub_1428a38c0(rcx_2)
    
    if (rax_3 == 0)
        sub_1428a5670((&rax_3[5]).d, 0xc1, (rax_3 + 0x41).d, "ssl\ssl_rsa.c", 0x8d)
        return 0
    
    sub_142896470(rax_3, arg2)
    sub_1428a49e0()
    int32_t rax_5 = sub_1406938b0(arg2)
    char rax_7
    
    if (rax_5 == 6)
        rax_7 = sub_142897550(sub_142896750(arg2))
    
    if ((rax_5 != 6 || (rax_7 & 1) == 0) && sub_1428a36a0(arg1[arg_18 * 5 + 4], arg2) == 0)
        sub_1428a2c50(arg1[arg_18 * 5 + 4])
        arg1[arg_18 * 5 + 4] = 0
        return 0
    
    rdx_1 = arg_18

sub_1428965a0(arg1[rdx_1 * 5 + 5])
sub_142896e70(arg2)
arg1[arg_18 * 5 + 5] = arg2
*arg1 = &arg1[arg_18 * 5 + 4]
return 1
