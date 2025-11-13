// 函数: sub_141c43910
// 地址: 0x141c43910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg1

if (rcx == 0)
    return zx.q((rcx - 1).d)

int32_t rax_1 = sub_141c437f0(rcx, arg2, arg3)
int32_t rcx_3 = (arg1[2].d + 1) & 0x800000ff

if (rcx_3 s< 0)
    rcx_3 = ((rcx_3 - 1) | 0xffffff00) + 1

arg1[2].d = rcx_3

if (rcx_3 == 0)
    void* rdx = arg1[1]
    
    if (rdx != 0)
        int32_t rax_2 = 0
        
        if (0 == *(rdx + 8))
            *(rdx + 8) = 0
        else
            rax_2 = *(rdx + 8)
        
        if (rax_2 == 1)
            int64_t* var_10 = nullptr
            int64_t var_18
            
            if (arg1 != &var_18)
                *arg1 = 0
                var_18 = 0
                sub_1405aeff0(&arg1[1], &var_10)
                int64_t* rcx_7 = var_10
                
                if (rcx_7 != 0)
                    rcx_7[1].d -= 1
                    
                    if (rcx_7[1].d == 1)
                        int64_t* rbx_1 = var_10
                        (**rbx_1)(rbx_1)
                        int32_t rdi_1 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (rdi_1 == 1)
                            int64_t* rcx_9 = var_10
                            (*(*rcx_9 + 8))(rcx_9, zx.q(rdi_1))

return zx.q(rax_1)
