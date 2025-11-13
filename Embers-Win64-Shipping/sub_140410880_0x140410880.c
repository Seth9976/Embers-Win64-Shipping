// 函数: sub_140410880
// 地址: 0x140410880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i_1 = sx.q(arg6)
int32_t rax_1 = neg.d(*arg3)
int32_t r9_1 = neg.d(arg3[1])
int32_t result = rax_1 s>> 0xe

if (i_1 s> 0)
    int16_t* rbx_1 = arg5
    int32_t r13_1 = sx.d(result.w)
    int32_t rax_2 = sx.d(r9_1.w & 0x3fff)
    int32_t rcx_2 = sx.d((r9_1 s>> 0xe).w)
    int32_t r12_1 = sx.d(rax_1.w & 0x3fff)
    void* rbp_1 = arg1 - rbx_1
    int64_t i
    
    do
        int32_t r11_1 = sx.d(*(rbx_1 + rbp_1))
        int32_t rcx_3 = *arg2
        int32_t r10_2 = (((rcx_3 s>> 0x10) * r11_1) << 2) + ((zx.d(rcx_3.w) * r11_1) s>> 0x10 << 2)
            + (*arg4 << 2)
        uint32_t r8 = zx.d(r10_2.w)
        int32_t r9_4 = r10_2 s>> 0x10
        int32_t rcx_17 = ((((((r12_1 * r8) s>> 0x10) + r9_4 * r12_1) s>> 0xd) + 1) s>> 1)
            + ((r13_1 * r8) s>> 0x10) + r13_1 * r9_4 + arg4[1]
        *arg4 = rcx_17
        int32_t rdx = arg2[1]
        *arg4 = (rdx s>> 0x10) * r11_1 + ((zx.d(rdx.w) * r11_1) s>> 0x10) + rcx_17
        int32_t rcx_26 = ((((((rax_2 * r8) s>> 0x10) + rax_2 * r9_4) s>> 0xd) + 1) s>> 1)
            + ((rcx_2 * r8) s>> 0x10) + rcx_2 * r9_4
        arg4[1] = rcx_26
        int32_t rdx_4 = arg2[2]
        result = (r10_2 + 0x3fff) s>> 0xe
        arg4[1] = (rdx_4 s>> 0x10) * r11_1 + ((zx.d(rdx_4.w) * r11_1) s>> 0x10) + rcx_26
        
        if (result s> 0x7fff)
            result = 0x7fff
        else if (result s< 0xffff8000)
            result = -0x8000
        
        *rbx_1 = result.w
        rbx_1 = &rbx_1[sx.q(arg7)]
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
