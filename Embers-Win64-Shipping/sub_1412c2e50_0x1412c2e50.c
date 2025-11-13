// 函数: sub_1412c2e50
// 地址: 0x1412c2e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = 0
TEB* gsbase
int32_t* rdi_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143e8b0b8 s> *rdi_1)
    _Init_thread_header(&data_143e8b0b8)
    
    if (data_143e8b0b8 == 0xffffffff)
        int64_t* rcx_4 = data_143db18d0
        
        if (rcx_4 == 0)
            sub_140a53c40()
            rcx_4 = data_143db18d0
        
        int64_t r8_1
        r8_1.b = 1
        int64_t* rax_11 =
            (*(*rcx_4 + 0xb0))(rcx_4, r.MobileDynamicPointLightsUseStaticBranch", r8_1)
        int64_t rax_12
        
        if (rax_11 == 0)
            rax_12 = 0
        else
            int64_t rdx_1 = *rax_11
            rax_12 = (*(rdx_1 + 0x58))(rax_11, rdx_1)
        
        data_143e8b0b0 = rax_12
        _Init_thread_footer(&data_143e8b0b8)

if (data_143e8b0c8 s> *rdi_1)
    _Init_thread_header(&data_143e8b0c8)
    
    if (data_143e8b0c8 == 0xffffffff)
        int64_t* rcx_6 = data_143db18d0
        
        if (rcx_6 == 0)
            sub_140a53c40()
            rcx_6 = data_143db18d0
        
        int64_t r8_2
        r8_2.b = 1
        int64_t* rax_14 = (*(*rcx_6 + 0xb0))(rcx_6, u"r.MobileNumDynamicPointLights", r8_2)
        int64_t rax_15
        
        if (rax_14 == 0)
            rax_15 = 0
        else
            int64_t rdx_2 = *rax_14
            rax_15 = (*(rdx_2 + 0x58))(rax_14, rdx_2)
        
        data_143e8b0c0 = rax_15
        _Init_thread_footer(&data_143e8b0c8)

if (data_143e8b0d8 s> *rdi_1)
    _Init_thread_header(&data_143e8b0d8)
    
    if (data_143e8b0d8 == 0xffffffff)
        int64_t* rcx_8 = data_143db18d0
        
        if (rcx_8 == 0)
            sub_140a53c40()
            rcx_8 = data_143db18d0
        
        int64_t r8_3
        r8_3.b = 1
        int64_t* rax_17 = (*(*rcx_8 + 0xb0))(rcx_8, u"r.Mobile.SkyLightPermutation", r8_3)
        int64_t rax_18
        
        if (rax_17 == 0)
            rax_18 = 0
        else
            int64_t rdx_3 = *rax_17
            rax_18 = (*(rdx_3 + 0x58))(rax_17, rdx_3)
        
        data_143e8b0d0 = rax_18
        _Init_thread_footer(&data_143e8b0d8)

char rax_5 = data_143de5480
int64_t rdi_2 = data_143e8b0b0
int64_t rcx

if (rax_5 == 0)
    rcx = 0
else
    bool cond:0_1 = GetCurrentThreadId() != data_143de5470
    rax_5 = data_143de5480
    rcx.b = cond:0_1

int32_t rsi = *(rdi_2 + (rcx << 2))
int64_t rdi_3 = data_143e8b0c0
int64_t rcx_1

if (rax_5 == 0)
    rcx_1 = 0
else
    bool cond:1_1 = GetCurrentThreadId() != data_143de5470
    rax_5 = data_143de5480
    rcx_1.b = cond:1_1

int32_t rdi_4 = *(rdi_3 + (rcx_1 << 2))
int64_t rbp = data_143e8b0d0

if (rax_5 != 0)
    rbx.b = GetCurrentThreadId() != data_143de5470

if ((arg1[3].b & 1) != 0)
label_1412c2f43:
    rbx.b = 0
label_1412c2f48:
    
    if (sub_1412c5810(arg1) != 0)
        int64_t rax_9 = sx.q(*arg1)
        
        if (((rax_9.d u<= 0x1e && test_bit(0x6562c800, rax_9.d))
                || (*(&data_143f025fc + rax_9 * 0x14) & 1) != 0) && sub_1422eb710() != 0 && rbx.b != 0)
            return 1
else if (*(rbp + (rbx << 2)) u<= 1)
    if (rdi_4 s< 3 || rsi == 1)
        goto label_1412c2f43
    
    rbx.b = 1
    goto label_1412c2f48

return 0
