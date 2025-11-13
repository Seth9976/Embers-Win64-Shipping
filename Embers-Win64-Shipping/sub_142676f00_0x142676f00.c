// 函数: sub_142676f00
// 地址: 0x142676f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[0x5c]

if (rcx != 0)
    (*(*rcx + 0x18))(rcx)
    int64_t* var_30 = nullptr
    int64_t var_38
    
    if (&arg1[0x5c] != &var_38)
        arg1[0x5c] = 0
        var_38 = 0
        sub_1405aeff0(&arg1[0x5d], &var_30)
        int64_t* rcx_2 = var_30
        
        if (rcx_2 != 0)
            rcx_2[1].d -= 1
            
            if (rcx_2[1].d == 1)
                int64_t* rbx_1 = var_30
                (**rbx_1)(rbx_1)
                int32_t rax_4 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (rax_4 == 1)
                    int64_t* rcx_4 = var_30
                    (*(*rcx_4 + 8))(rcx_4, 1)

void* rax_7 = (*(*arg1 + 0x150))(arg1)
int64_t rdx_2 = *arg1
char rax_8 = (*(rdx_2 + 0x648))(arg1, rdx_2)
int64_t* result

if (rax_8 == 0)
    result = sub_14243ade0(rax_7)

if (rax_8 != 0 || result.b == 0)
    result = (*(*arg1 + 0x7b0))(arg1)
    
    if (result != 0)
        void*** rax_10 = j_sub_140a82f30(0x18)
        void*** rbx_2 = rax_10
        
        if (rax_10 == 0)
            rbx_2 = nullptr
        else
            rax_10[1].d = 1
            *(rax_10 + 0xc) = 1
            *rbx_2 = &data_142d42ea8
            rbx_2[2] = result
        
        int64_t* result_1 = result
        void*** var_40 = rbx_2
        
        if (result != -8)
            if (result[1] == 0)
            label_14267704d:
                
                if (rbx_2 != 0)
                    rbx_2[1].d += 1
                
                result[1] = result
                int64_t* rcx_10 = result[2]
                
                if (rbx_2 != rcx_10)
                    if (rbx_2 != 0)
                        *(rbx_2 + 0xc) += 1
                        rcx_10 = result[2]
                    
                    if (rcx_10 != 0)
                        int32_t rax_12 = *(rcx_10 + 0xc)
                        *(rcx_10 + 0xc) -= 1
                        
                        if (rax_12 == 1 && rcx_10 != 0)
                            (*(*rcx_10 + 8))(rcx_10, 1)
                    
                    result[2] = rbx_2
                
                if (rbx_2 != 0)
                    rbx_2[1].d -= 1
                    
                    if (rbx_2[1].d == 1)
                        (**rbx_2)(rbx_2)
                        int32_t rax_16 = *(rbx_2 + 0xc)
                        *(rbx_2 + 0xc) -= 1
                        
                        if (rax_16 == 1)
                            (*rbx_2)[1](rbx_2, 1)
            else
                void* rcx_9 = result[2]
                
                if (rcx_9 == 0)
                    goto label_14267704d
                
                int32_t rax_11 = 0
                
                if (0 == *(rcx_9 + 8))
                    *(rcx_9 + 8) = 0
                else
                    rax_11 = *(rcx_9 + 8)
                
                if (rax_11 s<= 0)
                    goto label_14267704d
        
        if (&arg1[0x5c] != &result_1)
            arg1[0x5c] = result
            result_1 = nullptr
            sub_1405aeff0(&arg1[0x5d], &var_40)
        
        void*** rcx_14 = var_40
        
        if (rcx_14 != 0)
            rcx_14[1].d -= 1
            
            if (rcx_14[1].d == 1)
                void*** rbx_3 = var_40
                (**rbx_3)(rbx_3)
                int32_t rdi_1 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (rdi_1 == 1)
                    void*** rcx_16 = var_40
                    (*rcx_16)[1](rcx_16, zx.q(rdi_1))
        
        result = (*(*result + 0x58))(result)
    
    if (rax_7 != 0)
        void* rbx_4 = *(rax_7 + 0x120)
        
        if (rbx_4 != 0)
            void* rax_22 = sub_14269bba0()
            void* rdx_5 = *(rbx_4 + 0x10)
            result = sx.q(*(rax_22 + 0x38))
            
            if (result.d s<= *(rdx_5 + 0x38))
                int64_t* result_2 = result
                result = *(rdx_5 + 0x30)
                
                if (result[result_2] == rax_22 + 0x30)
                    return (*(*arg1 + 0x680))(arg1, *(rbx_4 + 0x70) & 1)

return result
