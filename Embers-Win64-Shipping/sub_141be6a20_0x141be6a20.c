// 函数: sub_141be6a20
// 地址: 0x141be6a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = sub_14065da90(arg1 + 0x108, arg2)
void* rcx_1 = *(arg1 + 0x440)

if (rcx_1 != 0)
    int64_t var_38 = *(arg1 + 0x108)
    int64_t* rax_1 = *(arg1 + 0x110)
    
    if (rax_1 != 0)
        rax_1[1].d += 1
        rcx_1 = *(arg1 + 0x440)
    
    int32_t var_28_1 = *(arg1 + 0x118)
    int64_t var_18 = 0
    int32_t var_10_1 = 0
    char var_20_1 = 1
    sub_140f17c00(rcx_1, &var_38)
    result = sub_140745b20(&var_18)
    
    if (rax_1 != 0)
        result = rax_1[1].d
        rax_1[1].d -= 1
        
        if (result == 1)
            (**rax_1)(rax_1)
            result = *(rax_1 + 0xc)
            *(rax_1 + 0xc) -= 1
            
            if (result == 1)
                result = (*(*rax_1 + 8))(rax_1, 1)

int64_t* rbx_2 = arg2[1]

if (rbx_2 != 0)
    result = rbx_2[1].d
    rbx_2[1].d -= 1
    
    if (result == 1)
        result = (**rbx_2)(rbx_2)
        int32_t rdi_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (rdi_1 == 1)
            return (*(*rbx_2 + 8))(rbx_2, zx.q(rdi_1))

return result
