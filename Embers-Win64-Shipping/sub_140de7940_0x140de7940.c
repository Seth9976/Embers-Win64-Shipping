// 函数: sub_140de7940
// 地址: 0x140de7940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x40)
int64_t rbx = sx.q(rcx[1].d)
int32_t rax = (rbx + 1).d
rcx[1].d = rax

if (rax s> *(rcx + 0xc))
    sub_1405c4ec0(rcx)

int64_t* result = *(arg1 + 0x40)
int64_t rdx_1 = rbx * 5
int64_t rcx_1 = *result
*(rcx_1 + (rdx_1 << 3)) = *arg2
*(rcx_1 + (rdx_1 << 3) + 0x10) = arg2[1]
*(rcx_1 + (rdx_1 << 3) + 0x20) = arg2[2].q
*(arg1 + 0x64) += 1
return result
