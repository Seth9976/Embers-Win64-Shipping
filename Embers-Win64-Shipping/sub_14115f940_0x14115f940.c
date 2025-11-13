// 函数: sub_14115f940
// 地址: 0x14115f940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi = zx.q(arg2[2])
void* rbp = *arg1

if (rdi.d u>= 8)
    rdi = 8

if (rdi.d != 0)
    uint32_t rax_1 = zx.d(*arg2)
    int64_t rax_2 = arg1[1]
    int64_t rbx_3 = (*(rbp + 0x30) + 0xf) & 0xfffffffffffffff0
    uint32_t r13_1 = zx.d(arg2[1])
    int64_t rax_3 = rdi + rbx_3
    
    if (rax_3 u> *(rbp + 0x38))
        sub_140b0e3d0(rbp + 0x30, (rdi + 0x10).d)
        rbx_3 = (*(rbp + 0x30) + 0xf) & 0xfffffffffffffff0
        rax_3 = rdi + rbx_3
    
    *(rbp + 0x30) = rax_3
    memcpy(rbx_3, arg3, rdi.d)
    void*** rcx_4 = (*(rbp + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_4 = &rcx_4[6]
    
    if (rax_4 u> *(rbp + 0x38))
        sub_140b0e3d0(rbp + 0x30, 0x38)
        rcx_4 = (*(rbp + 0x30) + 7) & 0xfffffffffffffff8
        rax_4 = &rcx_4[6]
    
    *(rbp + 0x30) = rax_4
    void**** rax_5 = *(rbp + 8)
    *(rbp + 0x14) += 1
    *rax_5 = rcx_4
    *(rbp + 8) = &rcx_4[1]
    rcx_4[1] = 0
    *rcx_4 = &data_142d99550
    rcx_4[2] = rax_2
    rcx_4[3] = rbx_3
    *(rcx_4 + 0x24) = r13_1
    rcx_4[4].d = rax_1
    rcx_4[5].d = rdi.d

return arg1
