// 函数: sub_141c4a640
// 地址: 0x141c4a640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
int32_t* rbx_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143f34bd8 s> *rbx_1)
    _Init_thread_header(&data_143f34bd8)
    
    if (data_143f34bd8 == 0xffffffff)
        sub_140b58260(&data_143f34bd0, u"Default Soundfield Endpoint", 1)
        _Init_thread_footer(&data_143f34bd8)

int64_t rax_2 = *arg1

if (rax_2 != data_143f34bd0)
    int64_t arg_8 = 0
    
    if (rax_2 != arg_8)
        if (data_143f34bc8 s> *rbx_1)
            _Init_thread_header(&data_143f34bc8)
            
            if (data_143f34bc8 == 0xffffffff)
                sub_140b58260(&data_143f34bc0, u"Soundfield Endpoint", 1)
                _Init_thread_footer(&data_143f34bc8)
        
        int64_t rbx_2 = data_143f34bc0
        sub_140a387e0()
        int64_t* var_18
        sub_140d6fcf0(&data_14399e720, &var_18, rbx_2)
        int64_t* rbx_3 = var_18
        int32_t var_10
        void* rsi = &rbx_3[sx.q(var_10)]
        int64_t* result
        
        if (rbx_3 == rsi)
        label_141c4a709:
            result = nullptr
        else
            while (true)
                result = *rbx_3
                
                if (result != 0)
                    int64_t rax_7 = *(*(*result + 0x70))(result, &arg_8)
                    
                    if (*arg1 == rax_7)
                        break
                
                rbx_3 = &rbx_3[1]
                
                if (rbx_3 == rsi)
                    goto label_141c4a709
        
        if (var_18 != 0)
            sub_140a74f90(var_18)
        
        return result

return 0
