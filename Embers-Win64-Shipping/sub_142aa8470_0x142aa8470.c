// 函数: sub_142aa8470
// 地址: 0x142aa8470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = 0
int32_t rdx = **(arg1 + 8)
int64_t r8_1 = 0
int64_t rax = 0

do
    if (rdx == 0x7fffffff || (*(rax + 0x1436502a8) & rdx) == rdx)
        rcx += 1
    
    r8_1 += 1
    rax = r8_1 << 4
while (*(rax + &data_1436502a0) != 0)

return zx.q(rcx)
