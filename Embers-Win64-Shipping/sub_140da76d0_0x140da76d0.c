// 函数: sub_140da76d0
// 地址: 0x140da76d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_48 = zmm6
int32_t rcx = *arg3
int128_t zmm7
int128_t var_58 = zmm7
int32_t* rbx = arg2
int128_t zmm8
int128_t var_68 = zmm8
int128_t zmm9
int128_t var_78 = zmm9
int128_t zmm10
int128_t var_88 = zmm10
int128_t zmm11
int128_t var_98 = zmm11
int128_t zmm12
int128_t var_a8 = zmm12
int32_t rax = arg3[1]
int128_t zmm13
int128_t var_b8 = zmm13
int128_t zmm14
int128_t var_c8 = zmm14
int128_t zmm15
int128_t var_d8 = zmm15

if (rcx s>= 0)
    int32_t r8 = *(arg1 + 0x98)
    
    if (rcx s< r8 && rax s>= 0 && rax s< *(arg1 + 0x9c))
        int64_t r13_1 = *(arg1 + 0x88)
        int64_t r12_1 = sx.q(rax * r8 + rcx) * 3
        void* arg_18
        void** arg_20
        
        if (*(r13_1 + (r12_1 << 3)) != 0)
            int32_t rdx = *(r13_1 + (r12_1 << 3) + 0x10)
            int64_t rcx_1 = *(r13_1 + (r12_1 << 3) + 8)
            arg_18 = arg1 + 0x50
            arg_20 = &arg_18
            sub_140d90ef0(rcx_1, rdx, &arg_20)
            *(r13_1 + (r12_1 << 3)) = 0
        
        int32_t rax_5 = *(r13_1 + (r12_1 << 3) + 0x10)
        int64_t r15_1 = sx.q(rax_5 - 1)
        
        if (rax_5 - 1 s>= 0)
            int64_t temp1_1
            
            do
                int64_t rax_8 = sx.q(*(*(r13_1 + (r12_1 << 3) + 8) + (r15_1 << 2)))
                arg_18.d = rax_8.d
                int64_t* rdi_3 = (rax_8 << 6) + *(arg1 + 0x50)
                int64_t* rbx_1 = rdi_3[1]
                
                if (rbx_1 != 0)
                    int32_t rax_9 = rbx_1[1].d
                    
                    if (rax_9 != 0)
                        rbx_1[1].d = rax_9 + 1
                        
                        if (rbx_1 != 0)
                            int64_t* rdi_4 = *rdi_3
                            
                            if (rdi_4 != 0)
                                char rax_12
                                
                                if (arg3[5].b != 0)
                                    rax_12 = (*(*rdi_4 + 0x1b0))(rdi_4)
                                
                                if (arg3[5].b == 0 || rax_12 != 0)
                                    arg_20.d = *(arg1 + 0xa8) f+ arg3[2]
                                    arg_20:4.d = *(arg1 + 0xac) f+ arg3[3]
                                    float* rax_13 = sub_140e15850(rdi_4)
                                    float* r8_2 = rax_13
                                    void*** rcx_3
                                    rcx_3.b = 1
                                    float zmm0
                                    
                                    if (rdi_4[0x10].b != 0)
                                        if (*(rdi_4 + 0x74) == 0)
                                            void* r10_1 = rdi_4[8]
                                            void* rdi_5 = r10_1 + sx.q(rdi_4[9].d) * 0x24
                                            
                                            if (r10_1 == rdi_5)
                                                rcx_3.b = 1
                                            else
                                                zmm6 = arg_20:4.d
                                                zmm7 = arg_20.d
                                                
                                                while (true)
                                                    if ((*(r10_1 + 0x20) & 1) == 0)
                                                        char rax_17
                                                        rax_17, zmm6 = sub_140db3320(&arg_20, 
                                                            r10_1, r10_1 + 8, r10_1 + 0x10)
                                                        
                                                        if (rax_17 == 0)
                                                            char rax_18
                                                            rax_18, zmm6 = sub_140db3320(&arg_20, 
                                                                r10_1 + 0x10, r10_1 + 8, r10_1 + 0x18)
                                                            
                                                            if (rax_18 == 0)
                                                                break
                                                    else
                                                        if (zmm7.d f< *r10_1)
                                                            break
                                                        
                                                        if (zmm7.d f> *(r10_1 + 8))
                                                            break
                                                        
                                                        if (zmm6.d f< *(r10_1 + 4))
                                                            break
                                                        
                                                        if (zmm6.d f> *(r10_1 + 0x14))
                                                            break
                                                    
                                                    r10_1 += 0x24
                                                    
                                                    if (r10_1 == rdi_5)
                                                        goto label_140da797e
                                                
                                                r8_2 = rax_13
                                                rcx_3.b = 0
                                        else if ((rdi_4[0xe].b & 1) == 0)
                                            char rax_14 = sub_140db3320(&arg_20, &rdi_4[0xa], 
                                                &rdi_4[0xb], &rdi_4[0xc])
                                            char rax_15
                                            
                                            if (rax_14 == 0)
                                                rax_15 = sub_140db3320(&arg_20, &rdi_4[0xc], 
                                                    &rdi_4[0xb], &rdi_4[0xd])
                                            
                                            if (rax_14 != 0 || rax_15 != 0)
                                            label_140da797e:
                                                r8_2 = rax_13
                                                rcx_3.b = 1
                                            else
                                                r8_2 = rax_13
                                                rcx_3.b = 0
                                        else
                                            zmm0 = arg_20.d
                                            
                                            if (zmm0 f< rdi_4[0xa].d || zmm0 f> rdi_4[0xb].d)
                                                rcx_3.b = 0
                                            else
                                                zmm0 = arg_20:4.d
                                                
                                                if (zmm0 f< *(rdi_4 + 0x54)
                                                        || not(zmm0 f<= *(rdi_4 + 0x64)))
                                                    rcx_3.b = 0
                                                else
                                                    rcx_3.b = 1
                                    
                                    if (rcx_3.b != 0)
                                        int128_t zmm4 = r8_2[4]
                                        void*** rdx_5 = &arg_20
                                        float zmm3 = r8_2[2]
                                        zmm7 = r8_2[3]
                                        zmm13 = zmm7
                                        zmm6 = r8_2[0xa]
                                        zmm11 = zmm7
                                        zmm12.d = 1f / zmm3
                                        float zmm2 = zmm3 * r8_2[1]
                                        float zmm1 = zmm2 f+ zmm4.d
                                        zmm0 = zmm3 * *r8_2 f+ zmm7.d
                                        zmm7.d = zmm7.d f* zmm12.d
                                        zmm2 = zmm2 f+ zmm4.d
                                        zmm10 = _mm_max_ss(zmm4.d, zmm1)
                                        zmm7 ^= 0x80000000
                                        zmm13 = _mm_min_ss(zmm13.d, zmm0)
                                        zmm11 = _mm_max_ss(zmm11.d, zmm0)
                                        zmm14 = _mm_min_ss(zmm4.d, zmm1)
                                        zmm1 = r8_2[7]
                                        zmm3 = zmm12.d * zmm1
                                        zmm10 = _mm_max_ss(zmm10.d, zmm2)
                                        zmm14 = _mm_min_ss(zmm14.d, zmm2)
                                        zmm2 = r8_2[8]
                                        zmm11.d = zmm11.d f- zmm13.d
                                        zmm10 = _mm_max_ss(zmm10.d, zmm4.d)
                                        zmm14 = _mm_min_ss(zmm14.d, zmm4.d)
                                        zmm4.d = zmm4.d f* zmm12.d
                                        zmm4 ^= 0x80000000
                                        zmm8.d = zmm6.d f* zmm4.d
                                        zmm10.d = zmm10.d f- zmm14.d
                                        zmm9.d = zmm4.d f* r8_2[9]
                                        zmm4.d = zmm12.d f* zmm2
                                        zmm9.d = zmm9.d f+ zmm1 f* zmm7.d
                                        zmm0 = zmm2 f* zmm7.d
                                        zmm7.d = zmm12.d f* r8_2[9]
                                        zmm8.d = zmm8.d f+ zmm0
                                        zmm12.d = zmm12.d f* zmm6.d
                                        zmm9.d = zmm9.d f+ r8_2[0xb]
                                        zmm8.d = zmm8.d f+ r8_2[0xc]
                                        float zmm5 = zmm12.d
                                        zmm12.d = zmm12.d f* zmm14.d
                                        zmm0 = zmm13.d * zmm3
                                        zmm6.d = zmm10.d f* zmm7.d
                                        zmm7.d = zmm7.d f* zmm14.d
                                        zmm13.d = zmm13.d f* zmm4.d
                                        zmm7.d = zmm7.d f+ zmm0
                                        int32_t var_e8_1 = zmm6.d
                                        zmm12.d = zmm12.d f+ zmm13.d
                                        arg3[4]
                                        float var_f0_1 = zmm3 f* zmm11.d
                                        zmm7.d = zmm7.d f+ zmm9.d
                                        float var_ec_1 = zmm4.d f* zmm11.d
                                        float var_e4_1 = zmm5 f* zmm10.d
                                        zmm12.d = zmm12.d f+ zmm8.d
                                        int32_t var_f8 = zmm7.d
                                        int32_t var_f4_1 = zmm12.d
                                        void var_100
                                        int64_t* rax_19
                                        rax_19, zmm6 = sub_140d9b890(&var_100, rdx_5, &var_f8)
                                        zmm1 = arg_20:4.d f- *(rax_19 + 4)
                                        zmm0 = arg_20.d f- *rax_19
                                        zmm6.d = zmm6.d f* zmm6.d
                                        
                                        if (zmm1 * zmm1 + zmm0 * zmm0 f<= zmm6.d)
                                            zmm1 = (zx.o(0)).d
                                            
                                            if (not(0f f>= arg3[4]))
                                                rdx_5 = &arg_20
                                                int64_t* rax_23 =
                                                    sub_140d9b890(&var_100, rdx_5, &var_f8)
                                                zmm1 = arg_20:4.d f- *(rax_23 + 4)
                                                zmm0 = arg_20.d f- *rax_23
                                                zmm1 = zmm1 * zmm1 + zmm0 * zmm0
                                            
                                            int32_t temp4_1 = rbx_1[1].d
                                            rbx_1[1].d -= 1
                                            int32_t rax_24 = arg_18.d
                                            arg2[1] = zmm1
                                            *arg2 = rax_24
                                            
                                            if (temp4_1 == 1)
                                                (**rbx_1)(rbx_1, rdx_5)
                                                int32_t temp5_1 = *(rbx_1 + 0xc)
                                                *(rbx_1 + 0xc) -= 1
                                                
                                                if (temp5_1 == 1)
                                                    (*(*rbx_1 + 8))(rbx_1, 1)
                                            
                                            return arg2
                            
                            rbx_1[1].d -= 1
                            
                            if (rbx_1[1].d == 1)
                                (**rbx_1)(rbx_1)
                                int32_t temp3_1 = *(rbx_1 + 0xc)
                                *(rbx_1 + 0xc) -= 1
                                
                                if (temp3_1 == 1)
                                    (*(*rbx_1 + 8))(rbx_1, 1)
                
                temp1_1 = r15_1
                r15_1 -= 1
            while (temp1_1 - 1 s>= 0)
            rbx = arg2

*rbx = 0xffffffff
rbx[1] = 0
return rbx
