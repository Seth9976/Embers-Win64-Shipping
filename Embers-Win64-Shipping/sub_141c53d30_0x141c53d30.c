// 函数: sub_141c53d30
// 地址: 0x141c53d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *arg1

for (void* rsi_2 = &i[sx.q(arg1[1].d) * 2]; i != rsi_2; i = &i[2])
    int64_t* rbx_1 = i[1]
    void* rcx = *i
    void* var_18 = rcx
    int64_t* var_10_1 = rbx_1
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
        rbx_1 = var_10_1
        rcx = var_18
    
    uint64_t rax
    
    if (rcx != 0)
        rax = sub_142366a90(rcx)
        
        if (rax != 0)
            sub_1423732f0(rax, &var_18)
        
        sub_14235b9e0(var_18)
        rbx_1 = var_10_1
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            rax = zx.q(*(rbx_1 + 0xc))
            *(rbx_1 + 0xc) -= 1
            
            if (rax.d == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
