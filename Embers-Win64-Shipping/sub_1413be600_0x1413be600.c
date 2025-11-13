// 函数: sub_1413be600
// 地址: 0x1413be600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = 0
int64_t rsi = sx.q(arg2)
__builtin_memset(arg1, 0, 0x24)
__builtin_memset(arg1 + 0x28, 0, 0x2c)
*(arg1 + 0x58) = 0
*(arg1 + 0x60) = 0
void* rcx = arg1 + 0x68
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax = *(rcx + 0x10)

if (rax != 0)
    rcx = rax

*rcx = 0
*(rcx + 8) = 0
void* rcx_1 = arg1 + 0xd8
*(arg1 + 0x88) = 0xffffffff
*(arg1 + 0x8c) = 0
*(arg1 + 0x98) = 0
*(arg1 + 0xa0) = 0
__builtin_memset(arg1 + 0xa8, 0, 0x1c)
*(arg1 + 0xc8) = 0
*(arg1 + 0xd0) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax_1 = *(rcx_1 + 0x10)

if (rax_1 != 0)
    rcx_1 = rax_1

__builtin_memset(rcx_1, 0, 0x1c)
void* rcx_2 = arg1 + 0x158
*(arg1 + 0xf8) = 0xffffffff
*(arg1 + 0xfc) = 0
*(arg1 + 0x108) = 0
*(arg1 + 0x110) = 0
__builtin_memset(arg1 + 0x118, 0, 0x40)
*(rcx_2 + 0x1c) = 0x80
void* rax_2 = *(rcx_2 + 0x10)

if (rax_2 != 0)
    rcx_2 = rax_2

__builtin_memset(rcx_2, 0, 0x1c)
*(arg1 + 0x178) = 0xffffffff
*(arg1 + 0x17c) = 0
*(arg1 + 0x188) = 0
*(arg1 + 0x190) = 0
__builtin_memset(arg1 + 0x198, 0, 0x6c)
TEB* gsbase

if (data_143ecdd68 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143ecdd68)
    
    if (data_143ecdd68 == 0xffffffff)
        int64_t* rcx_8 = data_143db18d0
        
        if (rcx_8 == 0)
            sub_140a53c40()
            rcx_8 = data_143db18d0
        
        int64_t r8_1
        r8_1.b = 1
        int64_t* rax_10 = (*(*rcx_8 + 0xb0))(rcx_8, u"r.GenerateMeshDistanceFields", r8_1)
        
        if (rax_10 != 0)
            int64_t rdx = *rax_10
            rdi = (*(rdx + 0x58))(rax_10, rdx)
        
        data_143ecdd60 = rdi
        _Init_thread_footer(&data_143ecdd68)

int64_t rax_5

if (sub_1410f5e80(rsi.d).b == 0 || *data_143ecdd60 == 0
        || not(test_bit(data_143f13cd0, zx.q(rsi.d))))
    rax_5.b = 0
else
    rax_5.b = 1

*(arg1 + 0x204) = rax_5.b

if ((rsi.d u> 0x1f || not(test_bit(0xc8451800, rsi.d)))
        && *(&data_143f025f0 + rsi * 0x14) != data_143f025b0)
    *(arg1 + 0x205) = 1
    return arg1

*(arg1 + 0x205) = 0
return arg1
