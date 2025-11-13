// 函数: sub_1426b6270
// 地址: 0x1426b6270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg3)
uint64_t result = sub_1426b0430(arg1, arg2)

if (result.d s>= 0 && result.d s< *(arg1 + 0x118))
    int64_t* rcx = *(arg1 + 0x110)
    result = rcx[sx.q(result.d) * 0xb + 1]
    
    if (result != 0)
        if (arg2 == rcx[sx.q(result.d) * 0xb] || arg2 == result)
            result.b = 1
            return result
        
        int16_t r8_1 = *(result + 0x50)
        int32_t rax_1 = (rsi + 1).d
        void* rdx = *(arg2 + 0x48)
        
        if (rax_1 s< 0 || rax_1 s>= *(rdx + 0x60))
            result.w = *(rdx + 0x8c) + 1
        else
            int64_t* r9_3 = (rsi + 1) * 0x30 + *(rdx + 0x58)
            void* rax_3 = *r9_3
            
            if (rax_3 != 0)
                result = zx.q(*(rax_3 + 0x50))
            else
                rax_3 = r9_3[1]
                
                if (rax_3 == 0)
                    result.w = *(rdx + 0x8c) + 1
                else
                    result = zx.q(*(rax_3 + 0x50))
        
        if (r8_1 u>= *(arg2 + 0x50) && r8_1 u< result.w)
            result.b = 1
            return result

result.b = 0
return result
