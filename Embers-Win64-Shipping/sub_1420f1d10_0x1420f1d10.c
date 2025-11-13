// 函数: sub_1420f1d10
// 地址: 0x1420f1d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg2
int64_t* rax = sub_140d3c6e0(arg1 + 0xc)
int64_t arg_8

if (rax == 0)
    sub_140d3a3a0(&arg_8, *(arg1 + 0x30))
    int64_t rax_9 = *(arg1 + 0x28)
    int32_t rcx_7 = *(arg1 + 0x20)
    *(rdi + 0x60) = 1
    int64_t rbx_1 = sx.q(*(rdi + 0x58))
    int64_t rax_10 = arg_8
    int32_t rax_11 = (rbx_1 + 1).d
    int32_t var_20 = rcx_7
    *(rdi + 0x58) = rax_11
    
    if (rax_11 s> *(rdi + 0x5c))
        sub_140679970(rdi, rbx_1.d)
    
    void* rax_12 = *(rdi + 0x50)
    int64_t rcx_9 = rbx_1 * 5
    
    if (rax_12 != 0)
        rdi = rax_12
    
    int32_t result = rax_10:4.d
    *(rdi + (rcx_9 << 2)) = rax_9.o
    *(rdi + (rcx_9 << 2) + 0x10) = result
    return result

char rax_1

if (rax[0x25] == 0)
    int64_t r8_1 = *rax
    rax_1 = (*(r8_1 + 0x268))(rax, arg3, r8_1)

int64_t* rbx

if (rax[0x25] == 0 && rax_1 == 0)
    rbx.b = 1
else if (rax[0x25] == 0)
    rbx.b = 0
else if ((*(*rax + 0x268))(rax) == 0 && data_143a2d8b8 == 0)
    rbx.b = 1
else if (rax[0x25] == 0)
    rbx.b = 0
else if ((*(*rax + 0x268))(rax) == 0 || (*(arg1 + 9) != 0 && (*(rax[0x25] + 0x1f4) & 0x20) == 0))
    rbx.b = 0
else
    rbx.b = 1

sub_140d3a3a0(&arg_8, *(arg1 + 0x30))
int64_t var_38 = arg_8
return sub_141d57900(rdi, rbx.b, *(arg1 + 0x28), zx.q(*(arg1 + 0x20)))
