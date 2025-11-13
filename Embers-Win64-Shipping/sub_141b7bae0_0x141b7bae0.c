// 函数: sub_141b7bae0
// 地址: 0x141b7bae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdx = zx.q(data_14401b1a0)
*arg1 = &data_143f31480
arg1[1] = &data_1439ec528
TEB* gsbase

if (data_143f320e0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rdx << 3))))
    _Init_thread_header(&data_143f320e0)
    
    if (data_143f320e0 == 0xffffffff)
        int128_t var_18 = zx.o(0)
        sub_140d93ff0(&data_143f31938, &var_18)
        int64_t* rbx_1 = var_18:8.q
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp1_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        atexit(sub_142cf63c0)
        _Init_thread_footer(&data_143f320e0)

arg1[2] = &data_143f31938
arg1[4] = &data_143f314b8
arg1[3].d = 0
arg1[5].b = 1
*(arg1 + 0x2c) = 0
return arg1
