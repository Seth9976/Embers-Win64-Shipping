// 函数: sub_14233e060
// 地址: 0x14233e060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result
int64_t var_18

if (arg2 == 0)
    *(arg1 + 0x18c) |= 0x10
    result = arg1 + 0x130
    
    if (result != &var_18)
        *result = 0
        int64_t* rcx_3 = result[1]
        result[1] = 0
        
        if (rcx_3 != 0)
            int32_t temp0_1 = *(rcx_3 + 0xc)
            *(rcx_3 + 0xc) -= 1
            
            if (temp0_1 == 1)
                jump(*(*rcx_3 + 8))
else
    int64_t rdx = 0
    int64_t* rbx_1 = *(arg1 + 0x250)
    
    if (rbx_1 != 0)
        int32_t rax_1 = rbx_1[1].d
        
        if (rax_1 != 0)
            rbx_1[1].d = rax_1 + 1
            rax_1.b = 1
        
        if (rax_1.b == 0)
            rbx_1 = nullptr
        
        if (rbx_1 != 0)
            rdx = *(arg1 + 0x248)
    
    var_18 = rdx
    int64_t* var_10_1 = rbx_1
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    result = sub_142272180(arg1 + 0xd8, &var_18)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            result = (**rbx_1)(rbx_1)
            int32_t temp2_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                return (*(*rbx_1 + 8))(rbx_1, 1)
return result
