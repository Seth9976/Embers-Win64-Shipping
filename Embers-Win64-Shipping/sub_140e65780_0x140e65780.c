// 函数: sub_140e65780
// 地址: 0x140e65780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = *arg2
void* rax_1 = arg2[1]
void* var_10 = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

void* result = sub_140e64c30(arg1, &var_18)

if (result == 0)
    int64_t* rbx_2 = arg2[1]
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp1_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
    
    result.b = 0
    return result

uint64_t rsi

if (*(result + 0x28) == 0)
    rsi.b = 0
else
    int64_t* rcx = *(result + 0x20)
    
    if (rcx == 0)
        rsi.b = 0
    else
        int64_t rdx_1 = *rcx
        
        if ((*(rdx_1 + 0x28))(rcx, rdx_1) == 0)
            rsi.b = 0
        else if (*(result + 0x28) == 0)
            rsi = zx.q((*(*nullptr + 0x48))(0))
        else
            int64_t* rcx_1 = *(result + 0x20)
            rsi = zx.q((*(*rcx_1 + 0x48))(rcx_1))

int64_t* rbx_1 = arg2[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp3_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

return zx.q(rsi.b)
