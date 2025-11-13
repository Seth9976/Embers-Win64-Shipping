// 函数: sub_140e6a100
// 地址: 0x140e6a100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = arg3
char rdx = 0
int16_t arg_10 = 0
int64_t* rax_1

if (*arg3 != 0)
    void var_18
    rax_1 = sub_140e660c0(arg1, &var_18)
    rdx = 1

char rdx_2

if (*arg3 == 0 || *rax_1 != *rsi)
    rdx_2 = rdx | 4
    arg_10:1.b = 0
else
    arg_10:1.b = 1
    rdx_2 = 3
    arg_10.b = *(arg1 + 0x88)

arg2[1] = 0

if (arg_10:1.b != 0)
    *arg2 = arg_10.b
    arg2[1] = 1

int64_t* var_10

if ((rdx_2 & 1) != 0 && var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        (**var_10)(var_10)
        int32_t temp3_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*var_10 + 8))(var_10, 1)

int64_t* rbx_2 = rsi[1]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp2_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

return arg2
