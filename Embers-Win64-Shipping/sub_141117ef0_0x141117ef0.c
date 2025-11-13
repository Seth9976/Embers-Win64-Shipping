// 函数: sub_141117ef0
// 地址: 0x141117ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1410e8c10(arg1, arg2, arg3, arg4 + 0x10)
sub_1410e8c10(&arg1[4], arg2, arg3, arg4 + 0x50)
sub_1410e8c10(&arg1[8], arg2, arg3, arg4 + 0x30)
sub_1410e8c10(&arg1[0xc], arg2, arg3, arg4 + 0x70)
uint64_t rbp = zx.q(arg1[0x12])

if (rbp.d u>= 8)
    rbp = 8

if (rbp.d != 0)
    uint32_t rax_1 = zx.d(arg1[0x11])
    uint32_t rax_2 = zx.d(arg1[0x10])
    int64_t rbx_3 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
    int64_t rax_3 = *arg3
    int64_t rax_4 = rbx_3 + rbp
    
    if (rax_4 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, (rbp + 0x10).d)
        rbx_3 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
        rax_4 = rbx_3 + rbp
    
    *(arg2 + 0x30) = rax_4
    memcpy(rbx_3, arg4, rbp.d)
    void*** rcx_7 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_5 = &rcx_7[6]
    
    if (rax_5 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x38)
        rcx_7 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_5 = &rcx_7[6]
    
    *(arg2 + 0x30) = rax_5
    void**** rax_6 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_6 = rcx_7
    *(arg2 + 8) = &rcx_7[1]
    rcx_7[1] = 0
    *rcx_7 = &data_142d99550
    rcx_7[2] = rax_3
    rcx_7[4].d = rax_2
    rcx_7[3] = rbx_3
    *(rcx_7 + 0x24) = rax_1
    rcx_7[5].d = rbp.d

return sub_140741e30(arg2, arg3, &arg1[0x13], &data_1439b5bb8, 0)
