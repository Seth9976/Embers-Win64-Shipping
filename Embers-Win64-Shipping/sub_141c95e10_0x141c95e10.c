// 函数: sub_141c95e10
// 地址: 0x141c95e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = 0
int64_t* rdi = *arg2
uint64_t result = &rdi[arg2[1]]
uint64_t r14_1 = sx.q(arg2[1].d) << 3 u>> 3

if (rdi u> result)
    r14_1 = 0

if (r14_1 != 0)
    do
        void* rsi_1 = *rdi
        uint64_t result_1 = *(rsi_1 + 0x70)
        uint64_t r9_1 = sx.q(*(rsi_1 + 0x78))
        result = result_1
        uint64_t rdx = result_1 + (r9_1 << 3)
        
        if (result_1 != rdx)
            do
                if (*result == **arg1)
                    result = (result - result_1) s>> 3
                    
                    if (result.d != 0xffffffff)
                        int32_t rcx_2 = r9_1.d - result.d - 1
                        
                        if (rcx_2 s>= 1)
                            rcx_2 = 1
                        
                        if (rcx_2 != 0)
                            memcpy(result_1 + (sx.q(result.d) << 3), 
                                result_1 + (sx.q(r9_1.d - rcx_2) << 3), rcx_2 << 3)
                            r9_1 = zx.q(*(rsi_1 + 0x78))
                        
                        result = zx.q((r9_1 - 1).d)
                        *(rsi_1 + 0x78) = result.d
                    
                    break
                
                result += 8
            while (result != rdx)
        
        rdi = &rdi[1]
        rbx += 1
    while (rbx != r14_1)

return result
