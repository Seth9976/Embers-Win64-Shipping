// 函数: sub_142ba94e0
// 地址: 0x142ba94e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = (*(arg1 + 0x350))()
int32_t rsi = *arg2
int32_t rdi_1 = 1
int64_t result

if (rsi u>= 1)
    do
        int32_t r8_1 = *(arg1 + 0x30)
        
        if (r8_1 s< 2)
            if (*(arg1 + 0x315) != 0)
                *(arg1 + 0x18) = 0x81
            
            *(arg1 + 0x30) = 0
            break
        
        int64_t rdx = *(arg1 + 0x28)
        *(arg1 + 0x30) = r8_1 - 2
        result = sx.q(r8_1 - 2)
        int32_t r9_1 = *(rdx + (sx.q(r8_1 - 1) << 2))
        int32_t r8_3 = *(rdx + (result << 2))
        
        if (r9_1 u< *(arg1 + 0x224))
            uint32_t rdx_1 = zx.d(*(arg1 + 0x218))
            int32_t rcx_3 = r8_3 u>> 4 & 0xf
            
            if (rdx_1 == 0x74)
                rcx_3 += 0x10
            else if (rdx_1 == 0x75)
                rcx_3 += 0x20
            
            if (rax == zx.d(*(arg1 + 0x1f0)) + rcx_3)
                int32_t r8_5 = (r8_3 & 0xf) - 7
                
                if ((r8_3 & 0xf) - 8 s< 0)
                    r8_5 = (r8_3 & 0xf) - 8
                
                (*(arg1 + 0x368))(arg1, zx.q(r9_1), zx.q(r8_5 << (6 - (*(arg1 + 0x1f2)).b)))
        else if (*(arg1 + 0x315) != 0)
            *(arg1 + 0x18) = 0x86
            return result
        
        rdi_1 += 1
    while (rdi_1 u<= rsi)

result = zx.q(*(arg1 + 0x30))
*(arg1 + 0x34) = result.d
return result
