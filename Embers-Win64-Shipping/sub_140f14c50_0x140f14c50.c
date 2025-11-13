// 函数: sub_140f14c50
// 地址: 0x140f14c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = sx.q(*arg2)
int32_t r10 = 0
void* r8_1 = r9 * 0x70 + *(arg1 + 0x18)
int64_t rax = sx.q(*(r8_1 + 0x60))

if (rax.d s> 0)
    int32_t* rax_1 = *(r8_1 + 0x58)
    int64_t r8_2 = 0
    
    while (*rax_1 != r9.d || rax_1[1] != arg2[1] || rax_1[2] != arg2[2] || rax_1[3] != arg2[3]
            || *(rax_1 + 0x10) != *(arg2 + 0x10))
        r10 += 1
        r8_2 += 1
        rax_1 = &rax_1[8]
        
        if (r8_2 s>= rax)
            return rax_1
    
    rax = sub_140dbab60(r8_1 + 0x58, r10, 1, 0)
    *(arg1 + 0x88) |= 2

return rax
