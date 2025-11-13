// 函数: sub_141d3d6c0
// 地址: 0x141d3d6c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = arg2
int32_t* result = sub_1417b0240(&arg_10)
int32_t* result_1 = result

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
            int32_t var_90
            sub_141d2d0b0(&var_90, result_1)
            int64_t var_58_1 = 0
            void*** rax_1 = sub_140a82f30(0x38, 8)
            rax_1[1].d = rax
            rax_1[2].d = var_90
            int32_t var_8c
            *(rax_1 + 0x14) = var_8c
            int64_t var_88
            rax_1[3] = var_88
            int32_t var_7c
            *(rax_1 + 0x24) = var_7c
            int32_t var_80
            rax_1[4].d = var_80
            int32_t var_78
            rax_1[5].d = var_78
            int32_t var_74
            *(rax_1 + 0x2c) = var_74
            int32_t var_70
            rax_1[6].d = var_70
            *rax_1 = &data_143222a28
            int32_t* (* var_68)(void* arg1, int64_t* arg2)
            int32_t* (* rax_6)(void* arg1, int64_t* arg2) = var_68
            
            if (rax_1 != -8)
                rax_6 = sub_141d35c50
            
            void*** var_58_2 = rax_1
            int64_t* rcx_7 = *(arg1 + 0x30)
            var_68 = rax_6
            result = (*(*rcx_7 + 8))(rcx_7, rdi_1, &var_68)
            r15_1 += 1
            rsi_1 = &rsi_1[1]
        while (r15_1 != rbx_3)

return result
