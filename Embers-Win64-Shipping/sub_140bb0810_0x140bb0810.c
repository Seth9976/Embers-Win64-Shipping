// 函数: sub_140bb0810
// 地址: 0x140bb0810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_48 = zmm6
uint128_t zmm7
uint128_t var_58 = zmm7
uint128_t zmm8
uint128_t var_68 = zmm8
void var_97
sub_140cad130(&var_97)
char arg_18 = 0
char* var_80 = &arg_18
void*** (* var_88)() = sub_140884c50
void* rax = sub_140a756e0(&var_88, &data_14397f5f0)
char arg_20 = 0
void*** (* var_78)() = sub_140884c50
char rsi = *(rax + 0x20)
*(rax + 0x20) = 1
char* var_70 = &arg_20
int64_t* r15_1 = *(sub_140a756e0(&var_78, &data_14397f5f0) + 0x48) + 0x10
int64_t rdi = sx.q(r15_1[1].d)
int32_t r14

if (rdi.d == 0)
    if (data_143de5452 != 0)
        *(arg1 + 0xa8) = *(arg1 + 0x120)
    
    sub_140bc7ab0()
    char rdi_1 = data_143e1a340
    r14 = 0
    int32_t rdx_3 = *(arg1 + 0xb4)
    char var_98_1 = rdi_1
    char r12_1 = data_143e1aac1
    
    if (rdx_3 s>= *(arg1 + 0x120))
    label_140bb0c2a:
        sub_140b90c00(arg1 + 0x118, r15_1)
        int32_t rax_26 = *(r15_1 + 0xc)
        r15_1[1].d = 0
        
        if (rax_26 s< 0 && rax_26 != 0)
            sub_1405c5570(r15_1, 0)
        
        int32_t rax_27 = *(arg1 + 0x120)
        
        if (*(arg1 + 0xa8) == rax_27 && *(arg1 + 0xb4) == rax_27)
            r14 = 2
    else
        while (true)
            if (rdx_3 s>= *(arg1 + 0xa8))
                goto label_140bb0c2a
            
            void* rcx_6 = *(arg1 + 0x1d8)
            bool z_1
            
            if (0 == *(rcx_6 + 0x84))
                *(rcx_6 + 0x84) = 0
                z_1 = true
            else
                *(rcx_6 + 0x84)
                z_1 = false
            
            if (not(z_1))
                goto label_140bb0c2a
            
            zmm6 = *(arg1 + 0xc4)
            zmm7 = zx.o(*(arg1 + 0xd0))
            
            if (*(arg1 + 0xc8) != 0)
                int64_t performanceCount
                QueryPerformanceCounter(&performanceCount)
                double zmm2_1 = float.d(performanceCount)
                double zmm0_1 = _mm_cvtps_pd(zmm6.q)
                zmm2_1 = zmm2_1 f* data_143d796f8 f+ 0x4170000000000000
                double zmm1_1 = zmm2_1 f- zmm7.q
                bool rax_6 = zmm1_1 > zmm0_1
                
                if (rax_6 != 0 && data_143e1a324 != 0 && not(data_1439a9888 f== zmm7.q)
                        && not(zmm1_1 <= _mm_cvtps_pd(data_1439a9644)))
                    zmm6.d = zmm6.d f* data_1439a9640
                    
                    if (not(zmm1_1 <= _mm_cvtps_pd(zmm6.q)))
                        data_1439a9888 = zmm7.q
                
                data_1439a9890 = zmm2_1
                
                if (rax_6 != 0)
                    goto label_140bb0c2a
            
            void* rcx_8 = data_143e1adf0
            bool z_2
            
            if (0 == *(rcx_8 + 8))
                *(rcx_8 + 8) = 0
                z_2 = true
            else
                *(rcx_8 + 8)
                z_2 = false
            
            rcx_8.b = not(z_2)
            
            if (rcx_8.b != 0)
                goto label_140bb0c2a
            
            int64_t rax_8 = sx.q(*(arg1 + 0xb4))
            rdx_3 = (rax_8 + 1).d
            int64_t rax_9 = *(arg1 + 0x118)
            *(arg1 + 0xb4) = rdx_3
            int64_t* rsi_1 = *(rax_9 + (rax_8 << 3))
            
            if (rsi_1 != 0)
                if ((*(*rsi_1 + 0x68))(rsi_1) == 0)
                    *(arg1 + 0xb4) -= 1
                    goto label_140bb0c2a
                
                uint8_t rax_12
                
                if (rdi_1 != 0 && r12_1 != 0)
                    rax_12 = sub_140bc36a0(rsi_1)
                
                if (rdi_1 == 0 || (r12_1 != 0 && rax_12 != 0))
                    *(rax + 0x28) = rsi_1
                    sub_140cd85e0(rsi_1)
                    int32_t rax_15 = *(rsi_1 + 0xc)
                    void* const r8_3
                    
                    if (rax_15 s>= data_143e1d9b4)
                        r8_3 = nullptr
                    else
                        uint32_t rdx_5 = zx.d(rax_15.w)
                        
                        if (rax_15 s< 0)
                            rax_15 += 0xffff
                            rdx_5 -= 0x10000
                        
                        r8_3 = *(data_143e1d9a0 + (sx.q(rax_15 s>> 0x10) << 3)) + sx.q(rdx_5) * 0x18
                    
                    for (int32_t rax_19 = *(r8_3 + 8); test_bit(rax_19, 0x1b); rax_19 = *(r8_3 + 8))
                        bool z_3
                        
                        if (rax_19 == *(r8_3 + 8))
                            *(r8_3 + 8) = rax_19 & 0xf7ffffff
                            z_3 = true
                        else
                            *(r8_3 + 8)
                            z_3 = false
                        
                        if (z_3)
                            break
                    
                    *(rax + 0x28) = 0
                    *(arg1 + 0xd8) = rsi_1
                    *(arg1 + 0xe0) = u"postloading_async"
                    int64_t rdi_2 = sx.q(r15_1[1].d)
                    
                    if (rdi_2.d != 0)
                        int32_t rax_23 = *(arg1 + 0x120)
                        int32_t rdx_9 = rax_23 + rdi_2.d
                        
                        if (rdx_9 s> *(arg1 + 0x124))
                            sub_1405c5570(arg1 + 0x118, rdx_9)
                            rax_23 = *(arg1 + 0x120)
                        
                        memcpy(*(arg1 + 0x118) + (sx.q(rax_23) << 3), *r15_1, (rdi_2 << 3).d)
                        *(arg1 + 0x120) += rdi_2.d
                        int32_t rax_25 = *(r15_1 + 0xc)
                        r15_1[1].d = 0
                        
                        if (rax_25 s< 0 && rax_25 != 0)
                            sub_1405c5570(r15_1, 0)
                        
                        break
                else
                    int64_t rbp_1 = sx.q(*(arg1 + 0x100))
                    int32_t rax_13 = (rbp_1 + 1).d
                    *(arg1 + 0x100) = rax_13
                    
                    if (rax_13 s> *(arg1 + 0x104))
                        sub_1405a4d70(arg1 + 0xf8)
                    
                    *(*(arg1 + 0xf8) + (rbp_1 << 3)) = rsi_1
                
                int64_t rbp_2 = sx.q(*(arg1 + 0x110))
                int32_t rax_21 = (rbp_2 + 1).d
                *(arg1 + 0x110) = rax_21
                
                if (rax_21 s> *(arg1 + 0x114))
                    sub_1405a4d70(arg1 + 0x108)
                
                *(*(arg1 + 0x108) + (rbp_2 << 3)) = rsi_1
                sub_140b9aae0(arg1, rsi_1)
                rdx_3 = *(arg1 + 0xb4)
                rdi_1 = var_98_1
            
            if (rdx_3 s>= *(arg1 + 0x120))
                goto label_140bb0c2a
else
    int32_t rax_2 = *(arg1 + 0x120)
    int32_t rdx = rax_2 + rdi.d
    
    if (rdx s> *(arg1 + 0x124))
        sub_1405c5570(arg1 + 0x118, rdx)
        rax_2 = *(arg1 + 0x120)
    
    memcpy(*(arg1 + 0x118) + (sx.q(rax_2) << 3), *r15_1, (rdi << 3).d)
    *(arg1 + 0x120) += rdi.d
    r14 = 0
    r15_1[1].d = 0
    
    if (*(r15_1 + 0xc) s<= 0xffffffff)
        sub_1405c5570(r15_1, 0)

*(rax + 0x20) = rsi
sub_140cad790()
return zx.q(r14)
