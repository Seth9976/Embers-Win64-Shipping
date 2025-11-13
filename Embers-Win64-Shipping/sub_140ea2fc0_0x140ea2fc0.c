// 函数: sub_140ea2fc0
// 地址: 0x140ea2fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0x18))()
void*** rax_1 = j_sub_140a82f30(0xc8)
void*** var_28
void*** rsi

if (rax_1 == 0)
    rsi = nullptr
else
    void* rdx = arg2[1]
    var_28 = *arg2
    void* var_20_1 = rdx
    
    if (rdx != 0)
        *(rdx + 8) += 1
    
    rsi = sub_140ee2b20(rax_1, &var_28, arg3, arg4)

void*** rax_3 = j_sub_140a82f30(0x18)
void*** rbx_1 = rax_3

if (rax_3 == 0)
    rbx_1 = nullptr
else
    rax_3[1].d = 1
    *(rax_3 + 0xc) = 1
    *rbx_1 = &data_142d42ea8
    rbx_1[2] = rsi

void**** rdi_1 = &rsi[1]

if (rsi == 0)
    rdi_1 = nullptr

if (rdi_1 != 0)
    void* rax_4
    
    if (*rdi_1 != 0)
        rax_4 = rdi_1[1]
    
    if (*rdi_1 == 0 || rax_4 == 0 || *(rax_4 + 8) s<= 0)
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        *rdi_1 = rsi
        int64_t* rcx_1 = rdi_1[1]
        
        if (rbx_1 != rcx_1)
            if (rbx_1 != 0)
                *(rbx_1 + 0xc) += 1
                rcx_1 = rdi_1[1]
            
            if (rcx_1 != 0)
                int32_t temp6_1 = *(rcx_1 + 0xc)
                *(rcx_1 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*rcx_1 + 8))(rcx_1, 1)
            
            rdi_1[1] = rbx_1
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp5_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*rbx_1)[1](rbx_1, 1)

*(rsi + 0x94) = arg5
var_28 = rsi
void*** var_20_2 = rbx_1

if (rbx_1 != 0)
    rbx_1[1].d += 1

void* result = sub_140ea20e0(arg1[1], &var_28)

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp2_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
            result = (*rbx_1)[1](rbx_1, 1)

int64_t* rbx_2 = arg2[1]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        result = (**rbx_2)(rbx_2)
        int32_t temp3_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp3_1 == 1)
            return (*(*rbx_2 + 8))(rbx_2, 1)

return result
