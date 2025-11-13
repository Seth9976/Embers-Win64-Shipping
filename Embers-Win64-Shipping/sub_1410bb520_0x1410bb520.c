// 函数: sub_1410bb520
// 地址: 0x1410bb520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = 0
TEB* gsbase
int32_t* rdi_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143e2d2b0 s> *rdi_1)
    _Init_thread_header(&data_143e2d2b0)
    
    if (data_143e2d2b0 == 0xffffffff)
        int64_t* rcx_2 = data_143db18d0
        
        if (rcx_2 == 0)
            sub_140a53c40()
            rcx_2 = data_143db18d0
        
        int64_t r8_1
        r8_1.b = 1
        int64_t* rax_5 = (*(*rcx_2 + 0xb0))(rcx_2, u"r.SupportAtmosphericFog", r8_1)
        int64_t rax_6
        
        if (rax_5 == 0)
            rax_6 = 0
        else
            int64_t rdx_1 = *rax_5
            rax_6 = (*(rdx_1 + 0x58))(rax_5, rdx_1)
        
        data_143e2d2a8 = rax_6
        _Init_thread_footer(&data_143e2d2b0)

if (data_143e2d2c0 s> *rdi_1)
    _Init_thread_header(&data_143e2d2c0)
    
    if (data_143e2d2c0 == 0xffffffff)
        int64_t* rcx_4 = data_143db18d0
        
        if (rcx_4 == 0)
            sub_140a53c40()
            rcx_4 = data_143db18d0
        
        int64_t r8_2
        r8_2.b = 1
        int64_t* rax_8 = (*(*rcx_4 + 0xb0))(rcx_4, u"r.SupportAllShaderPermutations", r8_2)
        
        if (rax_8 != 0)
            int64_t rdx_2 = *rax_8
            rbx = (*(rdx_2 + 0x58))(rax_8, rdx_2)
        
        data_143e2d2b8 = rbx
        _Init_thread_footer(&data_143e2d2c0)

if (data_143e2d2b8 != 0 && data_143de5480 != 0)
    GetCurrentThreadId()

if (data_143e2d2a8 != 0 && data_143de5480 != 0)
    GetCurrentThreadId()

if (sub_1419a8260(*arg1) != 0 && sub_1405fba70(*arg1, 3) != 0)
    return true

return false
