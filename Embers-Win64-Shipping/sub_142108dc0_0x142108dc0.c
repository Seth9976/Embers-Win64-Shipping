// 函数: sub_142108dc0
// 地址: 0x142108dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
*arg1 = &data_1432c8858
__builtin_memset(&arg1[8], 0, 0x70)
int64_t rbp = sx.q(arg1[0xf].d)
int32_t rax = (rbp + 1).d
arg1[0xf].d = rax

if (rax s> *(arg1 + 0x7c))
    sub_1405a4d70(&arg1[0xe])

arg1[0xe][rbp] = 0
int64_t rdi = sx.q(arg1[0x13].d)
int32_t rax_1 = (rdi + 1).d
arg1[0x13].d = rax_1

if (rax_1 s> *(arg1 + 0x9c))
    sub_140679a80(&arg1[0x12])

TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
*(rdi + arg1[0x12]) = 1
uint64_t rcx_4 = zx.q(data_14401b1a0)
__builtin_memset(&arg1[0x16], 0, 0x14)
int64_t rcx_5 = *(ThreadLocalStoragePointer + (rcx_4 << 3))
__builtin_memset(&arg1[0x19], 0, 0x15)
arg1[0x1c] = 0

if (data_143f49478 s> *(0x14 + rcx_5))
    _Init_thread_header(&data_143f49478)
    
    if (data_143f49478 == 0xffffffff)
        _vfprintf_p_l(&data_143f49448, u"Material Attributes", u"MaterialExpression")
        _vfprintf_p_l(&data_143f49460, u"Parameters", u"MaterialExpression")
        atexit(sub_142d03b40)
        _Init_thread_footer(&data_143f49478)

arg1[7].b |= 1
return arg1
