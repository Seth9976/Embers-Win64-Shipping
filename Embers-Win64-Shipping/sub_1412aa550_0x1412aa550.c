// 函数: sub_1412aa550
// 地址: 0x1412aa550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = 0
TEB* gsbase
int32_t* rdi_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143e8de90 s> *rdi_1)
    _Init_thread_header(&data_143e8de90)
    
    if (data_143e8de90 == 0xffffffff)
        int64_t* rcx_4 = data_143db18d0
        
        if (rcx_4 == 0)
            sub_140a53c40()
            rcx_4 = data_143db18d0
        
        int64_t r8_1
        r8_1.b = 1
        int64_t* rax_8 = (*(*rcx_4 + 0xb0))(rcx_4, r.MobileDynamicPointLightsUseStaticBranch", r8_1)
        int64_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0
        else
            int64_t rdx_1 = *rax_8
            rax_9 = (*(rdx_1 + 0x58))(rax_8, rdx_1)
        
        data_143e8de88 = rax_9
        _Init_thread_footer(&data_143e8de90)

if (data_143e8deb0 s> *rdi_1)
    _Init_thread_header(&data_143e8deb0)
    
    if (data_143e8deb0 == 0xffffffff)
        int64_t* rcx_6 = data_143db18d0
        
        if (rcx_6 == 0)
            sub_140a53c40()
            rcx_6 = data_143db18d0
        
        int64_t r8_2
        r8_2.b = 1
        int64_t* rax_11 = (*(*rcx_6 + 0xb0))(rcx_6, u"r.MobileNumDynamicPointLights", r8_2)
        int64_t rax_12
        
        if (rax_11 == 0)
            rax_12 = 0
        else
            int64_t rdx_2 = *rax_11
            rax_12 = (*(rdx_2 + 0x58))(rax_11, rdx_2)
        
        data_143e8dea8 = rax_12
        _Init_thread_footer(&data_143e8deb0)

if (data_143e8ded0 s> *rdi_1)
    _Init_thread_header(&data_143e8ded0)
    
    if (data_143e8ded0 == 0xffffffff)
        int64_t* rcx_8 = data_143db18d0
        
        if (rcx_8 == 0)
            sub_140a53c40()
            rcx_8 = data_143db18d0
        
        int64_t r8_3
        r8_3.b = 1
        int64_t* rax_14 = (*(*rcx_8 + 0xb0))(rcx_8, u"r.Mobile.SkyLightPermutation", r8_3)
        int64_t rax_15
        
        if (rax_14 == 0)
            rax_15 = 0
        else
            int64_t rdx_3 = *rax_14
            rax_15 = (*(rdx_3 + 0x58))(rax_14, rdx_3)
        
        data_143e8dec8 = rax_15
        _Init_thread_footer(&data_143e8ded0)

uint32_t result = zx.d(data_143de5480)
int64_t rdi_2 = data_143e8de88
int64_t rcx

if (result.b == 0)
    rcx = 0
else
    bool cond:0_1 = GetCurrentThreadId() != data_143de5470
    result = zx.d(data_143de5480)
    rcx.b = cond:0_1

int32_t rbp = *(rdi_2 + (rcx << 2))
int64_t rdi_3 = data_143e8dea8
int64_t rcx_1

if (result.b == 0)
    rcx_1 = 0
else
    bool cond:1_1 = GetCurrentThreadId() != data_143de5470
    result = zx.d(data_143de5480)
    rcx_1.b = cond:1_1

int32_t rsi = *(rdi_3 + (rcx_1 << 2))
int64_t r14 = data_143e8dec8

if (result.b != 0)
    rbx.b = GetCurrentThreadId() != data_143de5470

char rdi_4 = arg1[3].b & 1

if (rdi_4 != 0)
label_1412aa64e:
    rbx.b = 0
label_1412aa653:
    
    if (sub_1412c5810(arg1).b == 0)
        result.b = 0
    else
        int64_t rax_6 = sx.q(*arg1)
        
        if (rax_6.d u> 0x1e)
            if ((*(&data_143f025fc + rax_6 * 0x14) & 1) != 0)
                goto label_1412aa67f
            
            result.b = 0
        else if (test_bit(0x6562c800, rax_6.d) || (*(&data_143f025fc + rax_6 * 0x14) & 1) != 0)
        label_1412aa67f:
            
            if (sub_1422eb710().b == 0 || rdi_4 != 0 || rbx.b == 0)
                result.b = 0
            else
                result.b = 1
        else
            result.b = 0
else
    if ((*(r14 + (rbx << 2)) & 0xfffffffd) == 0)
        if (rsi s< 3 || rbp == 1)
            goto label_1412aa64e
        
        rbx.b = 1
        goto label_1412aa653
    
    result.b = 0

return result
