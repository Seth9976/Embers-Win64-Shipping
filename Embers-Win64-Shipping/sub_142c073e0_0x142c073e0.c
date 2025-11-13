// 函数: sub_142c073e0
// 地址: 0x142c073e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg1 + 0x18)

if ((result.b & 0x10) == 0 && (result.b & 1) != 0 && *(arg1 + 0xb4) == 0)
    result = 1 << ((*(*(arg1 + 0x70) + 0x10)).b & 0x1f)
    
    if ((result & 0x1c00) != 0)
        void* r10_1 = *(arg2 + 0x40)
        int64_t rdx = *(arg2 + 0x48)
        int32_t arg_8 = 0
        result = (*(r10_1 + 0x130))(arg2, rdx, 0x25cc, &arg_8, *(r10_1 + 0x20))
        
        if (result != 0)
            int32_t var_38 = 0x25cc
            int64_t var_34_1 = 0
            int64_t var_2c_1 = 0
            sub_142c069e0(&var_38, arg1)
            sub_142bf4e80(arg1)
            void* rcx_5 = *(arg1 + 0x70)
            int128_t zmm0 = var_38.o
            *(arg1 + 0x5c) = 0
            int128_t var_20_1 = zmm0
            var_20_1:8.d = *(rcx_5 + 8)
            var_20_1:4.d = *(rcx_5 + 4)
            
            if (sub_142bf50b0(arg1, 0, 1) != 0)
                uint64_t rcx_7 = zx.q(*(arg1 + 0x64)) * 5
                int64_t rax_6 = *(arg1 + 0x78)
                *(rax_6 + (rcx_7 << 2)) = var_20_1
                *(rax_6 + (rcx_7 << 2) + 0x10) = var_2c_1:4.d
                *(arg1 + 0x64) += 1
            
            if (*(arg1 + 0x5c) u< *(arg1 + 0x60))
                while (*(arg1 + 0x58) != 0)
                    sub_142c08c10(arg1)
                    
                    if (*(arg1 + 0x5c) u>= *(arg1 + 0x60))
                        break
            
            return sub_142bf5b20(arg1)

return result
