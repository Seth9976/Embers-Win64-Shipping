// 函数: sub_142713960
// 地址: 0x142713960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1
int64_t rsi = sx.q(arg2)
TEB* gsbase
void* r14 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))

if (data_143f72478 s> *(r14 + 0x14))
    _Init_thread_header(&data_143f72478)
    
    if (data_143f72478 == 0xffffffff)
        int64_t* rax_24 = sub_14272b250()
        void* rax_25 = rax_24[0x23]
        
        if (rax_25 == 0)
            int64_t rdx_11 = *rax_24
            (*(rdx_11 + 0x390))(rax_24, rdx_11)
            rax_25 = rax_24[0x23]
        
        data_143f72474 = *(rax_25 + 0x8c)
        _Init_thread_footer(&data_143f72478)

if (data_143f72480 s> *(r14 + 0x14))
    _Init_thread_header(&data_143f72480)
    
    if (data_143f72480 == 0xffffffff)
        int64_t* rax_26 = sub_14272b250()
        void* rax_27 = rax_26[0x23]
        
        if (rax_27 == 0)
            int64_t rdx_12 = *rax_26
            (*(rdx_12 + 0x390))(rax_26, rdx_12)
            rax_27 = rax_26[0x23]
        
        data_143f7247c = *(rax_27 + 0x90)
        _Init_thread_footer(&data_143f72480)

void* rdi_1 = rbx[0x20]
int32_t result = (rsi + 1).d

if (rdi_1 != 0)
    if (rsi.d s< 0 || rsi.d s>= *(rdi_1 + 0x30))
        arg1.b = 0
    else
        arg1.b = 1
    
    if (arg1.b != 0)
        if (result s< 0 || result s>= *(rdi_1 + 0x30))
            result.b = 0
        else
            result.b = 1
        
        if (result.b != 0)
            int32_t rax_4 = (*(*rbx + 0x510))(rbx, zx.q(rsi.d))
            rbx[0x3c].d = rsi.d
            int64_t r8_1 = sx.q(rax_4)
            *(rbx + 0x1e4) = r8_1.d
            void* r14_3 = (rsi << 5) + *(rdi_1 + 0x28)
            void* r15_3 = (r8_1 << 5) + *(rdi_1 + 0x28)
            rbx[0x3d] = *(r14_3 + 0x10)
            rbx[0x3e] = *(r15_3 + 0x10)
            void var_b8
            int64_t* rax_7 = sub_14265a8f0(rdi_1, &var_b8, r8_1.d)
            int32_t r8_2 = rbx[0x3c].d
            *(rbx + 0x148) = *rax_7
            *(rbx + 0x158) = *(rax_7 + 0x10)
            *(rbx + 0x168) = *(rax_7 + 0x20)
            rbx[0x2f] = rax_7[6]
            int32_t var_c8
            sub_141e912d0(sub_14265a8f0(rdi_1, &var_b8, r8_2), &var_c8)
            int32_t var_d8
            sub_141e912d0(&rbx[0x29], &var_d8)
            uint32_t zmm11[0x4] = var_c8
            uint32_t zmm8_1[0x4] = var_d8
            zmm11[0] = zmm11[0] f- zmm8_1[0]
            int32_t var_c0
            uint32_t zmm9_1[0x4] = var_c0
            int32_t var_c4
            uint32_t zmm10[0x4] = var_c4
            int32_t var_d0
            uint128_t zmm6_1 = var_d0
            int32_t var_d4
            uint32_t zmm7_1[0x4] = var_d4
            char rax_9
            
            if (_mm_and_ps(zmm11, 0x7fffffff)[0] f> 9.99999975e-05f)
                rax_9 = 0
            else
                zmm10[0] = zmm10[0] f- zmm7_1[0]
                
                if (_mm_and_ps(zmm10, 0x7fffffff)[0] f> 9.99999975e-05f)
                    rax_9 = 0
                else
                    zmm9_1[0] = zmm9_1[0] f- zmm6_1.d
                    
                    if (_mm_and_ps(zmm9_1, 0x7fffffff)[0] f> 9.99999975e-05f)
                        rax_9 = 0
                    else
                        rax_9 = 1
            
            int64_t var_e8
            
            if (rax_9 != 0)
                int32_t r8_3 = *(rbx + 0x1e4) + 1
                int32_t rax_10
                
                if (r8_3 s< 0 || r8_3 s>= *(rdi_1 + 0x30))
                    rax_10.b = 0
                else
                    rax_10.b = 1
                
                if (rax_10.b != 0)
                    *(rbx + 0x1e4) = r8_3
                    int64_t* rax_11 = sub_14265a8f0(rdi_1, &var_b8, r8_3)
                    *(rbx + 0x148) = *rax_11
                    *(rbx + 0x158) = *(rax_11 + 0x10)
                    *(rbx + 0x168) = *(rax_11 + 0x20)
                    rbx[0x2f] = rax_11[6]
                    int64_t* rax_12 = sub_141e912d0(&rbx[0x29], &var_e8)
                    zmm9_1 = var_c0
                    zmm10 = var_c4
                    zmm11 = var_c8
                    var_d8.q = *rax_12
                    zmm7_1 = var_d4
                    zmm8_1 = var_d8
                    zmm6_1 = rax_12[1].d
            
            uint32_t zmm0_2[0x4]
            
            if (*(rdi_1 + 0x30) == *(rbx + 0x1e4) + 1)
                int32_t rax_16 = *(rbx + 0x1ac)
                var_e8 = *(rbx + 0x1a4)
                int32_t var_e0_1 = rax_16
                zmm0_2 = sub_142700900(rbx, rdi_1, &var_e8, nullptr)
            else if ((*(r15_3 + 0x18) & 4) != 0)
                zmm0_2 = data_143f7247c
            else
                zmm0_2 = data_143f72474
            
            zmm7_1[0] = zmm7_1[0] f- zmm10[0]
            rbx[0x23].d = zmm0_2[0]
            zmm8_1[0] = zmm8_1[0] f- zmm11[0]
            zmm6_1.d = zmm6_1.d f- zmm9_1[0]
            zmm7_1[0] = zmm7_1[0] f* zmm7_1[0]
            zmm8_1[0] = zmm8_1[0] f* zmm8_1[0]
            uint128_t zmm1_1
            zmm1_1.d = zmm6_1.d f* zmm6_1.d
            zmm8_1[0] = zmm8_1[0] f+ zmm7_1[0]
            zmm8_1[0] = zmm8_1[0] f+ zmm1_1.d
            uint32_t var_e0_2
            
            if (not(zmm8_1[0] f!= 1f))
                var_e8:4.d = zmm7_1[0]
                var_e0_2 = zmm6_1.d
                var_e8.d = zmm8_1[0]
            else if (zmm8_1[0] f>= 9.99999994e-09f)
                uint32_t zmm5_1[0x4] = _mm_rsqrt_ss(zmm8_1[0], zmm8_1[0])
                zmm8_1[0] = zmm8_1[0] f* 0.5f
                zmm5_1[0] = zmm5_1[0] f* zmm5_1[0]
                zmm8_1[0] = zmm8_1[0] f* zmm5_1[0]
                zmm1_1.d = 0.5f f- zmm8_1[0]
                zmm5_1[0] = zmm5_1[0] f* zmm1_1.d
                zmm5_1[0] = zmm5_1[0] f+ zmm5_1[0]
                zmm5_1[0] = zmm5_1[0] f* zmm5_1[0]
                zmm8_1[0] = zmm8_1[0] f* zmm5_1[0]
                zmm5_1[0] = zmm5_1[0] f* (0.5f f- zmm8_1[0])
                zmm5_1[0] = zmm5_1[0] f+ zmm5_1[0]
                zmm8_1[0] = zmm8_1[0] f* zmm5_1[0]
                zmm1_1.d = zmm5_1.d f* zmm6_1.d
                zmm5_1[0] = zmm5_1[0] f* zmm7_1[0]
                var_e0_2 = zmm1_1.d
                var_e8:4.d = zmm5_1[0]
                var_e8.d = zmm8_1[0]
            else
                var_e8.d = data_143dbb1f8[0]
                var_e0_2 = data_143dbb200[0]
                var_e8:4.d = data_143dbb1fc.d
            
            rbx[0x3f] = var_e8
            rbx[0x40].d = var_e0_2
            char rax_18 = (*(r14_3 + 0x18)).b
            *(rbx + 0x1ba) &= 0xfe
            *(rbx + 0x1ba) |= rax_18 u>> 2 & 1
            
            if (*(r14_3 + 0x1c) != 0)
                void* rax_19 = rbx[0x15]
                void* const rdi_2
                
                if (rax_19 != 0)
                label_142713db4:
                    rdi_2 = *(rax_19 + 0x120)
                    
                    if (rdi_2 == 0)
                        rdi_2 = nullptr
                    else
                        void* rax_20 = sub_14269bba0()
                        void* rdx_8 = *(rdi_2 + 0x10)
                        int64_t rax_21 = sx.q(*(rax_20 + 0x38))
                        
                        if (rax_21.d s> *(rdx_8 + 0x38)
                                || *(*(rdx_8 + 0x30) + (rax_21 << 3)) != rax_20 + 0x30)
                            rdi_2 = nullptr
                else
                    rax_19 = sub_141ee69e0(rbx)
                    
                    if (rax_19 != 0)
                        goto label_142713db4
                    
                    rdi_2 = nullptr
                
                int64_t rax_23 = sub_142656e00(rdi_2, *(r14_3 + 0x1c))
                int64_t r9_1 = *rbx
                (*(r9_1 + 0x4e0))(rbx, rax_23, &var_d8, r9_1)
            
            return sub_142717810(rbx)

return result
