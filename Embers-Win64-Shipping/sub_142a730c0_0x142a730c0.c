// 函数: sub_142a730c0
// 地址: 0x142a730c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = arg3
int32_t rbx = arg2

if (arg3 u> 0xb)
    int32_t rax_1 = sub_142acca60(_mm_cvtepi32_pd(zx.q(arg3)), 0xc, &arg_18)
    arg3 = arg_18
    rbx += rax_1

if (rbx s< *(arg1 + 0x280))
    if ((rbx.b & 3) == 0)
        return zx.q(sx.d(*(sx.q(arg3) + &data_143640620)))
else if ((rbx.b & 3) == 0)
    if (rbx != rbx s/ 0x64 * 0x64)
        return zx.q(sx.d(*(sx.q(arg3) + &data_143640620)))
    
    if (rbx == rbx s/ 0x190 * 0x190)
        return zx.q(sx.d(*(sx.q(arg3) + &data_143640620)))

return zx.q(sx.d(*(sx.q(arg3) + &data_143640610)))
