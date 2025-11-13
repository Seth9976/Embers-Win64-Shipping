// 函数: sub_140a78b00
// 地址: 0x140a78b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
int64_t* rax = sub_140a5d4f0(arg1 + 0x88, arg3)
int64_t* var_20
int128_t var_18
int64_t* rcx_1
int64_t rdx_1
int32_t rbp

if (rax == 0)
    rcx_1 = &var_18
    var_18 = zx.o(0)
    rbp = 2
    rdx_1 = 0
else
    rdx_1 = *rax
    int64_t* rax_1 = rax[1]
    int64_t var_28 = rdx_1
    var_20 = rax_1
    
    if (rax_1 != 0)
        rax_1[1].d += 1
    
    rcx_1 = &var_28
    rbp = 1

int64_t rax_2 = rcx_1[1]
rcx_1[1] = 0
*arg2 = rdx_1
arg2[1] = rax_2
*rcx_1 = 0

if ((rbp.b & 2) != 0)
    void* rcx_2 = var_18:8.q
    rbp &= 0xfffffffd
    
    if (rcx_2 != 0)
        int32_t rax_3 = *(rcx_2 + 8)
        *(rcx_2 + 8) -= 1
        
        if (rax_3 == 1)
            int64_t* rbx_1 = var_18:8.q
            (**rbx_1)(rbx_1)
            int32_t rax_5 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rax_5 == 1)
                int64_t* rcx_4 = var_18:8.q
                (*(*rcx_4 + 8))(rcx_4, 1)

if ((rbp.b & 1) != 0 && var_20 != 0)
    var_20[1].d -= 1
    
    if (var_20[1].d == 1)
        (**var_20)(var_20)
        int32_t rsi_1 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*var_20 + 8))(var_20, zx.q(rsi_1))

return arg2
