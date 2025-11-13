// 函数: sub_1417eb6b0
// 地址: 0x1417eb6b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = nullptr

if (arg1 != 0)
    int32_t rax_1 = *(arg1 + 0xc)
    void* const rax_7
    
    if (rax_1 s>= data_143e1d9b4)
        rax_7 = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_1)
        uint32_t rdx_1 = zx.d(temp0_1)
        int32_t rax_3 = temp1_1 + rdx_1
        rax_7 = *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(zx.d(rax_3.w) - rdx_1) * 0x18
    
    if (((*(rax_7 + 8) u>> 0x1d).b & 1) == 0)
        TEB* gsbase
        
        if (data_143ef9898
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143ef9898)
            
            if (data_143ef9898 == 0xffffffff)
                sub_140b58260(&data_143ef9890, u"XRSystemAssets", 1)
                _Init_thread_footer(&data_143ef9898)
        
        int64_t rbx = data_143ef9890
        sub_140a387e0()
        int64_t* i_1
        sub_140d6fcf0(&data_14399e720, &i_1, rbx)
        int32_t var_40
        
        for (int64_t* i = i_1; i != &i[sx.q(var_40)]; i = &i[1])
            int64_t* rsi_1 = *i
            void arg_8
            
            if (rsi_1 != 0 && *(**rsi_1)(rsi_1, &arg_8) == *arg2)
                result = sub_1417f5580(arg1, rsi_1, arg2[1].d, arg3, arg4, arg5, arg6)
                break
        
        if (i_1 != 0)
            sub_140a74f90(i_1)
        
        return result

return 0
