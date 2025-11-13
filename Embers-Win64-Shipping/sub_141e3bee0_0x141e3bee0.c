// 函数: sub_141e3bee0
// 地址: 0x141e3bee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *arg1
int64_t result = sx.q(arg1[1].d)
void* rbp = rbx + result * 0xc

if (rbx != rbp)
    int128_t zmm6
    int128_t var_18_1 = zmm6
    
    do
        zmm6 = rbx[1].d
        
        if (not(zmm6.d f< arg2.d) && not(zmm6.d f>= arg3.d))
            int64_t rsi_1 = sx.q(arg4[1].d)
            zmm6.d = zmm6.d f- arg2.d
            int32_t rax = (rsi_1 + 1).d
            arg4[1].d = rax
            
            if (rax s> *(arg4 + 0xc))
                sub_14083a7e0(arg4)
            
            int64_t rax_1 = *arg4
            int64_t rdx_2 = rsi_1 * 3
            *(rax_1 + (rdx_2 << 2)) = 0
            *(rax_1 + (rdx_2 << 2) + 8) = 0
            int64_t zmm0
            zmm0.d = arg5.q.d f- zmm6.d
            *(*arg4 + (rdx_2 << 2)) = *rbx
            result = *arg4
            *(result + (rdx_2 << 2) + 8) = zmm0.d
        
        rbx += 0xc
    while (rbx != rbp)

return result
