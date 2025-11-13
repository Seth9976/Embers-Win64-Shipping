// 函数: sub_141b92810
// 地址: 0x141b92810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_1 = (*(*(arg1 + 0x218) + 0x48))(arg1 + 0x218)

if (rax_1 != 0)
    int64_t* var_18
    (*(*(rax_1 + 0x4f8) + 0xc8))(rax_1 + 0x4f8, &var_18)
    int64_t* rcx_2 = var_18
    int32_t var_10
    
    if (var_10 s> 0)
        void* result = *rcx_2
        sub_140a74f90(rcx_2)
        
        if (result != 0)
            void* rax_3 = sub_140d41340()
            void* rcx_3 = *(result + 0x10)
            int64_t rdx_2 = sx.q(*(rax_3 + 0x38))
            
            if (rdx_2.d s<= *(rcx_3 + 0x38) && *(*(rcx_3 + 0x30) + (rdx_2 << 3)) == rax_3 + 0x30)
                return result
    else if (rcx_2 != 0)
        sub_140a74f90(rcx_2)

return 0
