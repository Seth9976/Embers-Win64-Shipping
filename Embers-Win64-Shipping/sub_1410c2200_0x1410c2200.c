// 函数: sub_1410c2200
// 地址: 0x1410c2200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg1 + 0x28)
int64_t rbx = 0
uint32_t result
TEB* gsbase

if (data_143e2f170 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    int64_t r8_1
    result, r8_1 = _Init_thread_header(&data_143e2f170)
    
    if (data_143e2f170 == 0xffffffff)
        int64_t* rcx_1 = data_143db18d0
        
        if (rcx_1 == 0)
            sub_140a53c40()
            rcx_1 = data_143db18d0
        
        r8_1.b = 1
        int64_t* rax_3 = (*(*rcx_1 + 0xb0))(rcx_1, u"r.SupportAtmosphericFog", r8_1)
        int64_t rax_4
        
        if (rax_3 == 0)
            rax_4 = 0
        else
            int64_t rdx_1 = *rax_3
            rax_4 = (*(rdx_1 + 0x58))(rax_3, rdx_1)
        
        data_143e2f168 = rax_4
        _Init_thread_footer(&data_143e2f170)

if (data_1439c7a15 != 0)
    result = rax:4.d
    
    if (test_bit(result, 0xd) && test_bit(result, 9))
        int64_t rdi_1 = data_143e2f168
        
        if (data_143de5480 != 0)
            rbx.b = GetCurrentThreadId() != data_143de5470
        
        if (*(rdi_1 + (rbx << 2)) != 0)
            result.b = 1
            return result

result.b = 0
return result
