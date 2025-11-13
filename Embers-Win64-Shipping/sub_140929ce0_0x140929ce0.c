// 函数: sub_140929ce0
// 地址: 0x140929ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0xe8)

if (rcx != 0 && *(arg1 + 0xf8) == 0)
    if ((*(*rcx + 0x18))(rcx) == 0)
        int64_t* var_10 = nullptr
        int64_t var_18
        
        if (arg1 + 0xe8 != &var_18)
            *(arg1 + 0xe8) = 0
            var_18 = 0
            sub_1405aeff0(arg1 + 0xf0, &var_10)
            int64_t* rcx_2 = var_10
            
            if (rcx_2 != 0)
                rcx_2[1].d -= 1
                
                if (rcx_2[1].d == 1)
                    int64_t* rbx_1 = var_10
                    (**rbx_1)(rbx_1)
                    int32_t rbp_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (rbp_1 == 1)
                        int64_t* rcx_4 = var_10
                        (*(*rcx_4 + 8))(rcx_4, zx.q(rbp_1))
    
    *(arg1 + 0xf8) = 1

*arg2 = *(arg1 + 0xe8)
void* rax_7 = *(arg1 + 0xf0)
arg2[1] = rax_7

if (rax_7 != 0)
    *(rax_7 + 8) += 1

return arg2
