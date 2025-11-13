// 函数: sub_1419021d0
// 地址: 0x1419021d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = 0
TEB* gsbase

if (data_143efbc20 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143efbc20)
    
    if (data_143efbc20 == 0xffffffff)
        int64_t* rcx_2 = data_143db18d0
        
        if (rcx_2 == 0)
            sub_140a53c40()
            rcx_2 = data_143db18d0
        
        int64_t r8_1
        r8_1.b = 1
        int64_t* rax_6 = (*(*rcx_2 + 0xb0))(rcx_2, u"r.Vulkan.UseRealUBs", r8_1)
        int64_t rax_7
        
        if (rax_6 == 0)
            rax_7 = 0
        else
            int64_t rdx_1 = *rax_6
            rax_7 = (*(rdx_1 + 0x58))(rax_6, rdx_1)
        
        data_143efbc18 = rax_7
        _Init_thread_footer(&data_143efbc20)

int64_t rdi = data_143efbc18

if (rdi != 0 && data_143de5480 != 0)
    rbx.b = GetCurrentThreadId() != data_143de5470

char rcx

if (rdi == 0 || *(rdi + (rbx << 2)) s<= 0)
    rcx = 0
else
    rcx = 1

if (sub_1418c9180(rcx) == 0)
    return sub_1418f10a0(arg1, arg2, arg3)

return sub_1418f0cd0(arg1, arg2, arg3)
