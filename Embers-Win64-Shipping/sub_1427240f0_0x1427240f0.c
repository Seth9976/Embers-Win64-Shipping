// 函数: sub_1427240f0
// 地址: 0x1427240f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = 0x7f7fffff
void* rsi = *(arg1 + 0x38)
int64_t* i = *(arg1 + 0x80)

for (void* r14_2 = &i[sx.q(*(arg1 + 0x88)) * 4]; i != r14_2; i = &i[4])
    void* rbx_1 = i[2]
    
    if (rbx_1 != 0 && i[3] != 0)
        void* rax_2 = sub_140d21950(rbx_1, sub_142725fc0())
        
        if (rax_2 != 0)
            int64_t rdx_2 = *rax_2
            void* rax_3 = (*(rdx_2 + 0x10))(rax_2, rdx_2)
            
            if (rax_3 != 0)
                int64_t rdx_3 = sx.q(*(rax_3 + 0xe4))
                
                if (*(rsi + 0x40) != *(rsi + 0x6c))
                    void* rcx_2 = *(rsi + 0x78)
                    void* r9_1 = rsi + 0x70
                    
                    if (rcx_2 != 0)
                        r9_1 = rcx_2
                    
                    int32_t j_1 = *(r9_1 + (((sx.q(*(rsi + 0x80)) - 1) & rdx_3) << 2))
                    int32_t j = j_1
                    
                    if (j_1 != 0xffffffff)
                        int64_t r9_2 = *(rsi + 0x38)
                        
                        do
                            int32_t* r10_1 = sx.q(j) * 0x3c
                            
                            if (*(r10_1 + r9_2) == rdx_3.d)
                                if (j != 0xffffffff)
                                    int32_t* rcx_5
                                    
                                    if (j_1 == 0xffffffff)
                                    label_14272422d:
                                        rcx_5 = nullptr
                                    else
                                        while (true)
                                            rcx_5 = sx.q(j_1) * 0x3c + r9_2
                                            
                                            if (*rcx_5 == rdx_3.d)
                                                break
                                            
                                            j_1 = rcx_5[0xd]
                                            
                                            if (j_1 == 0xffffffff)
                                                goto label_14272422d_1
                                        
                                        if (j_1 == 0xffffffff)
                                        label_14272422d_1:
                                            rcx_5 = nullptr
                                    
                                    if (test_bit(rcx_5[3], zx.d(*(arg1 + 0x44))))
                                        int32_t rax_6 = i[1].d
                                        int64_t zmm0 = *i
                                        int32_t var_64_1 = rax_6
                                        int32_t var_58_1 = rax_6
                                        int64_t var_54_1 = 0
                                        int64_t arg_8 = 0
                                        int32_t var_78 = 0
                                        int32_t var_74_1 = 0x7f7fffff
                                        int32_t var_70_1 = 0x3f800000
                                        int64_t var_6c_1 = zmm0
                                        int64_t var_60_1 = zmm0
                                        char var_4c_1 = 0xff
                                        int64_t var_48
                                        sub_140b58260(&var_48, u"Invalid", 1)
                                        int64_t rbx_2 = i[3]
                                        int32_t rdx_4
                                        rdx_4.b = *(arg1 + 0x2c) == 1
                                        int64_t rax_9 = *(arg1 + 0x48)
                                        int32_t var_40 = (rdx_4 + 2) | (var_40 & 0xfffffffa)
                                        char rdx_7 = *(arg1 + 0x44)
                                        rcx_5[0xb] |= 1
                                        char var_4c_2 = rdx_7
                                        var_48 = rax_9
                                        zmm6 =
                                            sub_14270a6d0(sub_140d3c6e0(&rcx_5[1]), rbx_2, &var_78)
                                
                                break
                            
                            j = *(r10_1 + r9_2 + 0x34)
                        while (j != 0xffffffff)

*(arg1 + 0x88) = 0

if (*(arg1 + 0x8c) s<= 0xffffffff)
    sub_1405a51b0(arg1 + 0x80, 0)

return zmm6.q
