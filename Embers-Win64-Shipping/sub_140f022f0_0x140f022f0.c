// 函数: sub_140f022f0
// 地址: 0x140f022f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = 0
void* var_28
sub_140f00d10(arg1, &var_28)
void* rcx = var_28
int128_t var_38
int64_t rax_1
int64_t* rcx_1
int32_t rsi

if (rcx == 0)
    rcx_1 = &var_38
    var_38 = zx.o(0)
    rsi = 2
    rax_1 = 0
else
    void var_18
    int64_t* rax = sub_140ebf640(rcx, &var_18)
    rcx_1 = rax
    rsi = 1
    rax_1 = *rax

*arg2 = rax_1
arg2[1] = rcx_1[1]
rcx_1[1] = 0
*rcx_1 = 0

if ((rsi.b & 2) != 0)
    int64_t* rbx_1 = var_38:8.q
    rsi &= 0xfffffffd
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp3_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* var_10

if ((rsi.b & 1) != 0 && var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        (**var_10)(var_10)
        int32_t temp5_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*var_10 + 8))(var_10, 1)

int64_t* var_20

if (var_20 != 0)
    var_20[1].d -= 1
    
    if (var_20[1].d == 1)
        (**var_20)(var_20)
        int32_t temp4_1 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*var_20 + 8))(var_20, 1)

return arg2
