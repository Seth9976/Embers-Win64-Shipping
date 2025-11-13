// 函数: sub_142c40440
// 地址: 0x142c40440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142c418e0(arg1, arg2, arg3)
uint64_t result = sub_142c41210(arg1, arg2, arg3)
int32_t rbp = *(arg3 + 0x60)
int32_t r10 = 0

if (rbp != 0)
    void* r8_1 = *(arg3 + 0x70)
    uint64_t rbx_1 = 0
    
    do
        rbx_1 = zx.q(rbx_1.d + 1)
        
        if (rbx_1.d u>= rbp)
            break
    while (*(r8_1 + 0xf) == *(r8_1 + rbx_1 * 0x14 + 0xf))
    
    if (rbp != 0)
        do
            int32_t rax_2 = zx.d(*(r8_1 + zx.q(r10) * 0x14 + 0xf)) & 0xf
            
            if (rax_2 u<= 1)
                result = sub_142c40550(arg1, *(arg2 + 0x18), arg3, r10, rbx_1.d)
            else
                result = zx.q(rax_2 - 2)
                
                if ((result.d & 0xfffffffd) == 0)
                    if (*(*(arg1 + 0x98) + 9) == 0)
                        result = sub_142c40550(arg1, *(arg2 + 0x18), arg3, r10, rbx_1.d)
                    else
                        result = zx.q((rbx_1 - 1).d) * 5
                        
                        if (*(r8_1 + (result << 2) + 0x12) != 0xc)
                            result = sub_142c40550(arg1, *(arg2 + 0x18), arg3, r10, rbx_1.d)
            
            r8_1 = *(arg3 + 0x70)
            r10 = rbx_1.d
            char i = *(r8_1 + rbx_1 * 0x14 + 0xf)
            
            do
                rbx_1 = zx.q(rbx_1.d + 1)
                
                if (rbx_1.d u>= *(arg3 + 0x60))
                    break
            while (i == *(r8_1 + rbx_1 * 0x14 + 0xf))
        while (r10 u< rbp)

return result
