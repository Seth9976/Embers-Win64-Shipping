// 函数: sub_1407520e0
// 地址: 0x1407520e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = arg2
void* rdi = arg2

if (arg2 == 0 || (*(arg3 + 0x11d) & 0x20) != 0)
    return 0

void* result

if (data_14396e8d0 == 0)
    sub_140754590(arg1 + 0x28, 0)
label_1407521c9:
    void* result_2 = sub_14073ed10(arg3)
    result = result_2
    *(result_2 + 0x54c) |= 1
    *(result_2 + 0x89) &= 0x7f
    
    if (*(result_2 + 0x408) != rdi)
        *(result_2 + 0x408) = rdi
        sub_14074d1e0(result_2)
        sub_140835b50(result + 0x418)
        sub_140752510(result)
else
    if (*(arg2 + 0x28) u<= 0)
        goto label_1407521c9
    
    uint32_t rdi_1 = (rdi u>> 4).d
    int32_t rcx_1 = (0x9e3779b9 - rdi_1) ^ rdi_1 << 8
    int32_t rdx_2 = neg.d(rcx_1 + rdi_1) ^ rcx_1 u>> 0xd
    int32_t rdi_4 = (rdi_1 - rcx_1 - rdx_2) ^ rdx_2 u>> 0xc
    int32_t rcx_4 = (rcx_1 - rdi_4 - rdx_2) ^ rdi_4 << 0x10
    int32_t rdx_5 = (rdx_2 - rcx_4 - rdi_4) ^ rcx_4 u>> 5
    int32_t rdi_7 = (rdi_4 - rcx_4 - rdx_5) ^ rdx_5 u>> 3
    int32_t rcx_7 = (rcx_4 - rdi_7 - rdx_5) ^ rdi_7 << 0xa
    void* rax_15 = sub_1406f50d0(arg1 + 0x28, (rdx_5 - rcx_7 - rdi_7) ^ rcx_7 u>> 0xf, &arg_10)
    rdi = arg_10
    void* result_1 = sub_140749330(rax_15, arg3, rdi, arg4)
    result = result_1
    
    if (result_1 == 0)
        goto label_1407521c9

return result
