// 函数: sub_141800880
// 地址: 0x141800880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = 0
char r14 = 0
void*** rax = j_sub_140a82f30(0x158)
void*** rbp_1

if (rax == 0)
    rbp_1 = nullptr
else
    int64_t* rcx = data_143ef9cf8
    
    if (rcx == 0)
        int64_t rbx_1 = *sub_140b58170(&arg_10, "HTTP", 1)
        j_sub_140b3db50()
        j_sub_140b407e0(&data_143de7d78, rbx_1)
        rcx = data_143ef9cf8
    
    void var_38
    rbp_1 = sub_1417fe680(rax, arg1, (*(*rcx + 0x40))(rcx, &var_38), arg3, arg4, arg5, arg6, arg7)
    r14 = 1

void*** rax_8 = j_sub_140a82f30(0x18)
void*** rbx_2 = rax_8

if (rax_8 == 0)
    rbx_2 = nullptr
else
    rax_8[1].d = 1
    *(rax_8 + 0xc) = 1
    *rbx_2 = &data_142fe2318
    rbx_2[2] = rbp_1

*arg2 = rbp_1
void**** rdi_1 = &rbp_1[1]
arg2[1] = rbx_2

if (rbp_1 == 0)
    rdi_1 = nullptr

if (rdi_1 != 0)
    void* rax_9
    
    if (*rdi_1 != 0)
        rax_9 = rdi_1[1]
    
    if (*rdi_1 == 0 || rax_9 == 0 || *(rax_9 + 8) s<= 0)
        if (rbx_2 != 0)
            rbx_2[1].d += 1
        
        *rdi_1 = rbp_1
        int64_t* rcx_3 = rdi_1[1]
        
        if (rbx_2 != rcx_3)
            if (rbx_2 != 0)
                *(rbx_2 + 0xc) += 1
                rcx_3 = rdi_1[1]
            
            if (rcx_3 != 0)
                int32_t temp4_1 = *(rcx_3 + 0xc)
                *(rcx_3 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rcx_3 + 8))(rcx_3, 1)
            
            rdi_1[1] = rbx_2
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp3_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*rbx_2)[1](rbx_2, 1)

int64_t* var_30

if ((r14 & 1) != 0 && var_30 != 0)
    var_30[1].d -= 1
    
    if (var_30[1].d == 1)
        (**var_30)(var_30)
        int32_t temp1_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_30 + 8))(var_30, 1)

return arg2
