// 函数: sub_140eaf0e0
// 地址: 0x140eaf0e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = sx.q(*(arg1 + 0x3c0))
int64_t r10 = 0
int32_t result = (zx.o(0)).d

if (rdx s>= 4)
    void* r8_2 = *(arg1 + 0x3b8) + 0x20
    int64_t i_3 = ((rdx - 4) u>> 2) + 1
    r10 = i_3 << 2
    int64_t i
    
    do
        result =
            result f+ *(*(r8_2 - 0x20) + 0x3a0) f+ *(*(r8_2 - 0x10) + 0x3a0) f+ *(*r8_2 + 0x3a0)
        void* rax_4 = *(r8_2 + 0x10)
        r8_2 += 0x40
        result = result f+ *(rax_4 + 0x3a0)
        i = i_3
        i_3 -= 1
    while (i != 1)

if (r10 s< rdx)
    void** rcx_2 = (r10 << 4) + *(arg1 + 0x3b8)
    int64_t i_2 = rdx - r10
    int64_t i_1
    
    do
        void* rax_5 = *rcx_2
        rcx_2 = &rcx_2[2]
        result = result f+ *(rax_5 + 0x3a0)
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

return result
