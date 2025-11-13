// 函数: sub_14111a3f0
// 地址: 0x14111a3f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14077cfd0(arg1, arg2, *arg3)
void** const result = sub_14077cfd0(arg1 + 8, arg2, *arg3)

if (arg5 != 0)
    int64_t rax = *(arg4 + 0x30)
    int64_t rcx_1 = *(arg4 + 0x10)
    int64_t* rbx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_1 = &rbx_3[2]
    
    if (rax_1 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x18)
        rbx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_1 = &rbx_3[2]
    
    *(arg2 + 0x30) = rax_1
    *rbx_3 = rcx_1
    rbx_3[1] = rax
    void*** rcx_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_3 = &rcx_5[6]
    
    if (rax_3 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x38)
        rcx_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_3 = &rcx_5[6]
    
    *(arg2 + 0x30) = rax_3
    void**** rax_4 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_4 = rcx_5
    *(arg2 + 8) = &rcx_5[1]
    rcx_5[1] = 0
    result = &data_142da7798
    *rcx_5 = &data_142da7798
    rcx_5[2].d = 2
    rcx_5[3] = rbx_3
    rcx_5[4].d = 0
    *(rcx_5 + 0x24) = 3
    rcx_5[5] = 0

return result
