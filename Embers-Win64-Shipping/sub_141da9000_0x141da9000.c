// 函数: sub_141da9000
// 地址: 0x141da9000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg3[1]

if (rdi != 0)
    rdi[1].d += 1

int64_t* rbx = arg2[1]
int64_t rax = *arg2

if (rbx != 0)
    rbx[1].d += 1

int64_t r10 = *(arg1 + 8)
int64_t r11 = *(arg1 + 0x10)
int64_t var_28 = *arg3
int64_t* var_20 = rdi

if (rdi != 0)
    rdi[1].d += 1

int64_t var_18 = rax
int64_t* var_10 = rbx

if (rbx != 0)
    rbx[1].d += 1

char var_30 = *(arg1 + 0x1c)
int32_t var_38 = *(arg1 + 0x18)
r11(r10, &var_18, &var_28)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp3_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx + 8))(rbx, 1)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t rax_7 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rax_7 == 1)
            (*(*rdi + 8))(rdi, 1)

int64_t* rbx_1 = arg2[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp7_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rbx_2 = arg3[1]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t rsi_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, zx.q(rsi_1))

uint64_t result
result.b = 1
return result
