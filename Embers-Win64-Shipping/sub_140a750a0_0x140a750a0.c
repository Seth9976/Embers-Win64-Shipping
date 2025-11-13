// 函数: sub_140a750a0
// 地址: 0x140a750a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
int32_t result = *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)))

if (data_143db95e0 s> result)
    result = _Init_thread_header(&data_143db95e0)
    
    if (data_143db95e0 == 0xffffffff)
        void var_88
        sub_140b6c480(&var_88)
        void*** rax_2 = sub_140b65030()
        data_143ddb3f0 = rax_2
        sub_140a46430(rax_2)
        
        if (sub_140a54810() != 0)
            int64_t* rcx_4 = data_143ddb3f0
            void*** rdi_1
            
            if ((*(*rcx_4 + 0x80))(rcx_4) != 0)
                rdi_1 = data_143ddb3f0
            else
                void*** rax_6 = malloc(0x38)
                rdi_1 = rax_6
                
                if (rax_6 == 0)
                    rdi_1 = nullptr
                    data_143ddb3f0 = 0
                else
                    int64_t rax_7 = data_143ddb3f0
                    *rdi_1 = &data_142e62088
                    rdi_1[1] = rax_7
                    InitializeCriticalSection(&rdi_1[2])
                    SetCriticalSectionSpinCount(&rdi_1[2], 0xfa0)
                    data_143ddb3f0 = rdi_1
            
            data_143ddb3f0 = sub_140a59e60(rdi_1)
        
        data_143db95dc = 0
        return _Init_thread_footer(&data_143db95e0)

return result
