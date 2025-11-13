// 函数: sub_141906470
// 地址: 0x141906470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1] = 0
arg1[2] = 0
*(arg1 + 0xf4) = 0
__builtin_memset(arg1 + 0xfc, 0xff, 0x20)
__builtin_memset(arg1 + 0x11c, 0, 0x1e)
memset(&arg1[4], 0, 0x120)
arg1[0x28].d = 0
*arg1 = &data_142ff4a70
*(arg1 + 0x144) = 0xffffffff
arg1[3] = &data_142ff5198
sub_141906910(&arg1[0x29])
arg1[0x10a] = &data_142ff4a68
arg1[0x10b] = 0
arg1[0x10c] = 0
arg1[0x10f] = &data_142ff4a68
arg1[0x110] = 0
arg1[0x111] = 0
__builtin_memset(&arg1[0x114], 0, 0x22)
*(arg1 + 0x8c4) = 0x26
arg1[0x11a].d = 0xffffffff
*(arg1 + 0x8d4) = 4
arg1[0x119] = &data_142ef5ce8
__builtin_memset(&arg1[0x11b], 0, 0x13880)
arg1[0x282b].d = 0
InitializeCriticalSection(&arg1[0x282c])
SetCriticalSectionSpinCount(&arg1[0x282c], 0xfa0)
arg1[0x119] = &data_142ef5d28

if (sub_140a80f40() == 0)
    sub_141997e80(&arg1[0x119])
else
    arg1[0x119][5](&arg1[0x119])

sub_141905f40(&arg1[0x2831])
sub_141905f40(&arg1[0x2944])
sub_141905f40(&arg1[0x2a57])
arg1[0x2b6a].d = 0xfffffffe
void* rcx_8 = &arg1[0x2b6f]
__builtin_memset(&arg1[0x2b6b], 0, 0x20)
*(rcx_8 + 0x10) = 0
*(rcx_8 + 0x18) = 0
*(rcx_8 + 0x1c) = 0x80
void* rax_2 = *(rcx_8 + 0x10)

if (rax_2 != 0)
    rcx_8 = rax_2

*rcx_8 = 0
*(rcx_8 + 8) = 0
arg1[0x2b73].d = 0xffffffff
*(arg1 + 0x15b9c) = 0
arg1[0x2b75] = 0
arg1[0x2b76].d = 0
__builtin_memset(&arg1[0x2b77], 0, 0x18)
InitializeCriticalSection(&arg1[0x2b7a])
SetCriticalSectionSpinCount(&arg1[0x2b7a], 0xfa0)
arg1[0x2b80].d = 0
int64_t i_1 = 4
arg1[0x2b7f] = &data_142ff4a48
*(arg1 + 0x15c04) = 0
arg1[0x2b81].d = 0
*(arg1 + 0x15c0c) = 0xffffffff
__builtin_memset(&arg1[0x2b82], 0, 0x14)
sub_141929f10(&arg1[0x2b85], arg1, 4)
void* rsi_1 = &arg1[0x2b8d]
int64_t i

do
    sub_14192a0d0(rsi_1, 0)
    rsi_1 += 0x18
    i = i_1
    i_1 -= 1
while (i != 1)
arg1[0x2b99].d = 0
arg1[0x2b9a] = arg1
arg1[0x2b9b].d = 0
*(arg1 + 0x15cdc) = 0
arg1[0x2b9c].d = 0
arg1[0x2b9d] = 0
arg1[0x2b9e] = 0
InitializeCriticalSection(&arg1[0x2b9f])
SetCriticalSectionSpinCount(&arg1[0x2b9f], 0xfa0)
arg1[0x2ba4] = 0
arg1[0x2be5] = 0
arg1[0x2be6].d = 0
*(arg1 + 0x15f34) = 0x10
sub_141956010()
arg1[0x2b77] = sub_141955de0()
sub_14190e470()
int64_t r8

if (sub_141955bb0() != 0)
    sub_14196cd60(arg1, 1)
    int64_t* rcx_16 = data_143db18d0
    
    if (rcx_16 == 0)
        sub_140a53c40()
        rcx_16 = data_143db18d0
    
    int64_t r8_1
    r8_1.b = 1
    int64_t* rax_6
    int64_t r8_2
    rax_6, r8_2 = (*(*rcx_16 + 0xb0))(rcx_16, u"OpenGL.UBODirectWrite", r8_1)
    
    if (rax_6 != 0)
        (*(*rax_6 + 0x80))(rax_6, &(*U"RGBXYZF10|")[8], 0x8000000)
    
    int64_t* rcx_18 = data_143db18d0
    
    if (rcx_18 == 0)
        sub_140a53c40()
        rcx_18 = data_143db18d0
    
    r8_2.b = 1
    int64_t* rax_8
    rax_8, r8 = (*(*rcx_18 + 0xb0))(rcx_18, u"OpenGL.UseStagingBuffer", r8_2)
    
    if (rax_8 != 0)
        (*(*rax_8 + 0x80))(rax_8, &(*U"RGBXYZF10|")[8], 0x8000000)

int64_t* rcx_20 = data_143db18d0

if (rcx_20 == 0)
    sub_140a53c40()
    rcx_20 = data_143db18d0

r8.b = 1
int64_t* rax_10 = (*(*rcx_20 + 0xb0))(rcx_20, u"FX.AllowGPUSorting", r8)

if (rax_10 != 0)
    (*(*rax_10 + 0x80))(rax_10, &(*U"RGBXYZF10|")[8], 0x8000000)

data_143eff600 = arg1
sub_1419ce440()
int64_t rdi_4 = sx.q(arg1[0x2b6c].d)
int64_t rsi_2 = sx.q(data_143f213d8)
int32_t rax_11 = (rsi_2 + rdi_4).d
arg1[0x2b6c].d = rax_11

if (rax_11 s> *(arg1 + 0x15b64))
    sub_1405a4d70(&arg1[0x2b6b])

memset(&arg1[0x2b6b][rdi_4], 0, rsi_2 << 3)
return arg1
