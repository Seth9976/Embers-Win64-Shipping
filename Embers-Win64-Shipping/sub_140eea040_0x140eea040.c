// 函数: sub_140eea040
// 地址: 0x140eea040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
void* result = arg1
int32_t i_1 = 0

if (*(arg1 + 0x30) s> 0)
    int64_t r13_1 = 0
    int64_t var_78_1 = 0
    
    do
        int32_t j = 0
        int64_t* rbp_2 = *(result + 0x28) + r13_1
        
        if (rbp_2[1].d s> 0)
            int64_t* r14_1 = nullptr
            
            do
                int64_t rax = *rbp_2
                int64_t* r8 = *(r14_1 + rax)
                int64_t* var_70 = r8
                int64_t* rcx = *(r14_1 + rax + 8)
                
                if (rcx != 0)
                    rcx[1].d += 1
                    r8 = var_70
                
                void var_60
                int64_t* rax_2 = (*(*r8 + 8))(r8, &var_60)
                int64_t* rbx_1 = rax_2[1]
                int64_t* r15_1 = *rax_2
                
                if (rbx_1 != 0)
                    rbx_1[1].d += 1
                
                int64_t* var_58
                
                if (var_58 != 0)
                    var_58[1].d -= 1
                    
                    if (var_58[1].d == 1)
                        (**var_58)(var_58)
                        int32_t temp2_1 = *(var_58 + 0xc)
                        *(var_58 + 0xc) -= 1
                        
                        if (temp2_1 == 1)
                            (*(*var_58 + 8))(var_58, 1)
                
                (*(*r15_1 + 0xa0))(r15_1, &var_70, arg2, arg3, var_78_1)
                
                if (rbx_1 != 0)
                    rbx_1[1].d -= 1
                    
                    if (rbx_1[1].d == 1)
                        (**rbx_1)(rbx_1)
                        int32_t temp4_1 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (temp4_1 == 1 && rbx_1 != 0)
                            (*(*rbx_1 + 8))(rbx_1, 1)
                
                if (rcx != 0)
                    rcx[1].d -= 1
                    
                    if (rcx[1].d == 1)
                        (**rcx)(rcx)
                        int32_t temp5_1 = *(rcx + 0xc)
                        *(rcx + 0xc) -= 1
                        
                        if (temp5_1 == 1)
                            (*(*rcx + 8))(rcx, 1)
                
                j += 1
                r14_1 = &r14_1[2]
            while (j s< rbp_2[1].d)
            
            i = i_1
            r13_1 = var_78_1
        
        result = arg1
        i += 1
        r13_1 += 0x58
        i_1 = i
        var_78_1 = r13_1
    while (i s< *(result + 0x30))

return result
