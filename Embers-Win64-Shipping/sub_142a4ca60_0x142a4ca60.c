// 函数: sub_142a4ca60
// 地址: 0x142a4ca60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = arg3 - arg2
uint32_t rax_1

do
    rax_1 = zx.d(*arg2)
    char temp0_1 = *(arg2 + r8)
    
    if (rax_1.b != temp0_1)
        return zx.q(sbb.d(rax_1, rax_1, rax_1.b u< temp0_1)) | 1
    
    arg2 = &arg2[1]
while (rax_1.b != 0)
return 0
