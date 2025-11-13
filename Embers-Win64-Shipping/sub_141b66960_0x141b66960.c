// 函数: sub_141b66960
// 地址: 0x141b66960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_20 = arg4
uint32_t count = zx.d(*(arg1 + 0x13a))
int64_t r12 = *arg3
int32_t count_1 = arg3[1].d << 4

if (count_1 s<= count)
    count = count_1

int64_t arg_8

if (count s> 0)
    int64_t rbx_3 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
    uint32_t r13_1 = zx.d(*(arg1 + 0x138))
    arg_8.d = zx.d(*(arg1 + 0x136))
    int64_t rax_2 = *(arg2 + 0x1a0)
    int64_t count_2 = sx.q(count)
    int64_t rax_3 = count_2 + rbx_3
    
    if (rax_3 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, count + 0x10)
        rbx_3 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
        rax_3 = count_2 + rbx_3
    
    *(arg2 + 0x30) = rax_3
    memcpy(rbx_3, r12, count)
    void*** rcx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_4 = &rcx_4[6]
    
    if (rax_4 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x38)
        rcx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_4 = &rcx_4[6]
    
    *(arg2 + 0x30) = rax_4
    void**** rax_5 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_5 = rcx_4
    *(arg2 + 8) = &rcx_4[1]
    rcx_4[1] = 0
    *rcx_4 = &data_142d549d8
    rcx_4[2] = rax_2
    int32_t rax_8 = arg_8.d
    rcx_4[3] = rbx_3
    *(rcx_4 + 0x24) = r13_1
    rcx_4[4].d = rax_8
    rcx_4[5].d = count

arg_8 = *(arg2 + 0x1a0)
return sub_1405eb490(arg2, &arg_8, arg1 + 0x13c, &arg_20, 0)
