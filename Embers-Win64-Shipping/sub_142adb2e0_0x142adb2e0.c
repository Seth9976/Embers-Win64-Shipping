// 函数: sub_142adb2e0
// 地址: 0x142adb2e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x318) = 0
*(arg1 + 0x31a) = 0
int16_t rax = *(arg1 + 0x168)
int32_t result

if (rax s< 0)
    result = *(arg1 + 0x16c)
else
    result = sx.d(rax) s>> 5

int32_t r9 = 0
int64_t result_1 = sx.q(result)
bool r10 = false
int64_t r8 = 0

if (result s> 0)
    do
        int16_t rdx_1 = *(arg1 + 0x168)
        int32_t rax_3
        
        if (rdx_1 s< 0)
            rax_3 = *(arg1 + 0x16c)
        else
            rax_3 = sx.d(rdx_1) s>> 5
        
        if (r9 u>= rax_3)
            result = 0xffff
        else
            void* rax_4 = arg1 + 0x16a
            
            if ((rdx_1.b & 2) == 0)
                rax_4 = *(arg1 + 0x178)
            
            result = zx.d(*(rax_4 + (r8 << 1)))
            
            if (result.w == 0x27)
                r10 = r10 == 0
            else if (result.w == 0x5e74)
                *(arg1 + 0x31a) = 1
        
        if (r10 == 0)
            if (result.w == 0x6d)
                *(arg1 + 0x318) = 1
            else if (result.w == 0x73)
                *(arg1 + 0x319) = 1
        
        r9 += 1
        r8 += 1
    while (r8 s< result_1)

return result
