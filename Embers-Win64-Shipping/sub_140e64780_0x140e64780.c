// 函数: sub_140e64780
// 地址: 0x140e64780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
int64_t rcx = 0
int64_t* rbx = *(arg1 + 0x10)

if (rbx != 0)
    int32_t rax_1 = rbx[1].d
    
    if (rax_1 != 0)
        rbx[1].d = rax_1 + 1
        rax_1.b = 1
    
    if (rax_1.b == 0)
        rbx = nullptr
    
    if (rbx != 0)
        rcx = *(arg1 + 8)

int64_t var_28 = rcx
int64_t* var_20 = rbx
void arg_8
int32_t* result = sub_140e10ae0(arg3, &arg_8, &var_28)

if (*result == 0xffffffff)
    sub_140e47250(arg3, &arg_8, &var_28, nullptr)
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp2_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx + 8))(rbx, 1)
    
    result = sub_140e45370(arg2, arg1 + 0x18)
    
    for (; i s>= 0; i += 1)
        if (i s>= *(arg1 + 0xc0))
            break
        
        int64_t* rbx_3 = (sx.q(i) << 4) + *(arg1 + 0xb8)
        int64_t rcx_8 = *rbx_3
        int64_t* rbx_4 = rbx_3[1]
        
        if (rbx_4 != 0)
            *(rbx_4 + 0xc) += 1
        
        if (rcx_8 == 0)
        label_140e648d4:
            
            if (rbx_4 != 0)
                int32_t temp4_1 = *(rbx_4 + 0xc)
                *(rbx_4 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    result = (*(*rbx_4 + 8))(rbx_4, 1)
        else if (rbx_4 != 0)
            result = zx.q(rbx_4[1].d)
            
            if (result.d s> 0)
                rbx_4[1].d = result.d + 1
                result = sub_140e64780(rcx_8, arg2, arg3)
                rbx_4[1].d -= 1
                
                if (rbx_4[1].d == 1)
                    result = (**rbx_4)(rbx_4)
                    int32_t temp6_1 = *(rbx_4 + 0xc)
                    *(rbx_4 + 0xc) -= 1
                    
                    if (temp6_1 == 1)
                        result = (*(*rbx_4 + 8))(rbx_4, 1)
            
            goto label_140e648d4
else if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        result = (**rbx)(rbx)
        int32_t temp3_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp3_1 == 1)
            return (*(*rbx + 8))(rbx, 1)

return result
