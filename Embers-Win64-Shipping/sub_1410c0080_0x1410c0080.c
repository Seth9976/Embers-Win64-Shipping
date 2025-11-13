// 函数: sub_1410c0080
// 地址: 0x1410c0080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
int32_t* rdi_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143e2d270 s> *rdi_1)
    _Init_thread_header(&data_143e2d270)
    
    if (data_143e2d270 == 0xffffffff)
        int64_t* rcx_2 = data_143db18d0
        
        if (rcx_2 == 0)
            sub_140a53c40()
            rcx_2 = data_143db18d0
        
        int64_t r8_1
        r8_1.b = 1
        int64_t* rax_5 = (*(*rcx_2 + 0xb0))(rcx_2, u"r.SupportStationarySkylight", r8_1)
        int64_t rax_6
        
        if (rax_5 == 0)
            rax_6 = 0
        else
            int64_t rdx_1 = *rax_5
            rax_6 = (*(rdx_1 + 0x58))(rax_5, rdx_1)
        
        data_143e2d268 = rax_6
        _Init_thread_footer(&data_143e2d270)

if (data_143e2d280 s> *rdi_1)
    _Init_thread_header(&data_143e2d280)
    
    if (data_143e2d280 == 0xffffffff)
        int64_t* rcx_4 = data_143db18d0
        
        if (rcx_4 == 0)
            sub_140a53c40()
            rcx_4 = data_143db18d0
        
        int64_t r8_2
        r8_2.b = 1
        int64_t* rax_8 = (*(*rcx_4 + 0xb0))(rcx_4, u"r.SupportAllShaderPermutations", r8_2)
        int64_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0
        else
            int64_t rdx_2 = *rax_8
            rax_9 = (*(rdx_2 + 0x58))(rax_8, rdx_2)
        
        data_143e2d278 = rax_9
        _Init_thread_footer(&data_143e2d280)

if (data_143e2d278 != 0 && data_143de5480 != 0)
    GetCurrentThreadId()

if (data_143e2d268 != 0 && data_143de5480 != 0)
    GetCurrentThreadId()

int32_t rbx = *arg1

if (sub_1405fba70(rbx, 3) != 0 && sub_1419a8260(rbx) != 0)
    return 1

return 0
