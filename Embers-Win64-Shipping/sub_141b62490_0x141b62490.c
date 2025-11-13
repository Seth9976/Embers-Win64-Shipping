// 函数: sub_141b62490
// 地址: 0x141b62490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f308b8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f308b8)
    
    if (data_143f308b8 == 0xffffffff)
        int64_t* rcx_3 = data_143db18d0
        
        if (rcx_3 == 0)
            sub_140a53c40()
            rcx_3 = data_143db18d0
        
        int64_t r8_3
        r8_3.b = 1
        int64_t* rax_5 = (*(*rcx_3 + 0xb0))(rcx_3, u"r.HDR.Display.OutputDevice", r8_3)
        int64_t rax_6
        
        if (rax_5 == 0)
            rax_6 = 0
        else
            int64_t rdx_1 = *rax_5
            rax_6 = (*(rdx_1 + 0x58))(rax_5, rdx_1)
        
        data_143f308b0 = rax_6
        _Init_thread_footer(&data_143f308b8)

int32_t* rax_2 = data_143f308b0
int32_t rbx

if (rax_2 == 0)
    rbx = 1
else
    rbx.b = *rax_2 == 1

return sub_1410b3fe0(arg2, u"USE_709", zx.q(rbx)) __tailcall
