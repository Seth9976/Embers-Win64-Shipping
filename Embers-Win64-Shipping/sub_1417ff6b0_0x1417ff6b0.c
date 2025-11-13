// 函数: sub_1417ff6b0
// 地址: 0x1417ff6b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int128_t zmm6 = zx.o(0)
int128_t zmm7 = arg2

if (*(arg1 + 0x30) s> 0)
    int128_t zmm8 = 0x3c83126f
    
    while (not(zmm6.d f>= zmm7.d))
        void* rcx = data_143ef9cf8
        
        if (rcx == 0)
            void var_40
            int64_t rbx_1 = *sub_140b58170(&var_40, "HTTP", (rcx + 1).d)
            j_sub_140b3db50()
            j_sub_140b407e0(&data_143de7d78, rbx_1)
            rcx = data_143ef9cf8
        
        int64_t* rcx_2 = *(rcx + 0x10)
        (*(*rcx_2 + 8))(rcx_2, zmm8)
        void var_48
        void arg_8
        void arg_18
        void arg_20
        zmm7, zmm8 = sub_141809d80(arg1, &var_48, &arg_20, &arg_18, &arg_8)
        result, zmm6 = sub_140b73230(zmm8)
        zmm6.d = zmm6.d f+ zmm8.d
        
        if (*(arg1 + 0x30) s<= 0)
            break

return result
