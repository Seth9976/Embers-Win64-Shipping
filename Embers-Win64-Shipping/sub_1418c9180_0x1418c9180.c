// 函数: sub_1418c9180
// 地址: 0x1418c9180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = 0
uint32_t result
TEB* gsbase

if (data_143efb308 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    int64_t r8_1
    result, r8_1 = _Init_thread_header(&data_143efb308)
    
    if (data_143efb308 == 0xffffffff)
        int64_t* rcx = data_143db18d0
        
        if (rcx == 0)
            sub_140a53c40()
            rcx = data_143db18d0
        
        r8_1.b = 1
        int64_t* rax_3 = (*(*rcx + 0xb0))(rcx, u"r.Vulkan.UseRealUBs", r8_1)
        int64_t rax_4
        
        if (rax_3 == 0)
            rax_4 = 0
        else
            int64_t rdx_1 = *rax_3
            rax_4 = (*(rdx_1 + 0x58))(rax_3, rdx_1)
        
        data_143efb300 = rax_4
        _Init_thread_footer(&data_143efb308)

int64_t rdi = data_143efb300

if (rdi != 0)
    if (data_143de5480 != 0)
        rbx.b = GetCurrentThreadId() != data_143de5470
    
    if (*(rdi + (rbx << 2)) == 0)
        result.b = 0
        return result

return zx.q(arg1)
