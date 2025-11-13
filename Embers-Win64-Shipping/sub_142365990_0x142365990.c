// 函数: sub_142365990
// 地址: 0x142365990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = 0
int64_t* rdi = *(arg1 + 0x28)
float zmm6[0x4] = zx.o(0)
void* result = &rdi[sx.q(*(arg1 + 0x30))]
uint64_t r14_1 = sx.q(*(arg1 + 0x30)) << 3 u>> 3

if (rdi u> result)
    r14_1 = 0

if (r14_1 != 0)
    do
        int64_t* rbx_1 = *rdi
        
        if (rbx_1 != 0)
            float zmm0[0x4] = sub_140cd85e0(rbx_1)
            result = (*(*rbx_1 + 0x268))(rbx_1)
            zmm6 = _mm_max_ss(zmm0[0], zmm6[0])
        
        rdi = &rdi[1]
        rsi += 1
    while (rsi != r14_1)

return result
