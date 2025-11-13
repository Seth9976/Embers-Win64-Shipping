// 函数: sub_14278f7b0
// 地址: 0x14278f7b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[3].d = 0

if (*(arg1 + 0x1c) s<= 0xffffffff)
    sub_1413f6f70(&arg1[2], 0)

void* rsi = *arg3
int32_t* rdx = arg1[0xa]
int128_t zmm7 = rdx[4]
void* r15_2 = sx.q(arg3[1].d) * 0x50 + rsi
zmm7.d = zmm7.d f* zmm7.d

if (rsi != r15_2)
    int64_t* rbx_1 = rsi + 0x24
    int32_t* rax_1 = rdx
    
    do
        int32_t zmm3 = rax_1[2]
        int32_t* rcx_1
        uint128_t zmm0
        uint64_t zmm1
        uint128_t zmm2
        
        if (not(zmm3 f<= 0f))
            zmm0 = *(rbx_1 - 4)
            rcx_1 = rax_1
            zmm2 = rbx_1[-1].d
            zmm1 = *rbx_1
            zmm0.d = zmm0.d f* zmm0.d
            zmm2.d = zmm2.d f* zmm2.d
            zmm1.d = zmm1.d f* zmm1.d
            zmm2.d = zmm2.d f+ zmm0.d
            zmm2.d = zmm2.d f+ zmm1.d
            zmm0 = _mm_sqrt_ss(0, zmm2.d)
        
        if (zmm3 f<= 0f || not(zmm0.d f< zmm3))
            zmm0 = rax_1[3]
            
            if (not(zmm0.d f<= 0f))
                rcx_1 = rax_1
            
            if (zmm0.d f<= 0f || not(zmm0.d f> rbx_1[2].d))
                if (not(0f f>= rax_1[4]))
                    zmm2 = *(arg2 + 0x10)
                    rcx_1 = rax_1
                    zmm1.d = zmm2.q.d f- *(rbx_1 - 0x14)
                    zmm0.d = _mm_shuffle_ps(zmm2, zmm2, 0x55).d f- rbx_1[-2].d
                    zmm2.d = _mm_shuffle_ps(zmm2, zmm2, 0xaa).d f- *(rbx_1 - 0xc)
                    zmm1.d = zmm1.d f* zmm1.d
                    zmm0.d = zmm0.d f* zmm0.d
                    zmm2.d = zmm2.d f* zmm2.d
                    zmm1.d = zmm1.d f+ zmm0.d
                    zmm1.d = zmm1.d f+ zmm2.d
                
                if (0f f>= rax_1[4] || not(zmm1.d f> zmm7.d))
                    int64_t rbp_1 = sx.q(arg1[3].d)
                    uint64_t var_58_1 = *(rbx_1 - 0x14)
                    int32_t var_50_1 = *(rbx_1 - 0xc)
                    int32_t var_44_1 = *rbx_1
                    int32_t rax_4 = (rbp_1 + 1).d
                    uint64_t var_4c_1 = rbx_1[-1]
                    int32_t var_40_1 = rbx_1[2].d.d
                    arg1[3].d = rax_4
                    
                    if (rax_4 s> *(arg1 + 0x1c))
                        sub_1405c50f0(&arg1[2])
                    
                    int64_t rcx_3 = arg1[2]
                    uint128_t* rdx_2 = rbp_1 * 0x1c
                    *(rdx_2 + rcx_3) = var_58_1.o
                    *(rdx_2 + rcx_3 + 0x10) = var_4c_1
                    *(rdx_2 + rcx_3 + 0x18) = var_40_1
                    rdx = arg1[0xa]
                    rcx_1 = rdx
                    int32_t rax_6 = *rdx
                    
                    if (rax_6 s> 0 && arg1[3].d == rax_6)
                        break
        
        rsi += 0x50
        rbx_1 = &rbx_1[0xa]
        rax_1 = rcx_1
        rdx = rcx_1
    while (rsi != r15_2)

rdx[5].b
jump(*(*arg1 + 0x18))
