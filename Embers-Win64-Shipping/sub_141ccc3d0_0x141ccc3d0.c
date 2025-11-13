// 函数: sub_141ccc3d0
// 地址: 0x141ccc3d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141ccda50(arg1, arg2)
(*(*arg2 + 8))(arg2, 0x30, 0x30)
(*(*arg2 + 8))(arg2, sx.q(*(arg1 + 0x30)) << 3, sx.q(*(arg1 + 0x34)) << 3)
int64_t* rbx = *(arg1 + 0x28)
int64_t rdi_1 = 0
void* result = &rbx[sx.q(*(arg1 + 0x30))]
uint64_t r15_1 = sx.q(*(arg1 + 0x30)) << 3 u>> 3

if (rbx u> result)
    r15_1 = 0

if (r15_1 != 0)
    do
        void* rsi_1 = *rbx
        
        if (rsi_1 != 0)
            (*(*arg2 + 8))(arg2, 0x48, 0x48)
            uint64_t rdx_4 = zx.q(*(rsi_1 + 8) + 7) u>> 3
            result = (*(*arg2 + 8))(arg2, rdx_4, rdx_4)
        
        rbx = &rbx[1]
        rdi_1 += 1
    while (rdi_1 != r15_1)

return result
