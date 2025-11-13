// 函数: sub_141528880
// 地址: 0x141528880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
uint128_t zmm5 = arg3
arg3 = zx.o(*(arg1 + 0x70))
int128_t zmm6 = arg4
uint128_t zmm4 = arg2
int32_t* rbx = arg1
double zmm0 = (arg2.q f- arg3.q) f* *(arg1 + 0x30)
uint64_t result = zx.q(int.d(zmm0))
int32_t rdi = (result - 1).d

if (zmm0 >= 0.0)
    rdi = result.d

int32_t r12 = 0
int32_t r8_1

if (rdi s>= 0)
    r8_1 = *arg1

int32_t r13_1

if (rdi s< 0 || rdi s>= r8_1)
    if (arg1[0x28].b != 0)
        r8_1 = *arg1
        
        if (rdi s< 0)
            r13_1 = divs.dp.d(sx.q(rdi + 1), r8_1) - 1
        else
            r13_1 = divs.dp.d(sx.q(rdi), r8_1)
        
        arg2.q = *(arg1 + 0x78) f- arg3.q
        arg2.q = arg2.q f* _mm_cvtepi32_pd(zx.q(r13_1)).q
        rdi -= r8_1 * r13_1
        zmm4.q = zmm4.q f- arg2.q
        goto label_141528971
    
    result.b = 0
else
    r13_1 = 0
label_141528971:
    arg3 = zx.o(*(arg1 + 0x80))
    zmm0 = (zmm5.q f- arg3.q) f* *(arg1 + 0x38)
    result = zx.q(int.d(zmm0))
    int32_t rbp_1 = (result - 1).d
    
    if (zmm0 >= 0.0)
        rbp_1 = result.d
    
    int32_t var_a8_1
    
    if (rbp_1 s< 0 || rbp_1 s>= arg1[1])
        if (*(arg1 + 0xa1) != 0)
            int32_t r9_1 = arg1[1]
            int32_t rcx
            
            if (rbp_1 s< 0)
                rcx = divs.dp.d(sx.q(rbp_1 + 1), r9_1) - 1
            else
                rcx = divs.dp.d(sx.q(rbp_1), r9_1)
            
            arg2.q = *(rbx + 0x88) f- arg3.q
            var_a8_1 = rcx
            arg2.q = arg2.q f* _mm_cvtepi32_pd(zx.q(rcx)).q
            rbp_1 -= r9_1 * rcx
            zmm5.q = zmm5.q f- arg2.q
            goto label_1415289f3
        
        result.b = 0
    else
        var_a8_1 = 0
    label_1415289f3:
        arg3 = zx.o(*(rbx + 0x90))
        zmm0 = (zmm6.q f- arg3.q) f* *(rbx + 0x40)
        result = zx.q(int.d(zmm0))
        int32_t rsi_1 = (result - 1).d
        
        if (zmm0 >= 0.0)
            rsi_1 = result.d
        
        if (rsi_1 s< 0 || rsi_1 s>= rbx[2])
            if (*(rbx + 0xa2) != 0)
                int32_t rcx_1 = rbx[2]
                
                if (rsi_1 s< 0)
                    r12 = divs.dp.d(sx.q(rsi_1 + 1), rcx_1) - 1
                else
                    r12 = divs.dp.d(sx.q(rsi_1), rcx_1)
                
                arg2.q = *(rbx + 0x98) f- arg3.q
                arg2.q = arg2.q f* _mm_cvtepi32_pd(zx.q(r12)).q
                rsi_1 -= rcx_1 * r12
                zmm6.q = zmm6.q f- arg2.q
                goto label_141528ab0
            
            result.b = 0
        else
        label_141528ab0:
            void var_80
            int32_t var_78
            sub_14152cc90(&rbx[0x34], zmm4, zmm5, zmm6, rdi, rbp_1, rsi_1, 
                r8_1 * rbp_1 + rbx[3] * rsi_1 + rdi, &var_78, &var_80)
            int64_t r8_4 = sx.q(var_78)
            
            if (r8_4.d == 0xffffffff)
                result.b = 0
            else
                if (rbx[0x28].b != 0)
                    int32_t var_70
                    int32_t rdi_1 = rdi + var_70
                    
                    if (rdi + var_70 s< 0 || rdi_1 s>= *rbx)
                        int32_t rcx_4 = *rbx
                        int32_t rax_31
                        
                        if (rdi_1 s< 0)
                            rax_31 = divs.dp.d(sx.q(rdi_1 + 1), rcx_4) - 1
                        else
                            rax_31 = divs.dp.d(sx.q(rdi_1), rcx_4)
                        
                        r13_1 += rax_31
                
                int32_t var_6c
                int32_t rbp_2
                
                if (*(rbx + 0xa1) != 0)
                    rbp_2 = rbp_1 + var_6c
                
                int32_t r10_2
                
                if (*(rbx + 0xa1) != 0 && (rbp_1 + var_6c s< 0 || rbp_2 s>= rbx[1]))
                    int32_t rcx_5 = rbx[1]
                    
                    if (rbp_2 s< 0)
                        r10_2 = var_a8_1 + divs.dp.d(sx.q(rbp_2 + 1), rcx_5) - 1
                    else
                        r10_2 = var_a8_1 + divs.dp.d(sx.q(rbp_2), rcx_5)
                else
                    r10_2 = var_a8_1
                
                if (*(rbx + 0xa2) != 0)
                    int32_t var_68
                    int32_t rsi_2 = rsi_1 + var_68
                    
                    if (rsi_1 + var_68 s< 0 || rsi_2 s>= rbx[2])
                        int32_t rcx_6 = rbx[2]
                        int32_t rax_44
                        
                        if (rsi_2 s< 0)
                            rax_44 = divs.dp.d(sx.q(rsi_2 + 1), rcx_6) - 1
                        else
                            rax_44 = divs.dp.d(sx.q(rsi_2), rcx_6)
                        
                        r12 += rax_44
                
                int32_t var_74
                int64_t r8_5 = sx.q(var_74)
                int64_t rdx_25 = sx.q((r8_5 * 3).d)
                double zmm1 = (*(rbx + 0x78) f- *(rbx + 0x70)) f* _mm_cvtepi32_pd(zx.q(r13_1)).q
                int64_t rcx_7 = *(*(rbx + 0xb0) + (r8_4 << 3))
                uint64_t zmm0_1 = _mm_cvtepi32_pd(zx.q(r10_2)).q
                *arg5 = zmm1 f+ *(rcx_7 + (rdx_25 << 3))
                int64_t rcx_8 = *(*(rbx + 0xb0) + (r8_4 << 3))
                zmm1 = (*(rbx + 0x88) f- *(rbx + 0x80)) f* zmm0_1
                zmm0_1 = _mm_cvtepi32_pd(zx.q(r12)).q
                *arg6 = zmm1 f+ *(rcx_8 + (rdx_25 << 3) + 8)
                *arg7 = (*(rbx + 0x98) f- *(rbx + 0x90)) f* zmm0_1 f+
                    *(*(*(rbx + 0xb0) + (r8_4 << 3)) + (rdx_25 << 3) + 0x10)
                *arg8 = *(*(*(rbx + 0xa8) + (r8_4 << 3)) + (r8_5 << 2))
                result.b = 1
__security_check_cookie(rax_1 ^ &var_f8)
return result
