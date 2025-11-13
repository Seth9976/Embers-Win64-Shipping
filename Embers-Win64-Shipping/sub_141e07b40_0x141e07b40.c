// 函数: sub_141e07b40
// 地址: 0x141e07b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int32_t i = 0
int128_t zmm7 = arg2

if (*(arg1 + 0x80) s> 0)
    int64_t* r14_1 = nullptr
    int128_t zmm6 = zx.o(0)
    
    do
        result = *(arg1 + 0x78)
        void** rsi_1 = *(r14_1 + result)
        
        if (rsi_1 != 0)
            void* rcx = *rsi_1
            
            if (rcx != 0 && not(zmm6.d f== rsi_1[0x2a].d))
                void arg_8
                result = sub_141e23510(rcx, &arg_8)
                
                if (*result == arg3)
                    int64_t rdi_1 = *(arg1 + 0x78)
                    void var_68
                    int64_t* rax
                    rax, zmm7 = sub_141ddd680(&var_68, *rsi_1 + 0xe0, zmm7.d)
                    result, zmm6 = sub_141e31c70(*(r14_1 + rdi_1), rax, 1)
        
        i += 1
        r14_1 = &r14_1[1]
    while (i s< *(arg1 + 0x80))

return result
