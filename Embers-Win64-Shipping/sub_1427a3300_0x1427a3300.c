// 函数: sub_1427a3300
// 地址: 0x1427a3300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int64_t* i = *(arg1 + 0x28)

for (void* rbp_2 = &i[sx.q(*(arg1 + 0x30)) * 4]; i != rbp_2; i = &i[4])
    int64_t* rax = *i
    int64_t rax_1 = i[1]
    int64_t var_48
    sub_140596d10(&var_48, &i[2])
    result = (*(*rax + 0x298))(rax)
    
    if (result.b != 0)
        int32_t rbx_1 = *arg2
        result = (*(*rax + 0x270))(rax)
        
        if ((rbx_1 & result.d) != 0)
            int128_t var_38
            result = (*(*rax + 0x2a0))(rax, &var_38, arg2)
            int32_t var_30
            
            if (var_30 != 2)
                int64_t rbx_2 = sx.q(arg3[1].d)
                int64_t var_20_1 = rax_1
                int32_t rax_6 = (rbx_2 + 1).d
                arg3[1].d = rax_6
                
                if (rax_6 s> *(arg3 + 0xc))
                    sub_1405c4e40(arg3)
                
                result = *arg3
                int128_t* rcx_6 = rbx_2 << 5
                *(rcx_6 + result) = var_38
                int128_t var_28
                *(rcx_6 + result + 0x10) = var_28
    
    int64_t rcx_7 = var_48
    
    if (rcx_7 != 0)
        result = sub_140a74f90(rcx_7)

return result
