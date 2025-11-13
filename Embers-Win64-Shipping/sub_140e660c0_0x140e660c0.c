// 函数: sub_140e660c0
// 地址: 0x140e660c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_30
int128_t var_28
int64_t rax_1
int64_t* rcx_2
int32_t rsi_1
int64_t* rdi

if (*(arg1 + 0x60) s<= 0)
    rdi = 0.q
    rcx_2 = &var_28
    rsi_1 = 4
    var_28 = zx.o(0)
    rax_1 = 0
else
    int64_t rax = *(arg1 + 0x58)
    int64_t r8_2 = sx.q(*(arg1 + 0x60)) * 2
    rdi = *(rax + (r8_2 << 3) - 8)
    int64_t rsi = *(rax + (r8_2 << 3) - 0x10)
    int64_t* rcx = rdi
    
    if (rdi != 0)
        *(rdi + 0xc) += 1
    
    int64_t var_38 = 0
    rax_1 = 0
    var_30 = rcx
    
    if (rcx != 0)
        int32_t rax_2 = rdi[1].d
        int64_t* rbx_1
        
        if (rax_2 == 0)
            var_30 = nullptr
            rcx = nullptr
            rbx_1 = nullptr
        else
            rbx_1 = rcx
            rdi[1].d = rax_2 + 1
        
        int32_t temp3_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rdi + 8))(rdi, 1)
            rcx = rbx_1
        
        rdi = nullptr
        rax_1 = 0
        
        if (rcx != 0)
            var_38 = rsi
            rax_1 = rsi
    
    rcx_2 = &var_38
    rsi_1 = 3

*arg2 = rax_1
int64_t rax_5 = rcx_2[1]
rcx_2[1] = 0
*rcx_2 = 0
arg2[1] = rax_5

if ((rsi_1.b & 4) != 0)
    int64_t* rbx_2 = var_28:8.q
    rsi_1 &= 0xfffffffb
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp2_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)

if ((rsi_1.b & 2) != 0)
    rsi_1 &= 0xfffffffd
    
    if (var_30 != 0)
        var_30[1].d -= 1
        
        if (var_30[1].d == 1)
            (**var_30)(var_30)
            int32_t temp5_1 = *(var_30 + 0xc)
            *(var_30 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*var_30 + 8))(var_30, 1)

if ((rsi_1.b & 1) != 0 && rdi != 0)
    int32_t temp4_1 = *(rdi + 0xc)
    *(rdi + 0xc) -= 1
    
    if (temp4_1 == 1)
        (*(*rdi + 8))(rdi, 1)

return arg2
