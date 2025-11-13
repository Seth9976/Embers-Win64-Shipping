// 函数: sub_1422d9d50
// 地址: 0x1422d9d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143321788
int64_t rbx = 0
arg1[1] = 0
sub_141410bc0(&arg1[2])
sub_141410bc0(&arg1[0x48])
TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
uint64_t rcx_2 = zx.q(data_14401b1a0)
arg1[0x8e].d = 0xffffffff
arg1[0x8f] = 0
arg1[0x90] = 0
uint32_t rax

if (data_143f563c0 s> *(0x14 + *(ThreadLocalStoragePointer + (rcx_2 << 3))))
    int64_t r8_1
    rax, r8_1 = _Init_thread_header(&data_143f563c0)
    
    if (data_143f563c0 == 0xffffffff)
        int64_t* rcx_4 = data_143db18d0
        
        if (rcx_4 == 0)
            sub_140a53c40()
            rcx_4 = data_143db18d0
        
        r8_1.b = 1
        int64_t* rax_4 = (*(*rcx_4 + 0xb0))(rcx_4, u"r.MobileHDR", r8_1)
        int64_t rax_2
        
        if (rax_4 == 0)
            rax_2 = 0
        else
            int64_t rdx_1 = *rax_4
            rax_2 = (*(rdx_1 + 0x58))(rax_4, rdx_1)
        
        data_143f563b8 = rax_2
        _Init_thread_footer(&data_143f563c0)

int64_t rsi = data_143f563b8

if (data_143de5480 != 0)
    rbx.b = GetCurrentThreadId() != data_143de5470

rax.b = *(rsi + (rbx << 2)) == 1
*(arg1 + 0x476) = rax.b
return arg1
