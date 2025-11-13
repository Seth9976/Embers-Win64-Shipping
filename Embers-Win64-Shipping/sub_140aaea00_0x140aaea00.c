// 函数: sub_140aaea00
// 地址: 0x140aaea00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143db9f90 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143db9f90)
    
    if (data_143db9f90 == 0xffffffff)
        void*** rax_6 = sub_140a94280()
        void*** var_10_1 = rax_6
        void* var_18 = &rax_6[2]
        sub_1408ff2f0(&var_18, &rax_6[2])
        data_143db9f80 = &rax_6[2]
        data_143db9f88 = rax_6
        
        if (rax_6 != 0)
            rax_6[1].d += 1
            rax_6[1].d -= 1
            
            if (rax_6[1].d == 1)
                (**rax_6)(rax_6)
                int32_t rbx_2 = *(rax_6 + 0xc)
                *(rax_6 + 0xc) -= 1
                
                if (rbx_2 == 1)
                    (*rax_6)[1](rax_6, zx.q(rbx_2))
        
        atexit(sub_142cbd950)
        _Init_thread_footer(&data_143db9f90)

*arg1 = data_143db9f80
arg1[1] = data_143db9f88
void* rax_4 = data_143db9f88

if (rax_4 != 0)
    *(rax_4 + 8) += 1

return arg1
