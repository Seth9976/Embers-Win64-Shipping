// 函数: sub_1423465b0
// 地址: 0x1423465b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result
int64_t* rbx_1
int64_t* var_28
void* const var_18

if (arg2 == 0 || arg3 == 0)
    *(arg1 + 0x28a) = 0
    void* const rdx_3 = nullptr
    int64_t* rbx_2 = arg1[0x4b]
    int64_t* rcx_6 = data_143e29f28
    
    if (rbx_2 != 0)
        int32_t rax_7 = rbx_2[1].d
        
        if (rax_7 != 0)
            rbx_2[1].d = rax_7 + 1
            rax_7.b = 1
        
        if (rax_7.b == 0)
            rbx_2 = nullptr
        
        if (rbx_2 != 0)
            rdx_3 = arg1[0x4a]
    
    var_18 = rdx_3
    int64_t* var_10_1 = rbx_2
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    result = (*(*rcx_6 + 0x28))(rcx_6, &var_28, &var_18)
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            result = (**rbx_2)(rbx_2)
            int32_t temp1_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp1_1 == 1)
                result = (*(*rbx_2 + 8))(rbx_2, 1)
    
    int64_t* rcx_9 = var_28
    
    if (rcx_9 != 0)
        result = sub_140e19ef0(rcx_9, 6)
    
    int64_t* var_20
    rbx_1 = var_20
else
    *(arg1 + 0x28a) = 1
    int64_t* rdx = nullptr
    int64_t* rbx = arg1[0x4b]
    int64_t* rcx = data_143e29f28
    
    if (rbx != 0)
        int32_t rax_1 = rbx[1].d
        
        if (rax_1 != 0)
            rbx[1].d = rax_1 + 1
            rax_1.b = 1
        
        if (rax_1.b == 0)
            rbx = nullptr
        
        if (rbx != 0)
            rdx = arg1[0x4a]
    
    var_28 = rdx
    int64_t* var_20_1 = rbx
    
    if (rbx != 0)
        rbx[1].d += 1
    
    result = (*(*rcx + 0x28))(rcx, &var_18, &var_28)
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            result = (**rbx)(rbx)
            int32_t temp3_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp3_1 == 1)
                result = (*(*rbx + 8))(rbx, 1)
    
    void* const rcx_3 = var_18
    
    if (rcx_3 != 0)
        int64_t* rcx_4 = *(rcx_3 + 0x910)
        result = (*(*arg1 + 0x18))(arg1, zx.q(arg2), zx.q(arg3), zx.q((*(*rcx_4 + 0x68))(rcx_4)))
    
    int64_t* var_10
    rbx_1 = var_10

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp5_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp5_1 == 1)
            return (*(*rbx_1 + 8))(rbx_1, 1)

return result
