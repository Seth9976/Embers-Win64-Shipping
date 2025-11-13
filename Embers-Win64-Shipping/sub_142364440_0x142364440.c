// 函数: sub_142364440
// 地址: 0x142364440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = 0
int64_t* rbx = *(arg1 + 0x28)
float zmm6[0x4] = zx.o(0)
void* result = &rbx[sx.q(*(arg1 + 0x30))]
uint64_t rsi_1 = sx.q(*(arg1 + 0x30)) << 3 u>> 3

if (rbx u> result)
    rsi_1 = 0

if (rsi_1 != 0)
    do
        int64_t* rcx = *rbx
        
        if (rcx != 0)
            result = (*(*rcx + 0x278))(rcx)
            arg2 = _mm_max_ss(arg2[0], zmm6[0])
            zmm6 = arg2
        
        rbx = &rbx[1]
        rdi += 1
    while (rdi != rsi_1)

return result
