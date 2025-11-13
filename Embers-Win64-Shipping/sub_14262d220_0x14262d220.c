// 函数: sub_14262d220
// 地址: 0x14262d220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_48
int64_t rax_1 = __security_cookie ^ &var_48
int32_t i_2 = 0
int32_t r11 = 0
int64_t rax_2 = 0
int32_t r9

while (true)
    r9 = 6
    
    if (*(arg1 + (rax_2 << 1)) == 0xffff)
        break
    
    r11 += 1
    rax_2 += 1
    
    if (rax_2 s>= 6)
        r11 = 6
        break

int32_t rcx = 0

for (int64_t i = 0; i s< 6; i += 1)
    if (*(arg2 + (i << 1)) == 0xffff)
        r9 = rcx
        break
    
    rcx += 1

var_48 = -1
int32_t rbp = 0
int32_t result = -1
int32_t i_1 = 0
int64_t var_38 = -1

if (r11 - 1 s> 0)
    int64_t* rdi_1 = &var_48
    rbp = r11 - 1
    
    do
        int32_t rax_3 = arg3 + 1 + i_1
        i_1 += 1
        rdi_1 += 2
        *(rdi_1 - 2) = *(arg1 + (sx.q(mods.dp.d(sx.q(rax_3), r11)) << 1))
    while (i_1 s< r11 - 1)

if (r9 - 1 s> 0)
    void* r8 = &var_48 + (sx.q(rbp) << 1)
    
    do
        int32_t rax_7 = arg4 + 1 + i_2
        i_2 += 1
        r8 += 2
        *(r8 - 2) = *(arg2 + (sx.q(mods.dp.d(sx.q(rax_7), r9)) << 1))
    while (i_2 s< r9 - 1)

*arg1 = var_48
arg1[1].d = result
__security_check_cookie(rax_1 ^ &var_48)
return result
