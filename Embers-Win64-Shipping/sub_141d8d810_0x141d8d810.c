// 函数: sub_141d8d810
// 地址: 0x141d8d810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f38790 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f38790)
    
    if (data_143f38790 == 0xffffffff)
        int64_t* rax_5 = j_sub_140a82f30(8)
        int64_t* rbx_1 = rax_5
        
        if (rax_5 == 0)
            rbx_1 = nullptr
        else
            *rax_5 = 0
        
        void*** rax_6 = j_sub_140a82f30(0x18)
        
        if (rax_6 != 0)
            rax_6[1].d = 1
            *rax_6 = &data_142ecd2e8
            *(rax_6 + 0xc) = 1
            rax_6[2] = rbx_1
        
        uint128_t zmm0_1 = rbx_1.o
        data_143f38780.o = zmm0_1
        void* rax_7 = _mm_bsrli_si128(zmm0_1, 8).q
        
        if (rax_7 != 0)
            *(rax_7 + 8) += 1
            
            if (rax_6 != 0)
                rax_6[1].d -= 1
                
                if (rax_6[1].d == 1)
                    (**rax_6)(rax_6)
                    int32_t temp1_1 = *(rax_6 + 0xc)
                    *(rax_6 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        (*rax_6)[1](rax_6, 1)
        
        atexit(sub_142cf88f0)
        _Init_thread_footer(&data_143f38790)

*arg2 = data_143f38780
void* rax_3 = data_143f38788
arg2[1] = rax_3

if (rax_3 != 0)
    *(rax_3 + 8) += 1

return arg2
