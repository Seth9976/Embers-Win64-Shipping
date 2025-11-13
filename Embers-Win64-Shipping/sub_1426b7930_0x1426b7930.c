// 函数: sub_1426b7930
// 地址: 0x1426b7930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = 0
void* rbp_2 = sx.q(arg3) * 0x30 + *(arg1 + 0x58)
uint64_t result = zx.q(*(rbp_2 + 0x18))

if (*arg4 != 2)
    int32_t i = 0
    
    if (result.d s> 0)
        int64_t** r15_1 = nullptr
        
        do
            int64_t* rbx_2 = *(r15_1 + *(rbp_2 + 0x10))
            
            if ((rbx_2[0xc].b & 0x20) != 0)
                int64_t* rcx = rbx_2
                
                if ((*(rbx_2 + 0x55) & 4) != 0)
                    rcx = sub_1426b2a30(rcx, arg2)
                
                if (rcx != 0)
                    (*(*rcx + 0x2d8))(rcx, arg2, arg4)
            
            int32_t r12_1 = *arg4
            
            if ((rbx_2[0xc].b & 0x10) != 0)
                int64_t* rcx_1 = rbx_2
                
                if ((*(rbx_2 + 0x55) & 4) != 0)
                    rcx_1 = sub_1426b2a30(rcx_1, arg2)
                
                if (rcx_1 != 0)
                    (*(*rcx_1 + 0x2d0))(rcx_1, arg2, zx.q(r12_1))
            
            result = zx.q(*(rbx_2 + 0x64))
            
            if (result.b == 2)
                char var_36_1 = result.b
            label_1426b7a4e:
                void* rax_7 = *arg2
                char var_35 = var_35 & 0xfe
                int64_t* var_48 = rbx_2
                int64_t var_40_1 = 0
                int16_t var_38_1 = *(rax_7 + 0x260)
                result = sub_1426a96e0(arg2, &var_48)
            else if (result.b == 1)
                char var_36_2 = result.b
                goto label_1426b7a4e
            
            i += 1
            r15_1 = &r15_1[1]
        while (i s< *(rbp_2 + 0x18))
else if (result.d s> 0)
    int64_t rbx_1 = 0
    
    do
        result = *(rbp_2 + 0x10)
        int32_t r14_1 = *arg4
        uint64_t result_1 = *(rbx_1 + result)
        
        if ((*(result_1 + 0x60) & 0x10) != 0)
            if ((*(result_1 + 0x55) & 4) != 0)
                result = sub_1426b2a30(result_1, arg2)
                result_1 = result
            
            if (result_1 != 0)
                result = (*(*result_1 + 0x2d0))(result_1, arg2, zx.q(r14_1))
        
        i_1 += 1
        rbx_1 += 8
    while (i_1 s< *(rbp_2 + 0x18))

return result
