// 函数: sub_141d673e0
// 地址: 0x141d673e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm7 = arg2
void* result = (*(*arg1 + 0x150))()
int64_t* rdi

if (result == 0)
    rdi = nullptr
else
    rdi = *(result + 0x130)

if (rdi != 0)
    void* rcx = arg1[0x45]
    
    if (rcx != 0)
        void* const rcx_1 = *(rcx + 0x248)
        
        if (rcx_1 == 0 || *(rcx_1 + 0x460) == 0)
            rcx_1 = nullptr
        
        result = sub_141a58040(rcx_1)
        
        if (result.b != 0)
            void* const rcx_2 = *(arg1[0x45] + 0x248)
            
            if (rcx_2 == 0 || *(rcx_2 + 0x460) == 0)
                rcx_2 = nullptr
            
            void var_38
            int64_t* rax_2 = sub_141a50a50(rcx_2, &var_38)
            int64_t r8_1 = rax_2[1]
            int64_t rdx_2 = *rax_2
            uint32_t rcx_4 = (r8_1 u>> 0x20).d
            uint128_t zmm0
            zmm0.d = _mm_cvtepi32_ps(zx.o(rcx_4)).d f* rdx_2:4.d
            arg2 = _mm_cvtepi32_pd(zx.q(r8_1.d))
            void* const r9_1 = *(arg1[0x45] + 0x248)
            double temp0_3[0x2] = _mm_cvtps_pd(zmm0.q)
            zmm0.q = float.d(sx.q(rcx_4) * sx.q(rdx_2.d))
            temp0_3[0] = temp0_3[0] f+ zmm0.q
            temp0_3[0] = temp0_3[0] f/ arg2.q
            
            if (r9_1 == 0 || *(r9_1 + 0x460) == 0)
                r9_1 = nullptr
            
            int64_t rcx_7 = sx.q(*(r9_1 + 0x468))
            double zmm2[0x2] = zx.o(0)
            int64_t r9_2 = *(r9_1 + 0x7c0)
            int64_t arg_8
            arg_8.d = rcx_7.d
            uint32_t r8_3 = (r9_2 u>> 0x20).d
            arg_8:4.d = 0
            zmm0.d = _mm_cvtepi32_ps(zx.o(r8_3)).d f* arg_8:4.d
            int64_t rax_6 = *rdi
            zmm2[0] = float.d(sx.q(r8_3) * rcx_7)
            zmm0 = _mm_cvtps_pd(zmm0.q)
            arg2 = _mm_cvtepi32_pd(zx.q(r9_2.d))
            zmm2[0] = zmm2[0] f+ zmm0.q
            zmm2[0] = zmm2[0] f/ arg2.q
            temp0_3[0] = temp0_3[0] - zmm2[0]
            float temp0_7[0x4] = _mm_cvtpd_ps(temp0_3)
            temp0_7[0] = temp0_7[0] f+ arg1[0x47].d
            result = (*(rax_6 + 0x630))(rdi)
            double zmm3[0x2] = zmm0
            arg2.d = zmm0.d f- temp0_7[0]
            
            if (not(__andps_xmmxud_memxud(arg2, data_142d3f770).d f<= zmm7.d))
                int64_t* r9_3 = *(arg1[0x45] + 0x248)
                int64_t* r8_4
                
                if (r9_3 == 0 || r9_3[0x8c] == 0)
                    r8_4 = nullptr
                else
                    r8_4 = r9_3
                
                int64_t rdx_5 = sx.q(r8_4[0x8d].d)
                int64_t r8_5 = r8_4[0xf8]
                zmm3[0].d = zmm3[0].d f- arg1[0x47].d
                arg_8.d = rdx_5.d
                uint32_t rcx_10 = (r8_5 u>> 0x20).d
                arg_8:4.d = 0
                zmm0.d = _mm_cvtepi32_ps(zx.o(rcx_10)).d f* arg_8:4.d
                arg2 = _mm_cvtepi32_pd(zx.q(r8_5.d))
                double temp0_11[0x2] = _mm_cvtps_pd(zmm0.q)
                zmm0.q = float.d(sx.q(rcx_10) * rdx_5)
                temp0_11[0] = temp0_11[0] f+ zmm0.q
                zmm0.q = fconvert.d(zmm3[0].d)
                temp0_11[0] = temp0_11[0] f/ arg2.q
                temp0_11[0] = temp0_11[0] f+ zmm0.q
                
                if (r9_3 == 0 || r9_3[0x8c] == 0)
                    r9_3 = nullptr
                
                return sub_141a58560(r9_3, _mm_cvtpd_ps(temp0_11))

return result
