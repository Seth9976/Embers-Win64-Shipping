// 函数: sub_140405e10
// 地址: 0x140405e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_20 = arg4
int64_t r14 = *(arg1 + 0x20)
int64_t rsi = sx.q(arg5)
int64_t result = sx.q(*(arg1 + 0x30) * arg7)
int64_t rcx = sx.q(arg6)
int64_t r15 = 0
int64_t result_1 = result
int64_t rdi = 0

do
    int64_t r10_1 = 0
    
    if (rsi s> 0)
        int32_t* r11_1 = arg4 + ((sx.q(*(arg1 + 8)) * r15) << 2)
        
        do
            int64_t r9 = sx.q(sx.d(*(r14 + (r10_1 << 1))) * arg7)
            float zmm2 = 1f / (*r11_1 + 1.00000003e-27f)
            int64_t rdx = sx.q(sx.d(*(r14 + (r10_1 << 1) + 2)) * arg7)
            
            if (r9 s< rdx)
                if (rdx - r9 s>= 4)
                    void* rcx_1 = arg3 + ((r9 + 1 + rdi) << 2)
                    int64_t rax_13 = arg2 - arg3
                    int64_t i_3 = ((rdx - r9 - 4) u>> 2) + 1
                    r9 += i_3 << 2
                    int64_t i
                    
                    do
                        rcx_1 += 0x10
                        float zmm1 = zmm2 f* *(rax_13 + rcx_1 - 0x10)
                        *(rcx_1 - 0x14) = zmm2 f* *(rax_13 + rcx_1 - 0x14)
                        *(rcx_1 - 0x10) = zmm1
                        zmm1 = zmm2 f* *(rax_13 + rcx_1 - 8)
                        *(rcx_1 - 0xc) = zmm2 f* *(rax_13 + rcx_1 - 0xc)
                        *(rcx_1 - 8) = zmm1
                        i = i_3
                        i_3 -= 1
                    while (i != 1)
                
                if (r9 s< rdx)
                    void* rcx_2 = arg3 + ((rdi + r9) << 2)
                    int64_t i_2 = rdx - r9
                    int64_t i_1
                    
                    do
                        rcx_2 += 4
                        *(rcx_2 - 4) = zmm2 f* *(arg2 - arg3 + rcx_2 - 4)
                        i_1 = i_2
                        i_2 -= 1
                    while (i_1 != 1)
            
            r10_1 += 1
            r11_1 = &r11_1[1]
        while (r10_1 s< rsi)
        
        result = result_1
        rcx = sx.q(arg6)
        arg4 = arg_20
    
    r15 += 1
    rdi += result
while (r15 s< rcx)

return result
