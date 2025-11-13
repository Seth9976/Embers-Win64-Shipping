// 函数: opus_encoder_init
// 地址: 0x140384d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((arg2 != 0xbb80 && arg2 != 0x5dc0 && arg2 != 0x3e80 && arg2 != 0x2ee0 && arg2 != 0x1f40)
        || arg3 - 1 u> 1 || ((arg4 - 0x800) & 0xfffffffc) != 0 || arg4 == 0x802)
    return 0xffffffff

int32_t rax_8

if (arg3 - 1 u> 1)
    rax_8 = 0
else
    int32_t arg_10
    sub_1403def10(&arg_10)
    arg_10 = (arg_10 + 7) & 0xfffffff8
    rax_8 = sub_1403fa2b0(arg3) + arg_10 + 0x4738

memset(arg1, 0, sx.q(rax_8))
int32_t var_38
sub_1403def10(&var_38)
int32_t rax_12 = (var_38 + 7) & 0xfffffff8
arg1[1] = 0x4738
var_38 = rax_12
arg1[0x19] = arg3
arg1[0x2a] = arg3
arg1[0x21] = arg2
*arg1 = rax_12 + 0x4738
arg1[0x11cc] = 0
void* rbp_1 = sx.q(rax_12 + 0x4738) + arg1
sub_1403def20(&arg1[0x11ce], 0, &arg1[2])
int32_t rax_14 = arg1[0x21]
int32_t r9 = arg1[0x11cc]
arg1[2] = arg3
arg1[4] = rax_14
arg1[3] = arg3
arg1[5] = 0x3e80
arg1[6] = 0x1f40
arg1[7] = 0x3e80
arg1[8] = 0x14
*(arg1 + 0x24) = 0x61a8
*(arg1 + 0x2c) = 9
*(arg1 + 0x34) = 0
arg1[0x12] = 0

if (sub_1403fa300(rbp_1, arg2, arg3, r9) != 0)
    return 0xfffffffd

sub_1403fbd70(rbp_1, 0x2720, nullptr)
sub_1403fbd70(rbp_1, 0xfaa, zx.q(arg1[0xb]))
int32_t rcx_10 = arg1[0x21]
arg1[0x22] = 1
arg1[0x23] = 1
arg1[0x26] = 0xfffffc18
arg1[0x18] = arg4
arg1[0x25] = arg2 * arg3 + 0xbb8
arg1[0x1c] = 0xfffffc18
arg1[0x1d] = 0xfffffc18
arg1[0x1e] = 0x451
arg1[0x1b] = 0xfffffc18
arg1[0x28] = rcx_10 s/ 0x64
*(arg1 + 0x7c) = -0x3e8
arg1[0x27] = 0x18
arg1[0x24] = 0x1388
arg1[0x2d] = 0x3f800000
arg1[0x2b].w = 0x4000
arg1[0x1a] = rcx_10 s/ 0xfa
int32_t rax_22 = sub_1403df070(0x3c) << 8
arg1[0x38] = 1
arg1[0x32] = 0x3e9
arg1[0x2c] = rax_22
arg1[0x36] = 0x451
return 0
