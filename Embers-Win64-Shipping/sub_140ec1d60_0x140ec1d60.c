// 函数: sub_140ec1d60
// 地址: 0x140ec1d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rsi = *(arg1 + 0x3a8)
int64_t* rdi = *(rsi + 0x78)
void* r8 = *(rsi + 0x70)

if (rdi != 0)
    rdi[1].d += 1
    rsi = *(arg1 + 0x3a8)

int64_t* rbx = *(rsi + 0x68)
int64_t rax = *(rsi + 0x60)

if (rbx != 0)
    rbx[1].d += 1
    rsi = *(arg1 + 0x3a8)

if (r8 != 0 && rax != 0)
    int64_t var_18 = rax
    int64_t* var_10_1 = rbx
    
    if (rbx != 0)
        rbx[1].d += 1
    
    rsi = zx.q(sub_140e65780(r8, &var_18))
else if (*(rsi + 0x40) == 0)
    rsi.b = 0
else
    int64_t* rcx_1 = *(rsi + 0x38)
    
    if (rcx_1 == 0)
        rsi.b = 0
    else if ((*(*rcx_1 + 0x28))(rcx_1) == 0)
        rsi.b = 0
    else if (*(rsi + 0x40) == 0)
        rsi = zx.q((*(*nullptr + 0x48))(0))
    else
        int64_t* rcx_2 = *(rsi + 0x38)
        rsi = zx.q((*(*rcx_2 + 0x48))(rcx_2))

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx + 8))(rbx, 1)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp3_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rdi + 8))(rdi, 1)

return zx.q(rsi.b)
