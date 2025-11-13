// 函数: sub_1406c99f0
// 地址: 0x1406c99f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_38 = zx.o(0)
void** var_18
sub_1406cbc00(&var_18, arg1)
char rax = sub_140665cf0(var_18, &var_38, 0)
int64_t* rbx = var_38:8.q
int64_t rsi

if (rax == 0 || var_38.q == 0)
    rsi.b = 0
else
    int128_t var_28 = var_38
    
    if (rbx != 0)
        rbx[1].d += 1
    
    rsi.b = sub_141d49340(&var_28, sub_140a1aee0(), arg2, arg3, arg4) == 0
    int64_t* rdi_1 = var_28:8.q
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp5_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)
    
    if (rsi.b != 0)
        rsi.b = 0
    else
        rsi.b = 1

int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        (**var_10)(var_10)
        int32_t temp2_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*var_10 + 8))(var_10, 1)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp4_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp4_1 == 1)
            int64_t r8_2 = *rbx
            (*(r8_2 + 8))(rbx, 1, r8_2)

return zx.q(rsi.b)
