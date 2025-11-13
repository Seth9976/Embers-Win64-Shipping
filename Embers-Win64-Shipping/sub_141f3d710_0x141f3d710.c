// 函数: sub_141f3d710
// 地址: 0x141f3d710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = sx.q(arg2)

while (r14.d s>= *(arg1 + 0x280))
    void*** rax_1 = j_sub_140a82f30(0x28)
    void*** rbx_1 = rax_1
    
    if (rax_1 == 0)
        rbx_1 = nullptr
    else
        *rax_1 = &data_14306d5a8
        __builtin_memset(&rax_1[1], 0, 0x18)
    
    int64_t rsi_1 = sx.q(*(arg1 + 0x280))
    int32_t rax_2 = (rsi_1 + 1).d
    *(arg1 + 0x280) = rax_2
    
    if (rax_2 s> *(arg1 + 0x284))
        sub_140638870(arg1 + 0x278)
    
    *(*(arg1 + 0x278) + (rsi_1 << 3)) = rbx_1

int64_t rbx_2 = r14 << 3
int64_t rcx_1 = *(rbx_2 + *(arg1 + 0x278))
int64_t result = *(rcx_1 + 8)
char rdx_1 = *(arg1 + 0x1f2) & 1

if (rdx_1 != 0 || *(arg1 + 0x1f3) != 0)
    if (result == 0)
        sub_1422dd6d0(rcx_1)
        return *(*(rbx_2 + *(arg1 + 0x278)) + 8)
    
    if (rdx_1 == 0)
        goto label_141f3d816
else
label_141f3d816:
    
    if (result != 0 && *(arg1 + 0x1f3) == 0)
        sub_1422e19f0(rcx_1)
        return 0

return result
