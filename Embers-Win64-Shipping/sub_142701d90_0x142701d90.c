// 函数: sub_142701d90
// 地址: 0x142701d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = *(arg2 + 0x38)
int512_t result

if (arg1[1].d != *(arg1 + 0x34))
    void* r8_1 = arg1[8]
    void* r9_1 = &arg1[7]
    
    if (r8_1 != 0)
        r9_1 = r8_1
    
    int32_t i = *(r9_1 + ((sx.q((r10 u>> 0x20).d * 0x17 + r10.d) & (sx.q(arg1[9].d) - 1)) << 2))
    
    if (i != 0xffffffff)
        int64_t r8_2 = *arg1
        
        do
            int64_t i_1 = sx.q(i)
            int64_t rcx_3 = i_1 * 0x12
            
            if (*(r8_2 + (rcx_3 << 3)) == r10)
                if (i != 0xffffffff)
                    int64_t rax_5 = i_1 * 0x90
                    
                    if (rax_5 != neg.q(r8_2))
                        result.o = *(rax_5 + r8_2 + 0x14)
                        return result
                
                break
            
            i = *(r8_2 + (rcx_3 << 3) + 0x88)
        while (i != 0xffffffff)

result.o = 0x7f7fc99e
return result
