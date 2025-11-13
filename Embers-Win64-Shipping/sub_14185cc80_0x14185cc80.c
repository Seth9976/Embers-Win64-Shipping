// 函数: sub_14185cc80
// 地址: 0x14185cc80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t r13 = result.d
int128_t zmm1

if (result.d s>= 0)
    result = zx.q(((result << 1) + 1).d)
    int32_t result_1 = result.d
    int32_t temp2_1
    
    do
        int32_t r14_1 = r13
        
        if (result.d s< arg2)
            uint64_t rsi_1
            
            do
                int32_t rbp_1 = r14_1 * 2
                rsi_1 = zx.q(rbp_1 + 1)
                int32_t rax_3 = (rsi_1 + 1).d
                
                if (rax_3 s< arg2)
                    int32_t rax_4 = sub_1418874f0(arg3, &arg1[sx.q(rax_3)])
                    
                    if (sub_1418874f0(arg3, &arg1[sx.q(rsi_1.d)]) s< rax_4)
                        rsi_1 = zx.q(rbp_1)
                    
                    rsi_1 = zx.q(rsi_1.d + 1)
                
                int32_t* r14_4 = &arg1[sx.q(r14_1)]
                int32_t rax_6 = sub_1418874f0(arg3, r14_4)
                int32_t* rbp_4 = &arg1[sx.q(rsi_1.d)]
                
                if (sub_1418874f0(arg3, rbp_4) s>= rax_6)
                    break
                
                if (r14_4 != rbp_4)
                    zmm1 = *r14_4
                    *r14_4 = *rbp_4
                    *rbp_4 = zmm1
                
                r14_1 = rsi_1.d
            while (((rsi_1 << 1) + 1).d s< arg2)
            result = zx.q(result_1)
        
        result = zx.q(result.d - 2)
        temp2_1 = r13
        r13 -= 1
        result_1 = result.d
    while (temp2_1 - 1 s>= 0)

int32_t i = arg2 - 1

if (i s> 0)
    int128_t* r13_3 = &arg1[sx.q(i)]
    
    do
        if (arg1 != r13_3)
            zmm1 = *arg1
            *arg1 = *r13_3
            *r13_3 = zmm1
        
        int32_t r14_5 = 0
        
        if (i s> 1)
            uint64_t rdi_3
            
            do
                int32_t rbp_5 = r14_5 * 2
                rdi_3 = zx.q(rbp_5 + 1)
                int32_t rax_9 = (rdi_3 + 1).d
                
                if (rax_9 s< i)
                    int32_t rax_10 = sub_1418874f0(arg3, &arg1[sx.q(rax_9)])
                    
                    if (sub_1418874f0(arg3, &arg1[sx.q(rdi_3.d)]) s< rax_10)
                        rdi_3 = zx.q(rbp_5)
                    
                    rdi_3 = zx.q(rdi_3.d + 1)
                
                int32_t* r14_8 = &arg1[sx.q(r14_5)]
                int32_t rax_12 = sub_1418874f0(arg3, r14_8)
                int32_t* rbp_8 = &arg1[sx.q(rdi_3.d)]
                result = sub_1418874f0(arg3, rbp_8)
                
                if (result.d s>= rax_12)
                    break
                
                if (r14_8 != rbp_8)
                    zmm1 = *r14_8
                    *r14_8 = *rbp_8
                    *rbp_8 = zmm1
                
                r14_5 = rdi_3.d
            while (((rdi_3 << 1) + 1).d s< i)
        
        i -= 1
        r13_3 -= 0x10
    while (i s> 0)

return result
