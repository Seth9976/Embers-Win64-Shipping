// 函数: sub_141bdb2d0
// 地址: 0x141bdb2d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(arg1[0x22].d)
int32_t rdx = 0

if (result.d s> 0)
    int64_t result_1 = result
    int64_t r8_1 = 0
    
    do
        void* rax_1
        
        if (r8_1 s>= 0 && rdx s< arg1[0x22].d)
            rax_1 = *(arg1[0x21] + (r8_1 << 3))
        
        if (r8_1 s< 0 || rdx s>= arg1[0x22].d || rax_1 == 0)
            result = 0
        else
            result = *(rax_1 + 0x30)
        
        if (result == arg2)
            if (rdx != 0xffffffff)
                return sub_141bdb330(arg1, rdx) __tailcall
            
            break
        
        rdx += 1
        r8_1 += 1
    while (r8_1 s< result_1)

result.b = 0
return result
