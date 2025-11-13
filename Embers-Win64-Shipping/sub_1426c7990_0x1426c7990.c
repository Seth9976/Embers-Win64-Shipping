// 函数: sub_1426c7990
// 地址: 0x1426c7990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1426a6d30(arg1, arg2)
*arg1 = &data_14346d3b8
arg1[5] = &data_14346d690
arg1[0x10] = 0
arg1[0x11] = 0
int64_t rax = sub_142732d30()
void arg_8
int64_t* rax_1 = sub_140b58260(&arg_8, u"ReceiveTickAI", 1)
void arg_18
int32_t rax_3 = sub_1426aa870(*sub_140b58260(&arg_18, u"ReceiveTick", 1), *rax_1, arg1, rax)
arg1[0x12].d &= 0xfffffff3
arg1[0x12].d |= (rax_3 & 3) << 2
int64_t* rax_6 = sub_140b58260(&arg_8, u"ReceiveActivationAI", 1)
int32_t rax_8 = sub_1426aa870(*sub_140b58260(&arg_18, u"ReceiveActivation", 1), *rax_6, arg1, rax)
arg1[0x12].d &= 0xffffffcf
arg1[0x12].d |= (rax_8 & 3) << 4
int64_t* rax_11 = sub_140b58260(&arg_8, u"ReceiveDeactivationAI", 1)
int32_t rax_13 = sub_1426aa870(*sub_140b58260(&arg_18, ReceiveDeactivation", 1), *rax_11, arg1, rax)
arg1[0x12].d &= 0xffffff3f
arg1[0x12].d |= (rax_13 & 3) << 6
int64_t* rax_16 = sub_140b58260(&arg_8, u"ReceiveSearchStartAI", 1)
int32_t rax_18
char rcx_12
rax_18, rcx_12 = sub_1426aa870(*sub_140b58260(&arg_18, ReceiveSearchStart", 1), *rax_16, arg1, rax)
arg1[0xd].d &= 0xfffffffb
int32_t r9_8 = ((rax_18 << 8 ^ arg1[0x12].d) & 0x300) ^ arg1[0x12].d
int32_t rax_20 = r9_8 & 0x300
int32_t rax_21 = neg.d(rax_20)
arg1[0xb].b &= 0xfe
arg1[0xd].d |= sbb.d(rax_21, rax_21, rax_20 != 0) & 4
rcx_12 = sbb.b(rcx_12, rcx_12, (r9_8.b & 0xc0) != 0) & 2
bool rdx_4 = ((((r9_8.b & 0x30) != 0 | arg1[0xb].b) & 0xfd) | rcx_12) & 0xfb
int32_t rax_26 = arg1[1].d
*(arg1 + 0x55) |= 4
arg1[0xb].b = rdx_4 | (sbb.b(rcx_12, rcx_12, (r9_8.b & 0xc) != 0) & 4)
arg1[0x12].d = r9_8 | 1

if (((rax_26 u>> 4).b & 1) != 0)
    sub_1426ab860(arg1, rax, &arg1[0x10])

return arg1
