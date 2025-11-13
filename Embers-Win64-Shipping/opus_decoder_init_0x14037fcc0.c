// 函数: opus_decoder_init
// 地址: 0x14037fcc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((arg2 != 0xbb80 && arg2 != 0x5dc0 && arg2 != 0x3e80 && arg2 != 0x2ee0 && arg2 != 0x1f40)
        || arg3 - 1 u> 1)
    return 0xffffffff

int32_t rax_8

if (arg3 - 1 u> 1)
    rax_8 = 0
else
    int32_t arg_10
    sub_1403dde70(&arg_10)
    arg_10 = (arg_10 + 7) & 0xfffffff8
    rax_8 = sub_1403f68e0(arg3) + arg_10 + 0x58

memset(arg1, 0, sx.q(rax_8))
int32_t arg_20
sub_1403dde70(&arg_20)
int32_t rax_11 = arg_20 + 7
arg1[1] = 0x58
arg1[2] = arg3
int32_t rax_12 = rax_11 & 0xfffffff8
arg1[0xb] = arg3
arg1[3] = arg2
arg_20 = rax_12
arg1[6] = arg2
*arg1 = rax_12 + 0x58
arg1[4] = arg3
void* rbp_1 = sx.q(rax_12 + 0x58) + arg1
sub_1403dde80(&arg1[0x16])

if (sub_1403f6930(rbp_1, arg2, arg3) != 0)
    return 0xfffffffd

sub_1403f6e90(rbp_1, 0x2720, nullptr)
arg1[0xe] = 0
arg1[0xf] = arg2 s/ 0x190
return 0
