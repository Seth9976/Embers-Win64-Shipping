// 函数: sub_142312b90
// 地址: 0x142312b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(*(arg1 + 0x300))
int32_t r9 = 0

if (rax.d s> 0)
    int64_t rax_1 = 0
    
    do
        void* r8_1 = *(*(arg1 + 0x2f8) + (rax_1 << 3))
        
        if (r8_1 != 0)
            int32_t rdx_4 = (*(r8_1 + 0x44) ^ *(arg2 + 0xc)) | (*(r8_1 + 0x3c) ^ *(arg2 + 4))
                | (*(r8_1 + 0x40) ^ *(arg2 + 8)) | (*(r8_1 + 0x38) ^ *arg2)
            
            if (rdx_4 == 0)
                return zx.q(r9)
        
        r9 += 1
        rax_1 += 1
    while (rax_1 s< rax)

return 0xffffffff
