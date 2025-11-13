// 函数: sub_141944880
// 地址: 0x141944880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x28)
int32_t rcx = 0
void*** r9 = rax
int32_t r10 = 0x1b02

if (rax == 0)
    r9 = nullptr
else
    *r9 = &data_142d3ff08
    r9[1].d = 0
    *r9 = &data_142ff7568
    *(r9 + 0xc) = 0
    r9[2].w = 0x100
    r9[3] = 0x1b02
    r9[4] = 0

uint32_t rdx = zx.d(arg3[1])

if (rdx == 1)
    rcx.b = data_143efbce0 != 0
    rcx += 0x404
else if (rdx == 2)
    rcx = sbb.d(0, 0, data_143efbce0 != 0) + 0x405

*(r9 + 0x1c) = rcx
uint32_t rcx_2 = zx.d(*arg3)

if (rcx_2 == 0)
    r10 = 0x1b00
else if (rcx_2 == 1)
    r10 = 0x1b01

r9[3].d = r10
r9[4].d = *(arg3 + 4)
*(r9 + 0x24) = *(arg3 + 8)
*arg2 = r9
r9[1].d += 1
return arg2
