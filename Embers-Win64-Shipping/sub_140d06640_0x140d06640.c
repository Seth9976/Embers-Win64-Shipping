// 函数: sub_140d06640
// 地址: 0x140d06640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg1

if (*arg3 == 0x28)
    arg2[1].d = 0
    
    if (*(arg2 + 0xc) != 0)
        sub_1405a5410(arg2, 0)
    
    void* result = arg3 + 2
    
    if (iswspace(*(arg3 + 2)) != 0)
        int32_t i
        
        do
            wint_t _C = *(result + 2)
            result += 2
            i = iswspace(_C)
        while (i != 0)
    
    if (*result == 0x29)
        return result
    
    while (true)
        int128_t var_38
        sub_140d3a3a0(&var_38, nullptr)
        int64_t var_30_1 = 0
        int16_t* rax_3 = sub_140d06020(&var_38, *(rbx + 0x78), result, arg4, arg5)
        int16_t* rdi_1 = rax_3
        
        if (rax_3 == 0)
            break
        
        uint64_t rbp_1 = *arg2
        uint64_t rbx_1 = rbp_1
        int64_t rsi_3 = (sx.q(arg2[1].d) << 4) + rbp_1
        
        if (rbp_1 == rsi_3)
        label_140d0676d:
            int64_t rbx_4 = sx.q(arg2[1].d)
            int32_t rax_9 = (rbx_4 + 1).d
            arg2[1].d = rax_9
            
            if (rax_9 s> *(arg2 + 0xc))
                sub_1405a4f90(arg2)
            
            *(*arg2 + rbx_4 * 0x10) = var_38
        else
            while (true)
                if (*rbx_1 != var_38.d || *(rbx_1 + 4) != var_38:4.d)
                    if (sub_140d3e110(rbx_1) == 0 && sub_140d3e110(&var_38) == 0)
                        goto label_140d06750
                else
                label_140d06750:
                    
                    if (*(rbx_1 + 8) == var_30_1)
                        break
                
                rbx_1 += 0x10
                
                if (rbx_1 == rsi_3)
                    goto label_140d0676d
            
            if (((rbx_1 - rbp_1) s>> 4).d == 0xffffffff)
                goto label_140d0676d
        
        sub_1408f4c10(arg2)
        
        if (iswspace(*rdi_1) != 0)
            int32_t i_1
            
            do
                wint_t _C_1 = rdi_1[1]
                rdi_1 = &rdi_1[1]
                i_1 = iswspace(_C_1)
            while (i_1 != 0)
        
        int16_t rax_12 = *rdi_1
        result = &rdi_1[1]
        
        if (rax_12 != 0x2c)
            if (rax_12 != 0x29)
                break
            
            if (arg2[1].d s> 0)
                return result
            
            return nullptr
        
        rbx = arg1

return nullptr
