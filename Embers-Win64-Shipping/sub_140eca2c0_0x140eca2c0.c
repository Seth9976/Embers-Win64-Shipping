// 函数: sub_140eca2c0
// 地址: 0x140eca2c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = *(arg4 + 0x70)

if (r14 == 0)
label_140eca3c0:
    *arg2 = 0
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702
else
    int64_t rbx_1 = *r14
    sub_140ec00f0()
    
    if ((*(rbx_1 + 0x58))(r14, &data_143e29fe0) == 0)
        goto label_140eca3c0
    
    int64_t* rbx_2 = *(arg4 + 0x78)
    int64_t r14_1 = *(arg4 + 0x70)
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp1_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
    
    if (r14_1 == 0)
        goto label_140eca3c0
    
    int64_t* rbx_3 = *(arg1 + 0x4d0)
    int64_t* rcx_3 = nullptr
    
    if (rbx_3 != 0)
        int32_t rax_4 = rbx_3[1].d
        
        if (rax_4 != 0)
            rbx_3[1].d = rax_4 + 1
            rax_4.b = 1
        
        if (rax_4.b == 0)
            rbx_3 = nullptr
        
        if (rbx_3 != 0)
            rcx_3 = *(arg1 + 0x4c8)
    
    (*(*rcx_3 + 0x268))(rcx_3, arg2, zx.q(*(arg1 + 0x4d8)), arg4)
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)(rbx_3)
            int32_t temp3_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_3 + 8))(rbx_3, 1)

return arg2
