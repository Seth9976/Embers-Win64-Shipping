// 函数: sub_140ab1ed0
// 地址: 0x140ab1ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rdx = *arg1
int32_t arg_8 = 0
int64_t* var_30
int64_t* rax_2
int64_t rcx
int32_t rbp

if (*rdx != 0)
    void var_20
    rax_2 = sub_140aae420(&var_20, &rdx[0x58])
    rbp = 2
    rcx = *rax_2
else
    int64_t* rax = *(rdx + 0x20)
    rcx = *(rdx + 0x18)
    int64_t var_38 = rcx
    var_30 = rax
    
    if (rax != 0)
        rax[1].d += 1
    
    rbp = 1
    int32_t var_28_1 = *(rdx + 0x28)
    rax_2 = &var_38

*arg2 = rcx
void* rcx_2 = rax_2[1]
arg2[1] = rcx_2

if (rcx_2 != 0)
    *(rcx_2 + 8) += 1

arg2[2].d = rax_2[2].d

if ((rbp.b & 2) != 0)
    rbp &= 0xfffffffd
    int64_t* var_18
    
    if (var_18 != 0)
        var_18[1].d -= 1
        
        if (var_18[1].d == 1)
            (**var_18)(var_18)
            int32_t rax_6 = *(var_18 + 0xc)
            *(var_18 + 0xc) -= 1
            
            if (rax_6 == 1)
                (*(*var_18 + 8))(var_18, 1)

if ((rbp.b & 1) != 0 && var_30 != 0)
    var_30[1].d -= 1
    
    if (var_30[1].d == 1)
        (**var_30)(var_30)
        int32_t rsi_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*var_30 + 8))(var_30, zx.q(rsi_1))

return arg2
