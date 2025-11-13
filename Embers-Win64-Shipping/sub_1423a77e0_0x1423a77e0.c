// 函数: sub_1423a77e0
// 地址: 0x1423a77e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *arg1
int32_t rbx = 0
TEB* gsbase

if (data_143f5a418 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f5a418)
    
    if (data_143f5a418 == 0xffffffff)
        int64_t* rcx_10 = data_143db18d0
        
        if (rcx_10 == 0)
            sub_140a53c40()
            rcx_10 = data_143db18d0
        
        int64_t r8_4
        r8_4.b = 1
        int64_t* rax_9 = (*(*rcx_10 + 0xb0))(rcx_10, u"r.VirtualTextureReducedMemory", r8_4)
        int64_t rax_7
        
        if (rax_9 == 0)
            rax_7 = 0
        else
            int64_t rdx_3 = *rax_9
            rax_7 = (*(rdx_3 + 0x58))(rax_9, rdx_3)
        
        data_143f5a410 = rax_7
        _Init_thread_footer(&data_143f5a418)

if (*(data_143f5a410 + 4) != 0)
    void* rcx_1 = *(*arg2 + 0xd0)
    
    if (rcx_1 != 0)
        rbx = *(rcx_1 + 0x14)
    
    if (data_143a30254 s>= rbx)
        rbx = data_143a30254

int64_t* result

if (*(data_143f5a410 + 4) == 0 || *(rdi + 0xc) s> rbx)
    void* rcx_3 = *(arg2[1] + 0xe8)
    void* arg_8 = rcx_3
    
    if (rcx_3 != 0)
        *(rcx_3 + 8) += 1
    
    sub_1405d1600(rdi + 0x100, &arg_8)
    sub_1405d1550(&arg_8)
    int64_t* rcx_6 = data_143f0f180
    (*(*rcx_6 + 0x6a0))(rcx_6, &data_143f02b98, *(rdi + 0x100), zx.q(*(rdi + 8)))
    int64_t* rcx_7 = data_143f0f180
    result = (*(*rcx_7 + 0x698))(rcx_7, &data_143f02b98, *(rdi + 0x100), zx.q(*(rdi + 8)))
else
    result = sub_1423ad750(rdi, arg2)

if (*(rdi + 0x100) != 0)
    void* rcx_8 = arg2[1]
    
    if (rcx_8 != 0)
        if (*(rdi + 0x54) == 0)
            sub_1423cc420(rcx_8, rdi + 0x100, *(rdi + 8), arg4, arg3)
        
        return sub_1405d16e0(rdi + 0x100, nullptr)

return result
