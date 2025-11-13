// 函数: sub_140a242b0
// 地址: 0x140a242b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143cf8c48 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143cf8c48)
    
    if (data_143cf8c48 == 0xffffffff)
        void** const var_28 = &data_142da2668
        int64_t rbx = 0
        void** (* var_48)(int64_t* arg1, int128_t* arg2) = sub_140a221c0
        int64_t var_38 = 0
        void* var_20 = &data_14399e5e8
        void arg_8
        data_14399e678 =
            *sub_140a20980(sub_140b18f30(), &arg_8, FBackgroundableTicker", zx.o(0), &var_48)
        void*** rax_6 = sub_140a84c80(0, 0x20, 0)
        
        if (rax_6 != 0)
            rax_6[1] = &data_14399e5e8
            *rax_6 = &data_142e51e78
            rax_6[3] = sub_140a387b0()
            *rax_6 = &data_142e51ed0
        
        if (rax_6 != 0)
            sub_140599630(&data_14399ffa0, 1)
            int64_t* rax_9 = (*rax_6)[6](rax_6, &arg_8)
            int64_t rbp_1 = sx.q(data_14399ffa8)
            rbx = *rax_9
            int32_t rax_10 = (rbp_1 + 1).d
            bool cond:0_1 = rax_10 s<= data_14399ffac
            data_14399ffa8 = rax_10
            
            if (not(cond:0_1))
                sub_1405a4f90(&data_14399ffa0)
            
            void** rdx_6 = (rbp_1 << 4) + data_14399ffa0
            *rdx_6 = rax_6
            rdx_6[1].d = 2
        
        data_14399e680 = rbx
        atexit(sub_142cbae20)
        _Init_thread_footer(&data_143cf8c48)

return &data_14399e5e8
