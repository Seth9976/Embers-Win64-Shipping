// 函数: sub_140a72ba0
// 地址: 0x140a72ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool z_1

do
    if (0 == *(arg1 + 0x18))
        *(arg1 + 0x18) = 0
        z_1 = true
    else
        int64_t rax_1
        rax_1.b = *(arg1 + 0x18)
        z_1 = false
while (z_1)
int64_t* var_10 = nullptr
int64_t var_18
int32_t result = &var_18

if (arg1 + 8 != &var_18)
    *(arg1 + 8) = 0
    var_18 = 0
    result = sub_1405aeff0(arg1 + 0x10, &var_10)
    int64_t* rcx_2 = var_10
    
    if (rcx_2 != 0)
        result = rcx_2[1].d
        rcx_2[1].d -= 1
        
        if (result == 1)
            int64_t* rbx_1 = var_10
            result = (**rbx_1)(rbx_1)
            int32_t rdi_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rdi_1 == 1)
                int64_t* rcx_4 = var_10
                return (*(*rcx_4 + 8))(rcx_4, zx.q(rdi_1))

return result
