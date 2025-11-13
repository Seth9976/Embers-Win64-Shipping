// 函数: sub_1421abbe0
// 地址: 0x1421abbe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rsi = arg2
int128_t zmm8 = zx.o(0)
int128_t zmm6 = 0x3f800000
void* rax_2 = **(*(*arg1 + 0x10) + 0x40)
int128_t zmm7 = *arg1[1]
int32_t* result = arg1[2]
int32_t rcx = *result

if (rcx s> 0)
    result = arg1[3]
    
    if (not(0f f>= *result))
        zmm8.d = 1f f/ _mm_cvtepi32_ps(zx.o(rcx)).d

int32_t i_1 = 0
int32_t i = 0

if (rcx s> 0)
    do
        void* rdx = *arg1
        int64_t rcx_1
        
        if (*(rdx + 0xf0) != 0)
            rcx_1 = *(rdx + 0xf8)
        
        if (*(rdx + 0xf0) == 0 || rcx_1 == 0)
            if (data_143f4ec30 == 0)
                data_143f4ec30 = 1
                rdx = *arg1
            
            *(rdx + 0x118) = 0
            *arg1[2] = 0
        else
            uint32_t rcx_2 = zx.d(*(rcx_1 + (sx.q(*(rdx + 0x118)) << 1)))
            
            if (rcx_2 s>= *(rdx + 0x120))
                sub_1421b4060(rdx)
                rdx = *arg1
                rcx_2 = zx.d(*(*(rdx + 0xf8) + (sx.q(*(rdx + 0x118)) << 1)))
            
            int32_t rdi_1 = *(rdx + 0x118)
            void* rbp_2 = sx.q(*(rdx + 0x114) * zx.d(rcx_2.w)) + *(rdx + 0xf0)
            *(rdx + 0x118) = rdi_1 + 1
            
            if (rsi != 0)
                int32_t* rcx_7 = arg1[1]
                zmm6.d = zmm6.d f- zmm8.d
                uint128_t zmm0
                zmm0.d = (*rcx_7).d f- *arg1[3]
                *rcx_7 = zmm0.d
            
            int64_t* rcx_8 = *arg1
            void* var_a8
            (*(*rcx_8 + 0xc8))(rcx_8, rbp_2, arg1[4], arg1[5], var_a8)
            int32_t j = 0
            void* rcx_9 = *arg1[6]
            int512_t zmm3
            
            if (*(rcx_9 + 0x78) s> 0)
                int64_t* rsi_1 = nullptr
                
                do
                    int64_t* r14_1 = *(rsi_1 + *(rcx_9 + 0x70))
                    
                    if (r14_1[5].b s< 0)
                        void* r13_1 = *arg1
                        void* rdi_2 = *(r13_1 + 0x10)
                        int32_t arg_18
                        sub_140865c40(rdi_2 + 0x60, &arg_18, *(*(rax_2 + 0x70) + rsi_1))
                        int64_t rax_12 = sx.q(arg_18)
                        void* const rcx_11
                        
                        if (rax_12.d == 0xffffffff)
                            rcx_11 = nullptr
                        else
                            rcx_11 = *(rdi_2 + 0x60) + rax_12 * 0x18
                        
                        int32_t* rax_14 = rcx_11 + 8
                        
                        if (rcx_11 == 0)
                            rax_14 = nullptr
                        
                        uint64_t r8_4
                        
                        if (rax_14 == 0)
                            r8_4 = 0
                        else
                            r8_4 = zx.q(*rax_14)
                        
                        zmm3.o = zmm7
                        var_a8 = rbp_2
                        (*(*r14_1 + 0x268))(r14_1, r13_1, r8_4, zmm3, var_a8)
                        
                        if (_finite(_mm_cvtps_pd((*(rbp_2 + 0x10)).q).q) != 0
                                && _finite(_mm_cvtps_pd((*(rbp_2 + 0x14)).q).q) != 0)
                            _finite(_mm_cvtps_pd((*(rbp_2 + 0x18)).q).q)
                    
                    j += 1
                    rsi_1 = &rsi_1[1]
                    rcx_9 = *arg1[6]
                while (j s< *(rcx_9 + 0x78))
                
                i = i_1
                rsi = arg2
            
            int64_t* rcx_13 = *arg1
            zmm3.o = zmm7
            int512_t zmm2
            zmm2.o = zmm6
            (*(*rcx_13 + 0xd0))(rcx_13, rbp_2, zmm2, zmm3, var_a8)
            
            if (1f f>= *(rbp_2 + 0xc))
                char* r8_5 = *arg1[7]
                
                if (r8_5 != 0 && (*r8_5 & 1) != 0)
                    int64_t* rcx_16 = *(*arg1[6] + 0x58)
                    (*(*rcx_16 + 0x348))(rcx_16, *arg1, r8_5, rbp_2)
                
                if (rsi == 0)
                    zmm6.d = zmm6.d f- zmm8.d
                    zmm7.d = zmm7.d f- *arg1[3]
            else
                int64_t* rcx_14 = *arg1
                (*(*rcx_14 + 0xe8))(rcx_14, zx.q(rdi_1))
        
        result = arg1[2]
        i += 1
        i_1 = i
    while (i s< *result)

return result
