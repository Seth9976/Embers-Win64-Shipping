// 函数: sub_1403e4a30
// 地址: 0x1403e4a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t __saved_rbp_1
int64_t __saved_rbp = __saved_rbp_1
int64_t __saved_rsi_1
int64_t __saved_rsi = __saved_rsi_1
int64_t __saved_rdi_1
int64_t __saved_rdi = __saved_rdi_1
int64_t __saved_r12_1
int64_t __saved_r12 = __saved_r12_1
int64_t __saved_r13_1
int64_t __saved_r13 = __saved_r13_1
int64_t __saved_r14_1
int64_t __saved_r14 = __saved_r14_1
int64_t __saved_r15_1
int64_t __saved_r15 = __saved_r15_1
int64_t __saved_rbx_1
int64_t __saved_rbx = __saved_rbx_1
void* var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
void* rbx = arg1 + 0xaec
int32_t r14 = arg4

if (*(arg1 + 0x90c) != *(arg1 + 0x1054))
    sub_1403e50a0(arg1)
    *(rbx + 0x568) = *(arg1 + 0x90c)

int64_t var_90 = 0

if (*(arg1 + 0x1058) == 0 && *(arg1 + 0x105c) == 0)
    int32_t i = 0
    
    if (*(arg1 + 0x924) s> 0)
        void* r8 = rbx + 0x500
        
        do
            int32_t rdx = sx.d(*r8)
            i += 1
            int32_t rcx_1 = sx.d(*(arg1 - rbx + r8 + 0x428)) - rdx
            r8 += 2
            *(r8 - 2) = ((zx.d(rcx_1.w) * 0x3fdc) s>> 0x10).w + (rcx_1 s>> 0x10).w * 0x3fdc + rdx.w
        while (i s< *(arg1 + 0x924))
    
    int32_t r9 = *(arg1 + 0x914)
    int32_t r8_1 = 0
    int32_t r14_1 = 0
    int32_t rax_7 = 0
    
    if (r9 s> 0)
        int32_t* rcx_3 = arg2 + 0x10
        
        do
            int32_t rdx_1 = *rcx_3
            
            if (rdx_1 s> r8_1)
                r8_1 = rdx_1
                r14_1 = rax_7
            
            rax_7 += 1
            rcx_3 = &rcx_3[1]
        while (rax_7 s< r9)
    
    int64_t rcx_4 = sx.q(*(arg1 + 0x91c))
    memmove(rbx + (rcx_4 << 2), rbx, ((r9 - 1) * rcx_4.d) << 2)
    int64_t rax_10 = sx.q(*(arg1 + 0x91c))
    memcpy(rbx, arg1 + ((sx.q(rax_10.d * r14_1) + 1) << 2), (rax_10 << 2).d)
    int32_t i_1 = 0
    
    if (*(arg1 + 0x914) s> 0)
        int32_t rdx_6 = *(rbx + 0x560)
        void* r8_6 = arg2 + 0x10
        
        do
            int32_t rcx_7 = *r8_6
            i_1 += 1
            r8_6 += 4
            int32_t rcx_8 = rcx_7 - rdx_6
            rdx_6 = rdx_6 + (rcx_8 s>> 0x10) * 0x121a + ((zx.d(rcx_8.w) * 0x121a) s>> 0x10)
            *(rbx + 0x560) = rdx_6
        while (i_1 s< *(arg1 + 0x914))
    
    r14 = arg4

int32_t result

if (*(arg1 + 0x1058) == 0)
    result = memset(rbx + 0x520, 0, sx.q(*(arg1 + 0x924)) << 2)
else
    int64_t rcx_12 = sx.q(r14 + 0x10) << 2
    int64_t rax_16 = rcx_12 + 0xf
    
    if (rax_16 u<= rcx_12)
        rax_16 = 0xffffffffffffff0
    
    int64_t rax_17 = rax_16 & 0xfffffffffffffff0
    __chkstk(rax_17)
    uint64_t r8_7 = zx.q(*(rbx + 0x560))
    void var_d8
    void* rsp_1 = &var_d8 - rax_17
    void* rsi = rsp_1 + 0x30
    *(rsp_1 + 0x20) = rbx + 0x564
    sub_1403e5110(rsi + 0x40, rbx, r8_7, zx.q(r14))
    int16_t var_68
    sub_1403e7cd0(&var_68, rbx + 0x500, *(arg1 + 0x924))
    int64_t rcx_15 = sx.q(r14)
    *rsi = *(rbx + 0x520)
    *(rsi + 4) = *(rbx + 0x524)
    *(rsi + 8) = *(rbx + 0x528)
    *(rsi + 0xc) = *(rbx + 0x52c)
    *(rsi + 0x10) = *(rbx + 0x530)
    *(rsi + 0x14) = *(rbx + 0x534)
    *(rsi + 0x18) = *(rbx + 0x538)
    *(rsi + 0x1c) = *(rbx + 0x53c)
    *(rsi + 0x20) = *(rbx + 0x540)
    *(rsi + 0x24) = *(rbx + 0x544)
    *(rsi + 0x28) = *(rbx + 0x548)
    *(rsi + 0x2c) = *(rbx + 0x54c)
    *(rsi + 0x30) = *(rbx + 0x550)
    *(rsi + 0x34) = *(rbx + 0x554)
    *(rsi + 0x38) = *(rbx + 0x558)
    *(rsi + 0x3c) = *(rbx + 0x55c)
    
    if (r14 s> 0)
        void* r8_9 = rsi + 0x1c
        var_a8 = r8_9
        int64_t rax_63
        int64_t r9_9
        
        do
            int32_t r11_1 = *(r8_9 + 0x1c)
            int32_t r9_2 = *(r8_9 + 0x20)
            int32_t r12 = *(r8_9 + 0x10)
            int32_t r14_2 = *(r8_9 + 0x14)
            int32_t rdi_1 = *(r8_9 + 0x18)
            int16_t var_66
            int32_t r8_10 = sx.d(var_66)
            int32_t rdx_10 = sx.d(var_68)
            int16_t var_64
            int32_t r10_3 = sx.d(var_64)
            int16_t var_62
            int32_t rbx_1 = sx.d(var_62)
            int16_t var_60
            int32_t rsi_1 = sx.d(var_60)
            int16_t var_5e
            int32_t r15_1 = sx.d(var_5e)
            int16_t var_5c
            int32_t r13 = sx.d(var_5c)
            void* r8_11 = var_a8
            int32_t rax_44 = ((zx.d(r9_2.w) * rdx_10) s>> 0x10) + ((zx.d(r11_1.w) * r8_10) s>> 0x10)
                + ((zx.d(rdi_1.w) * r10_3) s>> 0x10) + ((zx.d(r14_2.w) * rbx_1) s>> 0x10)
                + ((zx.d(r12.w) * rsi_1) s>> 0x10)
            int16_t var_5a
            int16_t var_58
            int32_t rax_48 = rax_44 + ((zx.d(*(var_a8 + 0xc)) * r15_1) s>> 0x10)
                + ((zx.d(*(var_a8 + 8)) * r13) s>> 0x10)
                + ((zx.d(*(var_a8 + 4)) * sx.d(var_5a)) s>> 0x10)
                + ((zx.d(*var_a8) * sx.d(var_58)) s>> 0x10)
            int16_t var_56
            int32_t rax_53 = rax_48 + ((zx.d(*(var_a8 - 4)) * sx.d(var_56)) s>> 0x10)
                + (r9_2 s>> 0x10) * rdx_10 + (r11_1 s>> 0x10) * r8_10 + (rdi_1 s>> 0x10) * r10_3
                + (r14_2 s>> 0x10) * rbx_1
            int32_t rax_57 = rax_53 + (r12 s>> 0x10) * rsi_1 + (*(r8_11 + 0xc) s>> 0x10) * r15_1
                + (*(r8_11 + 8) s>> 0x10) * r13 + (*(r8_11 + 4) s>> 0x10) * sx.d(var_5a)
            int32_t rdx_20 = *(arg1 + 0x924)
            int32_t rax_60 = rax_57 + (*r8_11 s>> 0x10) * sx.d(var_58)
                + (*(r8_11 - 4) s>> 0x10) * sx.d(var_56) + (rdx_20 s>> 1)
            
            if (rdx_20 == 0x10)
                int32_t r11_4 = *(r8_11 - 0xc)
                int32_t r9_5 = *(r8_11 - 8)
                int32_t r13_1 = *(r8_11 - 0x14)
                int32_t r14_5 = *(r8_11 - 0x10)
                int32_t rbx_2 = *(r8_11 - 0x1c)
                int16_t var_52
                int32_t r8_12 = sx.d(var_52)
                int16_t var_54
                int32_t rdx_21 = sx.d(var_54)
                int16_t var_4a
                int32_t r10_4 = sx.d(var_4a)
                int16_t var_50
                int32_t rdi_4 = sx.d(var_50)
                int16_t var_4e
                int32_t rsi_2 = sx.d(var_4e)
                int16_t var_4c
                int32_t r12_3 = sx.d(var_4c)
                r8_11 = var_a8
                int32_t r15_8 = ((zx.d(r9_5.w) * rdx_21) s>> 0x10)
                    + ((zx.d(r11_4.w) * r8_12) s>> 0x10) + ((zx.d(rbx_2.w) * r10_4) s>> 0x10)
                    + ((zx.d(r14_5.w) * rdi_4) s>> 0x10) + ((zx.d(r13_1.w) * rsi_2) s>> 0x10)
                int32_t r15_13 = r15_8 + ((zx.d(*(var_a8 - 0x18)) * r12_3) s>> 0x10)
                    + (r9_5 s>> 0x10) * rdx_21 + (r11_4 s>> 0x10) * r8_12
                    + (rbx_2 s>> 0x10) * r10_4 + (r14_5 s>> 0x10) * rdi_4
                rax_60 =
                    rax_60 + (*(r8_11 - 0x18) s>> 0x10) * r12_3 + r15_13 + (r13_1 s>> 0x10) * rsi_2
            
            *(r8_11 + 0x24) += rax_60 << 4
            int32_t rdx_24 = (((rax_60 s>> 5) + 1) s>> 1) + sx.d(*(arg3 + (var_90 << 1)))
            
            if (rdx_24 s> 0x7fff)
                rdx_24 = 0x7fff
            else if (rdx_24 s< 0xffff8000)
                rdx_24 = -0x8000
            
            rax_63 = sx.q(arg4)
            r8_9 = r8_11 + 4
            *(arg3 + (var_90 << 1)) = rdx_24.w
            r9_9 = var_90 + 1
            var_a8 = r8_9
            rcx_15 = rax_63
            var_90 = r9_9
        while (r9_9 s< rax_63)
    
    *(rbx + 0x520) = *(rsi + (rcx_15 << 2))
    *(rbx + 0x524) = *(rsi + (rcx_15 << 2) + 4)
    *(rbx + 0x528) = *(rsi + (rcx_15 << 2) + 8)
    *(rbx + 0x52c) = *(rsi + (rcx_15 << 2) + 0xc)
    *(rbx + 0x530) = *(rsi + (rcx_15 << 2) + 0x10)
    *(rbx + 0x534) = *(rsi + (rcx_15 << 2) + 0x14)
    *(rbx + 0x538) = *(rsi + (rcx_15 << 2) + 0x18)
    *(rbx + 0x53c) = *(rsi + (rcx_15 << 2) + 0x1c)
    *(rbx + 0x540) = *(rsi + (rcx_15 << 2) + 0x20)
    *(rbx + 0x544) = *(rsi + (rcx_15 << 2) + 0x24)
    *(rbx + 0x548) = *(rsi + (rcx_15 << 2) + 0x28)
    *(rbx + 0x54c) = *(rsi + (rcx_15 << 2) + 0x2c)
    *(rbx + 0x550) = *(rsi + (rcx_15 << 2) + 0x30)
    *(rbx + 0x554) = *(rsi + (rcx_15 << 2) + 0x34)
    *(rbx + 0x558) = *(rsi + (rcx_15 << 2) + 0x38)
    result = *(rsi + (rcx_15 << 2) + 0x3c)
    *(rbx + 0x55c) = result

__security_check_cookie(rax_1 ^ &var_a8)
return result
