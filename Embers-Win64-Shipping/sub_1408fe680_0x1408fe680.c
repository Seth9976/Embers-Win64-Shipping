// 函数: sub_1408fe680
// 地址: 0x1408fe680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_20 = nullptr
int64_t var_28

if (arg1 + 8 != &var_28)
    *(arg1 + 8) = 0
    var_28 = 0
    sub_1405aeff0(arg1 + 0x10, &var_20)
    int64_t* rcx_2 = var_20
    
    if (rcx_2 != 0)
        rcx_2[1].d -= 1
        
        if (rcx_2[1].d == 1)
            int64_t* rbx_1 = var_20
            (**rbx_1)(rbx_1)
            int32_t rax_3 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rax_3 == 1)
                int64_t* rcx_4 = var_20
                (*(*rcx_4 + 8))(rcx_4, 1)

int64_t* var_10 = nullptr
int64_t var_18
int32_t result = &var_18

if (arg1 + 0x18 != &var_18)
    *(arg1 + 0x18) = 0
    var_18 = 0
    result = sub_1405aeff0(arg1 + 0x20, &var_10)
    int64_t* rcx_7 = var_10
    
    if (rcx_7 != 0)
        result = rcx_7[1].d
        rcx_7[1].d -= 1
        
        if (result == 1)
            int64_t* rbx_2 = var_10
            result = (**rbx_2)(rbx_2)
            int32_t rdi_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (rdi_1 == 1)
                int64_t* rcx_9 = var_10
                return (*(*rcx_9 + 8))(rcx_9, zx.q(rdi_1))

return result
