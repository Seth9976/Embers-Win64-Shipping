// 函数: sub_140de1350
// 地址: 0x140de1350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
int64_t* rcx = arg2[1]
int64_t var_48 = *arg2
int64_t* var_40 = rcx

if (rcx != 0)
    rcx[1].d += 1
    rcx = var_40

if (&var_48 != arg1)
    int128_t zmm1 = var_48.o
    int128_t var_38_1 = zmm1
    var_48.o = *arg1
    rcx = var_40
    *arg1 = zmm1

if (rcx != 0)
    rcx[1].d -= 1
    
    if (rcx[1].d == 1)
        (**var_40)(var_40)
        int32_t rsi_1 = *(var_40 + 0xc)
        *(var_40 + 0xc) -= 1
        
        if (rsi_1 == 1)
            int64_t r8_1 = *var_40
            (*(r8_1 + 8))(var_40, zx.q(rsi_1), r8_1)

arg1[1].d = arg2[2].d
*(arg1 + 0x18) = arg2[3].b
sub_140692f90(&arg1[2], &arg2[4])
__security_check_cookie(rax_1 ^ &var_68)
return arg1
