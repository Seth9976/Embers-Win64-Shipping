// 函数: sub_141083230
// 地址: 0x141083230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx_1 = arg6 << 4
int32_t count = zx.d(arg3[2]) - rcx_1
uint64_t result = zx.q(arg5 << 4)

if (result.d s<= count)
    count = result.d

if (count s> 0)
    uint64_t result_1 = *arg2
    int64_t rbx_3 = (*(arg1 + 0x30) + 0xf) & 0xfffffffffffffff0
    uint32_t r13_1 = zx.d(*arg3)
    int64_t count_1 = sx.q(count)
    int32_t r15_2 = zx.d(arg3[1]) + rcx_1
    int64_t rax_1 = count_1 + rbx_3
    
    if (rax_1 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, count + 0x10)
        rbx_3 = (*(arg1 + 0x30) + 0xf) & 0xfffffffffffffff0
        rax_1 = count_1 + rbx_3
    
    *(arg1 + 0x30) = rax_1
    memcpy(rbx_3, arg4, count)
    void*** rcx_6 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_2 = &rcx_6[6]
    
    if (rax_2 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x38)
        rcx_6 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_2 = &rcx_6[6]
    
    *(arg1 + 0x30) = rax_2
    void**** rax_3 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    *rax_3 = rcx_6
    *(arg1 + 8) = &rcx_6[1]
    rcx_6[1] = 0
    *rcx_6 = &data_142d549d8
    result = result_1
    rcx_6[3] = rbx_3
    rcx_6[4].d = r13_1
    *(rcx_6 + 0x24) = r15_2
    rcx_6[2] = result
    rcx_6[5].d = count

return result
