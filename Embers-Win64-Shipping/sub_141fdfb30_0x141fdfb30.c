// 函数: sub_141fdfb30
// 地址: 0x141fdfb30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x58) != 0)
    int64_t rcx = *(*(arg1 + 0x38) + 0x50)
    int64_t* rbx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_2 = &rbx_3[1]
    
    if (rax_2 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x10)
        rbx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_2 = &rbx_3[1]
    
    *(arg2 + 0x30) = rax_2
    *rbx_3 = rcx
    void*** rcx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_3 = &rcx_4[6]
    
    if (rax_3 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x38)
        rcx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_3 = &rcx_4[6]
    
    *(arg2 + 0x30) = rax_3
    void**** rax_4 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_4 = rcx_4
    *(arg2 + 8) = &rcx_4[1]
    rcx_4[1] = 0
    rcx_4[3] = rbx_3
    *rcx_4 = &data_142da7798
    rcx_4[2].d = 1
    rcx_4[4].d = 3
    *(rcx_4 + 0x24) = 3
    rcx_4[5] = 0

int64_t r8 = *(arg1 + 0x38)
int32_t var_18 = *(arg1 + 0x50)
int32_t var_14 = *(arg1 + 0x54)
var_18.q = var_18.q
int32_t var_10 = 1
return sub_141fd30e0(arg2, arg1 + 0x40, r8, &var_18)
