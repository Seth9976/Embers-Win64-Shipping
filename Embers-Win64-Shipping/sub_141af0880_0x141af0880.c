// 函数: sub_141af0880
// 地址: 0x141af0880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t r12 = result.d
int128_t zmm1

if (result.d s>= 0)
    int32_t r13_1 = ((result << 1) + 1).d
    int32_t temp2_1
    
    do
        int32_t r14_1 = r12
        
        if (r13_1 s< arg2)
            do
                int32_t rsi_1 = r14_1 * 2
                uint64_t rbx_1 = zx.q(rsi_1 + 1)
                int32_t rax_3 = (rbx_1 + 1).d
                
                if (rax_3 s< arg2)
                    if (arg4(&arg1[sx.q(rax_3)], &arg1[sx.q(rbx_1.d)]) != 0)
                        rbx_1 = zx.q(rsi_1)
                    
                    rbx_1 = zx.q(rbx_1.d + 1)
                
                int128_t* rsi_4 = &arg1[sx.q(rbx_1.d)]
                int128_t* rbp_3 = &arg1[sx.q(r14_1)]
                result = arg4(rbp_3, rsi_4)
                
                if (result.b == 0)
                    break
                
                if (rbp_3 != rsi_4)
                    zmm1 = *rbp_3
                    *rbp_3 = *rsi_4
                    *rsi_4 = zmm1
                
                result = zx.q(((rbx_1 << 1) + 1).d)
                r14_1 = rbx_1.d
            while (result.d s< arg2)
        
        r13_1 -= 2
        temp2_1 = r12
        r12 -= 1
    while (temp2_1 - 1 s>= 0)

int32_t i = arg2 - 1

if (i s> 0)
    int128_t* r12_3 = &arg1[sx.q(i)]
    
    do
        if (arg1 != r12_3)
            zmm1 = *arg1
            *arg1 = *r12_3
            *r12_3 = zmm1
        
        int32_t r15_1 = 0
        
        if (i s> 1)
            uint64_t rbx_2
            
            do
                int32_t rsi_5 = r15_1 * 2
                rbx_2 = zx.q(rsi_5 + 1)
                int32_t rax_5 = (rbx_2 + 1).d
                
                if (rax_5 s< i)
                    if (arg4(&arg1[sx.q(rax_5)], &arg1[sx.q(rbx_2.d)]) != 0)
                        rbx_2 = zx.q(rsi_5)
                    
                    rbx_2 = zx.q(rbx_2.d + 1)
                
                void* rsi_8 = &arg1[sx.q(rbx_2.d)]
                void* rbp_6 = &arg1[sx.q(r15_1)]
                result = arg4(rbp_6, rsi_8)
                
                if (result.b == 0)
                    break
                
                if (rbp_6 != rsi_8)
                    zmm1 = *rbp_6
                    *rbp_6 = *rsi_8
                    *rsi_8 = zmm1
                
                r15_1 = rbx_2.d
            while (((rbx_2 << 1) + 1).d s< i)
        
        i -= 1
        r12_3 -= 0x10
    while (i s> 0)

return result
