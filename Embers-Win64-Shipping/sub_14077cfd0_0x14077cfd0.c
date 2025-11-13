// 函数: sub_14077cfd0
// 地址: 0x14077cfd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg1 + 6) u<= 0
int64_t arg_8 = 0

if (not(cond:0))
    uint32_t rbp_1 = zx.d(*(arg1 + 4))
    void*** rcx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_1 = &rcx_2[5]
    
    if (rax_1 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_1 = &rcx_2[5]
    
    *(arg2 + 0x30) = rax_1
    void**** rax_2 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_2 = rcx_2
    *(arg2 + 8) = &rcx_2[1]
    rcx_2[1] = 0
    rcx_2[3].d = rbp_1
    *rcx_2 = &data_142da77d8
    rcx_2[2] = arg3
    rcx_2[4] = 0

return sub_1405d1550(&arg_8)
