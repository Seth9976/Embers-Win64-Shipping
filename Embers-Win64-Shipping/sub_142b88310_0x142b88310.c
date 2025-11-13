// 函数: sub_142b88310
// 地址: 0x142b88310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
int64_t var_18 = -2
char* rbx = arg2
*arg1 = 0
sub_142a456d0(&arg1[1], sub_142a46510())

if (rbx != 0)
    int64_t rax_1 = -1
    
    do
        rax_1 += 1
    while (rbx[rax_1] != 0)
    
    char* rax_3 = sub_142a7dd00(sx.q(rax_1.d + 1))
    *arg1 = rax_3
    
    if (rax_3 != 0)
        char i
        
        do
            i = *rbx
            *rax_3 = i
            rbx = &rbx[1]
            rax_3 = &rax_3[1]
        while (i != 0)
        sub_142a45c20(&arg1[1], arg3)

return arg1
