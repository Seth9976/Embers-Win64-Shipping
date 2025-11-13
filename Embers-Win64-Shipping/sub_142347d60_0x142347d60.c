// 函数: sub_142347d60
// 地址: 0x142347d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = 0
uint32_t result
TEB* gsbase

if (data_143f58d58 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    int64_t r8_1
    result, r8_1 = _Init_thread_header(&data_143f58d58)
    
    if (data_143f58d58 == 0xffffffff)
        int64_t* rcx_1 = data_143db18d0
        
        if (rcx_1 == 0)
            sub_140a53c40()
            rcx_1 = data_143db18d0
        
        r8_1.b = 1
        int64_t* rax_2 = (*(*rcx_1 + 0xb0))(rcx_1, u"r.FreeSkeletalMeshBuffers", r8_1)
        int64_t rax_3
        
        if (rax_2 == 0)
            rax_3 = 0
        else
            int64_t rdx_1 = *rax_2
            rax_3 = (*(rdx_1 + 0x58))(rax_2, rdx_1)
        
        data_143f58d50 = rax_3
        _Init_thread_footer(&data_143f58d58)

int64_t rdi = data_143f58d50

if (rdi == 0)
    result.b = 1
    return result

if (data_143de5480 != 0)
    rbx.b = GetCurrentThreadId() != data_143de5470

result.b = *(rdi + (rbx << 2)) == 0
return result
