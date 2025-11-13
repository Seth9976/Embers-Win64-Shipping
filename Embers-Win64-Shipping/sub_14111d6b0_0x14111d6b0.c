// 函数: sub_14111d6b0
// 地址: 0x14111d6b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
int32_t rax = 0
int32_t r11 = arg1[0x18]
int32_t rdi_1 = arg4 * arg5
int32_t r10 = -1

if (r11 s> 0)
    int64_t r9 = *(arg1 + 0x58)
    int64_t rdx = -1
    int64_t rcx = 0
    
    do
        int32_t r8 = *(r9 + (rcx << 3) + 4)
        
        if (r8 s>= rdi_1 && (rdx == -1 || r8 s< *(r9 + (rdx << 3) + 4)))
            r10 = rax
            rdx = rcx
        
        rax += 1
        rcx += 1
    while (rax s< r11)

int32_t var_58
int64_t* var_48
int32_t arg_8

if (r10 == 0xffffffff)
    var_58 = *arg1
    int32_t var_54_1 = arg3
    var_48 = &arg_10
    int32_t var_50_1 = arg4
    int32_t* var_40_1 = &var_58
    int32_t var_4c_1 = arg5
    int32_t* result = sub_140d13d60(&arg1[2], &arg_8, &var_48, nullptr)
    *arg1 += rdi_1
    return result

int64_t r11_1 = *(arg1 + 0x58)
int64_t rax_1 = sx.q(r10)
int64_t rbx = *(r11_1 + (rax_1 << 3))
int64_t* r9_1 = r11_1 + (rax_1 << 3)
uint32_t rcx_2 = (rbx u>> 0x20).d

if (rcx_2 != rdi_1)
    arg_8 = rbx.d + rdi_1
    int32_t arg_c = rcx_2 - rdi_1
    *r9_1 = arg_8.q
else
    int32_t rdx_1 = arg1[0x18]
    int32_t rax_4 = rdx_1 - r10 - 1
    
    if (rax_4 s>= 1)
        rax_4 = 1
    
    if (rax_4 != 0)
        memcpy(r9_1, r11_1 + (sx.q(rdx_1 - rax_4) << 3), rax_4 << 3)
        rdx_1 = arg1[0x18]
    
    arg1[0x18] = rdx_1 - 1
    sub_1405c53d0(&arg1[0x16])

var_58 = rbx.d
var_48 = &arg_10
int32_t var_54 = arg3
int32_t* var_40 = &var_58
int32_t var_50 = arg4
int32_t var_4c = arg5
return sub_140d13d60(&arg1[2], &arg_8, &var_48, nullptr)
