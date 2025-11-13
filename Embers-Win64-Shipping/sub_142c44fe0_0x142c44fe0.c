// 函数: sub_142c44fe0
// 地址: 0x142c44fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_142c44ba0(arg1, arg2, arg3)
int32_t rdi = *(arg3 + 0x60)
int32_t r10 = 0

if (rdi != 0)
    void* r8 = *(arg3 + 0x70)
    uint64_t rbx_1 = 0
    
    do
        rbx_1 = zx.q(rbx_1.d + 1)
        
        if (rbx_1.d u>= rdi)
            break
    while (*(r8 + 0xf) == *(r8 + rbx_1 * 0x14 + 0xf))
    
    if (rdi != 0)
        do
            result = sub_142c45080(arg3, r10, rbx_1.d)
            int64_t r8_2 = *(arg3 + 0x70)
            r10 = rbx_1.d
            char i = *(r8_2 + rbx_1 * 0x14 + 0xf)
            
            do
                rbx_1 = zx.q(rbx_1.d + 1)
                
                if (rbx_1.d u>= *(arg3 + 0x60))
                    break
            while (i == *(r8_2 + rbx_1 * 0x14 + 0xf))
        while (r10 u< rdi)

return result
