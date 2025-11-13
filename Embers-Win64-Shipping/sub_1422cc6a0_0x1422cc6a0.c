// 函数: sub_1422cc6a0
// 地址: 0x1422cc6a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_18 = arg3
sub_1405a7050(arg1 + 0x70, &arg_18)
void* result = sub_140d1fd30(*(arg2 + 0x50), *(arg3 + 0x50))

if (*(result + 0xb4) u> 0 && *(arg3 + 0x38) != 1)
    uint32_t rdi_1 = (arg3 u>> 4).d
    int32_t rcx_3 = (0x9e3779b9 - rdi_1) ^ rdi_1 << 8
    int32_t rdx_4 = neg.d(rcx_3 + rdi_1) ^ rcx_3 u>> 0xd
    int32_t rdi_4 = (rdi_1 - rcx_3 - rdx_4) ^ rdx_4 u>> 0xc
    int32_t rcx_6 = (rcx_3 - rdi_4 - rdx_4) ^ rdi_4 << 0x10
    int32_t rdx_7 = (rdx_4 - rcx_6 - rdi_4) ^ rcx_6 u>> 5
    int32_t rdi_7 = (rdi_4 - rcx_6 - rdx_7) ^ rdx_7 u>> 3
    int32_t rcx_9 = (rcx_6 - rdi_7 - rdx_7) ^ rdi_7 << 0xa
    void* rax_14 = sub_141d2c030(arg1 + 0x80, (rdx_7 - rcx_9 - rdi_7) ^ rcx_9 u>> 0xf, &arg_18)
    char* rdi_8 = sx.q(*(rax_14 + 8))
    int32_t rcx_12 = (&rdi_8[1]).d
    *(rax_14 + 8) = rcx_12
    
    if (rcx_12 s> *(rax_14 + 0xc))
        sub_1405daba0(rax_14)
    
    result = *rax_14
    *(rdi_8 + result) = arg4

return result
