// 函数: sub_1406bcc10
// 地址: 0x1406bcc10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_1406c8bf0()
void* rbp = rax[0x23]

if (rbp == 0)
    int64_t r8_1 = *rax
    (*(r8_1 + 0x390))(rax, arg3, r8_1)
    rbp = rax[0x23]

int32_t rax_1 = sub_1406ba650(*(arg1 + 0x678), arg2, 0)
int32_t rsi_1 = rax_1

if (rax_1 s>= 0)
    if (rax_1 == 0)
        return zx.q(rsi_1)
    
    if (*(arg1 + 0x1e1) == 0)
        int64_t rax_2 = *(arg1 + 0x10)
        int64_t zmm1 = *(arg1 + 0x1a0)
        *(arg1 + 0x1e1) = 1
        (*(rax_2 + 0x50))(arg1 + 0x10, zmm1)
    
    int64_t* rcx_3 = *(arg1 + 0x7f0)
    int32_t rax_6
    
    if (rcx_3 != 0 && *(arg2 + 0x74) == *(arg1 + 0x7f8))
        int64_t arg_18 = *(arg1 + 0x238)
        void* arg_8 = arg2
        rax_6 = (*(*rcx_3 + 0x10))(rcx_3, &arg_18, &arg_8)
    
    if (rcx_3 == 0 || *(arg2 + 0x74) != *(arg1 + 0x7f8) || rax_6 s>= 0)
        int64_t rcx_5 = *(arg2 + 0x88)
        void* rdx_2 = *(arg1 + 0x228)
        uint128_t zmm6 = -0x8000000000000
        
        if (rcx_5 != -0x8000000000000000)
            int64_t rax_8 = *(rdx_2 + 0x18)
            zmm6.q = _mm_cvtepi32_pd(zx.q(rax_8.d)).q f/ _mm_cvtepi32_pd(zx.q((rax_8 u>> 0x20).d)).q
            zmm6.q = zmm6.q f* float.d(rcx_5)
        
        *(arg2 + 0x80) = av_guess_sample_aspect_ratio(*(arg1 + 0xe8), rdx_2, arg2)
        
        if (*(rbp + 0x29) != 0 && sub_1406c4a90(arg1) != 1 && *(arg2 + 0x88) != -0x8000000000000000)
            zmm6.q = zmm6.q f- sub_1406bc310(arg1).q
            
            if (is_unordered.q(zmm6.q, zmm6.q) != 1
                    && not(__andps_xmmxud_memxud(zmm6, data_142d57d00).q f>= 10.0)
                    && not(zmm6.q f>= 0.0) && *(*(arg1 + 0x678) + 0x18) == *(arg1 + 0x618)
                    && *(arg1 + 0x528) != 0)
                *(arg1 + 0x6d8) += 1
                av_frame_unref(arg2)
                rsi_1 = 0
        
        return zx.q(rsi_1)
    
    av_frame_unref(arg2)

return 0xffffffff
