// 函数: sub_141fe0f60
// 地址: 0x141fe0f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = arg2
int32_t var_10 = 0xffffffff
int32_t var_c = 4
int32_t arg_8
sub_140e10ae0(arg1 + 0x160, &arg_8, &var_18)
int64_t rax = sx.q(arg_8)

if (rax.d != 0xffffffff)
    void* rcx_1 = *(arg1 + 0x160) + rax * 0x18
    
    if (rcx_1 != 0)
        return zx.q(*(rcx_1 + 8))

return 0xffffffff
