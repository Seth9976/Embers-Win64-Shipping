// 函数: sub_1410be730
// 地址: 0x1410be730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = 0
TEB* gsbase

if (data_143e2cd50 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e2cd50)
    
    if (data_143e2cd50 == 0xffffffff)
        int64_t* rcx_1 = data_143db18d0
        
        if (rcx_1 == 0)
            sub_140a53c40()
            rcx_1 = data_143db18d0
        
        int64_t r8_1
        r8_1.b = 1
        int64_t* rax_3 = (*(*rcx_1 + 0xb0))(rcx_1, u"r.AllowStaticLighting", r8_1)
        int64_t rax_4
        
        if (rax_3 == 0)
            rax_4 = 0
        else
            int64_t rdx_1 = *rax_3
            rax_4 = (*(rdx_1 + 0x58))(rax_3, rdx_1)
        
        data_143e2cd48 = rax_4
        _Init_thread_footer(&data_143e2cd50)

uint32_t result
result.b = not.b(arg1[3].b)

if ((result.b & 1) != 0 && arg1[4] u<= 1)
    int64_t rdi_1 = data_143e2cd48
    
    if (rdi_1 != 0 && data_143de5480 != 0)
        rbx.b = GetCurrentThreadId() != data_143de5470
    
    if ((rdi_1 == 0 || *(rdi_1 + (rbx << 2)) != 0) && sub_1405fba70(*arg1, 3).b != 0)
        result.b = 1
        return result

result.b = 0
return result
