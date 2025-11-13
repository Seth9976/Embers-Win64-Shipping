// 函数: sub_141d4dcd0
// 地址: 0x141d4dcd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x130)
int32_t arg_8 = 0
int64_t* var_30
int64_t* rcx_1
int64_t rdx_1
int32_t rbp

if (rcx == 0)
    sub_1405d9400()
    int64_t* rcx_2 = data_143cd6fe0
    rdx_1 = data_143cd6fd8
    int64_t var_38 = rdx_1
    var_30 = rcx_2
    
    if (rcx_2 != 0)
        rcx_2[1].d += 1
    
    rcx_1 = &var_38
    int32_t var_28_1 = data_143cd6fe8
    rbp = 2
else
    void var_20
    int64_t* rax_1 = (*(*rcx + 0x68))(rcx, &var_20)
    rcx_1 = rax_1
    rbp = 1
    rdx_1 = *rax_1

*arg2 = rdx_1
void* rax_3 = rcx_1[1]
arg2[1] = rax_3

if (rax_3 != 0)
    *(rax_3 + 8) += 1

arg2[2].d = rcx_1[2].d

if ((rbp.b & 2) != 0)
    rbp &= 0xfffffffd
    
    if (var_30 != 0)
        var_30[1].d -= 1
        
        if (var_30[1].d == 1)
            (**var_30)(var_30)
            int32_t rax_7 = *(var_30 + 0xc)
            *(var_30 + 0xc) -= 1
            
            if (rax_7 == 1)
                (*(*var_30 + 8))(var_30, 1)

int64_t* var_18

if ((rbp.b & 1) != 0 && var_18 != 0)
    var_18[1].d -= 1
    
    if (var_18[1].d == 1)
        (**var_18)(var_18)
        int32_t rsi_1 = *(var_18 + 0xc)
        *(var_18 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*var_18 + 8))(var_18, zx.q(rsi_1))

return arg2
