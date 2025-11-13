// 函数: sub_141fe1010
// 地址: 0x141fe1010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
int32_t* rbx_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143f3e9a0 s> *rbx_1)
    _Init_thread_header(&data_143f3e9a0)
    
    if (data_143f3e9a0 == 0xffffffff)
        sub_140b58260(&data_143f3e998, u"General", 1)
        _Init_thread_footer(&data_143f3e9a0)

if (data_143f3e9b0 s> *rbx_1)
    _Init_thread_header(&data_143f3e9b0)
    
    if (data_143f3e9b0 == 0xffffffff)
        sub_140b58260(&data_143f3e9a8, u"EditorSettings", 1)
        _Init_thread_footer(&data_143f3e9b0)

if (data_143f3e9c0 s> *rbx_1)
    _Init_thread_header(&data_143f3e9c0)
    
    if (data_143f3e9c0 == 0xffffffff)
        sub_140b58260(&data_143f3e9b8, u"EditorPerProjectUserSettings", 1)
        _Init_thread_footer(&data_143f3e9c0)

int32_t rcx
rcx.b = sub_140b5b8a0(*(arg1 + 0x28), 0) == 0

if ((*(arg1 + 0x2c) != 0 | rcx.b) != 0)
    *arg2 = *(arg1 + 0x28)
    return arg2

int64_t rbx_3 = *(*(arg1 + 0x10) + 0xe8)
uint32_t rsi_2 = (rbx_3 u>> 0x20).d
char rax_7 = sub_140b5b8a0(rbx_3.d, 0x1f)
int32_t rcx_1
rcx_1.b = rsi_2 == 0
char rax_8

if ((rcx_1.b & rax_7) == 0)
    rsi_2.b = rsi_2 == 0
    rax_8 = sub_140b5b8a0(rbx_3.d, 0xce)

void* rcx_8
int32_t rdx
void arg_8

if ((rcx_1.b & rax_7) != 0 || (rsi_2.b & rax_8) != 0)
    rcx_8 = &arg_8
    rdx = 0x1f
else
    if (rbx_3 == data_143f3e9a8 || rbx_3 == data_143f3e9b8)
        *arg2 = data_143f3e998
        return arg2
    
    if ((rsi_2.b & sub_140b5b8a0(rbx_3.d, 0x20)) != 0)
        rdx = 0x20
        rcx_8 = &arg_8
    else if ((rsi_2.b & sub_140b5b8a0(rbx_3.d, 0xfb)) != 0)
        rdx = 0x20
        rcx_8 = &arg_8
    else if ((rsi_2.b & sub_140b5b8a0(rbx_3.d, 0x258)) != 0)
        rdx = 0x20
        rcx_8 = &arg_8
    else if ((rsi_2.b & sub_140b5b8a0(rbx_3.d, 0x259)) != 0)
        rdx = 0x20
        rcx_8 = &arg_8
    else
        rcx_8 = &arg_8
        
        if ((rsi_2.b & sub_140b5b8a0(rbx_3.d, 0xdd)) == 0)
            rdx = 0x1f
        else
            rdx = 0xdd
*arg2 = *sub_140b5e500(rcx_8, rdx)
*(arg2 + 4) = 0
return arg2
