// 函数: sub_14086a0e0
// 地址: 0x14086a0e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_20
sub_140865c40(&data_14396ff70, &arg_20, arg1)
int64_t rax = sx.q(arg_20)
void* r8_1 = nullptr
void* const rcx

if (rax.d == 0xffffffff)
    rcx = nullptr
else
    rcx = data_14396ff70 + rax * 0x18

int64_t* rax_2 = rcx + 8

if (rcx == 0)
    rax_2 = nullptr

if (rax_2 != 0)
    r8_1 = *rax_2

int512_t zmm1
zmm1.o = arg3
return sub_140867b00(r8_1)
