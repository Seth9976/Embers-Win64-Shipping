// 函数: sub_141a514d0
// 地址: 0x141a514d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f2a994 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f2a994)
    
    if (data_143f2a994 == 0xffffffff)
        int64_t* rsi = data_143db18d0
        
        if (rsi == 0)
            sub_140a53c40()
            rsi = data_143db18d0
        
        uint64_t rdi = 0
        uint64_t var_28 = 0
        uint64_t rax_6 = sub_140a84c80(0, 0x30, 0)
        var_28 = rax_6
        int32_t var_20 = 3
        
        if (rax_6 != 0)
            *(rax_6 + 8) = &data_1439d2868
            *rax_6 = &data_142d3fe58
            *(rax_6 + 0x10) = sub_141a59040
            *(rax_6 + 0x20) = sub_140a387b0()
            *rax_6 = &data_142d3feb0
        
        void arg_8
        data_1439d2870 = *(*(*rsi + 0x58))(rsi, &arg_8, &var_28)
        uint64_t rax_11
        
        if (var_20 == 0)
            rax_11 = var_28
        label_141a51642:
            
            if (rax_11 != 0)
                sub_140a74f90(rax_11)
        else
            uint64_t rcx_2 = var_28
            
            if (rcx_2 != 0)
                (*(*rcx_2 + 0x38))(rcx_2, 0)
                rax_11 = var_28
                
                if (rax_11 != 0)
                    rax_11 = sub_140a84c80(rax_11, 0, 0)
                    var_28 = rax_11
                
                int32_t var_20_1 = 0
                goto label_141a51642
        int64_t* rax_12 = data_143f2a0c8
        var_28 = 0
        int32_t rsi_1 = rax_12[1].d
        int64_t rbp = *rax_12
        
        if (rsi_1 != 0)
            sub_1405a4c70(&var_28, rsi_1, 0)
            rdi = var_28
            memcpy(rdi, rbp, rsi_1 * 2)
        
        uint64_t rdx_5 = &data_142d40450
        
        if (rsi_1 != 0)
            rdx_5 = rdi
        
        sub_140b29b90(&data_1439d2868, rdx_5)
        
        if (rdi != 0)
            sub_140a74f90(rdi)
        
        atexit(sub_142cf4cf0)
        _Init_thread_footer(&data_143f2a994)
        *arg1 = data_1439d2868
        return arg1

*arg1 = data_1439d2868
return arg1
