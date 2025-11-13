// 函数: sub_140410a30
// 地址: 0x140410a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = 0
int16_t* r14 = arg4
*arg2 = 0x7fffffff

if (arg11 s> 0)
    int32_t* rsi_1 = arg5
    char* r11_1 = arg8
    int32_t r15_1 = sx.d(arg9)
    char* rdx_1 = arg6 + 2
    void* rcx_1 = arg7 - r11_1
    arg7 = rcx_1
    char* var_50_1 = rdx_1
    
    do
        uint32_t rdi_1 = zx.d(*(r11_1 + rcx_1))
        int32_t rsi_2 = rsi_1[4]
        int32_t rbx_2 = sx.d(*r14 - (sx.w(rdx_1[-2]) << 7))
        int32_t r15_2 = sx.d(r14[1] - (sx.w(rdx_1[-1]) << 7))
        int32_t r12_1 = sx.d(r14[2] - (sx.w(*rdx_1) << 7))
        int32_t r14_1 = 0
        int32_t r13_1 = sx.d(r14[3] - (sx.w(rdx_1[1]) << 7))
        int32_t rcx_8 = rdi_1 - arg10
        
        if (rcx_8 s> 0)
            r14_1 = rcx_8
        
        int32_t r11_2 = arg5[2]
        int32_t rdi_2 = arg5[3]
        int32_t r10_2 = *arg5
        int32_t r9_1 = arg5[1]
        arg6.d = sx.d(r14[4] - (sx.w(rdx_1[2]) << 7))
        int32_t rdx_8 = ((zx.d(r11_2.w) * r12_1) s>> 0x10) * 2
            + ((zx.d(r9_1.w) * r15_2) s>> 0x10 << 1) + ((zx.d(rdi_2.w) * r13_1) s>> 0x10 << 1)
            + ((zx.d(rsi_2.w) * arg6.d) s>> 0x10 << 1)
        int32_t rdi_5 = arg6.d
        int32_t rdx_10 = rdx_8 + (((r9_1 s>> 0x10) * r15_2) << 1)
            + (((r11_2 s>> 0x10) * r12_1) << 1) + (((rdi_2 s>> 0x10) * r13_1) << 1)
            + (((rsi_2 s>> 0x10) * rdi_5) << 1)
        int32_t rdx_12 = rdx_10 + ((zx.d(r10_2.w) * rbx_2) s>> 0x10) + (r10_2 s>> 0x10) * rbx_2
        rsi_1 = arg5
        int32_t r8_2 = rsi_1[7]
        int32_t r9_4 = rsi_1[8]
        int32_t r11_5 = rsi_1[6]
        int32_t r10_5 = rsi_1[9]
        int32_t r9_7 = rsi_1[0xe]
        int32_t r10_8 = rsi_1[0xc]
        int32_t r8_7 = ((zx.d(r9_4.w) * r13_1) s>> 0x10) * 2
            + ((zx.d(r8_2.w) * r12_1) s>> 0x10 << 1) + ((zx.d(r10_5.w) * rdi_5) s>> 0x10 << 1)
            + (((r8_2 s>> 0x10) * r12_1) << 1) + (((r9_4 s>> 0x10) * r13_1) << 1)
            + (((r10_5 s>> 0x10) * rdi_5) << 1) + ((zx.d(r11_5.w) * r15_2) s>> 0x10)
            + (r11_5 s>> 0x10) * r15_2
        int32_t r8_10 = rsi_1[0xd]
        int32_t r11_9 = (r14_1 << 0xa) + zx.d(*r11_1) * r15_1 + ((zx.d(rdx_12.w) * rbx_2) s>> 0x10)
            + (rdx_12 s>> 0x10) * rbx_2 + (r8_7 s>> 0x10) * r15_2
            + ((zx.d(r8_7.w) * r15_2) s>> 0x10)
        int32_t rdx_25 = rsi_1[0x13]
        int32_t r8_15 = ((zx.d(r9_7.w) * rdi_5) s>> 0x10) * 2
            + ((zx.d(r8_10.w) * r13_1) s>> 0x10 << 1) + (((r8_10 s>> 0x10) * r13_1) << 1)
            + (((r9_7 s>> 0x10) * rdi_5) << 1) + ((zx.d(r10_8.w) * r12_1) s>> 0x10)
            + (r10_8 s>> 0x10) * r12_1
        int32_t r8_18 = rsi_1[0x12]
        int32_t r9_12 = (rdx_25 s>> 0x10) * rdi_5 * 2 + ((zx.d(rdx_25.w) * rdi_5) s>> 0x10 << 1)
            + ((zx.d(r8_18.w) * r13_1) s>> 0x10) + (r8_18 s>> 0x10) * r13_1
        int32_t rcx_63 = rsi_1[0x18]
        int32_t rdx_32 = ((zx.d(rcx_63.w) * rdi_5) s>> 0x10) + (rcx_63 s>> 0x10) * rdi_5
        int32_t r8_23 = r11_9 + (r8_15 s>> 0x10) * r12_1 + ((zx.d(r8_15.w) * r12_1) s>> 0x10)
            + (r9_12 s>> 0x10) * r13_1 + ((zx.d(r9_12.w) * r13_1) s>> 0x10)
            + (rdx_32 s>> 0x10) * rdi_5
        int32_t r8_24 = r8_23 + ((zx.d(rdx_32.w) * rdi_5) s>> 0x10)
        
        if (r8_24 s< *arg2)
            *arg2 = r8_24
            *arg1 = result.b
            *arg3 = rdi_1
        
        rcx_1 = arg7
        r14 = arg4
        r15_1 = sx.d(arg9)
        rdx_1 = &var_50_1[5]
        r11_1 = &arg8[1]
        result += 1
        var_50_1 = rdx_1
        arg8 = r11_1
    while (result s< arg11)

return result
