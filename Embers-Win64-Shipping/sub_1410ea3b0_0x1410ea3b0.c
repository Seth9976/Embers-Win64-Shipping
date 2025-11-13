// 函数: sub_1410ea3b0
// 地址: 0x1410ea3b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141411730(arg1, arg2)
int64_t rbx = 0
*arg1 = &data_142f190c8
void* rax = arg1[1]
int32_t rcx

if (rax == 0)
    rcx = 0
else
    rcx = *(rax + 0xf68)

arg1[0x7b].d = rcx
char rcx_1

if (rax == 0)
    rcx_1 = 0
else
    rcx_1 = *(rax + 0xf6c)

TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
*(arg1 + 0x3dc) = rcx_1
uint64_t rcx_2 = zx.q(data_14401b1a0)
arg1[0x7c].d = 0
__builtin_memset(&arg1[0x7d], 0, 0x19)
uint32_t rax_1

if (data_143e549f8 s> *(0x14 + *(ThreadLocalStoragePointer + (rcx_2 << 3))))
    int64_t r8_1
    rax_1, r8_1 = _Init_thread_header(&data_143e549f8)
    
    if (data_143e549f8 == 0xffffffff)
        int64_t* rcx_4 = data_143db18d0
        
        if (rcx_4 == 0)
            sub_140a53c40()
            rcx_4 = data_143db18d0
        
        r8_1.b = 1
        int64_t* rax_5 = (*(*rcx_4 + 0xb0))(rcx_4, u"r.StencilForLODDither", r8_1)
        int64_t rax_3
        
        if (rax_5 == 0)
            rax_3 = 0
        else
            int64_t rdx = *rax_5
            rax_3 = (*(rdx + 0x58))(rax_5, rdx)
        
        data_143e549f0 = rax_3
        _Init_thread_footer(&data_143e549f8)

int64_t rsi = data_143e549f0

if (data_143de5480 != 0)
    rbx.b = GetCurrentThreadId() != data_143de5470

rax_1.b = *(rsi + (rbx << 2)) != 0
*(arg1 + 0x3dd) = rax_1.b
return arg1
