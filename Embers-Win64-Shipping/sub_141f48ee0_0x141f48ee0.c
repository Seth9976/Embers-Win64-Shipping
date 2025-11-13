// 函数: sub_141f48ee0
// 地址: 0x141f48ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

double zmm0 = *(arg1 + 0x134)
double* rdi = arg2
float zmm1[0x2] = *arg2
int32_t rax = *(arg1 + 0x13c)
int32_t var_10 = rax

if (zmm1[0] f!= zmm0.d || zmm0:4.d.d f!= *(arg2 + 4) || not(var_10.d f== arg2[1].d))
    if (_finite(_mm_cvtps_pd(zmm1)) == 0)
    label_141f48f69:
        var_10 = 0x3f800000
        *rdi = _mm_unpacklo_ps(0x3f800000, 0x3f800000)
        rdi[1].d = 0x3f800000
    else
        if (_finite(_mm_cvtps_pd(*(rdi + 4))) == 0)
            goto label_141f48f69
        
        if (_finite(_mm_cvtps_pd(rdi[1].d)) == 0)
            goto label_141f48f69
    
    int32_t rax_4 = rdi[1].d
    *(arg1 + 0x134) = *rdi
    *(arg1 + 0x13c) = rax_4
    rax = sub_141ee9350(arg1)
    
    if (rax.b == 0)
        rax = sub_141eea9c0(arg1)
        
        if (rax.b == 0)
            int64_t r8_1
            rax, r8_1 = sub_1405c6ac0(arg1, 0, 0)
            
            if ((arg1[0x11].b & 1) != 0)
                if (arg1[0x2f].d s> 0)
                    void* rdi_1 = *(arg1[0x2e] + (sx.q(arg1[0x2f].d) << 3) - 8)
                    int32_t rbx_1 = *(rdi_1 + 0x10)
                    *(rdi_1 + 0x350) |= 2
                    *(rdi_1 + 0x10) = 1
                    *(rdi_1 + 0x74) = 0xffffffff
                    rax = sub_141f316a0(rdi_1 + 0x78, 0, 0)
                    
                    if (rbx_1 == 3)
                        *(rdi_1 + 0x10) = rbx_1
                else if (data_143a2d7b4 != 1 || (*(arg1 + 0x14c) & 2) == 0)
                    r8_1.b = 1
                    char rax_6 = (*(*arg1 + 0x468))(arg1, 0, r8_1, 0, zmm0, var_10)
                    *(arg1 + 0x14c) &= 0xfd
                    rax_6 = (rax_6 & 1) * 2
                    *(arg1 + 0x14c) |= rax_6
                    return rax_6

return rax
