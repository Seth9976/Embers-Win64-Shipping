// 函数: sub_141a4a590
// 地址: 0x141a4a590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_1 = (*(*arg1 + 0x280))()
int64_t* rdx_5

if (*(rax_1 + 0x88) == *(rax_1 + 0xb4))
label_141a4a61e:
    rdx_5 = nullptr
else
    int32_t rax_3 = sub_140b5ead0(arg2.d) + arg2:4.d
    void* r8_1 = rax_1 + 0xb8
    void* rcx_2 = *(r8_1 + 8)
    
    if (rcx_2 != 0)
        r8_1 = rcx_2
    
    int32_t rax_5 = *(r8_1 + (((sx.q(*(rax_1 + 0xc8)) - 1) & sx.q(rax_3)) << 2))
    
    if (rax_5 == 0xffffffff)
    label_141a4a61e_1:
        rdx_5 = nullptr
    else
        while (true)
            rdx_5 = (sx.q(rax_5) << 5) + *(rax_1 + 0x80)
            
            if (*rdx_5 == arg2)
                break
            
            rax_5 = rdx_5[3].d
            
            if (rax_5 == 0xffffffff)
                goto label_141a4a61e_2
        
        if (rax_5 == 0xffffffff)
        label_141a4a61e_2:
            rdx_5 = nullptr

void* result = &rdx_5[1]

if (rdx_5 == 0)
    result = nullptr

if (result != 0)
    return result

TEB* gsbase

if (data_143f2a9a8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f2a9a8)
    
    if (data_143f2a9a8 == 0xffffffff)
        atexit(sub_142cf4d20)
        _Init_thread_footer(&data_143f2a9a8)

return &data_143f2a998
