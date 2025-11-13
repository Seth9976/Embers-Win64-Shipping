// 函数: sub_140f607e0
// 地址: 0x140f607e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0xa4].b = arg2
int64_t result
char var_28
int64_t var_20

if (arg2 == 0)
    int64_t* rbx_1 = arg1[2]
    int64_t r14_1 = 0
    int32_t var_30_1 = 0
    
    if (rbx_1 != 0)
        int32_t rax_2 = rbx_1[1].d
        
        if (rax_2 != 0)
            rbx_1[1].d = rax_2 + 1
            rax_2.b = 1
        
        if (rax_2.b == 0)
            rbx_1 = nullptr
        
        if (rbx_1 != 0)
            int32_t rax_3 = rbx_1[1].d
            r14_1 = arg1[1]
            rbx_1[1].d = rax_3
            
            if (rax_3 == 0)
                (**rbx_1)(rbx_1)
                int32_t temp3_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
    
    var_28.w = 0x119
    var_20 = 0
    int32_t var_18_1 = 0
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    void*** rax_6 = sub_1405978f0(0x38, &var_20)
    
    if (rax_6 != 0)
        *rax_6 = &data_142ed8c88
        rax_6[1] = r14_1
        rax_6[2] = rbx_1
        
        if (rbx_1 != 0)
            *(rbx_1 + 0xc) += 1
        
        *(rax_6 + 0x18) = sub_140f618b0.o
        rax_6[6] = sub_140a387b0()
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp2_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
        
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp4_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    result = sub_140e253b0(arg1, &var_28)
else
    var_28 = data_1439ae51c
    char var_27_1 = 1
    var_20 = 0
    int32_t var_18 = 0
    result = sub_140e253b0(arg1, &var_28)
int64_t* rcx_7 = arg1[0x9f]

if (*(rcx_7 + 0x2dc) == arg2)
    return result

*(rcx_7 + 0x2dc) = arg2
return sub_140e19ef0(rcx_7, 1) __tailcall
