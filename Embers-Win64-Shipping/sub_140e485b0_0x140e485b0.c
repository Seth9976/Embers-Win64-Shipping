// 函数: sub_140e485b0
// 地址: 0x140e485b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp
int64_t arg_10 = rbp
int64_t* i = *arg1

for (void* r14_2 = &i[sx.q(arg1[1].d) * 2]; i != r14_2; i = &i[2])
    int64_t* rbx_1 = i[1]
    int64_t* rcx = *i
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    void var_28
    int64_t rcx_1 = *(*(*rcx + 0x18))(rcx, &var_28)
    
    if (rcx_1 == 0 || rcx_1 != *arg2)
        rbp.b = 0
    else
        rbp.b = 1
    
    int64_t* var_20
    
    if (var_20 != 0)
        var_20[1].d -= 1
        
        if (var_20[1].d == 1)
            (**var_20)(var_20)
            int32_t temp4_1 = *(var_20 + 0xc)
            *(var_20 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*var_20 + 8))(var_20, 1)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp5_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    if (rbp.b != 0)
        int64_t* rbx_3 = arg2[1]
        
        if (rbx_3 != 0)
            rbx_3[1].d -= 1
            
            if (rbx_3[1].d == 1)
                int64_t r8_1 = *rbx_3
                (*r8_1)(rbx_3, arg3, r8_1)
                int32_t temp7_1 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    int64_t r8_2 = *rbx_3
                    (*(r8_2 + 8))(rbx_3, 1, r8_2)
        
        return i

int64_t* rbx_2 = arg2[1]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp1_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

return nullptr
