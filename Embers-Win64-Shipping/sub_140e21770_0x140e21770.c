// 函数: sub_140e21770
// 地址: 0x140e21770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18

if (*(arg1 + 0x9b8) != 0)
    int64_t* rcx = *(arg1 + 0x9b0)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rbx = *(arg1 + 0x10)
        int64_t* rsi = nullptr
        int64_t rcx_1 = 0
        
        if (rbx != 0)
            int32_t rax_3 = rbx[1].d
            
            if (rax_3 != 0)
                rbx[1].d = rax_3 + 1
                rax_3.b = 1
            
            if (rax_3.b == 0)
                rbx = nullptr
            
            if (rbx != 0)
                rcx_1 = *(arg1 + 8)
        
        var_18 = rcx_1
        
        if (rbx != 0)
            int32_t rax_4 = rbx[1].d
            rbx[1].d = rax_4
            
            if (rax_4 == 0)
                (**rbx)(rbx)
                int32_t temp1_1 = *(rbx + 0xc)
                *(rbx + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rbx + 8))(rbx, 1)
        
        if (*(arg1 + 0x9b8) != 0)
            rsi = *(arg1 + 0x9b0)
        
        int64_t result = (*(*rsi + 0x48))(rsi, &var_18)
        
        if (rbx != 0)
            rbx[1].d -= 1
            
            if (rbx[1].d == 1)
                result = (**rbx)(rbx)
                int32_t temp3_1 = *(rbx + 0xc)
                *(rbx + 0xc) -= 1
                
                if (temp3_1 == 1)
                    return (*(*rbx + 8))(rbx, 1)
        
        return result

int64_t* rbx_2 = *(arg1 + 0x10)
int64_t rsi_1 = 0
int64_t* r14_1 = data_143e20d08

if (rbx_2 != 0)
    int32_t rax_11 = rbx_2[1].d
    
    if (rax_11 != 0)
        rbx_2[1].d = rax_11 + 1
        rax_11.b = 1
    
    if (rax_11.b == 0)
        rbx_2 = nullptr
    
    if (rbx_2 != 0)
        rsi_1 = *(arg1 + 8)

var_18 = rsi_1
int64_t* var_10_1 = rbx_2

if (rbx_2 != 0)
    int32_t rax_12 = rbx_2[1].d
    rbx_2[1].d = rax_12
    
    if (rax_12 == 0)
        (**rbx_2)(rbx_2)
        int32_t temp0_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp0_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

return (*(*r14_1 + 0x130))(r14_1, &var_18)
