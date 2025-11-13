// 函数: sub_1423410b0
// 地址: 0x1423410b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x287) != 0 || *(arg1 + 0x288) != 0 || *(arg1 + 0xa0) != 0 || *(arg1 + 0x250) == 0)
    return 

int64_t* rbx_1 = *(arg1 + 0x258)

if (rbx_1 == 0)
    return 

int64_t* rax = zx.q(rbx_1[1].d)

if (rax.d s<= 0)
    return 

int64_t* r9_1 = data_143e29f28
int64_t rdx_1 = 0
int64_t* rsi_1 = r9_1[4]

if (rbx_1 != 0)
    if (rax.d != 0)
        rbx_1[1].d = rax.d + 1
        rax.b = 1
    
    if (rax.b == 0)
        rbx_1 = nullptr
    
    if (rbx_1 != 0)
        rdx_1 = *(arg1 + 0x250)

int64_t var_28 = rdx_1
int64_t* var_20_1 = rbx_1

if (rbx_1 != 0)
    rbx_1[1].d += 1

int64_t var_18
(*(*r9_1 + 0x28))(r9_1, &var_18, &var_28)

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

int64_t rdx_3 = var_18

if (rdx_3 != 0)
    rax = (*(*rsi_1 + 0xa0))(rsi_1, rdx_3)
    
    if (rax != 0)
        sub_1405d16e0(arg1 + 0xa0, *rax)

int64_t* var_10

if (var_10 == 0)
    return 

var_10[1].d -= 1

if (var_10[1].d != 1)
    return 

(**var_10)(var_10)
int32_t temp3_1 = *(var_10 + 0xc)
*(var_10 + 0xc) -= 1

if (temp3_1 == 1)
    (*(*var_10 + 8))(var_10, 1)
