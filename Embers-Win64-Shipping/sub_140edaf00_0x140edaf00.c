// 函数: sub_140edaf00
// 地址: 0x140edaf00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (arg1[1].d s<= 0)
    return 

int64_t rsi_1 = 0

do
    int64_t* rdx = *arg1
    void* rcx = nullptr
    int64_t* rbx_1 = *(rdx + rsi_1 + 8)
    
    if (rbx_1 != 0)
        int32_t rax_1 = rbx_1[1].d
        
        if (rax_1 == 0)
            rbx_1 = nullptr
        else
            rbx_1[1].d = rax_1 + 1
            
            if (rbx_1 != 0)
                rcx = *(rdx + rsi_1)
    
    int64_t* var_18
    int64_t* rax
    int512_t zmm0_1
    rax, zmm0_1 = sub_140ebf640(rcx, &var_18)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    int64_t* rcx_3 = var_18
    
    if (rcx_3 != 0)
        if (arg2 == 0)
            sub_140e19c60(rcx_3)
        else
            sub_140e25670(rcx_3, zmm0_1)
    
    int64_t* var_10
    
    if (var_10 != 0)
        var_10[1].d -= 1
        
        if (var_10[1].d == 1)
            (**var_10)(var_10)
            int32_t temp3_1 = *(var_10 + 0xc)
            *(var_10 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*var_10 + 8))(var_10, 1)
    
    i += 1
    rsi_1 += 0x10
while (i s< arg1[1].d)
