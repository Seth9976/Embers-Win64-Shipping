// 函数: sub_1421ced70
// 地址: 0x1421ced70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg2 + 0x118)
int64_t rbp = *(arg2 + 0xf0)
int32_t result = rax - 1
int32_t r14 = *(arg2 + 0x114)
int64_t r15 = *(arg2 + 0xf8)
int64_t result_1 = sx.q(result)

if (rax - 1 s>= 0)
    int64_t result_2
    
    do
        void* rbx_3 = zx.q(zx.d(*(r15 + (result_1 << 1))) * r14) + rbp
        
        if ((*(rbx_3 + 0x5c) & 0x4000000) == 0)
            int512_t zmm1
            zmm1.o = *(rbx_3 + 0xc)
            float zmm0_1
            zmm0_1, result, zmm1 = sub_141fe5610(arg1 + 0x30, zmm1, *(arg2 + 0x18), nullptr)
            *(rbx_3 + 0x4c) = zmm0_1 f* *(rbx_3 + 0x4c)
        
        result_2 = result_1
        result_1 -= 1
    while (result_2 - 1 s>= 0)

return result
