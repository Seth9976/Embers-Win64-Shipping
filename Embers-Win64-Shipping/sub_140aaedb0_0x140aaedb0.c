// 函数: sub_140aaedb0
// 地址: 0x140aaedb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x10)
int32_t arg_8 = 0
int128_t var_48
int64_t* rax
int32_t rbp
void* const r15

if (rcx == 0)
    rax = &var_48
    var_48 = zx.o(0)
    rbp = 2
    r15 = nullptr
else
    void var_28
    rax = sub_140ac1340(rcx, &var_28, arg3)
    rbp = 1
    r15 = *rax

int64_t* rdi = rax[1]
rax[1] = 0
*rax = 0

if ((rbp.b & 2) != 0)
    void* rcx_1 = var_48:8.q
    rbp &= 0xfffffffd
    
    if (rcx_1 != 0)
        int32_t rax_1 = *(rcx_1 + 8)
        *(rcx_1 + 8) -= 1
        
        if (rax_1 == 1)
            int64_t* rbx_1 = var_48:8.q
            (**rbx_1)(rbx_1)
            int32_t rax_3 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rax_3 == 1)
                int64_t* rcx_3 = var_48:8.q
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

if (r15 == 0)
    sub_140a7b2d0(arg2)
else
    int64_t var_38
    sub_140a79b20(r15, &var_38)
    int64_t rax_9 = var_38
    int64_t* var_30
    
    if (rax_9 == 0)
        if (var_30 != 0)
            var_30[1].d -= 1
            
            if (var_30[1].d == 1)
                (**var_30)(var_30)
                int32_t rax_17 = *(var_30 + 0xc)
                *(var_30 + 0xc) -= 1
                
                if (rax_17 == 1)
                    (*(*var_30 + 8))(var_30, 1)
        
        sub_140a7b2d0(arg2)
    else
        *arg2 = rax_9
        arg2[1] = var_30
        
        if (var_30 != 0)
            var_30[1].d += 1
            
            if (var_30 != 0)
                var_30[1].d -= 1
                
                if (var_30[1].d == 1)
                    (**var_30)(var_30)
                    int32_t rax_13 = *(var_30 + 0xc)
                    *(var_30 + 0xc) -= 1
                    
                    if (rax_13 == 1)
                        (*(*var_30 + 8))(var_30, 1)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t rsi_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rdi + 8))(rdi, zx.q(rsi_1))

return arg2
