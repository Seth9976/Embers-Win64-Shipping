// 函数: sub_140a8fa60
// 地址: 0x140a8fa60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
sub_1405d9400()
int64_t* rbx = data_143cd6fe0
int64_t r9 = data_143cd6fd8

if (rbx != 0)
    rbx[1].d += 1

int64_t* rcx = *arg1
int32_t r8 = data_143cd6fe8
*arg2 = 0
*arg2 = *rcx
*rcx = 0
arg2[1].d = rcx[1].d
*(arg2 + 0xc) = *(rcx + 0xc)
rcx[1] = 0
int64_t var_40
arg2[3] = var_40
arg2[2].d = 4
arg2[7].b = 0
arg2[4] = r9
arg2[5] = rbx

if (rbx != 0)
    rbx[1].d += 1

arg2[6].d = r8
arg2[7].b = 1

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        int64_t rdx = *rbx
        (*rdx)(rbx, rdx)
        int32_t rsi_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rsi_1 == 1)
            int64_t r8_1 = *rbx
            (*(r8_1 + 8))(rbx, zx.q(rsi_1), r8_1)

__security_check_cookie(rax_1 ^ &var_68)
return arg2
