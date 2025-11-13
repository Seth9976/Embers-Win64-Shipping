// 函数: sub_140e8b150
// 地址: 0x140e8b150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *arg2
char rbp = 0
int32_t arg_8 = 0
int128_t var_48 = zx.o(0)
void var_28
int64_t* var_20
int64_t* rbx_1
void* rsi

if (rax == 0)
    rbx_1 = var_48:8.q
    rsi = var_48.q
else
    int64_t var_38 = rax
    int64_t* rax_1 = arg2[1]
    
    if (rax_1 != 0)
        rax_1[1].d += 1
    
    int64_t* rax_2 = sub_140da2300(&var_28, arg1 + 0x68, &var_38)
    
    if (&var_48 == rax_2)
        rsi = var_48.q
        rbx_1 = var_48:8.q
    else
        rsi = *rax_2
        *rax_2 = 0
        rbx_1 = rax_2[1]
        
        if (rbx_1 == 0)
            rbx_1 = var_48:8.q
        else
            rax_2[1] = 0
    
    if (var_20 != 0)
        var_20[1].d -= 1
        
        if (var_20[1].d == 1)
            (**var_20)(var_20)
            int32_t temp6_1 = *(var_20 + 0xc)
            *(var_20 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*var_20 + 8))(var_20, 1)
    
    if (rax_1 != 0)
        rax_1[1].d -= 1
        
        if (rax_1[1].d == 1)
            (**rax_1)(rax_1)
            int32_t temp7_1 = *(rax_1 + 0xc)
            *(rax_1 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*rax_1 + 8))(rax_1, 1)

if (*(arg1 + 0xa0) == 0)
    rsi.b = 1
else if (rsi == 0)
    rsi.b = 0
else
    rbp = 1
    
    if (sub_140e1a690(rsi, sub_140e65190(arg1 - 0x118, &var_28), arg3) != 0)
        rsi.b = 1
    else if (*(*(arg1 + 0x98) + sx.q(*(arg1 + 0xa0)) * 0x10 - 0x10) == rsi)
        rsi.b = 1
    else
        rsi.b = 0

if ((rbp & 1) != 0 && var_20 != 0)
    var_20[1].d -= 1
    
    if (var_20[1].d == 1)
        (**var_20)(var_20)
        int32_t temp4_1 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*var_20 + 8))(var_20, 1)

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        int64_t r8_2 = *rbx_1
        (*r8_2)(rbx_1, arg3, r8_2)
        int32_t temp3_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            int64_t r8_3 = *rbx_1
            (*(r8_3 + 8))(rbx_1, 1, r8_3)

return zx.q(rsi.b)
