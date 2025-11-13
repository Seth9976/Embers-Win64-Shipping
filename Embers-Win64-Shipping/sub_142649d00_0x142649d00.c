// 函数: sub_142649d00
// 地址: 0x142649d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_20 = nullptr
int64_t var_28

if (&arg1[0x5e] != &var_28)
    arg1[0x5e] = 0
    var_28 = 0
    sub_1405aeff0(&arg1[0x5f], &var_20)
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

void* rax_5 = arg1[0x59]

if (rax_5 != 0 && *(rax_5 + 0x2c8) == arg1)
    *(rax_5 + 0x2c8) = 0
    int64_t* rcx_6 = arg1[0x59] + 0x2f0
    int64_t* var_10 = nullptr
    int64_t var_18
    
    if (rcx_6 != &var_18)
        *rcx_6 = 0
        var_18 = 0
        sub_1405aeff0(&rcx_6[1], &var_10)
        int64_t* rcx_8 = var_10
        
        if (rcx_8 != 0)
            rcx_8[1].d -= 1
            
            if (rcx_8[1].d == 1)
                int64_t* rbx_2 = var_10
                (**rbx_2)(rbx_2)
                int32_t rdi_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (rdi_1 == 1)
                    int64_t* rcx_10 = var_10
                    (*(*rcx_10 + 8))(rcx_10, zx.q(rdi_1))

return sub_141dbafe0(arg1) __tailcall
