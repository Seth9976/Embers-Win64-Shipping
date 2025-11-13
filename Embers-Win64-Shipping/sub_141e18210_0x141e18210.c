// 函数: sub_141e18210
// 地址: 0x141e18210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x130) = 0

if (*(arg1 + 0x134) s<= 0xffffffff)
    sub_14083ad30(arg1 + 0x128, 0)

int32_t rcx_1
rcx_1.b = sub_140b5b8a0(*(arg1 + 0x118), 0).b == 0
int64_t result
result.b = *(arg1 + 0x11c) != 0
result.b |= rcx_1.b

if (result.b != 0)
    result = sx.q(*(arg1 + 0x120))
    
    if (result.d s< 0 || result.d s>= *(arg1 + 0x160))
        rcx_1.b = 0
    else
        rcx_1.b = 1
    
    if (rcx_1.b != 0)
        int64_t rdx_1 = *(arg1 + 0x158)
        int64_t rcx_2 = result * 3
        void* rbx_1 = *(rdx_1 + (rcx_2 << 3) + 8)
        void* i = (sx.q(*(rdx_1 + (rcx_2 << 3) + 0x10)) << 5) + rbx_1
        
        if (rbx_1 != i)
            float* rbx_2 = rbx_1 + 0xc
            int128_t zmm6
            int128_t var_28_1 = zmm6
            
            do
                void* rbp_1 = *(rbx_2 - 0xc)
                
                if (rbp_1 != 0)
                    void* rax = sub_1424696d0()
                    rdx_1 = *(rbp_1 + 0x10)
                    int64_t rax_1 = sx.q(*(rax + 0x38))
                    
                    if (rax_1.d s<= *(rdx_1 + 0x38)
                            && *(*(rdx_1 + 0x30) + (rax_1 << 3)) == rax + 0x30
                            && *(rbp_1 + 0x180) s> 0)
                        int64_t* j = *(rbp_1 + 0x178)
                        
                        for (void* r15_1 = j + sx.q(*(rbp_1 + 0x180)) * 0xc; j != r15_1; j += 0xc)
                            uint128_t zmm0_1 = j[1].d
                            float zmm1 = *rbx_2
                            
                            if (not(zmm0_1.d f< zmm1))
                                zmm6 = rbx_2[1]
                                
                                if (not(zmm0_1.d f> zmm6.d))
                                    zmm6.d = zmm6.d f- zmm1
                                    int32_t k = 0
                                    zmm6.d = zmm6.d f* rbx_2[2]
                                    
                                    if (rbx_2[3] s> 0)
                                        do
                                            int64_t rax_4 = *j
                                            zmm1 = j[1].d f- *rbx_2
                                            int64_t rbp_2 = sx.q(*(arg1 + 0x130))
                                            int32_t rax_5 = (rbp_2 + 1).d
                                            zmm0_1.d = _mm_cvtepi32_ps(zx.o(k)).d f* zmm6.d
                                            zmm1 = zmm1 * rbx_2[2] + rbx_2[-1]
                                            *(arg1 + 0x130) = rax_5
                                            
                                            if (rax_5 s> *(arg1 + 0x134))
                                                sub_14083a7e0(arg1 + 0x128)
                                            
                                            int64_t rcx_6 = *(arg1 + 0x128)
                                            rdx_1 = rbp_2 * 3
                                            k += 1
                                            *(rcx_6 + (rdx_1 << 2)) = rax_4
                                            *(rcx_6 + (rdx_1 << 2) + 8) = zmm1 f+ zmm0_1.d
                                        while (k s< rbx_2[3])
                
                rbx_2 = &rbx_2[8]
            while (&rbx_2[-3] != i)
        
        return sub_141e3bff0(arg1 + 0x128, rdx_1.b)

return result
