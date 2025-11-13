// 函数: sub_141e7c6a0
// 地址: 0x141e7c6a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
arg2[1] = 0
void* i = *(arg1 + 0x10)

for (void* rdi_2 = sx.q(*(arg1 + 0x18)) * 0x90 + i; i != rdi_2; i += 0x90)
    int64_t var_18
    int64_t* rax_1 = sub_141e78fc0(i, &var_18)
    int32_t rcx_1 = rax_1[1].d
    int32_t r8_1 = rcx_1 - 1
    
    if (rcx_1 == 0)
        r8_1 = 0
    
    sub_140a20ba0(arg2, *rax_1, r8_1)
    int64_t rcx_3 = var_18
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)

return arg2
