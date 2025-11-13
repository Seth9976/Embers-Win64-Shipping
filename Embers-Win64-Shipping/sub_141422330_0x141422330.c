// 函数: sub_141422330
// 地址: 0x141422330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1414d6f70(*(arg1 + 0xa0))
data_143ec4e38.w = 0
void* rbp = *(arg1 + 0xa0)
int64_t result = sx.q(*(arg1 + 0xa8))
void* r15_1 = result * 0x5240 + rbp

if (rbp != r15_1)
    float* rsi_1 = rbp + 0x1228
    int128_t zmm6 = 0x3727c5ac
    
    do
        void* rbx_1 = *(rsi_1 + 0x380)
        
        if (rbx_1 != 0)
            float zmm1 = rsi_1[2]
            float zmm0 = zmm1 * rsi_1[-2]
            float zmm2 = zmm1 * rsi_1[-1]
            zmm1 = zmm1 * *rsi_1
            
            if (zmm0 * zmm0 f>= zmm6.d || zmm2 * zmm2 f>= zmm6.d || not(zmm1 * zmm1 f< zmm6.d))
                result, zmm6 = sub_14123d060(rbx_1, rbp, arg1 + 0x10)
            
            int32_t r14_1 = rsi_1[0xc8]
            int64_t rdi_1 = data_143eceb78
            int64_t rcx_3
            
            if (data_143de5480 == 0)
                rcx_3 = 0
            else
                result = GetCurrentThreadId()
                rcx_3.b = result.d != data_143de5470
            
            if (r14_1 s> 1 || *(rdi_1 + (rcx_3 << 2)) == 0)
                void* rcx_5 = rbx_1 + 0x418
                int64_t* rdx_3 = *rcx_5
                
                if (rdx_3 != 0)
                    *rcx_5 = 0
                    result, zmm6 = sub_1414153e0(rcx_5, rdx_3)
            else if (*(rbx_1 + 0x418) == 0)
                int64_t* rax = j_sub_140a82f30(0x18)
                int64_t* rbx_2 = rax
                
                if (rax == 0)
                    rbx_2 = nullptr
                else
                    __builtin_memset(rax, 0, 0x18)
                
                void arg_8
                
                if (rbx_1 + 0x418 != &arg_8)
                    int64_t* rdx_2 = *(rbx_1 + 0x418)
                    *(rbx_1 + 0x418) = rbx_2
                    rbx_2 = nullptr
                    sub_1414153e0(rbx_1 + 0x418, rdx_2)
                
                result, zmm6 = sub_1414153e0(&arg_8, rbx_2)
        
        rbp += 0x5240
        rsi_1 = &rsi_1[0x1490]
    while (rbp != r15_1)

return result
