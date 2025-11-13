// 函数: sub_140ed6260
// 地址: 0x140ed6260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = *arg3
int64_t* rax_1 = arg3[1]

if (rax_1 != 0)
    rax_1[1].d += 1

void* var_18
sub_140ed6440(arg1, &var_18, &var_28, arg4, arg5, arg6, arg7)

if (rax_1 != 0)
    rax_1[1].d -= 1
    
    if (rax_1[1].d == 1)
        (**rax_1)(rax_1)
        int32_t temp1_1 = *(rax_1 + 0xc)
        *(rax_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rax_1 + 8))(rax_1, 1)

void* rcx_2 = var_18

if (rcx_2 == 0)
    *arg2 = 0
    arg2[1] = 0
else
    int64_t* rbx_1 = *(rcx_2 + 0x10)
    int64_t* r14_1 = nullptr
    
    if (rbx_1 != 0)
        int32_t rax_6 = rbx_1[1].d
        
        if (rax_6 != 0)
            rbx_1[1].d = rax_6 + 1
            rax_6.b = 1
        
        if (rax_6.b == 0)
            rbx_1 = nullptr
        
        if (rbx_1 != 0)
            int32_t rax_7 = rbx_1[1].d
            r14_1 = *(rcx_2 + 8)
            rbx_1[1].d = rax_7
            
            if (rax_7 == 0)
                (**rbx_1)(rbx_1)
                int32_t temp5_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
    
    if ((*(*r14_1 + 0x280))(r14_1) == 0)
        *(r14_1 + 0x3f9) = 0
    else
        *(r14_1 + 0x3f9) = 1
        int64_t* rsi_1 = r14_1[0x7a]
        
        if (rsi_1 != 0)
            int32_t rax_12 = rsi_1[1].d
            
            if (rax_12 != 0)
                rsi_1[1].d = rax_12 + 1
                rax_12.b = 1
            
            if (rax_12.b == 0)
                rsi_1 = nullptr
            
            if (rsi_1 != 0)
                rsi_1[1].d -= 1
                
                if (rsi_1[1].d == 1)
                    (**rsi_1)(rsi_1)
                    int32_t temp7_1 = *(rsi_1 + 0xc)
                    *(rsi_1 + 0xc) -= 1
                    
                    if (temp7_1 == 1)
                        (*(*rsi_1 + 8))(rsi_1, 1)
    
    sub_140ec4530(r14_1)
    *arg2 = r14_1
    arg2[1] = rbx_1
    
    if (rbx_1 != 0)
        int32_t rax_15 = rbx_1[1].d
        rbx_1[1].d = rax_15
        
        if (rax_15 == 0)
            (**rbx_1)(rbx_1)
            int32_t temp4_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        (**var_10)(var_10)
        int32_t temp3_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*var_10 + 8))(var_10, 1)

return arg2
