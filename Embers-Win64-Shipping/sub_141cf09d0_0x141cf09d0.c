// 函数: sub_141cf09d0
// 地址: 0x141cf09d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
int32_t* rbx_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143f36200 s> *rbx_1)
    _Init_thread_header(&data_143f36200)
    
    if (data_143f36200 == 0xffffffff)
        if (data_143cec448 s> *rbx_1)
            _Init_thread_header(&data_143cec448)
            
            if (data_143cec448 == 0xffffffff)
                sub_140b58260(&data_143cec440, u"EngineCryptoFeature", 1)
                _Init_thread_footer(&data_143cec448)
        
        int64_t rbx_2 = data_143cec440
        sub_140a387e0()
        data_143f361f0 = 0
        data_143f361f8 = 0
        void* r8 = data_14399e720
        int32_t rax_7 = (*(r8 + 8))(&data_14399e720, rbx_2, r8)
        int32_t rbp = 0
        
        if (rax_7 s> 0)
            do
                void* r9_1 = data_14399e720
                int64_t rax_8 = (*(r9_1 + 0x10))(&data_14399e720, rbx_2, zx.q(rbp), r9_1)
                int64_t rsi_1
                
                if (rax_8 == 0)
                    rsi_1 = 0
                else
                    rsi_1 = rax_8 - 8
                
                int64_t rdi_1 = sx.q(data_143f361f8.d)
                int32_t rax_9 = (rdi_1 + 1).d
                bool cond:1_1 = rax_9 s<= data_143f361f8:4.d
                data_143f361f8.d = rax_9
                
                if (not(cond:1_1))
                    sub_1405a4d70(&data_143f361f0)
                
                rbp += 1
                *(data_143f361f0 + (rdi_1 << 3)) = rsi_1
            while (rbp s< rax_7)
        
        atexit(sub_142cf7570)
        _Init_thread_footer(&data_143f36200)

return *data_143f361f0
