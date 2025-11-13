// 函数: sub_1421f1540
// 地址: 0x1421f1540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = 0
TEB* gsbase
int512_t result

if (data_143f509c8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    int64_t r8_1
    r8_1, result = _Init_thread_header(&data_143f509c8)
    
    if (data_143f509c8 == 0xffffffff)
        int64_t* rcx = data_143db18d0
        
        if (rcx == 0)
            sub_140a53c40()
            rcx = data_143db18d0
        
        r8_1.b = 1
        int64_t* rax_4 = (*(*rcx + 0xb0))(rcx, u"r.EmitterSpawnRateScale", r8_1)
        int64_t rax_5
        
        if (rax_4 == 0)
            rax_5 = 0
        else
            int64_t rdx_1 = *rax_4
            rax_5 = (*(rdx_1 + 0x60))(rax_4, rdx_1)
        
        data_143f509c0 = rax_5
        _Init_thread_footer(&data_143f509c8)

if ((*(arg1 + 0xe0) & 1) != 0)
    int64_t rdi_1 = data_143f509c0
    
    if (rdi_1 != 0)
        if (data_143de5480 != 0)
            rbx.b = GetCurrentThreadId() != data_143de5470
        
        result.o = *(rdi_1 + (rbx << 2))
        return result

result.o = 0x3f800000
return result
