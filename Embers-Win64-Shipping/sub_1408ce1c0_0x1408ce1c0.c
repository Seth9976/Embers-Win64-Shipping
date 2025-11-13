// 函数: sub_1408ce1c0
// 地址: 0x1408ce1c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r11 = sx.q(arg2)
int32_t arg_10 = 0
char* rdx_2 = (r11 << 6) + *(arg1 + 0x38)
int64_t rax = sx.q(*(rdx_2 + 0x14))
char r9

if (*(arg1 + 0xb0) == 0)
    if (rax.d == 0xffffffff)
        r9 = 0xff
    else
        r9 = *(*(arg1 + 0xc8) + rax * 0x30 + 3)
    
    int64_t var_10_1 = arg3
    char var_18_1 = r9
    sub_1408d4fe0(*(arg1 + 0xa8), &arg_10, (*(*(arg1 + 0x28) + (r11 << 3))).b, zx.q(*rdx_2))
else
    if (rax.d == 0xffffffff)
        r9 = 0xff
    else
        r9 = *(*(arg1 + 0xc8) + rax * 0x30 + 3)
    
    int64_t* rcx_2 = *(arg1 + 0xa8)
    (*(*rcx_2 + 0x260))(rcx_2, &arg_10, *(*(arg1 + 0x28) + (r11 << 3)), zx.q(*rdx_2), r9, arg3)
int32_t rcx_6 = arg_10

if (rcx_6 s<= 0)
    return 0

return zx.q(rcx_6.b)
