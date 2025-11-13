// 函数: sub_141eb5950
// 地址: 0x141eb5950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8 = 0
memset(arg1, 0, 0x90)
sub_140b4c2a0(arg1)
arg1[0x12] = 0
*arg1 = &data_142d6ad48
arg1[0x13] = arg3 + 0x18
arg1[0x14] = 0
sub_140b552b0(arg1, 1)
(*arg1)[0x1b](arg1, 0)
*(arg1 + 0x2a) &= 0xf7
*(arg1 + 0x29) &= 0xbf
arg1[0x15] = arg2
*arg1 = &data_14325ca68
void* rcx_3 = &arg1[0x19]
arg1[0x16] = arg3
arg1[0x17] = 0
arg1[0x18] = 0
*(rcx_3 + 0x10) = 0
*(rcx_3 + 0x18) = 0
*(rcx_3 + 0x1c) = 0x80
void* rax_1 = *(rcx_3 + 0x10)

if (rax_1 != 0)
    rcx_3 = rax_1

*rcx_3 = 0
*(rcx_3 + 8) = 0
void* rcx_4 = &arg1[0x24]
arg1[0x1d].d = 0xffffffff
*(arg1 + 0xec) = 0
arg1[0x1f] = 0
arg1[0x20].d = 0
arg1[0x21] = &data_142eb0060
arg1[0x22] = 0
arg1[0x23] = 0
*(rcx_4 + 0x10) = 0
*(rcx_4 + 0x18) = 0
*(rcx_4 + 0x1c) = 0x80
void* rax_2 = *(rcx_4 + 0x10)

if (rax_2 != 0)
    rcx_4 = rax_2

*rcx_4 = 0
*(rcx_4 + 8) = 0
arg1[0x28].d = 0xffffffff
*(arg1 + 0x144) = 0
arg1[0x2a] = 0
arg1[0x2b].d = 0
InitializeCriticalSection(&arg1[0x2c])
SetCriticalSectionSpinCount(&arg1[0x2c], 0xfa0)
arg1[0x31] = 0
arg1[0x32] = 0
arg1[6].d |= 0x20000000
void* rcx_7 = arg1[0x15]

if (rcx_7 != 0)
    int64_t* rbx_1 = *(rcx_7 + 0x10)
    sub_141ee6500(rcx_7, &arg1[0x17])
    void* rax_3 = arg1[0x15]
    void* rcx_8 = rax_3
    void* rdx_2 = *(rax_3 + 0xa0)
    
    if (rdx_2 != 0 && rax_3 == *(rdx_2 + 0x130))
        void* arg_10 = sub_140cdb8f0(rbx_1, *sub_140b58260(&arg_8, u"RelativeLocation", 1))
        sub_140812a70(&arg1[0x17], &arg_8, &arg_10, nullptr)
        arg_10 = sub_140cdb8f0(rbx_1, *sub_140b58260(&arg_8, u"RelativeRotation", 1))
        sub_140812a70(&arg1[0x17], &arg_8, &arg_10, nullptr)
        arg_10 = sub_140cdb8f0(rbx_1, *sub_140b58260(&arg_8, u"RelativeScale3D", 1))
        sub_140812a70(&arg1[0x17], &arg_8, &arg_10, nullptr)
        rcx_8 = arg1[0x15]
    
    void* rax_10 = sub_140d209c0(rcx_8)
    sub_140776930(rbx_1, arg1, arg1[0x15], rbx_1, rax_10, 0)

return arg1
