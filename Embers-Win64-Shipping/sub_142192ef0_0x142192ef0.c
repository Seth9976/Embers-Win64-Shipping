// 函数: sub_142192ef0
// 地址: 0x142192ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_6 = *(arg1 + 0x408)

if (rax_6 != 0)
    int64_t rcx = sx.q(*(rax_6 + 0x100))
    int32_t r9_1 = 0
    
    if (rcx.d s> 0)
        void* r11_1 = *(rax_6 + 0xf8)
        int64_t rcx_1 = 0
        int64_t* rax = r11_1 + 8
        
        do
            if (arg3 == *rax)
                *arg2 = *(r11_1 + sx.q(r9_1) * 0x10)
                return arg2
            
            r9_1 += 1
            rcx_1 += 1
            rax = &rax[2]
        while (rcx_1 s< rcx)

*arg2 = 0
return arg2
