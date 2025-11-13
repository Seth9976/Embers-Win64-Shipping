// 函数: sub_14219da60
// 地址: 0x14219da60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = *(arg1 + 8)
*(arg1 + 0x28) = arg2

if (*(result + 8) == 1)
    int64_t* rbx_1 = *(arg2 + 0x118)
    void* rdi_1 = nullptr
    
    if (rbx_1 != 0)
        result = zx.q(rbx_1[1].d)
        
        if (result.d != 0)
            rbx_1[1].d = result.d + 1
            result.b = 1
        
        if (result.b == 0)
            rbx_1 = nullptr
        
        if (rbx_1 != 0)
            rdi_1 = *(arg2 + 0x110)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                result = (**rbx_1)(rbx_1)
                int32_t temp1_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    result = (*(*rbx_1 + 8))(rbx_1, 1)
    
    if (rdi_1 != 0)
        if (rdi_1 == arg1)
            return sub_1421a4f20(arg1) __tailcall
        
        int64_t* rbx_2 = *(rdi_1 + 0x68)
        int64_t var_18 = *(rdi_1 + 0x60)
        
        if (rbx_2 != 0)
            rbx_2[1].d += 1
        
        if (&var_18 != arg1 + 0x60)
            var_18.o = *(arg1 + 0x60)
            *(arg1 + 0x60) = var_18.o
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp3_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
        
        *(arg1 + 0xb5) = *(rdi_1 + 0xb5)
        result = zx.q(*(rdi_1 + 0xc5))
        *(arg1 + 0xc5) = result.d

return result
