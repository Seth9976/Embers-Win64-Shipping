// 函数: sub_140ab1d90
// 地址: 0x140ab1d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x10)
int32_t arg_8 = 0
int128_t var_38
int64_t* rax
int32_t rbp
int64_t r14

if (rcx == 0)
    rax = &var_38
    var_38 = zx.o(0)
    rbp = 2
    r14 = 0
else
    void var_28
    int32_t entry_r8
    rax = sub_140ac1340(rcx, &var_28, entry_r8)
    rbp = 1
    r14 = *rax

int64_t* rdi = rax[1]
rax[1] = 0
*rax = 0

if ((rbp.b & 2) != 0)
    void* rcx_1 = var_38:8.q
    rbp &= 0xfffffffd
    
    if (rcx_1 != 0)
        int32_t rax_1 = *(rcx_1 + 8)
        *(rcx_1 + 8) -= 1
        
        if (rax_1 == 1)
            int64_t* rbx_1 = var_38:8.q
            (**rbx_1)(rbx_1)
            int32_t rax_3 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rax_3 == 1)
                int64_t* rcx_3 = var_38:8.q
                (*(*rcx_3 + 8))(rcx_3, 1)

int64_t* var_20

if ((rbp.b & 1) != 0 && var_20 != 0)
    var_20[1].d -= 1
    
    if (var_20[1].d == 1)
        (**var_20)(var_20)
        int32_t rax_7 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (rax_7 == 1)
            (*(*var_20 + 8))(var_20, 1)

int64_t result

if (r14 == 0)
    result = sub_140a7b410()
else
    result = sub_1405d9250(r14)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t rsi_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rdi + 8))(rdi, zx.q(rsi_1))

return result
