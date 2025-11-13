// 函数: sub_142837028
// 地址: 0x142837028
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rdx_1 = arg1 u/ 0x2e

if (arg1 != rdx_1 * 0x2e || arg1 == 0)
    return sub_142835944(3, "Sample header has invalid size", arg3)

int32_t rdi_1

if (rdx_1 != 1)
    int32_t i = 0
    rdi_1 = 1
    
    if (rdx_1 != 1)
        do
            void* rax_2 = malloc(0x30)
            *(arg2 + 0x38) = sub_142834060(*(arg2 + 0x38), rax_2)
            
            if ((*(arg4 + 0x18))(rax_2, 0x14, arg3) == 0xffffffff)
                return 0
            
            *(rax_2 + 0x14) = 0
            int32_t var_48
            
            if ((*(arg4 + 0x18))(&var_48, 4, arg3) == 0xffffffff)
                return 0
            
            *(rax_2 + 0x18) = var_48
            int32_t var_44
            
            if ((*(arg4 + 0x18))(&var_44, 4, arg3) == 0xffffffff)
                return 0
            
            *(rax_2 + 0x1c) = var_44
            int32_t var_40
            
            if ((*(arg4 + 0x18))(&var_40, 4, arg3) == 0xffffffff)
                return 0
            
            *(rax_2 + 0x20) = var_40
            int32_t var_3c
            
            if ((*(arg4 + 0x18))(&var_3c, 4, arg3) == 0xffffffff)
                return 0
            
            *(rax_2 + 0x24) = var_3c
            int32_t var_38
            
            if ((*(arg4 + 0x18))(&var_38, 4, arg3) == 0xffffffff)
                return 0
            
            *(rax_2 + 0x28) = var_38
            
            if ((*(arg4 + 0x18))(rax_2 + 0x2c, 1, arg3) == 0xffffffff)
                return 0
            
            if ((*(arg4 + 0x18))(rax_2 + 0x2d, 1, arg3) == 0xffffffff)
                return 0
            
            if ((*(arg4 + 0x20))(arg3, 2, 1) == 0xffffffff)
                return 0
            
            int16_t arg_8
            
            if ((*(arg4 + 0x18))(&arg_8, 2, arg3) == 0xffffffff)
                return 0
            
            i += 1
            *(rax_2 + 0x2e) = arg_8
            *(rax_2 + 0x15) = 0
        while (i u< rdx_1 - 1)
else
    sub_142833a04(rdx_1 + 1, "File contains no samples", arg3)
    rdi_1 = rdx_1

if ((*(arg4 + 0x20))(arg3, 0x2e, zx.q(rdi_1)) != 0xffffffff)
    return zx.q(rdi_1)

return 0
