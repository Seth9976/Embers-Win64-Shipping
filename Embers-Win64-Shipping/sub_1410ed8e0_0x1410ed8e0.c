// 函数: sub_1410ed8e0
// 地址: 0x1410ed8e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
int32_t* rdi_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143e54c98 s> *rdi_1)
    _Init_thread_header(&data_143e54c98)
    
    if (data_143e54c98 == 0xffffffff)
        int64_t* rcx_7 = data_143db18d0
        
        if (rcx_7 == 0)
            sub_140a53c40()
            rcx_7 = data_143db18d0
        
        int64_t r8_1
        r8_1.b = 1
        data_143e54c90 = (*(*rcx_7 + 0xb0))(rcx_7, u"r.RayTracing.SkyLight", r8_1)
        _Init_thread_footer(&data_143e54c98)

if (data_143e54ca8 s> *rdi_1)
    _Init_thread_header(&data_143e54ca8)
    
    if (data_143e54ca8 == 0xffffffff)
        int64_t* rcx_8 = data_143db18d0
        
        if (rcx_8 == 0)
            sub_140a53c40()
            rcx_8 = data_143db18d0
        
        int64_t r8_2
        r8_2.b = 1
        data_143e54ca0 = (*(*rcx_8 + 0xb0))(rcx_8, u"r.RayTracing.Shadows", r8_2)
        _Init_thread_footer(&data_143e54ca8)

if (data_143e54cb8 s> *rdi_1)
    _Init_thread_header(&data_143e54cb8)
    
    if (data_143e54cb8 == 0xffffffff)
        int64_t* rcx_9 = data_143db18d0
        
        if (rcx_9 == 0)
            sub_140a53c40()
            rcx_9 = data_143db18d0
        
        int64_t r8_3
        r8_3.b = 1
        data_143e54cb0 = (*(*rcx_9 + 0xb0))(rcx_9, u"r.RayTracing.StochasticRectLight", r8_3)
        _Init_thread_footer(&data_143e54cb8)

int64_t* rcx = data_143e54ca0
int32_t rax_5

if (rcx != 0)
    rax_5 = (*(*rcx + 0x90))(rcx)

int64_t rsi

if (rcx == 0 || rax_5 s<= 0)
    rsi.b = 0
else
    rsi.b = 1

int64_t* rcx_1 = data_143e54cb0
int32_t rax_7

if (rcx_1 != 0)
    rax_7 = (*(*rcx_1 + 0x90))(rcx_1)

if (rcx_1 == 0 || rax_7 s<= 0)
    rdi_1.b = 0
else
    rdi_1.b = 1

int32_t result

if (sub_1413ab380(arg2).b != 0)
    result.b = 1
else if (sub_1413faf40(arg2).b != 0)
    result.b = 1
else if (sub_1413ab410(arg2).b != 0)
    result.b = 1
else if (sub_1413fb130(arg2).b != 0)
    result.b = 1
else
    void* const rcx_6
    
    if (arg1 == 0)
        rcx_6 = nullptr
    else
        rcx_6 = *(arg1 + 0xf80)
    
    if (sub_1413faff0(rcx_6).b != 0 || rsi.b != 0 || rdi_1.b != 0 || *(arg2 + 0x1588) - 1 u<= 1)
        result.b = 1
    else
        result.b = 0

return result
