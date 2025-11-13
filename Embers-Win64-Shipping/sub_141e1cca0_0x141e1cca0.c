// 函数: sub_141e1cca0
// 地址: 0x141e1cca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 == 0)
    int64_t* rax_10
    int256_t zmm1_1
    rax_10, zmm1_1 = sub_141e1c9d0(arg1, *(arg3 + 0x34), arg2, arg5)
    return sub_141e1cec0(arg1, arg2, arg3, rax_10, 
        sub_141e1c9d0(arg1, *(arg3 + 0x30), arg2, zmm1_1))

void* rax = *arg2
int32_t r9 = 0
bool cond:0 = arg2[8].b != 0
int32_t rdx = 0
void* var_78 = rax
bool var_38 = cond:0
int64_t var_70 = 0
int32_t var_64 = 0
int32_t rbx = *(rax + 0x4a8)
int64_t var_58
__builtin_memset(&var_58, 0, 0x1b)
void* var_60 = rax + 0x4a0

if (rbx s> 0)
    int32_t var_68_1 = 0
    sub_141acba60(&var_70, rbx)
    r9 = var_64
    rdx = var_68_1

int32_t rax_1 = rbx + rdx
int32_t var_68_2 = rax_1

if (rax_1 s> r9)
    sub_141acb8e0(&var_70, rdx)

sub_141abd4c0(&var_58, rax + 0x4a0)
void* rsi_1 = var_78

if (rsi_1 != *arg2)
    int32_t rcx_3 = var_64
    void* var_60_1 = rsi_1 + 0x4a0
    int32_t rdx_3 = 0
    int32_t rbx_1 = *(rsi_1 + 0x4a8)
    
    if (rbx_1 s> rcx_3)
        int32_t var_68_3 = 0
        
        if (rbx_1 != rcx_3)
            sub_141acba60(&var_70, rbx_1)
            rcx_3 = var_64
            rdx_3 = var_68_3
    
    int32_t rax_2 = rbx_1 + rdx_3
    int32_t var_68_4 = rax_2
    
    if (rax_2 s> rcx_3)
        sub_141acb8e0(&var_70, rdx_3)
    
    sub_141abd4c0(&var_58, rsi_1 + 0x4a0)

int256_t zmm1 = sub_141a911c0(&var_70, &arg2[1])
int64_t var_60_2 = arg2[3]

if (&var_58 != &arg2[4])
    int64_t rsi_3 = sx.q(arg2[5].d)
    int64_t var_50
    int32_t r8 = var_50:4.d
    int64_t r14_1 = arg2[4]
    var_50.d = rsi_3.d
    
    if (rsi_3.d != 0 || r8 != 0)
        zmm1 = sub_14119a550(&var_58, rsi_3.d, r8)
        memcpy(var_58, r14_1, (rsi_3 << 3).d)
    else
        var_50:4.d = 0

int64_t var_48 = arg2[6]
int16_t var_40 = arg2[7].w
char var_3e = *(arg2 + 0x3a)
char var_38_1 = arg2[8].b
return sub_141e1cec0(arg1, arg2, arg3, &var_78, sub_141e1c9d0(arg1, *(arg3 + 0x30), arg2, zmm1))
