// 函数: sub_1427a31f0
// 地址: 0x1427a31f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int64_t* i = *(arg1 + 0x28)

for (void* rbp_2 = &i[sx.q(*(arg1 + 0x30)) * 4]; i != rbp_2; i = &i[4])
    int64_t* rax = *i
    int64_t rax_1 = i[1]
    int64_t var_48
    sub_140596d10(&var_48, &i[2])
    int32_t rdi_1 = *arg2
    result = (*(*rax + 0x270))(rax)
    
    if ((rdi_1 & result.d) != 0)
        int128_t var_38
        result = (*(*rax + 0x278))(rax, &var_38, arg2)
        int32_t var_30
        
        if (var_30 != 2)
            int64_t rdi_2 = sx.q(arg3[1].d)
            int64_t var_20_1 = rax_1
            int32_t rax_5 = (rdi_2 + 1).d
            arg3[1].d = rax_5
            
            if (rax_5 s> *(arg3 + 0xc))
                sub_1405c4e40(arg3)
            
            result = *arg3
            int128_t* rcx_5 = rdi_2 << 5
            *(rcx_5 + result) = var_38
            int128_t var_28
            *(rcx_5 + result + 0x10) = var_28
    
    int64_t rcx_6 = var_48
    
    if (rcx_6 != 0)
        result = sub_140a74f90(rcx_6)

return result
