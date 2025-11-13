// 函数: sub_140aae2f0
// 地址: 0x140aae2f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
int64_t* var_30
int64_t* rax_1
int64_t rdx
int32_t rbp

if (arg2[1].d s> 1)
    void var_20
    rax_1 = sub_140a95a30(&var_20, arg2)
    rbp = 2
    rdx = *rax_1
else
    sub_1405d9400()
    int64_t* rcx = data_143cd6fe0
    rdx = data_143cd6fd8
    int64_t var_38 = rdx
    var_30 = rcx
    
    if (rcx != 0)
        rcx[1].d += 1
    
    rbp = 1
    int32_t var_28_1 = data_143cd6fe8
    rax_1 = &var_38

*arg1 = rdx
void* rcx_2 = rax_1[1]
arg1[1] = rcx_2

if (rcx_2 != 0)
    *(rcx_2 + 8) += 1

arg1[2].d = rax_1[2].d

if ((rbp.b & 2) != 0)
    rbp &= 0xfffffffd
    int64_t* var_18
    
    if (var_18 != 0)
        var_18[1].d -= 1
        
        if (var_18[1].d == 1)
            (**var_18)(var_18)
            int32_t rax_5 = *(var_18 + 0xc)
            *(var_18 + 0xc) -= 1
            
            if (rax_5 == 1)
                (*(*var_18 + 8))(var_18, 1)

if ((rbp.b & 1) != 0 && var_30 != 0)
    var_30[1].d -= 1
    
    if (var_30[1].d == 1)
        (**var_30)(var_30)
        int32_t rsi_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*var_30 + 8))(var_30, zx.q(rsi_1))

arg1[2].d |= 0x12
return arg1
