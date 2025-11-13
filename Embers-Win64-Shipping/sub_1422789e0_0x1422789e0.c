// 函数: sub_1422789e0
// 地址: 0x1422789e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *arg3
int64_t* rsi = arg3
int64_t var_18

if (rax != 0)
    var_18 = rax
    void* rax_1 = arg3[1]
    void* var_10_1 = rax_1
    
    if (rax_1 != 0)
        *(rax_1 + 8) += 1
    
    arg3.b = 2
    sub_140dbdce0(arg2, &var_18, arg3.b, 0)

int64_t* result

if (arg4 == 0)
    *(arg2 + 0xb4) |= 0x10
    result = &var_18
    
    if (arg2 + 0x58 != &var_18)
        result = nullptr
        *(arg2 + 0x58) = 0
        int64_t* rcx_2 = *(arg2 + 0x60)
        *(arg2 + 0x60) = 0
        
        if (rcx_2 != 0)
            int32_t temp1_1 = *(rcx_2 + 0xc)
            *(rcx_2 + 0xc) -= 1
            
            if (temp1_1 == 1)
                result = (*(*rcx_2 + 8))(rcx_2, 1)
else
    var_18 = *arg5
    void* rax_3 = arg5[1]
    void* var_10_2 = rax_3
    
    if (rax_3 != 0)
        *(rax_3 + 8) += 1
    
    result = sub_142272180(arg2, &var_18)

int64_t* rbx_2 = rsi[1]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        result = (**rbx_2)(rbx_2)
        int32_t temp3_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp3_1 == 1)
            result = (*(*rbx_2 + 8))(rbx_2, 1)

int64_t* rbx_3 = arg5[1]

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        result = (**rbx_3)(rbx_3)
        int32_t temp4_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp4_1 == 1)
            return (*(*rbx_3 + 8))(rbx_3, 1)

return result
