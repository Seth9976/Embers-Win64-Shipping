// 函数: sub_1421c79b0
// 地址: 0x1421c79b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_1421b7cc0(arg2, arg1)
void* r8 = *(arg2 + 0x18)

if (rax == 0)
    rax = r8 + 0x610

int512_t zmm1
zmm1.o = *(arg2 + 0x12c)
*(arg3 + 0x2c) = sub_141fe5610(arg1 + 0x30, zmm1, r8, rax) * 6.28318548f f+ *(arg3 + 0x2c)
return arg3
