// 函数: sub_1412ff0f0
// 地址: 0x1412ff0f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_20 = arg4
void* r13 = *arg2
void* rbx = *(r13 + 0x30)

if ((rbx.b & 1) != 0)
    rbx = (rbx s>> 1) + r13 + 0x30

void* r15 = rbx + (sx.q(*(r13 + 0x38)) << 2)

while (rbx != r15)
    uint32_t r14_1 = zx.d(*rbx)
    void*** rcx_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    int64_t rbp_1 = *(zx.q(*(rbx + 2)) + arg4)
    void* rax_3 = &rcx_2[5]
    
    if (rax_3 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x30)
        arg4 = arg_20
        rcx_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_3 = &rcx_2[5]
    
    *(arg1 + 0x30) = rax_3
    rbx += 4
    void**** rax_4 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    *rax_4 = rcx_2
    *(arg1 + 8) = &rcx_2[1]
    rcx_2[1] = 0
    *rcx_2 = &data_142f11628
    rcx_2[2] = arg3
    rcx_2[3].d = r14_1
    rcx_2[4] = rbp_1

void* rbx_3 = *(r13 + 0x70)

if ((rbx_3.b & 1) != 0)
    rbx_3 = (rbx_3 s>> 1) + r13 + 0x70

int64_t result = sx.q(*(r13 + 0x78))
void* r15_1 = rbx_3 + (result << 2)

while (rbx_3 != r15_1)
    uint32_t r14_2 = zx.d(*rbx_3)
    result = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    int64_t rbp_2 = *(*(zx.q(*(rbx_3 + 2)) + arg4) + 0x10)
    int64_t rcx_7 = result + 0x28
    
    if (rcx_7 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x30)
        arg4 = arg_20
        result = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rcx_7 = result + 0x28
    
    *(arg1 + 0x30) = rcx_7
    rbx_3 += 4
    int64_t* rcx_9 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    *rcx_9 = result
    *(arg1 + 8) = result + 8
    *(result + 8) = 0
    *result = &data_142f11628
    *(result + 0x10) = arg3
    *(result + 0x18) = r14_2
    *(result + 0x20) = rbp_2

return result
