// 函数: sub_14135e080
// 地址: 0x14135e080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(arg1[1])
int32_t temp8
int32_t temp9
temp8:temp9 = sx.q(divs.dp.d(temp2:temp3, 2))
int32_t temp14
int32_t temp15
temp14:temp15 = sx.q(divs.dp.d(temp8:temp9, 2))
int64_t r8
r8.b = mods.dp.d(temp2:temp3, 2) == 1
sub_1405d3490(arg2 + 0x2a8, u"ES2_USE_SUN", r8)
int64_t r8_1
r8_1.b = mods.dp.d(temp8:temp9, 2) == 1
sub_1405d3490(arg2 + 0x2a8, u"ES2_USE_DOF", r8_1)
int64_t r8_2
r8_2.b = mods.dp.d(temp14:temp15, 2) == 1
sub_1405d3490(arg2 + 0x2a8, u"ES2_USE_DEPTHTEXTURE", r8_2)
int32_t rsi_1 = divs.dp.d(temp14:temp15, 2) & 0x80000001

if (rsi_1 s< 0)
    rsi_1 = ((rsi_1 - 1) | 0xfffffffe) + 1

int32_t r14
r14.b = rsi_1 == 1
sub_1405d3490(arg2 + 0x2a8, u"METAL_MSAA_HDR_DECODE", zx.q(r14))
sub_1410b3fe0(arg2, u"SUBPASS_COLOR0_ATTACHMENT_DIM", 1)
int64_t rcx_5 = sx.q(*arg1)

if (((rcx_5 - 0x11).d & 0xfffffff3) != 0 || rcx_5.d == 0x19)
    int32_t* result = data_143f025c0
    int64_t rcx_6 = rcx_5 * 5
    
    if (*(&data_143f025f0 + (rcx_6 << 2)) != result || (*((rcx_6 << 2) + &data_143f025fc) & 1) == 0)
        return result

return sub_1410b3fe0(arg2, u"VULKAN_SUBPASS_DEPTHFETCH", 0)
