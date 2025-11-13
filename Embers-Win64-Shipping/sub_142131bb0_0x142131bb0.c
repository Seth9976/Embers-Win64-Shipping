// 函数: sub_142131bb0
// 地址: 0x142131bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_48
int32_t zmm6_1 = sub_140b4c620(&var_48, arg2)
int32_t rax = arg2[3]
int32_t rbx = *(arg1 + 0xe8)
int32_t rdi = 0
char result_1 = arg2[2].b
int64_t arg_8
int128_t* rbx_2

if (rbx s<= 0)
label_142131c51:
    *(arg1 + 0xe8) = rbx + 1
    
    if (rbx + 1 s> *(arg1 + 0xec))
        sub_140adefe0(arg1 + 0xe0)
    
    rbx_2 = *(arg1 + 0xe0) + sx.q(rbx) * 0x24
    
    if (rbx_2 == 0)
        rbx_2 = nullptr
    else
        arg_8 = 0
        *rbx_2 = 0
        *(rbx_2 + 8) = 2
        *(rbx_2 + 0xc) = 0xffffffff
        __builtin_memset(&rbx_2[1], 0, 0x14)
    
    *rbx_2 = *arg2
    *(rbx_2 + 0x1c) = 0
    *(rbx_2 + 0x14) = 0
    goto label_142131cb9

int64_t rsi_1 = 0
char result

while (true)
    rbx_2 = *(arg1 + 0xe0) + rsi_1
    int64_t* rax_1
    rax_1, zmm6_1 = sub_140b4c620(&arg_8, rbx_2)
    
    if (*rax_1 == var_48 && *(rbx_2 + 0xc) == rax)
        result = result_1
        
        if (*(rbx_2 + 8) == result)
            break
    
    rbx = *(arg1 + 0xe8)
    rdi += 1
    rsi_1 += 0x24
    
    if (rdi s>= rbx)
        goto label_142131c51

if (not(zmm6_1 f== rbx_2[1].d))
label_142131cb9:
    rbx_2[1].d = zmm6_1
    result = sub_142118410(arg1, rbx_2)
    int64_t* rcx_6 = *(arg1 + 0x140)
    
    if (rcx_6 != 0)
        return sub_14211ef90(rcx_6, 0)

return result
