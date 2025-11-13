// 函数: sub_142a53450
// 地址: 0x142a53450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx_2 = sx.q(arg1)
int32_t rcx

if (rdx_2.d u< 0xd800)
    rcx = (rdx_2.d & 0x1f) + (zx.d(*((rdx_2 s>> 5 << 1) + &data_143614790)) << 2)
else if (rdx_2.d u<= 0xffff)
    int32_t rcx_1 = 0
    
    if (rdx_2.d s<= 0xdbff)
        rcx_1 = 0x140
    
    rcx =
        (rdx_2.d & 0x1f) + (zx.q(*((sx.q((rdx_2.d s>> 5) + rcx_1) << 1) + &data_143614790)) << 2).d
else if (rdx_2.d u> 0x10ffff)
    rcx = 0xd58
else if (rdx_2.d s< 0xe0800)
    rcx = (rdx_2.d & 0x1f) + (zx.q(*((zx.q(
        zx.d(*((sx.q((rdx_2.d s>> 0xb) + 0x820) << 1) + &data_143614790)) + (rdx_2.d s>> 5 & 0x3f))
        << 1) + &data_143614790)) << 2).d
else
    rcx = 0x2fd0

int16_t rcx_5 = *((zx.q(rcx) << 1) + &data_143614790)

if ((rcx_5.b & 8) != 0)
    uint16_t result
    result.b = (*((zx.q(rcx_5) u>> 4 << 1) + &data_14361a740) u>> 0xb).b & 1
    return result

rcx_5.b u>>= 4
rcx_5.b &= 1
return zx.q(rcx_5.b)
