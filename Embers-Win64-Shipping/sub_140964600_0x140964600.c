// 函数: sub_140964600
// 地址: 0x140964600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
int32_t arg_8 = 0
int64_t* rax = sub_14093f850(&arg_18)
int128_t var_38
int128_t* rax_1
int64_t rcx_2
int32_t rbp

if (rax != 0)
    void var_28
    rax_1 = (*(*rax + 0x68))(rax, &var_28)
    rbp = 2
    rcx_2 = *rax_1
else
    rax_1 = &var_38
    var_38 = zx.o(0)
    rbp = 1
    rcx_2 = 0

*arg1 = rcx_2
arg1[1] = *(rax_1 + 8)
*(rax_1 + 8) = 0
*rax_1 = 0

if ((rbp.b & 2) != 0)
    rbp &= 0xfffffffd
    int64_t* var_20
    
    if (var_20 != 0)
        var_20[1].d -= 1
        
        if (var_20[1].d == 1)
            (**var_20)(var_20)
            int32_t rax_5 = *(var_20 + 0xc)
            *(var_20 + 0xc) -= 1
            
            if (rax_5 == 1)
                (*(*var_20 + 8))(var_20, 1)

if ((rbp.b & 1) != 0)
    void* rcx_6 = var_38:8.q
    
    if (rcx_6 != 0)
        int32_t rax_7 = *(rcx_6 + 8)
        *(rcx_6 + 8) -= 1
        
        if (rax_7 == 1)
            int64_t* rbx_2 = var_38:8.q
            (**rbx_2)(rbx_2)
            int32_t rsi_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (rsi_1 == 1)
                int64_t* rcx_8 = var_38:8.q
                (*(*rcx_8 + 8))(rcx_8, zx.q(rsi_1))

return arg1
