// 函数: sub_1423fe010
// 地址: 0x1423fe010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
arg1[6].w = 0x100
*arg1 = &data_1433452a8
arg1[5] = &data_1433455f0
arg1[0xa] = 0
arg1[0xb] = 0
__builtin_memset(&arg1[0xd], 0, 0x20)
__builtin_memset(&arg1[0x12], 0, 0x20)
arg1[0x17] = 0
arg1[0x18] = 0
arg1[0x1b] = 0
__builtin_memset(&arg1[0x1d], 0, 0x30)
arg1[0x1c].d = 0xffffffff
int64_t* rax = sub_141520900()

if (rax[0x23] == 0)
    int64_t rdx = *rax
    (*(rdx + 0x390))(rax, rdx)

uint64_t rcx_1 = zx.q(data_14401b1a0)
arg1[0x23] = rax[0x23]
TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
arg1[0x24] = 0
arg1[0x25] = 0

if (data_143f5d398 s> *(0x14 + *(ThreadLocalStoragePointer + (rcx_1 << 3))))
    _Init_thread_header(&data_143f5d398)
    
    if (data_143f5d398 == 0xffffffff)
        sub_142105750(&data_143f5d368, u"/Engine/EngineResources/Black", 0)
        sub_142105750(&data_143f5d380, u"/Engine/EngineResources/WhiteSquareTexture", 0)
        atexit(sub_142d108a0)
        _Init_thread_footer(&data_143f5d398)

arg1[8] = data_143f5d378
arg1[9] = data_143f5d390
return arg1
