// 函数: sub_141ead790
// 地址: 0x141ead790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg3
TEB* gsbase
uint64_t result = zx.q(*(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))

if (data_143f3a360 s> result.d)
    int64_t r8
    result, r8 = _Init_thread_header(&data_143f3a360)
    
    if (data_143f3a360 == 0xffffffff)
        int64_t* rcx_4 = data_143db18d0
        
        if (rcx_4 == 0)
            sub_140a53c40()
            rcx_4 = data_143db18d0
        
        r8.b = 1
        int64_t* rax_3 = (*(*rcx_4 + 0xb0))(rcx_4, u"r.HDR.UI.CompositeMode", r8)
        
        if (rax_3 != 0)
            int64_t rdx = *rax_3
            rax_3 = (*(rdx + 0x58))(rax_3, rdx)
        
        data_143f3a358 = rax_3
        result = _Init_thread_footer(&data_143f3a360)

if (data_143f0f227 == 0)
label_141ead801:
    
    if (rdi u> 0xd)
        return result
else
    result = data_143f3a358
    
    if (result == 0 || *(result + 4) == 0)
        goto label_141ead801
    
    result = sub_1419a4730()
    
    if (result.b == 0 || rdi u> 0xc)
        goto label_141ead801
    
    result = 0x1184
    
    if (not(test_bit(0x1184, rdi)))
        goto label_141ead801
    
    rdi = 0xb

jump(&__dos_header.e_magic[zx.q(*((sx.q(rdi) << 2) + 0x141ead928))])
