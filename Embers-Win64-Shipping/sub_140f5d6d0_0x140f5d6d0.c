// 函数: sub_140f5d6d0
// 地址: 0x140f5d6d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x558) = *arg2
void* rbx = arg2[1]
int64_t* rcx = *(arg1 + 0x560)

if (rbx != rcx)
    if (rbx != 0)
        *(rbx + 0xc) += 1
        rcx = *(arg1 + 0x560)
    
    if (rcx != 0)
        int32_t temp0_1 = *(rcx + 0xc)
        *(rcx + 0xc) -= 1
        
        if (temp0_1 == 1)
            (*(*rcx + 8))(rcx, 1)
    
    *(arg1 + 0x560) = rbx

void* rsi = *(arg1 + 0x550)
void* result
int64_t* rbx_1
int64_t var_28

if (rsi == 0)
    rbx_1 = arg2[1]
    var_28 = *arg2
    int64_t* var_20_1 = rbx_1
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    result = sub_140de1b90(arg1 + 0x2b8, &var_28)
else
    rbx_1 = *(rsi + 0x18)
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    sub_140e0dfc0(rsi)
    int64_t* rdi_1 = arg2[1]
    var_28 = *arg2
    
    if (rdi_1 != 0)
        rdi_1[1].d += 1
    
    if (&var_28 != rsi + 0x10)
        var_28.o = *(rsi + 0x10)
        *(rsi + 0x10) = var_28.o
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp6_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)
    
    result = sub_140de7bf0(rsi)

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp3_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            result = (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rbx_2 = arg2[1]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        result = (**rbx_2)(rbx_2)
        int32_t temp5_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp5_1 == 1)
            jump(*(*rbx_2 + 8))

return result
