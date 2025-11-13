// 函数: sub_142093d80
// 地址: 0x142093d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[8].d == 0 && arg1[0x12].d == 0)
    int64_t rax
    rax.b = 0
    return rax

void var_38
void var_28
(*(*arg1 + 0x370))(arg1, arg5, arg3, &var_28, &var_38)
sub_142083c60(arg1, arg2, &var_28, &var_38, arg4, arg6)
uint64_t rax_2 = zx.q(*(arg1 + 0xc4))
int64_t var_48
int64_t* rax_8

if (rax_2.b == 2)
    int64_t* rcx_2 = *(arg2 + 0x20)
    
    if (rcx_2 != 0)
        rax_2 = (*(*rcx_2 + 0x260))(rcx_2)
        
        if (rax_2 != 0)
            void* rbx_1 = *(rax_2 + 0x130)
            
            if (rbx_1 == 0)
                int32_t var_40_2 = data_143dbb210
                rax_8 = &var_48
                var_48 = data_143dbb208
            else
                float zmm1[0x4] = *(rbx_1 + 0x1c0)
                uint32_t temp0_2 = _mm_movemask_ps(_mm_cmpeq_ps(*(rbx_1 + 0x180), zmm1, 4))
                float var_18[0x4] = zmm1
                
                if (temp0_2 != 0)
                    *(rbx_1 + 0x180) = zmm1
                    int32_t* rax_5 = sub_140adf5d0(&var_18, &var_48)
                    *(rbx_1 + 0x190) = *rax_5
                    *(rbx_1 + 0x198) = rax_5[2]
                
                int32_t var_40_1 = *(rbx_1 + 0x198)
                rax_8 = &var_48
                var_48 = *(rbx_1 + 0x190)
            
            *arg6 = *rax_8
            arg6[1].d = rax_8[1].d
else if (rax_2.b == 1)
    rax_8 = (*(*arg1 + 0x388))(arg1, &var_48, arg2)
    *arg6 = *rax_8
    arg6[1].d = rax_8[1].d
rax_2.b = 1
return rax_2
