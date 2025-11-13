// 函数: sub_1419d2c80
// 地址: 0x1419d2c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(*(arg1 + 4))
int64_t r8
r8.b = mods.dp.d(temp2:temp3, 2) == 1
sub_1405d3490(arg2 + 0x2a8, u"FLOAT4_BUFFER", r8)
int32_t rbx_1 = divs.dp.d(temp2:temp3, 2) & 0x80000001

if (rbx_1 s< 0)
    rbx_1 = ((rbx_1 - 1) | 0xfffffffe) + 1

int32_t rsi
rsi.b = rbx_1 == 1
sub_1405d3490(arg2 + 0x2a8, u"UINT4_ALIGNED", zx.q(rsi))
return sub_1405d3490(arg2 + 0x2a8, u"FLOAT4_TEXTURE", 0) __tailcall
