// 函数: sub_14077c4b0
// 地址: 0x14077c4b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(arg5 << 4)
uint32_t count = zx.d(arg3[2]) - result.d

if (count s>= 8)
    count = 8

if (count s> 0)
    int64_t rbx_3 = (*(arg1 + 0x30) + 0xf) & 0xfffffffffffffff0
    uint32_t r13_1 = zx.d(*arg3)
    int32_t r15_2 = zx.d(arg3[1]) + result.d
    int64_t count_1 = sx.q(count)
    uint64_t result_1 = *arg2
    int64_t rax_1 = count_1 + rbx_3
    
    if (rax_1 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, count + 0x10)
        rbx_3 = (*(arg1 + 0x30) + 0xf) & 0xfffffffffffffff0
        rax_1 = count_1 + rbx_3
    
    *(arg1 + 0x30) = rax_1
    memcpy(rbx_3, arg4, count)
    void*** rcx_4 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_2 = &rcx_4[6]
    
    if (rax_2 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x38)
        rcx_4 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_2 = &rcx_4[6]
    
    *(arg1 + 0x30) = rax_2
    void**** rax_3 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    *rax_3 = rcx_4
    *(arg1 + 8) = &rcx_4[1]
    rcx_4[1] = 0
    *rcx_4 = &data_142d99550
    result = result_1
    rcx_4[3] = rbx_3
    rcx_4[4].d = r13_1
    *(rcx_4 + 0x24) = r15_2
    rcx_4[2] = result
    rcx_4[5].d = count

return result
