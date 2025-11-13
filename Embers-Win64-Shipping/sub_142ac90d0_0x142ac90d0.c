// 函数: sub_142ac90d0
// 地址: 0x142ac90d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct icu_64::UObject::icu_64::UVector::VTable*** rdi = arg1 + 0x4f0
void* rsi = arg1 + 0x280

for (int32_t i = 0; i s< 6; )
    if (i u<= 5)
        int32_t rdx
        
        switch (i)
            case 0, 2
                rdx = 1
            case 1, 3
                rdx = 2
            case 4, 5
                rdx = 0
        
        *rdi = sub_142acba70(rsi, rdx, arg2)
    
    i += 1
    rsi += 0x40
    rdi = &rdi[1]

return sub_142ac7950(arg1) __tailcall
