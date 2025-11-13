// 函数: sub_1412a6bd0
// 地址: 0x1412a6bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = 0
TEB* gsbase
int32_t* rdi_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143e8a6f0 s> *rdi_1)
    _Init_thread_header(&data_143e8a6f0)
    
    if (data_143e8a6f0 == 0xffffffff)
        int64_t* rcx_2 = data_143db18d0
        
        if (rcx_2 == 0)
            sub_140a53c40()
            rcx_2 = data_143db18d0
        
        int64_t r8_1
        r8_1.b = 1
        int64_t* rax_8 = (*(*rcx_2 + 0xb0))(rcx_2, r.MobileDynamicPointLightsUseStaticBranch", r8_1)
        int64_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0
        else
            int64_t rdx_1 = *rax_8
            rax_9 = (*(rdx_1 + 0x58))(rax_8, rdx_1)
        
        data_143e8a6e8 = rax_9
        _Init_thread_footer(&data_143e8a6f0)

if (data_143e8a700 s> *rdi_1)
    _Init_thread_header(&data_143e8a700)
    
    if (data_143e8a700 == 0xffffffff)
        int64_t* rcx_4 = data_143db18d0
        
        if (rcx_4 == 0)
            sub_140a53c40()
            rcx_4 = data_143db18d0
        
        int64_t r8_2
        r8_2.b = 1
        int64_t* rax_11 = (*(*rcx_4 + 0xb0))(rcx_4, u"r.MobileNumDynamicPointLights", r8_2)
        int64_t rax_12
        
        if (rax_11 == 0)
            rax_12 = 0
        else
            int64_t rdx_2 = *rax_11
            rax_12 = (*(rdx_2 + 0x58))(rax_11, rdx_2)
        
        data_143e8a6f8 = rax_12
        _Init_thread_footer(&data_143e8a700)

if (data_143e8a710 s> *rdi_1)
    _Init_thread_header(&data_143e8a710)
    
    if (data_143e8a710 == 0xffffffff)
        int64_t* rcx_6 = data_143db18d0
        
        if (rcx_6 == 0)
            sub_140a53c40()
            rcx_6 = data_143db18d0
        
        int64_t r8_3
        r8_3.b = 1
        int64_t* rax_14 = (*(*rcx_6 + 0xb0))(rcx_6, u"r.Mobile.SkyLightPermutation", r8_3)
        int64_t rax_15
        
        if (rax_14 == 0)
            rax_15 = 0
        else
            int64_t rdx_3 = *rax_14
            rax_15 = (*(rdx_3 + 0x58))(rax_14, rdx_3)
        
        data_143e8a708 = rax_15
        _Init_thread_footer(&data_143e8a710)

char rax_4 = data_143de5480

if (rax_4 != 0)
    GetCurrentThreadId()
    rax_4 = data_143de5480
    
    if (rax_4 != 0)
        GetCurrentThreadId()
        rax_4 = data_143de5480

int64_t rdi_2 = data_143e8a708

if (rax_4 != 0)
    rbx.b = GetCurrentThreadId() != data_143de5470

char rbx_1 = arg1[3].b & 1
uint32_t result

if ((rbx_1 != 0 || (*(rdi_2 + (rbx << 2)) & 0xfffffffd) == 0) && sub_1412c5b30(arg1).b != 0)
    int64_t rax_6 = sx.q(*arg1)
    
    if (((rax_6.d u<= 0x1e && test_bit(0x6562c800, rax_6.d))
            || (*(&data_143f025fc + rax_6 * 0x14) & 1) != 0) && sub_1422eb710().b != 0 && rbx_1 == 0)
        result.b = 1
        return result

result.b = 0
return result
