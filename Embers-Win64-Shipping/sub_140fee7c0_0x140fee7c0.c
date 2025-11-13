// 函数: sub_140fee7c0
// 地址: 0x140fee7c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x40e4) += 1
int32_t rax = *(arg1 + 0x40e4)

if (rax == 0xffffffff)
    *(arg1 + 0x40e4) = rax + 1

int64_t rdi = 0
TEB* gsbase
uint32_t result = *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)))

if (data_143e2c118 s> result)
    int64_t r8_1
    result, r8_1 = _Init_thread_header(&data_143e2c118)
    
    if (data_143e2c118 == 0xffffffff)
        int64_t* rcx_1 = data_143db18d0
        
        if (rcx_1 == 0)
            sub_140a53c40()
            rcx_1 = data_143db18d0
        
        r8_1.b = 1
        int64_t* rax_4 = (*(*rcx_1 + 0xb0))(rcx_1, u"rhi.ResourceTableCaching", r8_1)
        int64_t rax_5
        
        if (rax_4 == 0)
            rax_5 = 0
        else
            int64_t rdx_1 = *rax_4
            rax_5 = (*(rdx_1 + 0x58))(rax_4, rdx_1)
        
        data_143e2c110 = rax_5
        result = _Init_thread_footer(&data_143e2c118)

int64_t rsi = data_143e2c110

if (rsi != 0 && data_143de5480 != 0)
    result = GetCurrentThreadId()
    rdi.b = result != data_143de5470

if (rsi == 0 || *(rsi + (rdi << 2)) == 1)
    result = *(arg1 + 0x40e4)
    *(arg1 + 0x40f4) = result

return result
