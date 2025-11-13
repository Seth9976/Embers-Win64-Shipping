// 函数: sub_142a86100
// 地址: 0x142a86100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_38
int64_t rax_1 = __security_cookie ^ &var_38
int32_t r10 = 0
int32_t i = arg2

if (arg2 s< 0 && arg3 == 0xa)
    i = neg.d(i)
    *arg1 = 0x2d
    r10 = arg3 - 9

int32_t r8 = 0x1d
char var_1b = 0
char* rcx = &var_1b

do
    uint8_t temp1_1 = (modu.dp.d(0:i, arg3)).b
    i = divu.dp.d(0:i, arg3)
    char rax_5
    
    if (temp1_1 u> 9)
        rax_5 = temp1_1 + 0x37
    else
        rax_5 = temp1_1 + 0x30
    
    rcx -= 1
    r8 -= 1
    *rcx = rax_5
while (i != 0)

void* rdx_1 = &var_38 + sx.q(r8)
void* r9_2 = &arg1[zx.q(r10)] - rdx_1
char i_1

do
    i_1 = *rdx_1
    *(r9_2 + rdx_1) = i_1
    rdx_1 += 1
while (i_1 != 0)
__security_check_cookie(rax_1 ^ &var_38)
return zx.q(r10 - r8 + 0x1d)
