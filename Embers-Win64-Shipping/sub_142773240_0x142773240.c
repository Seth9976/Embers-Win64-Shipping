// 函数: sub_142773240
// 地址: 0x142773240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((arg2 != 0x1f40 && arg2 != 0x2ee0 && arg2 != 0x3e80 && arg2 != 0x5dc0 && arg2 != 0xbb80)
        || arg3 - 1 u> 1)
    int32_t rax
    rax.b = 0
    return rax

arg1[3].d = arg2
*(arg1 + 0x1c) = arg3
arg1[4].d = arg2 s/ 0x32
int32_t* rax_4 = sub_140a82f30(sx.q(opus_encoder_get_size(arg3)), 0)
int32_t r8 = *(arg1 + 0x1c)
int32_t rdx_3 = arg1[3].d
arg1[5] = rax_4
int32_t r9
r9.b = arg4 == 1
int32_t rax_5 = opus_encoder_init(rax_4, rdx_3, r8, r9 + 0x800)

if (rax_5 != 0)
    (*(*arg1 + 0x38))(arg1)
    int64_t rax_8
    rax_8.b = rax_5 == 0
    return rax_8

opus_encoder_ctl(arg1[5], 0xfa6, zx.q(rax_5 + 1))
opus_encoder_ctl(arg1[5], 0xfb4, nullptr)
opus_encoder_ctl(arg1[5], 0xfaa, zx.q(rax_5 + 1))
opus_encoder_ctl(arg1[5], 0xfac, nullptr)
uint64_t rax_6
rax_6.b = rax_5 == 0
return rax_6
