// 函数: sub_1403794b4
// 地址: 0x1403794b4
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
int32_t rbx = 1

if (*arg1 != 0x165)
    rbx = sbb.d(1, 1, *(arg1 + 4) != 0) & sbb.d(arg1.d, arg1.d, arg1[1] != 0) & 1

int16_t rax_5
int64_t rdx
int64_t r8
int32_t r9
rax_5, rdx, r8, r9 = sub_140378d54(arg1)
uint32_t r11 = zx.d(rax_5)

if (r11 == 1)
    int32_t rax_7
    int32_t rcx_9
    rax_7, rcx_9 = sub_1403785fc(arg1)
    rbx &= sbb.d(rcx_9, rcx_9, rax_7 != 0)
else
    int32_t rax_6
    
    if (r11 == 2)
        rax_6 = sub_1403784cc(arg1)
    label_14037955c:
        
        if (rax_6 == 0)
            rbx = 0
    else
        if (r11 == 3)
            rax_6 = sub_14037859c(arg1)
            goto label_14037955c
        
        if (r11 s> 0x160)
            if (r11 s<= 0x162)
                rax_6 = sub_1403782f8(arg1)
                goto label_14037955c
            
            if (r11 == 0x165)
                rax_6 = sub_140378400(arg1)
                goto label_14037955c
            
            if (r11 == 0x166)
                rax_6 = sub_140378338(arg1, rdx, r8, r9)
                goto label_14037955c

if (*arg1 == 0xfffe)
    rbx &= sbb.d(0, 0, sub_1403782c0(arg1) != 0)

char var_58[0x40]

if (rbx == 0 && *arg1 != 0x165)
    sub_1403792cc(arg1, &var_58, zx.q(rbx + 0x40))
__security_check_cookie(rax_1 ^ &var_78)
return zx.q(rbx)
