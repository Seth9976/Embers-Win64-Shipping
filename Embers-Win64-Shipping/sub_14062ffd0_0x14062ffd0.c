// 函数: sub_14062ffd0
// 地址: 0x14062ffd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_1423de540(data_143f5b298, arg1, 0)

if (result != 0)
    int64_t* rbx_1 = *arg2
    int32_t i_2 = arg2[1].d
    
    if (i_2 != 0)
        int32_t i
        
        do
            int64_t rcx_1 = *rbx_1
            
            if (rcx_1 != 0)
                sub_140a74f90(rcx_1)
            
            rbx_1 = &rbx_1[2]
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    arg2[1].d = 0
    
    if (*(arg2 + 0xc) != 0)
        sub_14061cd70(arg2, 0)
    
    int64_t* i_1 = *(result + 0x98)
    result = sx.q(*(result + 0xa0))
    
    for (void* r14_1 = &i_1[result]; i_1 != r14_1; i_1 = &i_1[1])
        void* rcx_3 = *i_1
        
        if (rcx_3 != 0)
            result = *(rcx_3 + 0x128)
            
            if (result != 0 && (*(result + 0x1f4) & 0x20) != 0)
                int64_t var_28
                void arg_18
                int64_t* rax_1 = sub_140b63b70(sub_1420e4d10(rcx_3, &arg_18), &var_28)
                int64_t rbp_1 = sx.q(arg2[1].d)
                int32_t rcx_5 = (rbp_1 + 1).d
                arg2[1].d = rcx_5
                
                if (rcx_5 s> *(arg2 + 0xc))
                    sub_1405a4f90(arg2)
                
                int64_t* rcx_9 = (rbp_1 << 4) + *arg2
                *rcx_9 = 0
                *rcx_9 = *rax_1
                *rax_1 = 0
                rcx_9[1].d = rax_1[1].d
                result = zx.q(*(rax_1 + 0xc))
                *(rcx_9 + 0xc) = result.d
                rax_1[1] = 0
                int64_t rcx_10 = var_28
                
                if (rcx_10 != 0)
                    result = sub_140a74f90(rcx_10)

return result
