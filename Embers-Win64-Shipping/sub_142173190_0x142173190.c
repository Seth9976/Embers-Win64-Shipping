// 函数: sub_142173190
// 地址: 0x142173190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rcx_2

if (arg1[1].d == *(arg1 + 0x34))
label_1421731fd:
    rcx_2 = nullptr
else
    void* r10_1 = arg1[8]
    void* r11_1 = &arg1[7]
    int64_t rdi_1 = sx.q(*arg2)
    
    if (r10_1 != 0)
        r11_1 = r10_1
    
    int32_t rax_1 = *(r11_1 + (((sx.q(arg1[9].d) - 1) & rdi_1) << 2))
    
    if (rax_1 == 0xffffffff)
    label_1421731fd_1:
        rcx_2 = nullptr
    else
        while (true)
            rcx_2 = sx.q(rax_1) * 0x38 + *arg1
            
            if (*rcx_2 == rdi_1.d)
                break
            
            rax_1 = rcx_2[0xc]
            
            if (rax_1 == 0xffffffff)
                goto label_1421731fd_2
        
        if (rax_1 == 0xffffffff)
        label_1421731fd_2:
            rcx_2 = nullptr

void* rdi_2 = &rcx_2[2]

if (rcx_2 == 0)
    rdi_2 = nullptr

if (rdi_2 != 0)
    sub_140b5b8a0(*(rdi_2 + 0xc), 0)
    sub_140d3c6e0(rdi_2)
    sub_141fc3620(&arg1[0xa], *rdi_2)
    sub_141fc3870(arg1, arg2)

int64_t arg_10
sub_140d3a3a0(&arg_10, arg3)
int32_t arg_8
sub_141f87aa0(&arg1[0xa], &arg_8, arg_10)
int64_t rax_2 = sx.q(arg_8)
void* const rcx_9

if (rax_2.d == 0xffffffff)
    rcx_9 = nullptr
else
    rcx_9 = arg1[0xa] + rax_2 * 0x14

int32_t* rdx_5 = rcx_9 + 8

if (rcx_9 == 0)
    rdx_5 = nullptr

if (rdx_5 != 0)
    sub_141fc3870(arg1, rdx_5)
    sub_140d3a3a0(&arg_8, arg3)
    sub_141fc3620(&arg1[0xa], arg_8.q)

int32_t var_58 = 0xffffffff
int64_t var_54
__builtin_memset(&var_54, 0, 0x1c)
char var_38
char var_38_1 = (var_38 & 0xf0) | 0x10
sub_140d3a3a0(&arg_8, arg3)
var_58.q = arg_8.q
int32_t* var_68 = arg2
int32_t* var_60 = &var_58
sub_14215a980(arg1, &arg_8, &var_68, nullptr)
char result = j_sub_140d3e110(&var_58)

if (result == 0)
    return result

return sub_141fa1990(&arg1[0xa], &var_58, arg2)
