// 函数: sub_14116d320
// 地址: 0x14116d320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r15 = *arg2
void* rbx = *(r15 + 0x30)

if ((rbx.b & 1) != 0)
    rbx = (rbx s>> 1) + r15 + 0x30

void* r14 = rbx + (sx.q(*(r15 + 0x38)) << 2)

while (rbx != r14)
    uint32_t rbp_1 = zx.d(*rbx)
    void*** rcx_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_2 = &rcx_2[5]
    
    if (rax_2 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x30)
        rcx_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_2 = &rcx_2[5]
    
    *(arg1 + 0x30) = rax_2
    rbx += 4
    void**** rax_3 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    *rax_3 = rcx_2
    *(arg1 + 8) = &rcx_2[1]
    rcx_2[1] = 0
    *rcx_2 = &data_142da77d8
    rcx_2[2] = arg3
    rcx_2[3].d = rbp_1
    rcx_2[4] = 0

void* rbx_3 = *(r15 + 0x70)

if ((rbx_3.b & 1) != 0)
    rbx_3 = (rbx_3 s>> 1) + r15 + 0x70

int64_t result = sx.q(*(r15 + 0x78))
void* r14_1 = rbx_3 + (result << 2)

while (rbx_3 != r14_1)
    uint32_t rbp_2 = zx.d(*rbx_3)
    result = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    int64_t rcx_6 = result + 0x28
    
    if (rcx_6 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x30)
        result = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rcx_6 = result + 0x28
    
    *(arg1 + 0x30) = rcx_6
    rbx_3 += 4
    int64_t* rcx_8 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    *rcx_8 = result
    *(arg1 + 8) = result + 8
    *(result + 8) = 0
    *result = &data_142da77d8
    *(result + 0x10) = arg3
    *(result + 0x18) = rbp_2
    *(result + 0x20) = 0

return result
