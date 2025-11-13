// 函数: sub_141d8e420
// 地址: 0x141d8e420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0xb8)
int32_t arg_8 = 0
int128_t var_28
int64_t rax_2
int64_t* rcx_1
int32_t rsi

if (rcx == 0)
    rcx_1 = &var_28
    var_28 = zx.o(0)
    rsi = 2
    rax_2 = 0
else
    void var_18
    int64_t* rax_1 = (*(*rcx + 0x10))(rcx, &var_18)
    rcx_1 = rax_1
    rsi = 1
    rax_2 = *rax_1

*arg2 = rax_2
arg2[1] = rcx_1[1]
rcx_1[1] = 0
*rcx_1 = 0

if ((rsi.b & 2) != 0)
    int64_t* rbx_1 = var_28:8.q
    rsi &= 0xfffffffd
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp2_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* var_10

if ((rsi.b & 1) != 0 && var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        (**var_10)(var_10)
        int32_t temp3_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*var_10 + 8))(var_10, 1)

return arg2
