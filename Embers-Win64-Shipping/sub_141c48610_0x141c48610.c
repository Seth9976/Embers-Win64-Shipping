// 函数: sub_141c48610
// 地址: 0x141c48610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *arg1
int32_t arg_8 = 0

if ((*(rax + 0x60))(arg1, &arg_8) != 0)
    int32_t rbx_1 = 0
    
    if (arg_8 u> 0)
        do
            int64_t var_58 = 0
            int64_t var_50
            __builtin_memset(&var_50, 0, 0x18)
            int64_t var_28_1 = 0
            int64_t var_20_1 = 0
            sub_141c48cb0(&var_58)
            int64_t var_48
            
            if ((*(*arg1 + 0x68))(arg1, zx.q(rbx_1), &var_58) != 0)
                int16_t* rdx_2
                
                if (arg2[1].d == 0)
                    rdx_2 = &data_142d40450
                else
                    rdx_2 = *arg2
                
                if (sub_140a23cf0(&var_58, rdx_2, 1, 0, 0xffffffff) != 0xffffffff)
                    if (var_28_1 != 0)
                        sub_140a74f90(var_28_1)
                    
                    if (var_48 != 0)
                        sub_140a74f90(var_48)
                    
                    int64_t rcx_8 = var_58
                    
                    if (rcx_8 != 0)
                        sub_140a74f90(rcx_8)
                    
                    return zx.q(rbx_1)
            
            if (var_28_1 != 0)
                sub_140a74f90(var_28_1)
            
            if (var_48 != 0)
                sub_140a74f90(var_48)
            
            int64_t rcx_5 = var_58
            
            if (rcx_5 != 0)
                sub_140a74f90(rcx_5)
            
            rbx_1 += 1
        while (rbx_1 u< arg_8)

return 0xffffffff
