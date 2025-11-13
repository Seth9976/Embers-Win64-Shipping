// 函数: sub_140b94190
// 地址: 0x140b94190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[2] = arg3
*arg1 = &data_142e838e8
int64_t* rbp = nullptr
arg1[3] = 0
arg1[1] = &data_142e83918
arg1[4].d = 0
arg1[9] = 0
arg1[0xa] = 0
InitializeCriticalSection(&arg1[0xb])
SetCriticalSectionSpinCount(&arg1[0xb], 0xfa0)
__builtin_memset(&arg1[0x10], 0, 0x28)
void* rcx_2 = &arg1[0x15]
*(rcx_2 + 0x10) = 0
*(rcx_2 + 0x18) = 0
*(rcx_2 + 0x1c) = 0x80
void* rax = *(rcx_2 + 0x10)

if (rax != 0)
    rcx_2 = rax

*rcx_2 = 0
*(rcx_2 + 8) = 0
arg1[0x19].d = 0xffffffff
*(arg1 + 0xcc) = 0
arg1[0x1b] = 0
arg1[0x1c].d = 0
InitializeCriticalSection(&arg1[0x1d])
SetCriticalSectionSpinCount(&arg1[0x1d], 0xfa0)
__builtin_memset(&arg1[0x22], 0, 0x30)
void* rcx_5 = &arg1[0x28]
*(rcx_5 + 0x10) = 0
*(rcx_5 + 0x18) = 0
*(rcx_5 + 0x1c) = 0x80
void* rax_1 = *(rcx_5 + 0x10)

if (rax_1 != 0)
    rcx_5 = rax_1

*rcx_5 = 0
*(rcx_5 + 8) = 0
arg1[0x2c].d = 0xffffffff
*(arg1 + 0x164) = 0
arg1[0x2e] = 0
arg1[0x2f].d = 0
InitializeCriticalSection(&arg1[0x30])
SetCriticalSectionSpinCount(&arg1[0x30], 0xfa0)
__builtin_memset(&arg1[0x35], 0, 0x20)
void* rcx_8 = &arg1[0x39]
*(rcx_8 + 0x10) = 0
*(rcx_8 + 0x18) = 0
*(rcx_8 + 0x1c) = 0x80
void* rax_2 = *(rcx_8 + 0x10)

if (rax_2 != 0)
    rcx_8 = rax_2

*rcx_8 = 0
*(rcx_8 + 8) = 0
arg1[0x3d].d = 0xffffffff
*(arg1 + 0x1ec) = 0
arg1[0x3f] = 0
arg1[0x40].d = 0
arg1[0x41] = 0
arg1[0x42] = 0
InitializeCriticalSection(&arg1[0x43])
SetCriticalSectionSpinCount(&arg1[0x43], 0xfa0)
arg1[0x48] = 0
void* rcx_11 = &arg1[0x4a]
arg1[0x49] = 0
*(rcx_11 + 0x10) = 0
*(rcx_11 + 0x18) = 0
*(rcx_11 + 0x1c) = 0x80
void* rax_3 = *(rcx_11 + 0x10)

if (rax_3 != 0)
    rcx_11 = rax_3

*rcx_11 = 0
*(rcx_11 + 8) = 0
arg1[0x4e].d = 0xffffffff
*(arg1 + 0x274) = 0
arg1[0x50] = 0
arg1[0x51].d = 0
InitializeCriticalSection(&arg1[0x52])
SetCriticalSectionSpinCount(&arg1[0x52], 0xfa0)
arg1[0x57].d = 0
void* rcx_14 = &arg1[0x5d]
*(arg1 + 0x2bc) = 0
arg1[0x58].d = 0
__builtin_memset(&arg1[0x59], 0, 0x20)
*(rcx_14 + 0x10) = 0
*(rcx_14 + 0x18) = 0
*(rcx_14 + 0x1c) = 0x80
void* rax_4 = *(rcx_14 + 0x10)

if (rax_4 != 0)
    rcx_14 = rax_4

*rcx_14 = 0
*(rcx_14 + 8) = 0
void* rcx_15 = &arg1[0x6a]
arg1[0x61].d = 0xffffffff
*(arg1 + 0x30c) = 0
arg1[0x63] = 0
arg1[0x64].d = 0
arg1[0x65].d = 0
__builtin_memset(&arg1[0x66], 0, 0x20)
*(rcx_15 + 0x10) = 0
*(rcx_15 + 0x18) = 0
*(rcx_15 + 0x1c) = 0x80
void* rax_5 = *(rcx_15 + 0x10)

if (rax_5 != 0)
    rcx_15 = rax_5

*rcx_15 = 0
*(rcx_15 + 8) = 0
arg1[0x6e].d = 0xffffffff
*(arg1 + 0x374) = 0
arg1[0x70] = 0
arg1[0x71].d = 0
arg1[0x72] = 0
arg1[0x73] = 0
void*** rax_6 = data_143e1a348

if (rax_6 == 0)
    rax_6 = arg1

data_143e1a348 = rax_6
arg1[0x75].d = arg2
data_143de5452 = sub_140bac910()
char rax_8 = sub_140bac910()
char rax_9
int64_t r9
rax_9, r9 = sub_140bac980()

if (rax_8 == 0)
    if (rax_9 != 0)
        sub_140af98a0("Unknown", 0x1214, 
            Event driven async loader is NOT being used but it seems to be enabled in project settings.", 
            r9)
        sub_140afbb40()
else if (rax_9 == 0)
    sub_140af98a0("Unknown", 0x120f, 
        Event driven async loader is being used but it does NOT seem to be enabled in project s", r9)
    sub_140afbb40()

int64_t* rax_10 = j_sub_140a82f30(0x150)

if (rax_10 != 0)
    rbp = sub_140b96250(rax_10)

arg1[0x74] = rbp
arg1[5] = sub_140a491d0(0)
arg1[6] = sub_140a491d0(0)
arg1[7] = sub_140a491d0(0)
arg1[8] = sub_140a491d0(0)

if (data_143de5452 == 0)
    sub_140bc7ab0()
    
    if (data_143e1aac0 != 0)
        sub_140cb2b40()
        
        if (arg1[3] == 0)
            sub_140bc7ab0()
            
            if (data_143e1aac0 != 0)
                data_143e1a340 = 1
                arg1[3] = sub_140a6e140(arg1, u"FAsyncLoadingThread", 0, 0, -1, 0)

void* rcx_18 = data_143ddb400
char arg_10 = 0

if (rcx_18 != 0)
    sub_140af2fd0(rcx_18, /Script/Engine.StreamingSettings", s.DisableEDLDeprecationWarnings", 
        &arg_10, &data_143de5780)

return arg1
