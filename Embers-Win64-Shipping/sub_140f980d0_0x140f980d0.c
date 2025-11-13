// 函数: sub_140f980d0
// 地址: 0x140f980d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm0 = *arg3
int64_t* rbx = arg2[1]
int64_t rsi = *arg2
int64_t var_48 = rsi

if (rbx != 0)
    rbx[1].d += 1
    rsi = var_48

int16_t var_28 = 0x100
int64_t var_20 = 0
int32_t var_18 = 0

if (rbx != 0)
    rbx[1].d += 1

void*** rax = sub_1405978f0(0x38, &var_20)

if (rax != 0)
    *rax = &data_142ede5b8
    rax[1] = rsi
    rax[2] = rbx
    
    if (rbx != 0)
        *(rbx + 0xc) += 1
    
    *(rax + 0x18) = zmm0
    rax[6] = sub_140a387b0()

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

sub_140f9a690(&var_48)
*(arg1 + 0x220) = var_28.b
*(arg1 + 0x221) = var_28:1.b
sub_1407473e0(arg1 + 0x228, &var_20)
sub_140745b20(&var_20)
sub_140f9a690(arg2)
return arg1
