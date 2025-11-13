// 函数: sub_1411181f0
// 地址: 0x1411181f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141118b20(arg1, arg2, arg3, arg4 + 0x10)
sub_141118b20(&arg1[4], arg2, arg3, arg4 + 0x50)
sub_141118b20(&arg1[8], arg2, arg3, arg4 + 0x30)
sub_141118b20(&arg1[0xc], arg2, arg3, arg4 + 0x70)
sub_1405d0cd0(arg2, arg3, &arg1[0x10], arg4, 0)
uint64_t rbp = zx.q(arg1[0x15])
void** const result = 4

if (rbp.d u>= 4)
    rbp = 4

if (rbp.d != 0)
    uint32_t r12_1 = zx.d(arg1[0x13])
    int64_t rbx_3 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
    int64_t r13_1 = *arg3
    uint32_t r15_1 = zx.d(arg1[0x14])
    int64_t rax = rbx_3 + rbp
    
    if (rax u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, (rbp + 0x10).d)
        rbx_3 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
        rax = rbx_3 + rbp
    
    *(arg2 + 0x30) = rax
    memcpy(rbx_3, &data_1439b5bb8, rbp.d)
    void*** rcx_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_1 = &rcx_8[6]
    
    if (rax_1 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x38)
        rcx_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_1 = &rcx_8[6]
    
    *(arg2 + 0x30) = rax_1
    void**** rax_2 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_2 = rcx_8
    *(arg2 + 8) = &rcx_8[1]
    rcx_8[1] = 0
    result = &data_142d549d8
    rcx_8[2] = r13_1
    rcx_8[4].d = r12_1
    *(rcx_8 + 0x24) = r15_1
    *rcx_8 = &data_142d549d8
    rcx_8[3] = rbx_3
    rcx_8[5].d = rbp.d

return result
