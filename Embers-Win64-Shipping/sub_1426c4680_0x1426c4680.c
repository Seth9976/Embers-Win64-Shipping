// 函数: sub_1426c4680
// 地址: 0x1426c4680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t r15 = result.d
int64_t zmm1

if (result.d s>= 0)
    int32_t r12_1 = ((result << 1) + 1).d
    int32_t temp2_1
    
    do
        int32_t rsi_1 = r15
        
        if (r12_1 s< arg2)
            do
                int32_t rbp_1 = rsi_1 * 2
                uint64_t rbx_1 = zx.q(rbp_1 + 1)
                int32_t rax_3 = (rbx_1 + 1).d
                
                if (rax_3 s< arg2)
                    if (sub_1426cafd0(&arg1[sx.q(rbx_1.d)], &arg1[sx.q(rax_3)]) != 0)
                        rbx_1 = zx.q(rbp_1)
                    
                    rbx_1 = zx.q(rbx_1.d + 1)
                
                int32_t* rbp_2 = &arg1[sx.q(rsi_1)]
                int64_t* rsi_2 = &arg1[sx.q(rbx_1.d)]
                result = sub_1426cafd0(rsi_2, rbp_2)
                
                if (result.b == 0)
                    break
                
                if (rbp_2 != rsi_2)
                    zmm1 = *rbp_2
                    *rbp_2 = *rsi_2
                    *rsi_2 = zmm1
                
                result = zx.q(((rbx_1 << 1) + 1).d)
                rsi_1 = rbx_1.d
            while (result.d s< arg2)
        
        r12_1 -= 2
        temp2_1 = r15
        r15 -= 1
    while (temp2_1 - 1 s>= 0)

int32_t i = arg2 - 1

if (i s> 0)
    result = sx.q(i)
    int64_t* r15_1 = &arg1[result]
    
    do
        if (arg1 != r15_1)
            zmm1 = *arg1
            *arg1 = *r15_1
            *r15_1 = zmm1
        
        int32_t rsi_3 = 0
        
        if (i s> 1)
            uint64_t rbx_2
            
            do
                int32_t rbp_3 = rsi_3 * 2
                rbx_2 = zx.q(rbp_3 + 1)
                int32_t rax_9 = (rbx_2 + 1).d
                
                if (rax_9 s< i)
                    if (sub_1426cafd0(&arg1[sx.q(rbx_2.d)], &arg1[sx.q(rax_9)]) != 0)
                        rbx_2 = zx.q(rbp_3)
                    
                    rbx_2 = zx.q(rbx_2.d + 1)
                
                int32_t* rbp_4 = &arg1[sx.q(rsi_3)]
                int32_t* rsi_4 = &arg1[sx.q(rbx_2.d)]
                result = sub_1426cafd0(rsi_4, rbp_4)
                
                if (result.b == 0)
                    break
                
                if (rbp_4 != rsi_4)
                    zmm1 = *rbp_4
                    *rbp_4 = *rsi_4
                    *rsi_4 = zmm1
                
                rsi_3 = rbx_2.d
            while (((rbx_2 << 1) + 1).d s< i)
        
        i -= 1
        r15_1 -= 8
    while (i s> 0)

return result
