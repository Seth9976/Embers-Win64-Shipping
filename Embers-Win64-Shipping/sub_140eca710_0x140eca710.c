// 函数: sub_140eca710
// 地址: 0x140eca710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_28
char result = sub_140ebeb20(*(arg1 + 0x3f0), &var_28)

if (var_28 != 0)
    int64_t* rbx_1 = *(arg1 + 0x10)
    int64_t rdi_1 = 0
    
    if (rbx_1 != 0)
        int32_t rax = rbx_1[1].d
        
        if (rax != 0)
            rbx_1[1].d = rax + 1
            rax.b = 1
        
        if (rax.b == 0)
            rbx_1 = nullptr
        
        if (rbx_1 != 0)
            int32_t rax_1 = rbx_1[1].d
            rdi_1 = *(arg1 + 8)
            rbx_1[1].d = rax_1
            
            if (rax_1 == 0)
                (**rbx_1)(rbx_1)
                int32_t temp4_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
    
    int64_t var_18 = rdi_1
    int64_t* var_10_1 = rbx_1
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    result = sub_140d9c320(arg3, &var_18)
    char result_1 = result
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            int64_t rdx_2 = *rbx_1
            result = (*rdx_2)(rbx_1, rdx_2)
            int32_t temp3_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                result = (*(*rbx_1 + 8))(rbx_1, 1)
    
    if (result_1 != 0)
        int64_t zmm0_1 = sub_140ebd660()
        sub_140ed9ca0(data_143e2a070, &var_28, zmm0_1)
        int64_t rdx_4
        rdx_4.b = 1
        result = sub_140ee7440(var_28, rdx_4)

int64_t* var_20

if (var_20 != 0)
    var_20[1].d -= 1
    
    if (var_20[1].d == 1)
        result = (**var_20)(var_20)
        int32_t temp1_1 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (temp1_1 == 1)
            jump(*(*var_20 + 8))

return result
