// 函数: sub_142a94d50
// 地址: 0x142a94d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38 = -2
char* rbx = arg2
int64_t var_30 = 0
void* rcx_1 = sx.q(arg1) + &data_143644e30
void* var_28 = rcx_1
int32_t rsi = -1
int32_t var_18 = 0xffffffff

if (arg2 != 0)
    int32_t rdi_1 = 1
    
    for (char i = *arg2; i != 0; i = *rbx)
        rbx = &rbx[1]
        char rax_1 = sub_142a86220(zx.d(i))
        
        if ((rax_1 u> 0x2d || not(test_bit(0x200100003e00, sx.q(rax_1)))) && rax_1 != 0x5f)
            if ((rdi_1.b & 1) == 0)
                goto label_142a94e0c
            
            rdi_1 = sub_142b0dfe0(&var_30, zx.d(rax_1))
    
    if (rdi_1 s>= 2)
        rsi = sub_142b0e0f0(rcx_1 + 1, zx.d(*rcx_1) u>> 1)

label_142a94e0c:
sub_142a97dd0(&var_30)
return zx.q(rsi)
