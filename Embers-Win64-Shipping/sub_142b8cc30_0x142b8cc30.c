// 函数: sub_142b8cc30
// 地址: 0x142b8cc30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = *(arg1 + 0x23308)
int32_t r13 = *(arg1 + 0x23320)
int32_t rsi = *(arg1 + 0x23324)
int32_t rbx
int32_t rbp

if (arg2 != rdi)
    rbp = -1
    rbx = -1
else
    rbp = r13
    rbx = rsi

int32_t i = 0x110000
void* r14 = arg1 + 0x880

do
    int64_t rax_1 = sx.q(*(r14 - 4))
    r14 -= 4
    
    if (rax_1.d != rbp)
        rbp = rax_1.d
        
        if (rax_1.d != r13)
            int64_t j = 0x40
            void* r11_2 = arg1 + 0x980 + (rax_1 << 2)
            
            do
                int64_t rcx = sx.q(*(r11_2 - 4))
                r11_2 -= 4
                j -= 1
                
                if (rcx.d != rbx)
                    rbx = rcx.d
                    
                    if (rcx.d != rsi)
                        int64_t k = 0x20
                        int32_t* r8_2 = *(arg1 + 0x23300) + 0x80 + (rcx << 2)
                        
                        do
                            k -= 1
                            r8_2 = &r8_2[-1]
                            
                            if (*r8_2 != arg2)
                                return zx.q(i)
                            
                            i -= 1
                        while (k s> 0)
                    else
                        if (arg2 != rdi)
                            return zx.q(i)
                        
                        i -= 0x20
                else
                    i -= 0x20
            while (j s> 0)
        else
            if (arg2 != rdi)
                return zx.q(i)
            
            i -= 0x800
    else
        i -= 0x800
while (i s> 0)

return 0
