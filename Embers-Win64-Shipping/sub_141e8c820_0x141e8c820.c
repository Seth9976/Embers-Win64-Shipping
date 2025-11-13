// 函数: sub_141e8c820
// 地址: 0x141e8c820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

double zmm8[0x2] = arg2
double zmm6[0x2] = sub_141e819f0(arg1, arg2)
int32_t var_b4 = 1
int32_t var_b8 = 0
int32_t r11 = *(arg1 + 0x238)
void* r9 = arg1 + 0x220
void* var_b0 = r9
int32_t rcx = 0
int32_t var_a8 = 0xffffffff
int32_t r8 = 0
int32_t var_a4 = 0
int32_t var_a0 = 0

if (r11 != 0)
    void* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_3 = *r9
    int32_t var_a4_2
    
    if (rdx_3 != 0)
    label_141e8c8d8:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_b4_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        int32_t var_a4_1 = rcx - rax_9 + 0x1f
        
        if (rcx - rax_9 + 0x1f s> r11)
            var_a4_2 = r11
    else
        while (true)
            int64_t rdx_4 = sx.q(r8)
            rcx += 0x20
            r8 += 1
            var_a0 = rcx
            var_b8 = r8
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9 + (rdx_4 << 2) + 4)
            var_a8 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_141e8c8d8
        
        var_a4_2 = r11

void* var_50 = arg1 + 0x210
int128_t var_60 = 0xffffffff
int16_t var_80 = 0
double zmm3[0x2] = var_b8.o
double result = zmm3[0]
var_a8.o = zmm3
var_b8.o = (arg1 + 0x210).o
uint128_t zmm0
zmm0.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
uint128_t var_98 = zmm0

if (0 s< *(result i+ 0x18))
    int32_t i_1
    int32_t i = i_1
    double var_28_1[0x2] = zmm6
    zmm6 = 0x3f800000
    int128_t zmm7 = zx.o(0)
    
    do
        int64_t* rsi_1 = var_b8.q
        zmm0 = zx.o(*(arg1 + 0x360))
        int64_t rdi_1 = *rsi_1
        int64_t rbx_2 = sx.q(i) * 0xa
        double zmm2[0x2]
        
        if (zmm0.q f< *(rdi_1 + (rbx_2 << 3) + 0x18) || zmm0.q f>= *(rdi_1 + (rbx_2 << 3) + 0x20))
            zmm3 = zx.o(*(rdi_1 + (rbx_2 << 3) + 0x20))
            double zmm1
            
            if (not(zmm0.q f< zmm3[0]))
                zmm1 = *(rdi_1 + (rbx_2 << 3) + 0x28)
            
            if (not(zmm0.q f< zmm3[0]) && not(zmm0.q f>= zmm1))
                zmm0.q = zmm0.q f- zmm3[0]
                *(rdi_1 + (rbx_2 << 3) + 0x44) = 1
                zmm0.q = zmm0.q f/ (zmm1 - zmm3[0])
                zmm2 = _mm_cvtpd_ps(zmm0)
                *(rdi_1 + (rbx_2 << 3) + 0x40) = zmm2[0].d
            else if (zmm0.q f< *(rdi_1 + (rbx_2 << 3) + 0x28))
            label_141e8ca41:
                zmm3 = zx.o(*(rdi_1 + (rbx_2 << 3) + 0x30))
                
                if (not(zmm0.q f< zmm3[0]))
                    zmm1 = *(rdi_1 + (rbx_2 << 3) + 0x38)
                
                if (zmm0.q f< zmm3[0] || zmm0.q f>= zmm1)
                    *(rdi_1 + (rbx_2 << 3) + 0x40) = 0
                    *(rdi_1 + (rbx_2 << 3) + 0x44) = 4
                    zmm2 = zx.o(0)
                else
                    bool cond:1_1 = *(rdi_1 + (rbx_2 << 3) + 0x44) == 3
                    zmm0.q = zmm0.q f- zmm3[0]
                    zmm2 = zmm6
                    zmm0.q = zmm0.q f/ (zmm1 - zmm3[0])
                    zmm0 = _mm_cvtpd_ps(zmm0)
                    zmm2[0].d = zmm2[0].d f- zmm0.d
                    *(rdi_1 + (rbx_2 << 3) + 0x40) = zmm2[0].d
                    
                    if (not(cond:1_1))
                        *(rdi_1 + (rbx_2 << 3) + 0x44) = 3
                        sub_141e89c10(arg1, *(*rsi_1 + (rbx_2 << 3)))
                        zmm2 = *(rdi_1 + (rbx_2 << 3) + 0x40)
            else
                if (*(rdi_1 + (rbx_2 << 3) + 8) == 0)
                    if (*(rdi_1 + (rbx_2 << 3) + 0x10) u> 0 || *(rdi_1 + (rbx_2 << 3) + 0xc) u> 0)
                        if (not(zmm7.q f> *(rdi_1 + (rbx_2 << 3) + 0x30))
                                && zmm0.q f>= *(rdi_1 + (rbx_2 << 3) + 0x30))
                            goto label_141e8ca41
                    else if (zmm0.q f>= *(rdi_1 + (rbx_2 << 3) + 0x30))
                        goto label_141e8ca41
                
                *(rdi_1 + (rbx_2 << 3) + 0x40) = 0x3f800000
                zmm2 = zmm6
                *(rdi_1 + (rbx_2 << 3) + 0x44) = 2
        else
            *(rdi_1 + (rbx_2 << 3) + 0x40) = 0
            zmm2 = zx.o(0)
        
        zmm6, zmm7, zmm8 = sub_141e74db0(arg1, *(*rsi_1 + (rbx_2 << 3)), zmm2, zmm8)
        
        if (*(rdi_1 + (rbx_2 << 3) + 0x44) == 4 && *(rdi_1 + (rbx_2 << 3) + 0x10) == 0)
            sub_141e76dd0(arg1, *(*rsi_1 + (rbx_2 << 3)))
        
        var_a0 &= not.d(var_b0:4.d)
        sub_14059bdd0(&var_b0)
        result = var_a8.q
        i = i_1
    while (i s< *(result i+ 0x18))
    
    if (var_80.b != 0 && var_80:1.b != 0)
        return sub_140864250(arg1 + 0x210, *(arg1 + 0x218) - *(arg1 + 0x244), 1)

return result
