// 函数: sub_1410a54a0
// 地址: 0x1410a54a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1410a1eb0(arg1, arg2)
int64_t rax = sx.q(*arg1)
int64_t r8

if (rax.d u> 0x1f)
    if (((*(&data_143f025fc + rax * 0x14) u>> 1).b & 1) != 0)
        r8 = 0
    else
        r8 = 1
else if (test_bit(0x88001000, rax.d) || ((*(&data_143f025fc + rax * 0x14) u>> 1).b & 1) != 0)
    r8 = 0
else
    r8 = 1

return sub_1410b3fe0(arg2, u"BASEPASS_ATMOSPHERIC_FOG", r8) __tailcall
