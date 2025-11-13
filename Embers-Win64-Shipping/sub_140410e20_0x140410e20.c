// 函数: sub_140410e20
// 地址: 0x140410e20
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
int32_t i_3
int64_t rax_1 = __security_cookie ^ &i_3
int64_t i_2 = sx.q(arg6)
int16_t* rsi = arg3
int16_t* r15 = arg2
int32_t r8 = sx.d(arg3[1])
int16_t* rdx = *(rsi + 0x38)
i_3 = i_2.d
sub_1403e8940(r15, rdx, r8)
int64_t rdx_1 = sx.q(*rsi)
int64_t rax_3 = rdx_1 << 2
int64_t rcx_1 = rax_3 + 0xf

if (rcx_1 u<= rax_3)
    rcx_1 = 0xffffffffffffff0

int64_t rcx_2 = rcx_1 & 0xfffffffffffffff0
__chkstk(rcx_2)
int64_t r8_1 = *(rsi + 8)
void var_1b8
void* rsp_1 = &var_1b8 - rcx_2
*(rsp_1 + 0x20) = sx.d(rsi[1])
sub_140411270(rsp_1 + 0x50, r15, r8_1, zx.q(sx.d(rdx_1.w)))
int64_t rbx = i_2 << 2
int64_t i_1 = i_2
int64_t rax_6 = rbx + 0xf

if (rax_6 u<= rbx)
    rax_6 = 0xffffffffffffff0

int64_t rax_7 = rax_6 & 0xfffffffffffffff0
__chkstk(rax_7)
void* rsp_2 = rsp_1 - rax_7
sub_1403e8d40(rsp_1 + 0x50, rsp_2 + 0x50, sx.d(*rsi), i_2.d)
int64_t rax_9 = rbx + 0xf

if (rax_9 u<= rbx)
    rax_9 = 0xffffffffffffff0

int64_t rax_10 = rax_9 & 0xfffffffffffffff0
__chkstk(rax_10)
void* rsp_3 = rsp_2 - rax_10
void* rbx_1 = rsp_3 + 0x50
int64_t rcx_5 = sx.q(i_2.d << 4)
int64_t rax_13 = rcx_5 + 0xf

if (rax_13 u<= rcx_5)
    rax_13 = 0xffffffffffffff0

int64_t rax_14 = rax_13 & 0xfffffffffffffff0
__chkstk(rax_14)
void* rsp_4 = rsp_3 - rax_14

if (i_2.d s> 0)
    void* rdi_1 = rbx_1
    int32_t r13_2 = 0
    void* rax_19 = rsp_2 + 0x50 - rbx_1
    void* var_148_1 = rax_19
    int64_t i
    
    do
        int32_t j_2 = sx.d(rsi[1])
        int64_t r14 = sx.q(*(rax_19 + rdi_1))
        char* r8_4 = sx.q(j_2 * r14.d) + *(rsi + 8)
        int16_t var_e8[0x10]
        void var_88
        
        if (j_2 s> 0)
            int16_t* rdx_4 = r15
            uint64_t j_1 = zx.q(j_2)
            uint64_t j
            
            do
                int16_t rax_22 = *rdx_4
                rdx_4 = &rdx_4[1]
                uint16_t rcx_6 = zx.w(*r8_4) << 7
                r8_4 = &r8_4[1]
                *(&var_88 - r15 + rdx_4 - 2) = rcx_6
                *(&var_e8 - r15 + rdx_4 - 2) = rax_22 - rcx_6
                j = j_1
                j_1 -= 1
            while (j != 1)
        
        int16_t var_108[0x10]
        sub_1403e8bf0(&var_108, &var_88, j_2)
        int64_t r11_2 = sx.q(rsi[1])
        int64_t r9_2 = 0
        
        if (r11_2 s> 0)
            do
                int32_t rax_24 = sx.d(var_108[r9_2]) << 0x10
                int16_t r8_6
                
                if (rax_24 s> 0)
                    uint64_t rflags_1
                    int32_t temp0_1
                    temp0_1, rflags_1 = _bit_scan_reverse(rax_24)
                    
                    if (0x18 != 0x1f - temp0_1)
                        if (0x18 - (0x1f - temp0_1) s>= 0)
                            rax_24 = ror.d(rax_24, (0x18 - (0x1f - temp0_1)).b)
                        else
                            rax_24 = rol.d(rax_24, (neg.d(0x18 - (0x1f - temp0_1))).b)
                    
                    int32_t rdx_6 = 0xb486
                    
                    if (((0x1f - temp0_1).b & 1) != 0)
                        rdx_6 = 0x8000
                    
                    int32_t rdx_7 = rdx_6 s>> ((0x1f - temp0_1) s>> 1).b
                    int32_t rcx_12 = sx.d((rax_24.w & 0x7f) * 0xd5)
                    r8_6 = (rdx_7 s>> 0x10).w * rcx_12.w + ((zx.d(rdx_7.w) * rcx_12) s>> 0x10).w
                        + rdx_7.w
                else
                    r8_6 = 0
                
                int32_t rcx_13 = sx.d(var_e8[r9_2])
                r9_2 += 1
                void var_6a
                *(&var_6a + (r9_2 << 1)) = ((rcx_13 * sx.d(r8_6)) s>> 0xe).w
            while (r9_2 s< r11_2)
            
            rsi = arg3
            r15 = arg2
        
        int64_t r9_3 = 0
        
        if (r11_2 s> 0)
            do
                int32_t r8_12 = sx.d(var_108[r9_3])
                void* rcx_16 = &var_108[r9_3]
                r9_3 += 1
                void var_aa
                *(&var_aa + (r9_3 << 1)) =
                    (divs.dp.d(sx.q(sx.d(*(rcx_16 + arg4 - &var_108)) << 5), r8_12)).w
            while (r9_3 s< r11_2)
        
        void var_118
        void var_c8
        sub_1403e6130(&var_c8, &var_118, rsi, r14.d)
        int32_t rcx_18 = sx.d(rsi[2])
        *(rsp_4 + 0x48) = rsi[1]
        *(rsp_4 + 0x40) = arg5
        *(rsp_4 + 0x38) = rsi[3]
        int64_t rax_38 = *(rsi + 0x30)
        *(rsp_4 + 0x30) = rcx_18
        *(rsp_4 + 0x28) = rax_38
        *(rsp_4 + 0x20) = &var_c8
        void var_a8
        void var_68
        *rdi_1 = sub_140411320(sx.q(r13_2) + rsp_4 + 0x50, &var_68, &var_a8, &var_118)
        char* rdx_13 = sx.q(sx.d(*rsi) * (arg7 s>> 1)) + *(rsi + 0x10)
        uint32_t rax_42
        uint32_t rcx_20
        
        if (r14.d != 0)
            rcx_20 = zx.d(rdx_13[r14 - 1])
            rax_42 = zx.d(rdx_13[r14])
        else
            rax_42 = zx.d(*rdx_13)
            rcx_20 = 0x100
        
        rdi_1 += 4
        r13_2 += 0x10
        int32_t rcx_23 = sx.d((arg5 s>> 2).w) * sx.d(0x400 - sub_1403df070(rcx_20 - rax_42))
        rax_19 = var_148_1
        *(rdi_1 - 4) += rcx_23
        i = i_1
        i_1 -= 1
    while (i != 1)
    i_2 = zx.q(i_3)

int32_t var_164
sub_1403e8d40(rbx_1, &var_164, i_2.d, 1)
int64_t r11_3 = sx.q(var_164)
*arg1 = *(rsp_2 + 0x50 + (r11_3 << 2))
memcpy(&arg1[1], sx.q(r11_3.d << 4) + rsp_4 + 0x50, sx.d(rsi[1]))
sub_1403e83f0(r15, arg1, rsi)
uint64_t result = zx.q(*rbx_1)
__security_check_cookie(rax_1 ^ &i_3)
return result
