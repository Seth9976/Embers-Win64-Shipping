// 函数: sub_14135e990
// 地址: 0x14135e990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char temp0
int32_t temp1
temp0:temp1 = sx.q(arg1[1])
uint32_t rdx_1 = zx.d(temp0)
int32_t rax_2 = temp1 + rdx_1
int32_t r9_1 = rax_2 s>> 8
char var_28
sub_141356d10(&var_28, zx.d(rax_2.b) - rdx_1)
int32_t rcx_2 = r9_1 & 0x80000001

if (rcx_2 s< 0)
    rcx_2 = ((rcx_2 - 1) | 0xfffffffe) + 1

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(r9_1)
int32_t rax_8 = (temp3 - temp2) s>> 1
int32_t rcx_6 = rax_8 & 0x80000001

if (rcx_6 s< 0)
    rcx_6 = ((rcx_6 - 1) | 0xfffffffe) + 1

int32_t temp4
int32_t temp5
temp4:temp5 = sx.q(rax_8)
sub_14135d770(&var_28, arg2)
sub_1405d3490(arg2 + 0x2a8, u"USE_COLOR_FRINGE", zx.q(rcx_2 == 1))
sub_1405d3490(arg2 + 0x2a8, u"USE_GRAIN_QUANTIZATION", zx.q(rcx_6 == 1))
sub_1410b3fe0(arg2, u"DIM_OUTPUT_DEVICE", zx.q(((temp5 - temp4) s>> 1) s% 0xa))
int64_t r8_5
r8_5.b = sub_14131a9e0(*arg1) != 0
return sub_1410b3fe0(arg2, u"USE_VOLUME_LUT", r8_5) __tailcall
