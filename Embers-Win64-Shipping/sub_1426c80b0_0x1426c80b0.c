// 函数: sub_1426c80b0
// 地址: 0x1426c80b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1426a6da0(arg1, arg2)
*arg1 = &data_14346eb58
arg1[5] = &data_14346ee30
*(arg1 + 0x84) = 0
arg1[0x12] = 0
arg1[0x10].d = 0xbf800000
arg1[0x13] = 0
int64_t rax = sub_1427334d0()
void arg_8
int64_t* rax_1 = sub_140b58260(&arg_8, u"ReceiveTickAI", 1)
void arg_18
int32_t rax_3 = sub_1426aa870(*sub_140b58260(&arg_18, u"ReceiveTick", 1), *rax_1, arg1, rax)
arg1[0x14].d &= 0xfffffff9
arg1[0x14].d |= (rax_3 & 3) * 2
int64_t* rax_6 = sub_140b58260(&arg_8, u"ReceiveExecuteAI", 1)
int32_t rax_8 = sub_1426aa870(*sub_140b58260(&arg_18, u"ReceiveExecute", 1), *rax_6, arg1, rax)
arg1[0x14].d &= 0xffffffe7
arg1[0x14].d |= (rax_8 & 3) << 3
int64_t* rax_11 = sub_140b58260(&arg_8, u"ReceiveAbortAI", 1)
int32_t rax_13 = sub_1426aa870(*sub_140b58260(&arg_18, u"ReceiveAbort", 1), *rax_11, arg1, rax)
arg1[0xd].d &= 0xfffffffd
int32_t rdx_7 = ((rax_13 << 5 ^ arg1[0x14].d) & 0x60) ^ arg1[0x14].d
arg1[0x14].d = (rdx_7 & 0xffffff7f) | 1
arg1[0xd].d |= (sbb.d(rax_13, rax_13, (rdx_7.b & 6) != 0) & 2) | 4
*(arg1 + 0x55) |= 4

if (((arg1[1].d u>> 4).b & 1) != 0)
    sub_1426ab860(arg1, rax, &arg1[0x12])

return arg1
