// 函数: sub_141458f90
// 地址: 0x141458f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = data_143ed57bc
int128_t zmm9

if (rcx == 0)
    zmm9 = data_1439b6dc8
else
    zmm9 = zx.o(0)

int128_t zmm6
zmm6.d = data_143a30378:8.d.d f* arg4.d

if ((*(*arg1 + 0x2c) & 0x40000) == 0)
    goto label_141459025

int64_t* rcx_1 = *(arg5 + 8)
void* result = (*(*rcx_1 + 0x108))(rcx_1)

if (result.b != 0)
    rcx = data_143ed57bc
label_141459025:
    float zmm0 = zmm6.d f+ zmm9.d
    int128_t zmm7
    
    if (not(arg2.d f> zmm0 * zmm0))
        zmm7.d = arg3.d f* arg3.d
    
    if (arg2.d f> zmm0 * zmm0 || arg2.d f< zmm7.d)
        result.b = 1
    else
        zmm0 = zmm6.d f* zmm6.d
        zmm6.d = zmm6.d f- zmm9.d
        int64_t r13
        r13.b = arg2.d f> zmm0
        int64_t r12
        r12.b = 0
        
        if (rcx == 0)
            zmm6.d = zmm6.d f* zmm6.d
            
            if (not(arg2.d f<= zmm6.d) && arg1[1] != 0 && (*(arg1 + 0x497c) & 0x40) == 0)
                int64_t* rcx_2 = *(arg5 + 8)
                
                if ((*(*rcx_2 + 0xd8))(rcx_2).b != 0)
                    int64_t rbp_1 = sx.q(*(arg5 + 0x110))
                    void* result_2 = &arg1[0x2bf]
                    int32_t rsi_1 = 1 << (rbp_1.b & 0x1f)
                    void* result_1 = *(result_2 + 0x10)
                    int64_t r15_1 = rbp_1 s>> 5 << 2
                    result = result_2
                    
                    if (result_1 != 0)
                        result = result_1
                    
                    if ((*(result + r15_1) & rsi_1) == 0)
                        void* rax_4 = sub_141438090(arg1[1] + 0x268, *(arg5 + 0x10), arg5 + 0x10)
                        sub_141464a90(rax_4, arg1, r13.b ^ 1)
                        int64_t r8_3 = *(rax_4 + 8)
                        int32_t temp0_1
                        int32_t temp1_1
                        temp0_1:temp1_1 = sx.q(rbp_1.d)
                        r12.b = r8_3 != 0
                        *(arg1[0x2c3] + (rbp_1 << 3)) = r8_3
                        void* r14_1 = &arg1[0x2c5]
                        void* rcx_9 = *(r14_1 + 0x10)
                        
                        if (rcx_9 != 0)
                            r14_1 = rcx_9
                        
                        int64_t rdx_5 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                        int32_t rcx_10 = *(r14_1 + (rdx_5 << 2))
                        int32_t rax_10
                        
                        if (r8_3 == 0)
                            rax_10 = not.d(rsi_1) & rcx_10
                        else
                            rax_10 = rsi_1 | rcx_10
                        
                        *(r14_1 + (rdx_5 << 2)) = rax_10
                        result = *(result_2 + 0x10)
                        
                        if (result != 0)
                            result_2 = result
                        
                        *(result_2 + r15_1) |= rsi_1
        
        if (r13.b == 0 || r12.b != 0)
            result.b = 0
        else
            result.b = 1

return result
