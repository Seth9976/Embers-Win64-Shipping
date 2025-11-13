// 函数: sub_142ad2710
// 地址: 0x142ad2710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = *(arg1 + 0x268)

if (((r9 - 1) & 0xfffffffd) != 0 && (r9 != 2 || (arg2 - 0x514).d u<= 0x12c))
    if (r9 != 0)
        int32_t rax_8
        rax_8.b = test_bit(*(&data_1436573e0 + (sx.q((arg2 - 0x514).d) << 2)), zx.d(0xb - arg3.b))
        return zx.q(rax_8 + 0x1d)
    
    int32_t rbx = arg3 + ((arg2 * 3).d << 2)
    return zx.q(sub_142ad2c60(arg1, rbx - 0xb) - sub_142ad2c60(arg1, rbx - 0xc))

int32_t r9_2 = (arg3 + 1) & 0x80000001

if (r9_2 s< 0)
    r9_2 = ((r9_2 - 1) | 0xfffffffe) + 1

if (arg3 == 0xb && (arg2.d * 0xb + 0xe) s% 0x1e s< 0xb)
    return zx.q(r9_2 + 0x1e)

return zx.q(r9_2 + 0x1d)
