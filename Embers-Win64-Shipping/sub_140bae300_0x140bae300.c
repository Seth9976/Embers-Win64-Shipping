// 函数: sub_140bae300
// 地址: 0x140bae300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0xd8) = *(arg1 + 0x58)
*(arg1 + 0xe0) = u"loading imports event"
void arg_8
sub_140cad130(&arg_8)
void* rax_1 = *(arg1 + 0x50)
int32_t r15 = 0
int32_t rcx_1 = *(arg1 + 0x9c)
int32_t var_f0 = 0
void* var_f8 = arg1
int32_t var_ec = 1
int32_t temp0 = *(rax_1 + 0x10)
bool cond:0 = rcx_1 == temp0

if (rcx_1 s< temp0)
    void*** rbx
    void*** var_28_1 = rbx
    uint128_t zmm8 = 0x4170000000000000
    int64_t r12
    int64_t var_38_1 = r12
    int128_t zmm6
    int128_t var_58_1 = zmm6
    uint128_t zmm7
    uint128_t var_68_1 = zmm7
    void* rax_30
    int32_t rcx_20
    
    while (true)
        void* rcx_2 = *(arg1 + 0x1d8)
        bool z_1
        
        if (0 == *(rcx_2 + 0x84))
            *(rcx_2 + 0x84) = 0
            z_1 = true
        else
            *(rcx_2 + 0x84)
            z_1 = false
        
        if (z_1)
            zmm6 = *(arg1 + 0xc4)
            zmm7 = zx.o(*(arg1 + 0xd0))
            bool rax_3
            
            if (*(arg1 + 0xc8) != 0)
                int64_t performanceCount
                QueryPerformanceCounter(&performanceCount)
                double zmm1 = float.d(performanceCount)
                double zmm0 = _mm_cvtps_pd(zmm6.q).q
                zmm1 = zmm1 f* data_143d796f8 f+ zmm8.q
                double zmm2 = zmm1 f- zmm7.q
                rax_3 = zmm2 > zmm0
                
                if (rax_3 != 0 && data_143e1a324 != 0 && not(data_1439a9888 f== zmm7.q)
                        && not(zmm2 <= _mm_cvtps_pd(data_1439a9644).q))
                    zmm6.d = zmm6.d f* data_1439a9640
                    
                    if (not(zmm2 <= _mm_cvtps_pd(zmm6.q).q))
                        data_1439a9888 = zmm7.q
                
                data_1439a9890 = zmm1
            
            if (*(arg1 + 0xc8) == 0 || rax_3 == 0)
                void* rcx_4 = data_143e1adf0
                bool z_2
                
                if (0 == *(rcx_4 + 8))
                    *(rcx_4 + 8) = 0
                    z_2 = true
                else
                    *(rcx_4 + 8)
                    z_2 = false
                
                rcx_4.b = not(z_2)
                
                if (rcx_4.b == 0)
                    int32_t rdx_1 = *(arg1 + 0x9c)
                    *(arg1 + 0x9c) = rdx_1 + 1
                    int64_t* rax_6 = sub_140ba61f0(arg1, rdx_1)
                    int64_t* rdi_1 = rax_6
                    void* rcx_6 = rax_6[4]
                    char rax_7
                    
                    if (rcx_6 != 0)
                        rax_7 = sub_140bc92e0(rcx_6)
                    
                    if (rcx_6 == 0 || rax_7 == 0)
                        rbx.b = *(rdi_1 + 0x14) == data_143e1a828
                        
                        if (data_143e1a32c != 0 || rbx.b == 0)
                            r12.b = 0
                            
                            if (rdi_1[1].d == 0 || *(rdi_1 + 0x36) != 0)
                                goto label_140bae529
                            
                            if (*(rdi_1 + 0x34) == 0)
                                do
                                    int32_t rax_8 = rdi_1[1].d
                                    
                                    if (rax_8 s>= 0)
                                        break
                                    
                                    *(rdi_1 + 0x34) = 1
                                    rdi_1 = sx.q(not.d(rax_8)) * 0x38 + *(*(arg1 + 0x50) + 8)
                                while (*(rdi_1 + 0x34) == 0)
                                
                                if (*(rdi_1 + 0x34) == 0)
                                    *(rdi_1 + 0x34) = 1
                                    r12.b = 1
                                label_140bae529:
                                    int32_t rcx_8
                                    rcx_8.b = sub_140b5b8a0(*(rdi_1 + 0x14), 0xcf) == 0
                                    
                                    if ((rdi_1[3].d != 0 | rcx_8.b) == 0 || rbx.b != 0)
                                        *rdi_1
                                        
                                        if (sub_140cc1810() == 0)
                                            void* rax_14 = rdi_1[4]
                                            void* const r13_1 = nullptr
                                            rbx = nullptr
                                            
                                            if (rax_14 != 0)
                                                void* rbx_1 = *(rax_14 + 0x68)
                                                r13_1 = rax_14
                                                
                                                if (rbx_1 == 0)
                                                    rbx = nullptr
                                                else
                                                    rbx = *(rbx_1 + 0x2e0)
                                            
                                            uint8_t rax_15 = sub_140bc9540(r13_1)
                                            
                                            if (rbx != 0)
                                            label_140bae6fe:
                                                char rax_27 = rbx[0x47].b
                                                
                                                if (rax_27 u<= 1)
                                                    int64_t var_e0_1 = 0
                                                    void*** var_e8 = rbx
                                                    sub_140b9a370(arg1, &var_e8, &var_f8)
                                                    int64_t rdi_4 = sx.q(rbx[0x9d].d)
                                                    int32_t rax_28 = (rdi_4 + 1).d
                                                    rbx[0x9d].d = rax_28
                                                    
                                                    if (rax_28 s> *(rbx + 0x4ec))
                                                        sub_1405a4d70(&rbx[0x9c])
                                                    
                                                    rbx[0x9c][rdi_4] = arg1
                                                else if (rax_27 u< 7)
                                                    int32_t var_c0_1 = 0
                                                    void* var_c8 = arg1
                                                    int32_t var_bc_1 = 1
                                                    int32_t var_d0_1 = 0
                                                    void*** var_d8 = rbx
                                                    int32_t var_cc_1 = 2
                                                    sub_140b9a370(arg1, &var_c8, &var_d8)
                                            else if (rax_15 == 0)
                                                void* r14_1 = *(arg1 + 0x1d8)
                                                int64_t rbx_2 = *rdi_1
                                                *(r14_1 + 0x1ec)
                                                
                                                if (*(r14_1 + 0x1c0) == *(r14_1 + 0x1ec))
                                                labelid_24:
                                                    rbx = nullptr
                                                else
                                                    int32_t rax_19 =
                                                        sub_140b5ead0(rbx_2.d) + rbx_2:4.d
                                                    void* r8_1 = r14_1 + 0x1f0
                                                    void* rcx_12 = *(r8_1 + 8)
                                                    
                                                    if (rcx_12 != 0)
                                                        r8_1 = rcx_12
                                                    
                                                    int32_t rax_21 = *(r8_1 + (((
                                                        sx.q(*(r14_1 + 0x200)) - 1) & sx.q(rax_19))
                                                        << 2))
                                                    
                                                    if (rax_21 == 0xffffffff)
                                                    label_140bae60b:
                                                        rbx = nullptr
                                                    else
                                                        int64_t r8_2 = *(r14_1 + 0x1b8)
                                                        int64_t rcx_13
                                                        
                                                        while (true)
                                                            rcx_13 = sx.q(rax_21)
                                                            int64_t rdx_5 = rcx_13 * 3
                                                            
                                                            if (*(r8_2 + (rdx_5 << 3)) == rbx_2)
                                                                break
                                                            
                                                            rax_21 = *(r8_2 + (rdx_5 << 3) + 0x10)
                                                            
                                                            if (rax_21 == 0xffffffff)
                                                                goto label_140bae60b_2
                                                        
                                                        if (rax_21 == 0xffffffff)
                                                        label_140bae60b_1:
                                                            rbx = nullptr
                                                        else
                                                            void* rbx_4 = r8_2 + rcx_13 * 0x18
                                                            
                                                            if (rbx_4 == 0)
                                                            label_140bae60b_2:
                                                                rbx = nullptr
                                                            else
                                                                rbx = *(rbx_4 + 8)
                                                
                                                if (rbx != 0)
                                                    goto label_140bae6fe
                                                
                                                if (r13_1 == 0 || r12.b != 0)
                                                    int64_t rdi_3 = *rdi_1
                                                    int64_t var_100_1 = 0
                                                    int64_t rbx_3 = 0
                                                    int64_t arg_10 = 0
                                                    int32_t var_b8 = 0xffffffff
                                                    int128_t var_a4_1 = 0.o
                                                    int64_t var_b4_1 = rdi_3
                                                    int64_t var_90_1 = 0
                                                    int64_t var_88_1 = 0
                                                    int32_t var_80_1 = 0xffffffff
                                                    
                                                    if ((1 & sub_140b5b8a0(0, 0)) != 0)
                                                        rbx_3 = rdi_3
                                                    
                                                    int64_t var_ac_1 = rbx_3
                                                    void*** rax_23 = j_sub_140a82f30(0x568)
                                                    
                                                    if (rax_23 == 0)
                                                        rbx = nullptr
                                                    else
                                                        void*** rax_24
                                                        rax_24, zmm8 = sub_140b94650(rax_23, 
                                                            *(arg1 + 0x1d8), &var_b8, 
                                                            *(arg1 + 0x1e0))
                                                        rbx = rax_24
                                                    
                                                    *(rbx + 0x44) = *(arg1 + 0x44)
                                                    sub_140bac040(*(arg1 + 0x1d8), rbx, 0, 0)
                                                
                                                if (rbx != 0)
                                                    goto label_140bae6fe
                                            
                                            sub_140bbd840(arg1)
                        else
                            *(rdi_1 + 0x36) = 1
                    
                    rax_30 = *(arg1 + 0x50)
                    rcx_20 = *(arg1 + 0x9c)
                    
                    if (rcx_20 s>= *(rax_30 + 0x10))
                        break
                    
                    continue
        
        rax_30 = *(arg1 + 0x50)
        rcx_20 = *(arg1 + 0x9c)
        break
    
    cond:0 = rcx_20 == *(rax_30 + 0x10)

if (cond:0)
    r15 = 2

sub_140cad790()
return zx.q(r15)
