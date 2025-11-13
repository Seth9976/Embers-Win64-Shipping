// 函数: sub_14209e240
// 地址: 0x14209e240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg3)
int64_t r13 = sx.q(arg2)
uint64_t result = zx.q(rbp.d - r13.d)

if (result.d s>= 2)
    int32_t i = (r13 + 1).d
    int32_t i_1 = 0
    
    if (i s< rbp.d)
        int64_t rsi_2 = sx.q(i) * 0x24
        int64_t r14_1 = rsi_2
        float zmm6_1
        float zmm7_1
        
        do
            float zmm0_1
            zmm0_1, result, zmm6_1, zmm7_1 = sub_1420897a0(arg1[3] + r14_1, arg1, &arg1[7])
            
            if (not(zmm0_1 <= zmm7_1))
                int64_t rdx_1 = arg1[3]
                uint128_t zmm1_1 = *(rsi_2 + rdx_1)
                float zmm2_1 = zmm1_1.d f- *(rdx_1 + r13 * 0x24)
                float zmm3_1 = *(rdx_1 + rbp * 0x24) f- zmm1_1.d
                
                if (not(zmm3_1 >= zmm2_1))
                    zmm2_1 = zmm3_1
                
                zmm0_1 = zmm0_1 * zmm2_1
                
                if (not(zmm0_1 <= zmm6_1))
                    i_1 = i
                    zmm6_1 = zmm0_1
            
            i += 1
            r14_1 += 0x24
            rsi_2 += 0x24
        while (i s< rbp.d)
        
        if (not(zmm6_1 <= zmm7_1))
            int64_t rcx_6 = sx.q(i_1) * 9
            int64_t rax_3 = arg1[3]
            int64_t rbx_1 =
                sx.q(sub_141fda810(arg1, *(rax_3 + (rcx_6 << 2)), rax_3 + 4 + (rcx_6 << 2)))
            *(*arg1 + rbx_1 * 0x50 + 0x4c) = 3
            sub_14209c860(arg1, rbx_1.d)
            
            if (rbx_1.d s> 0)
                sub_14209c860(arg1, (rbx_1 - 1).d)
            
            if (rbx_1.d s< arg1[1].d - 1)
                sub_14209c860(arg1, (rbx_1 + 1).d)
            
            int32_t i_2
            
            if (i_1 - r13.d s>= 2)
                int64_t rsi_3 = sx.q(arg1[6].d)
                i_2 = i_1
                int32_t rax_9 = (rsi_3 + 1).d
                arg1[6].d = rax_9
                
                if (rax_9 s> *(arg1 + 0x34))
                    sub_1405a4d70(&arg1[5])
                
                *(arg1[5] + (rsi_3 << 3)) = r13.d.q
            
            result = zx.q(rbp.d - i_1)
            
            if (result.d s>= 2)
                int64_t rbx_2 = sx.q(arg1[6].d)
                i_2 = rbp.d
                int32_t rax_12 = (rbx_2 + 1).d
                arg1[6].d = rax_12
                
                if (rax_12 s> *(arg1 + 0x34))
                    sub_1405a4d70(&arg1[5])
                
                result = i_1.q
                *(arg1[5] + (rbx_2 << 3)) = result

return result
