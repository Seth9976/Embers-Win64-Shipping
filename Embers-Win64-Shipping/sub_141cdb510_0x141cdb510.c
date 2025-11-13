// 函数: sub_141cdb510
// 地址: 0x141cdb510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s>= 0 && arg2 s< *(arg1 + 0x30))
    void* rax_1 = *(arg1 + 0x48)
    void* r9_1 = arg1 + 0x38
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(arg2)
    int32_t result = *(r9_1 + (sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5) << 2))
    
    if (test_bit(result, arg2 & 0x1f))
        return result

int64_t var_28
__builtin_memset(&var_28, 0, 0x20)
sub_1409c9430(arg1 + 0x28, arg2, &var_28)
int64_t var_18

if (var_18 != 0)
    sub_140a74f90(var_18)

int64_t rcx_2 = var_28

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

return sub_14090bdf0(arg1 + 0x178, arg2)
