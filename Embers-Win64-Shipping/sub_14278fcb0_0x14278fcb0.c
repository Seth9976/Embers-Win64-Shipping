// 函数: sub_14278fcb0
// 地址: 0x14278fcb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[3].d = 0

if (*(arg1 + 0x1c) s<= 0xffffffff)
    sub_141846c50(&arg1[2], 0)

int32_t* rdi = *arg3
int32_t* rdx = arg1[0xa]
int128_t zmm7 = rdx[4]
void* r15_2 = &rdi[sx.q(arg3[1].d) * 0x14]
zmm7.d = zmm7.d f* zmm7.d

if (rdi != r15_2)
    int128_t* rbx_1 = &rdi[5]
    int32_t* rax_1 = rdx
    
    do
        uint128_t zmm0 = rax_1[1]
        int32_t* rcx_1
        
        if (not(zmm0.d f<= 0f))
            rcx_1 = rax_1
        
        if (zmm0.d f<= 0f || not(zmm0.d f> rbx_1[1].d))
            int32_t zmm3 = rax_1[2]
            uint128_t zmm1
            uint128_t zmm2
            
            if (not(zmm3 f<= 0f))
                zmm0 = *(rbx_1 - 4)
                rcx_1 = rax_1
                zmm2 = *(rbx_1 - 8)
                zmm1 = *rbx_1
                zmm0.d = zmm0.d f* zmm0.d
                zmm2.d = zmm2.d f* zmm2.d
                zmm1.d = zmm1.d f* zmm1.d
                zmm2.d = zmm2.d f+ zmm0.d
                zmm2.d = zmm2.d f+ zmm1.d
                zmm0 = _mm_sqrt_ss(0, zmm2.d)
            
            if (zmm3 f<= 0f || not(zmm0.d f< zmm3))
                zmm3 = rax_1[3]
                
                if (not(zmm3 f<= 0f))
                    zmm0 = *(rbx_1 + 8)
                    rcx_1 = rax_1
                    zmm2 = *(rbx_1 + 4)
                    zmm1 = *(rbx_1 + 0xc)
                    zmm0.d = zmm0.d f* zmm0.d
                    zmm2.d = zmm2.d f* zmm2.d
                    zmm1.d = zmm1.d f* zmm1.d
                    zmm2.d = zmm2.d f+ zmm0.d
                    zmm2.d = zmm2.d f+ zmm1.d
                    zmm0 = _mm_sqrt_ss(0, zmm2.d)
                
                if (zmm3 f<= 0f || not(zmm0.d f< zmm3))
                    if (not(zmm7.d f<= 0f))
                        zmm2 = *(arg2 + 0x10)
                        rcx_1 = rax_1
                        zmm1.d = zmm2.d f- *rdi
                        zmm0.d = _mm_shuffle_ps(zmm2, zmm2, 0x55).d f- rbx_1[-1].d
                        zmm2.d = _mm_shuffle_ps(zmm2, zmm2, 0xaa).d f- *(rbx_1 - 0xc)
                        zmm1.d = zmm1.d f* zmm1.d
                        zmm0.d = zmm0.d f* zmm0.d
                        zmm2.d = zmm2.d f* zmm2.d
                        zmm1.d = zmm1.d f+ zmm0.d
                        zmm1.d = zmm1.d f+ zmm2.d
                    
                    if (zmm7.d f<= 0f || not(zmm1.d f> zmm7.d))
                        int64_t rbp_1 = sx.q(arg1[3].d)
                        uint64_t var_68_1 = *rdi
                        int32_t var_60_1 = rdi[2]
                        uint64_t var_5c_1 = *(rbx_1 - 8)
                        int32_t var_54_1 = *rbx_1
                        int32_t rax_4 = *(rbx_1 + 0xc)
                        int32_t rax_5 = (rbp_1 + 1).d
                        uint64_t var_50_1 = *(rbx_1 + 4)
                        int32_t var_44_1 = rbx_1[1].d.d
                        arg1[3].d = rax_5
                        
                        if (rax_5 s> *(arg1 + 0x1c))
                            sub_140ac0cd0(&arg1[2])
                        
                        int64_t rax_6 = arg1[2]
                        uint128_t* rcx_3 = rbp_1 * 0x2c
                        *(rcx_3 + rax_6) = var_68_1.o
                        *(rcx_3 + rax_6 + 0x10) = var_5c_1:4.o
                        *(rcx_3 + rax_6 + 0x20) = rax_4.q
                        *(rcx_3 + rax_6 + 0x28) = 0xffffffff
                        rdx = arg1[0xa]
                        rcx_1 = rdx
                        int32_t rax_7 = *rdx
                        
                        if (rax_7 s> 0 && arg1[3].d == rax_7)
                            break
        
        rdi = &rdi[0x14]
        rbx_1 = &rbx_1[5]
        rax_1 = rcx_1
        rdx = rcx_1
    while (rdi != r15_2)

rdx[5].b
jump(*(*arg1 + 0x18))
