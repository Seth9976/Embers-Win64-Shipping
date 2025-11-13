// 函数: sub_141d6a180
// 地址: 0x141d6a180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141dd15d0(arg1)
char rcx = arg1[0x52].b

if ((rcx & 1) != 0)
    arg1[0x46].d &= 0xfffffffe
    arg1[0x46].d |= zx.d(rcx) & 1
    arg1[0x52].b = rcx & 0xfe

uint64_t result = (*(*arg1 + 0x150))(arg1)

if (arg1[0x4a] != 0 && result != 0)
    result = sub_14243ade0(result)
    
    if (result.b != 0)
        result = sub_141d68f10(arg1)
        
        if (result == 0)
            result = data_14399fa10()
            
            if (result.b != 0)
                int32_t var_30_1 = 0
                void (* var_38)(void* arg1, int64_t arg2, int64_t arg3, int32_t arg4) =
                    sub_141d69c70
                var_38.o = var_38.o
                void var_18
                int64_t* rax_4 = sub_141d64870(&var_18, arg1, &var_38)
                int64_t var_28
                result = sub_140bcb5c0(sub_1415206f0(&arg1[0x4a], &var_28), rax_4, 0, 0, 0xffffffff)
                int64_t rcx_7 = var_28
                
                if (rcx_7 != 0)
                    return sub_140a74f90(rcx_7)

return result
