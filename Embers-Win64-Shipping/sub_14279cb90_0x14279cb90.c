// 函数: sub_14279cb90
// 地址: 0x14279cb90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15e10(arg1)
uint64_t rcx = zx.q(data_14401b1a0)
*arg1 = &data_1434b3ef8
arg1[5] = &data_1434b4208
TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
arg1[6] = 0
arg1[7] = 0
arg1[8] = 2
int64_t rcx_1 = *(ThreadLocalStoragePointer + (rcx << 3))
__builtin_memset(&arg1[0xa], 0, 0x18)

if (data_143cd6ff0 s> *(0x14 + rcx_1))
    _Init_thread_header(&data_143cd6ff0)
    
    if (data_143cd6ff0 == 0xffffffff)
        sub_140a96080(&data_143cd6fd8)
        atexit(sub_142cb0d20)
        _Init_thread_footer(&data_143cd6ff0)

arg1[0xd] = data_143cd6fd8
void* rax_2 = data_143cd6fe0
arg1[0xe] = rax_2

if (rax_2 != 0)
    *(rax_2 + 8) += 1

arg1[0xf].d = data_143cd6fe8
arg1[1].d |= 8
void arg_8
arg1[9] = sub_14279b560(arg1, *sub_140b58260(&arg_8, u"InputBehaviors", 1), 0, 0, 0, 0)
void var_28
int64_t* rax_6 = _vfprintf_p_l(&var_28, u"DefaultToolName", u"UInteractiveTool")
int64_t rdx_2 = arg1[0xd]
arg1[0xd] = *rax_6
*rax_6 = rdx_2
int64_t rdx_3 = arg1[0xe]
arg1[0xe] = rax_6[1]
rax_6[1] = rdx_3
arg1[0xf].d = rax_6[2].d
int64_t* var_20

if (var_20 == 0)
    return arg1

var_20[1].d -= 1

if (var_20[1].d == 1)
    (**var_20)(var_20)
    int32_t rsi_1 = *(var_20 + 0xc)
    *(var_20 + 0xc) -= 1
    
    if (rsi_1 == 1)
        (*(*var_20 + 8))(var_20, zx.q(rsi_1))

return arg1
