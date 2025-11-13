// 函数: sub_141cc8c90
// 地址: 0x141cc8c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* result = arg2

if (arg4 != 0)
    void* r15_1 = arg3 + 0x40
    int32_t i
    
    do
        *result = *(r15_1 - 0x40)
        sub_141cbed70(&result[1], r15_1 - 0x38)
        
        if (&result[5] != r15_1 - 0x18)
            int32_t j_2 = result[6].d
            
            if (j_2 != 0)
                int64_t* rdi_2 = result[5] + 8
                int32_t j
                
                do
                    int64_t* rbx_1 = *rdi_2
                    
                    if (rbx_1 != 0)
                        rbx_1[1].d -= 1
                        
                        if (rbx_1[1].d == 1)
                            (**rbx_1)(rbx_1)
                            int32_t temp5_1 = *(rbx_1 + 0xc)
                            *(rbx_1 + 0xc) -= 1
                            
                            if (temp5_1 == 1)
                                (*(*rbx_1 + 8))(rbx_1, 1)
                    
                    rdi_2 = &rdi_2[2]
                    j = j_2
                    j_2 -= 1
                while (j != 1)
            
            int32_t j_3 = *(r15_1 - 0x10)
            int64_t* rbx_2 = *(r15_1 - 0x18)
            int32_t r8 = *(result + 0x34)
            result[6].d = j_3
            
            if (j_3 != 0 || r8 != 0)
                sub_1405a4be0(&result[5], j_3, r8)
                int64_t* rcx_4 = result[5]
                
                if (j_3 != 0)
                    int32_t j_1
                    
                    do
                        *rcx_4 = *rbx_2
                        void* rax_5 = rbx_2[1]
                        rcx_4[1] = rax_5
                        
                        if (rax_5 != 0)
                            *(rax_5 + 8) += 1
                        
                        rcx_4 = &rcx_4[2]
                        rbx_2 = &rbx_2[2]
                        j_1 = j_3
                        j_3 -= 1
                    while (j_1 != 1)
            else
                *(result + 0x34) = j_3
        
        int64_t* rbx_3 = *r15_1
        int64_t var_58 = *(r15_1 - 8)
        
        if (rbx_3 != 0)
            rbx_3[1].d += 1
        
        if (&var_58 != &result[7])
            var_58.o = *(result + 0x38)
            *(result + 0x38) = var_58.o
        
        if (rbx_3 != 0)
            rbx_3[1].d -= 1
            
            if (rbx_3[1].d == 1)
                (**rbx_3)(rbx_3)
                int32_t temp4_1 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rbx_3 + 8))(rbx_3, 1)
        
        int16_t rax_9 = *(r15_1 + 8)
        r15_1 += 0x50
        result[9].w = rax_9
        result = &result[0xa]
        i = i_1
        i_1 -= 1
    while (i != 1)

result.b = 1
return result
