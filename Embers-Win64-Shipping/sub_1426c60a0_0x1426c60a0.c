// 函数: sub_1426c60a0
// 地址: 0x1426c60a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1426a6c70(arg1, arg2)
*arg1 = &data_1434693f0
arg1[5] = &data_1434696d8
__builtin_memset(&arg1[0xf], 0, 0x20)
int64_t rax = sub_14272f680()
void arg_8
int64_t* rax_1 = sub_140b58260(&arg_8, u"ReceiveTickAI", 1)
void arg_18
int32_t rax_3 = sub_1426aa870(*sub_140b58260(&arg_18, u"ReceiveTick", 1), *rax_1, arg1, rax)
arg1[0x13].d &= 0xffffffe7
arg1[0x13].d |= (rax_3 & 3) << 3
int64_t* rax_6 = sub_140b58260(&arg_8, u"ReceiveExecutionStartAI", 1)
int32_t rax_8 = sub_1426aa870(*sub_140b58260(&arg_18, ReceiveExecutionStart", 1), *rax_6, arg1, rax)
arg1[0x13].d &= 0xffffff9f
arg1[0x13].d |= (rax_8 & 3) << 5
int64_t* rax_11 = sub_140b58260(&arg_8, u"ReceiveExecutionFinishAI", 1)
int32_t rax_13 =
    sub_1426aa870(*sub_140b58260(&arg_18, ReceiveExecutionFinish", 1), *rax_11, arg1, rax)
arg1[0x13].d &= 0xfffffe7f
arg1[0x13].d |= (rax_13 & 3) << 7
int64_t* rax_16 = sub_140b58260(&arg_8, u"ReceiveObserverActivatedAI", 1)
int32_t rax_18 =
    sub_1426aa870(*sub_140b58260(&arg_18, ReceiveObserverActivated", 1), *rax_16, arg1, rax)
arg1[0x13].d &= 0xfffff9ff
arg1[0x13].d |= (rax_18 & 3) << 9
int64_t* rax_21 = sub_140b58260(&arg_8, u"ReceiveObserverDeactivatedAI", 1)
int32_t rax_23 =
    sub_1426aa870(*sub_140b58260(&arg_18, ReceiveObserverDeactivated", 1), *rax_21, arg1, rax)
arg1[0x13].d &= 0xffffe7ff
arg1[0x13].d |= (rax_23 & 3) << 0xb
int64_t* rax_26 = sub_140b58260(&arg_8, u"PerformConditionCheckAI", 1)
int32_t rax_28
int32_t rcx_18
int32_t rdx_6
rax_28, rcx_18, rdx_6 =
    sub_1426aa870(*sub_140b58260(&arg_18, PerformConditionCheck", 1), *rax_26, arg1, rax)
arg1[0xb].b &= 0xfe
int32_t r8_10 = ((rax_28 << 0xd ^ arg1[0x13].d) & 0x6000) ^ arg1[0x13].d
rdx_6.b = (r8_10 & 0x600) != 0
rdx_6.b |= arg1[0xb].b
rdx_6.b &= 0xfd
rcx_18.b = sbb.b(rcx_18.b, rcx_18.b, (r8_10 & 0x1800) != 0)
rcx_18.b &= 2
rdx_6.b |= rcx_18.b
rdx_6.b &= 0xfb
rcx_18.b = sbb.b(rcx_18.b, rcx_18.b, (r8_10.b & 0x18) != 0)
arg1[0xc].d &= 0xfffffff7
rcx_18.b &= 4
rdx_6.b |= rcx_18.b
arg1[0xb].b = rdx_6.b
int32_t rdx_11 = (((sbb.d(rdx_6, rdx_6, (r8_10.b & 0x60) != 0) & 8) | arg1[0xc].d) & 0xffffffef)
    | (sbb.d(rcx_18, rcx_18, (r8_10 & 0x180) != 0) & 0x10)
arg1[0x13].d = (r8_10 & 0xfffffff9) | 1
*(arg1 + 0x55) |= 4
arg1[0xc].d = rdx_11
return arg1
