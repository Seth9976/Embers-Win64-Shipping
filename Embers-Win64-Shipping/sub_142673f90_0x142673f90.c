// 函数: sub_142673f90
// 地址: 0x142673f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = arg2
int32_t arg_c = arg3
int64_t rsi = sx.q(arg4)
int32_t arg_10
sub_142681570(arg1 + 0x10, &arg_10, arg_8.q)
int64_t rax = sx.q(arg_10)
void* const rcx_3

if (rax.d == 0xffffffff)
    rcx_3 = nullptr
else
    rcx_3 = (rax << 5) + *(arg1 + 0x10)

int64_t* rdi = rcx_3 + 8
int32_t i_1 = (rsi + 1).d

if (rcx_3 == 0)
    rdi = nullptr

if (rdi != 0)
    int64_t r8
    r8.b = 1
    
    if (rdi[1].d s>= i_1)
        i_1 = rdi[1].d
    
    sub_1426961b0(rdi, i_1, r8.b)
    return sub_142671e70(rsi * 0x38 + *rdi, arg5)

int32_t* var_48 = nullptr
int64_t var_40_1 = 0

if (i_1 s<= 0)
    i_1 = 0

if (i_1 s> 0)
    var_40_1.d = i_1
    sub_1407c3b60(&var_48)
    int32_t* rax_2 = var_48
    
    if (i_1 != 0)
        int32_t i
        
        do
            *rax_2 = 0
            rax_2[8] = 0
            *(rax_2 + 0x28) = 0
            *(rax_2 + 0x30) = 0
            rax_2 = &rax_2[0xe]
            i = i_1
            i_1 -= 1
        while (i != 1)
else if (i_1 s< 0)
    sub_1426920f0(&var_48, i_1, neg.d(i_1), 1)

sub_142671e70(&var_48[rsi * 0xe], arg5)
arg_8 = arg2
int32_t* var_38 = &arg_8
arg_c = arg3
int32_t** var_30_1 = &var_48
sub_14266ebd0(arg1 + 0x10, &arg_10, &var_38, nullptr)
return sub_142671860(&var_48)
