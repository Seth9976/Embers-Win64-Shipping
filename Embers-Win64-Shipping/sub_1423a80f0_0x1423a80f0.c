// 函数: sub_1423a80f0
// 地址: 0x1423a80f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(*(arg1 + 0x18))

if (rbx.d s>= *(arg1 + 0x1c))
    return 

int64_t r14_1 = rbx << 3

do
    void* rdi_1 = *(arg1 + 0x10)
    
    if (rbx.d s>= 0 && rbx.d s< *(rdi_1 + 0x130))
        void* rsi_1 = *(r14_1 + *(rdi_1 + 0x128))
        
        if (rsi_1 != 0)
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(rbx.d)
            int64_t r15_2 = sx.q((temp1_1 + (temp0_1 & 3)) s>> 2) * 0x3c + (zx.q(rbx.d) & 3)
            *(*(rdi_1 + 0x10) + (r15_2 << 2) + 0xe0) = *(rsi_1 + 0x270)
            void* rax = sub_141f15610(rsi_1)
            
            if (rax != 0)
                float zmm1 = *(rsi_1 + 0x100) f- *(rax + 0x100)
                float zmm0 = *(rsi_1 + 0x108) f- *(rax + 0x108)
                float zmm2 = *(rsi_1 + 0x104) f- *(rax + 0x104)
                zmm2 = zmm2 * zmm2 + zmm1 * zmm1 + zmm0 * zmm0
                zmm0 = *(rax + 0x1f8) f+ *(rax + 0x118)
                rax = *(rdi_1 + 0x10)
                zmm1 = _mm_sqrt_ss(0, zmm2) + zmm0
                *(rax + (r15_2 << 2) + 0xd0) = zmm1 * zmm1
    
    rbx = zx.q(rbx.d + 1)
    r14_1 += 8
while (rbx.d s< *(arg1 + 0x1c))
