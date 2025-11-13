// 函数: sub_1419fce70
// 地址: 0x1419fce70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142107720(arg1, arg2)
uint64_t rcx = zx.q(data_14401b1a0)
*arg1 = &data_143020370
TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
arg1[8] = 0
arg1[9] = 0

if (data_143f28d88 s> *(0x14 + *(ThreadLocalStoragePointer + (rcx << 3))))
    _Init_thread_header(&data_143f28d88)
    
    if (data_143f28d88 == 0xffffffff)
        _vfprintf_p_l(&data_143f28d68, u"Landscape", u"Landscape")
        sub_140b58170(&data_143f28d80, "Grass", 1)
        atexit(sub_142cf42b0)
        _Init_thread_footer(&data_143f28d88)

int64_t rdi = sx.q(arg1[9].d)
int32_t rax_1 = (rdi + 1).d
arg1[9].d = rax_1

if (rax_1 s> *(arg1 + 0x4c))
    sub_1405c4ec0(&arg1[8])

int64_t* rdx_1 = &arg1[8][rdi * 5]

if (rdx_1 != 0)
    *rdx_1 = data_143f28d80
    __builtin_memset(&rdx_1[1], 0, 0x1c)

return arg1
