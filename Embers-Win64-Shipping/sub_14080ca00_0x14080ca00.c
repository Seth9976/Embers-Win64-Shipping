// 函数: sub_14080ca00
// 地址: 0x14080ca00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r13 = *(arg3 + 0x1b0)
uint32_t arg_20 = *(arg1 + 0xb8) u>> 2
int64_t arg_18 = r13

if (arg4 == 0)
    sub_14077c370(arg2 + 0x120, arg3, &arg_18, arg1 + 0x50)
    sub_14077c370(arg2 + 0x128, arg3, &arg_18, arg1 + 0x70)
    uint64_t result = sub_140741e30(arg3, &arg_18, arg2 + 0x1b6, &arg_20, 0)
    
    if (*(arg2 + 0x14e) u<= 0)
        return result
    
    return sub_14077c370(arg2 + 0x148, arg3, &arg_18, arg1 + 0x90)

int32_t r14 = *(arg1 + 0xb4)
int64_t r15

if (r14 == 0)
    r15 = sub_14082c510()
else
    r15 = *(arg1 + 0x60)

if (*(arg2 + 0x11a) u> 0)
    uint32_t rax_3 = zx.d(*(arg2 + 0x118))
    void*** rcx_2 = (*(arg3 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_4 = &rcx_2[5]
    
    if (rax_4 u> *(arg3 + 0x38))
        sub_140b0e3d0(arg3 + 0x30, 0x30)
        rcx_2 = (*(arg3 + 0x30) + 7) & 0xfffffffffffffff8
        rax_4 = &rcx_2[5]
    
    *(arg3 + 0x30) = rax_4
    void**** rax_5 = *(arg3 + 8)
    *(arg3 + 0x14) += 1
    *rax_5 = rcx_2
    *(arg3 + 8) = &rcx_2[1]
    rcx_2[1] = 0
    rcx_2[3].d = rax_3
    *rcx_2 = &data_142d99560
    rcx_2[2] = r13
    rcx_2[4] = r15

int64_t r14_1

if (r14 == 0)
    r14_1 = sub_14082c590()
else
    r14_1 = *(arg1 + 0x80)

if (*(arg2 + 0x11e) u> 0)
    uint32_t r15_1 = zx.d(*(arg2 + 0x11c))
    void*** rcx_8 = (*(arg3 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_9 = &rcx_8[5]
    
    if (rax_9 u> *(arg3 + 0x38))
        sub_140b0e3d0(arg3 + 0x30, 0x30)
        rcx_8 = (*(arg3 + 0x30) + 7) & 0xfffffffffffffff8
        rax_9 = &rcx_8[5]
    
    *(arg3 + 0x30) = rax_9
    void** rax_10 = *(arg3 + 8)
    *(arg3 + 0x14) += 1
    *rax_10 = rcx_8
    *(arg3 + 8) = &rcx_8[1]
    rcx_8[1] = 0
    *rcx_8 = &data_142d99560
    rcx_8[2] = r13
    rcx_8[3].d = r15_1
    rcx_8[4] = r14_1

return sub_140741e30(arg3, &arg_18, arg2 + 0x1b0, &arg_20, 0)
