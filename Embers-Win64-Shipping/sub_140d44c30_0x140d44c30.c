// 函数: sub_140d44c30
// 地址: 0x140d44c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
int32_t* rbx = arg1
sub_140d435a0(arg1)
void* rax = *(rbx + 8)
int64_t* var_30
int64_t* rax_3
int64_t rdx
int32_t rbp

if (rax == 0)
    void var_20
    rax_3 = sub_140aae2b0(&var_20, rbx)
    rbp = 2
    rdx = *rax_3
else
    void* const rcx
    
    if (arg3 == 0)
        rcx = 0x58
    
    if (arg3 != 0 || *(rax + 0x70) == arg3)
        rcx = 0x28
    
    int64_t* rax_1 = sub_140d44910(rcx + rax)
    int64_t* rcx_2 = rax_1[1]
    rdx = *rax_1
    int64_t var_38 = rdx
    var_30 = rcx_2
    
    if (rcx_2 != 0)
        rcx_2[1].d += 1
    
    rbp = 1
    int32_t var_28_1 = rax_1[2].d
    rax_3 = &var_38

*arg2 = rdx
void* rcx_4 = rax_3[1]
arg2[1] = rcx_4

if (rcx_4 != 0)
    *(rcx_4 + 8) += 1

arg2[2].d = rax_3[2].d

if ((rbp.b & 2) != 0)
    rbp &= 0xfffffffd
    int64_t* var_18
    
    if (var_18 != 0)
        var_18[1].d -= 1
        
        if (var_18[1].d == 1)
            (**var_18)(var_18)
            int32_t rax_7 = *(var_18 + 0xc)
            *(var_18 + 0xc) -= 1
            
            if (rax_7 == 1)
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
