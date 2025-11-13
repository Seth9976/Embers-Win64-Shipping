// 函数: sub_1408e87b0
// 地址: 0x1408e87b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r13 = arg1
*(arg1 + 0x160) = arg5
*(arg1 + 0x158) = arg2
*(arg1 + 0x15c) = arg3
*(arg1 + 0x15d) = arg4
uint64_t result = zx.q(data_14399fa50 + 1)
*(arg1 + 0x164) = result.d

if (data_143f0f21f != 0)
    uint64_t rdx_1 = zx.q(data_143f0f1a0)
    result = zx.q(*(&data_143f025fc + sx.q(rdx_1.d) * 0x14) u>> 0x13)
    
    if ((result.b & 1) != 0)
        result = data_143f13cd8
        
        if (test_bit(result, rdx_1))
            sub_1408e29c0(r13)
            int64_t* i = *(r13 + 0x168)
            result = &i[sx.q(*(r13 + 0x170))]
            uint64_t result_1 = result
            
            for (; i != result; i = &i[1])
                int64_t* rbp_1 = *i
                
                if (rbp_1 != 0)
                    int32_t rax_4 = rbp_1[0x12].d
                    uint64_t r14_2 = zx.q(rax_4) & 1
                    
                    if (rax_4 == 0xffffffff)
                        r14_2 = 0
                    
                    sub_14081d930(&rbp_1[0x75], rbp_1[0x25])
                    rbp_1[0x77].d = 0
                    void* rbx_1 = rbp_1[0x78]
                    int32_t rcx_3 = *(rbp_1 + 0x3cc)
                    char rax_5 = rbx_1.b & 1
                    
                    if (rcx_3 s< 0)
                        if (rax_5 != 0)
                            rbx_1 = (rbx_1 s>> 1) + &rbp_1[0x78]
                        
                        int32_t j_3 = rbp_1[0x79].d
                        
                        if (j_3 != 0)
                            int32_t j
                            
                            do
                                sub_1405d1550(rbx_1)
                                rbx_1 += 0x20
                                j = j_3
                                j_3 -= 1
                            while (j != 1)
                            rcx_3 = *(rbp_1 + 0x3cc)
                        
                        rbp_1[0x79].d = 0
                        
                        if (rcx_3 != 0)
                            sub_1408e7310(&rbp_1[0x78], 0)
                    else
                        if (rax_5 != 0)
                            rbx_1 = (rbx_1 s>> 1) + &rbp_1[0x78]
                        
                        int32_t j_2 = rbp_1[0x79].d
                        
                        if (j_2 != 0)
                            int32_t j_1
                            
                            do
                                sub_1405d1550(rbx_1)
                                rbx_1 += 0x20
                                j_1 = j_2
                                j_2 -= 1
                            while (j_1 != 1)
                        
                        rbp_1[0x79].d = 0
                    
                    *(r13 + 0x15d)
                    *(r13 + 0x15c)
                    int512_t zmm1
                    zmm1.o = *(r13 + 0x158)
                    void* rax_6 = sub_1408e5610(rbp_1)
                    int32_t* rsi_1 = *(rax_6 + 0x60)
                    void* r12_1 = &rsi_1[sx.q(*(rax_6 + 0x68)) * 3]
                    
                    if (rsi_1 != r12_1)
                        do
                            void* var_50 = nullptr
                            int32_t temp2_1
                            int32_t temp3_1
                            temp2_1:temp3_1 = mulu.dp.d(0xaaaaaaab, *rsi_1)
                            int32_t rax_8 = rsi_1[1]
                            int64_t var_48_1 = 3
                            int32_t var_40_1 = 0xc
                            int16_t var_34_1 = 0x100
                            char var_32_1 = 1
                            sub_1405d16e0(&var_50, rbp_1[r14_2 * 4 + 0xa])
                            int64_t rbx_4 = sx.q(rbp_1[0x79].d)
                            int32_t rax_9 = (rbx_4 + 1).d
                            rbp_1[0x79].d = rax_9
                            
                            if (rax_9 s> *(rbp_1 + 0x3cc))
                                sub_1405e4030(&rbp_1[0x78], rbx_4.d)
                            
                            void* rcx_12 = rbp_1[0x78]
                            
                            if ((rcx_12.b & 1) != 0)
                                rcx_12 = (rcx_12 s>> 1) + &rbp_1[0x78]
                            
                            void* rax_10 = var_50
                            int64_t* rdx_8 = rbx_4 << 5
                            *(rdx_8 + rcx_12) = rax_10
                            
                            if (rax_10 != 0)
                                *(rax_10 + 8) += 1
                            
                            *(rdx_8 + rcx_12 + 8) = var_48_1.d
                            *(rdx_8 + rcx_12 + 0xc) = var_48_1:4.d
                            *(rdx_8 + rcx_12 + 0x10) = var_40_1
                            *(rdx_8 + rcx_12 + 0x14) = temp2_1 u>> 1
                            *(rdx_8 + rcx_12 + 0x18) = rax_8
                            *(rdx_8 + rcx_12 + 0x1c) = var_34_1.b
                            *(rdx_8 + rcx_12 + 0x1d) = var_34_1:1.b
                            *(rdx_8 + rcx_12 + 0x1e) = var_32_1
                            rbp_1[0x77].d += rsi_1[1]
                            sub_1405d1550(&var_50)
                            rsi_1 = &rsi_1[3]
                        while (rsi_1 != r12_1)
                        
                        r13 = arg1
                    
                    sub_1419ba620(&rbp_1[0x6e])
                    result = result_1

return result
