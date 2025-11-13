// 函数: sub_140a81580
// 地址: 0x140a81580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *arg1
int64_t* rcx = *(rdi + 0x60)
(*(*rcx + 0x18))(rcx)
int64_t* rcx_1 = *(rdi + 0x60)

if (rcx_1 != 0)
    *(rdi + 0x60) = 0
    (*(*rcx_1 + 0x20))(rcx_1, 1)

int64_t var_18
int32_t result = &var_18
int64_t* var_10 = nullptr

if (arg1 != &var_18)
    *arg1 = 0
    var_18 = 0
    result = sub_1405aeff0(&arg1[1], &var_10)
    int64_t* rcx_3 = var_10
    
    if (rcx_3 != 0)
        result = rcx_3[1].d
        rcx_3[1].d -= 1
        
        if (result == 1)
            int64_t* rbx_1 = var_10
            result = (**rbx_1)(rbx_1)
            int32_t rdi_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rdi_1 == 1)
                int64_t* rcx_5 = var_10
                return (*(*rcx_5 + 8))(rcx_5, zx.q(rdi_1))

return result
