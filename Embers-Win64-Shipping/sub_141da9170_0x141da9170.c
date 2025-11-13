// 函数: sub_141da9170
// 地址: 0x141da9170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r9
char arg_20 = r9
int64_t* rdi = arg3[1]
int64_t rbp = *arg3

if (rdi != 0)
    rdi[1].d += 1

int64_t* rbx = arg2[1]
int64_t rsi = *arg2

if (rbx != 0)
    rbx[1].d += 1

int64_t r12 = *(arg1 + 8)
int64_t r13 = *(arg1 + 0x10)
int64_t var_58 = 0
int32_t var_50 = 0

if (arg1 + 0x18 != &var_58 && *(arg1 + 0x20) != 0)
    int64_t* rcx = *(arg1 + 0x18)
    
    if (rcx != 0)
        (*(*rcx + 0x40))(rcx, &var_58)

int64_t var_48 = rbp
int64_t* var_40 = rdi

if (rdi != 0)
    rdi[1].d += 1

int64_t var_38 = rsi
int64_t* var_30 = rbx

if (rbx != 0)
    rbx[1].d += 1

int64_t* var_68 = &var_58
r13(r12, &var_38, &var_48)

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
        int32_t rax_6 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rax_6 == 1)
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
