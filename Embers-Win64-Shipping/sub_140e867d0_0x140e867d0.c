// 函数: sub_140e867d0
// 地址: 0x140e867d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[4] != 0)
    int64_t* rbx_1 = arg1[5]
    
    if (rbx_1 != 0)
        int32_t rax_1 = rbx_1[1].d
        
        if (rax_1 s> 0)
            if (rbx_1 != 0)
                if (rax_1 != 0)
                    rbx_1[1].d = rax_1 + 1
                    rax_1.b = 1
                
                if (rax_1.b == 0)
                    rbx_1 = nullptr
            
            int64_t* rcx = nullptr
            
            if (rbx_1 != 0)
                rcx = arg1[4]
            
            (*(*rcx + 0x1c0))(rcx)
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp4_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp4_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)

if (*arg1 != 0)
    int64_t* rbx_2 = arg1[1]
    
    if (rbx_2 != 0)
        int32_t rax_5 = rbx_2[1].d
        
        if (rax_5 s> 0)
            if (rax_5 != 0)
                rbx_2[1].d = rax_5 + 1
                rax_5.b = 1
            else
                rax_5.b = 0
            
            int64_t* rcx_3 = nullptr
            
            if (rax_5.b == 0)
                rbx_2 = nullptr
            
            if (rbx_2 != 0)
                rcx_3 = *arg1
            
            (*(*rcx_3 + 0x30))(rcx_3)
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    (**rbx_2)(rbx_2)
                    int32_t temp6_1 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (temp6_1 == 1)
                        (*(*rbx_2 + 8))(rbx_2, 1)

void var_18

if (arg1 != &var_18)
    *arg1 = 0
    int64_t* rcx_6 = arg1[1]
    arg1[1] = 0
    
    if (rcx_6 != 0)
        int32_t temp1_1 = *(rcx_6 + 0xc)
        *(rcx_6 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rcx_6 + 8))(rcx_6, 1)

void* result = &var_18

if (&arg1[4] != &var_18)
    arg1[4] = 0
    int64_t* rcx_7 = arg1[5]
    arg1[5] = 0
    
    if (rcx_7 != 0)
        int32_t temp2_1 = *(rcx_7 + 0xc)
        *(rcx_7 + 0xc) -= 1
        
        if (temp2_1 == 1)
            result = (*(*rcx_7 + 8))(rcx_7, 1)

arg1[8].b = 0
return result
