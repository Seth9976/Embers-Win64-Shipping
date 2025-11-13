// 函数: sub_141d3d540
// 地址: 0x141d3d540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = arg2
int128_t* result = sub_1417b0190(&arg_10)
int128_t* result_1 = result

if (result != 0)
    int64_t* rsi_1 = *(arg1 + 0x40)
    int64_t r15_1 = 0
    uint64_t rbx_3 = sx.q(*(arg1 + 0x48)) << 3 u>> 3
    
    if (rsi_1 u> &rsi_1[sx.q(*(arg1 + 0x48))])
        rbx_3 = 0
    
    if (rbx_3 != 0)
        do
            int32_t rax = arg_10
            int64_t rdi_1 = *rsi_1
            uint128_t var_a0_1 = *result_1
            uint128_t zmm0_1 = result_1[2]
            int64_t var_58_1 = 0
            uint128_t var_90_1 = result_1[1]
            uint128_t var_80_1 = zmm0_1
            void*** rax_1 = sub_140a82f30(0x40, 8)
            *rax_1 = &data_142ff8618
            *(rax_1 + 8) = rax.o
            *(rax_1 + 0x18) = var_a0_1
            *(rax_1 + 0x28) = var_90_1
            rax_1[7] = zmm0_1:8.q
            void*** var_58_2 = rax_1
            int32_t* (* var_68)(void* arg1, int64_t* arg2)
            int32_t* (* rax_2)(void* arg1, int64_t* arg2) = var_68
            
            if (rax_1 != -8)
                rax_2 = sub_141d35bf0
            
            int64_t* rcx_2 = *(arg1 + 0x30)
            var_68 = rax_2
            result = (*(*rcx_2 + 8))(rcx_2, rdi_1, &var_68)
            r15_1 += 1
            rsi_1 = &rsi_1[1]
        while (r15_1 != rbx_3)

return result
