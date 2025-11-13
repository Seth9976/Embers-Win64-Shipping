// 函数: sub_14296c530
// 地址: 0x14296c530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t r14 = sx.q(sub_142890e90(arg5))
int32_t rbp = 0
int64_t r15 = r14 * 2

if (arg4 u< r15 || modu.dp.q(0:arg4, r14) != 0)
    return 0

char* rax_3 = sub_1428a6730(arg4)

if (rax_3 == 0)
    sub_1428a5670(0x2e, 0xb4, 0x41, "crypto\cms\cms_pwri.c", 0xc0)
    return 0

void arg_20

if (sub_1428929e0(arg5, rax_3 - r15 + arg4, &arg_20, arg3 - r15 + arg4, (r14 * 2).d) != 0
        && sub_1428929e0(arg5, rax_3, &arg_20, rax_3 - r14 + arg4, r14.d) != 0
        && sub_1428929e0(arg5, rax_3, &arg_20, arg3, arg4.d - r14.d) != 0
        && sub_1428929b0(arg5, nullptr, nullptr, 0, nullptr) != 0
        && sub_1428929e0(arg5, rax_3, &arg_20, rax_3, arg4.d) != 0
        && ((rax_3[6] ^ rax_3[3]) & (rax_3[5] ^ rax_3[2]) & (rax_3[1] ^ rax_3[4])) == 0xff)
    uint64_t r8_5 = zx.q(*rax_3)
    
    if (arg4 u>= r8_5 - 4)
        *arg2 = r8_5
        memcpy(arg1, &rax_3[4], r8_5.d)
        rbp = 1

sub_1428a6890(rax_3, arg4, "crypto\cms\cms_pwri.c", 0xe2)
return zx.q(rbp)
