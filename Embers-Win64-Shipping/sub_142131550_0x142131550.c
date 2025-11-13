// 函数: sub_142131550
// 地址: 0x142131550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38
sub_140b4c620(&var_38, arg2)
int32_t rax = arg2[3]
int32_t rbx = *(arg1 + 0x128)
int64_t rsi = 0
int32_t rdi = 0
char result_1 = arg2[2].b
int64_t arg_8
int128_t* rbx_2

if (rbx s<= 0)
label_1421315f3:
    *(arg1 + 0x128) = rbx + 1
    
    if (rbx + 1 s> *(arg1 + 0x12c))
        sub_1405c4f50(arg1 + 0x120)
    
    int64_t rbx_4 = sx.q(rbx) * 0x30
    rbx_2 = rbx_4 + *(arg1 + 0x120)
    
    if (rbx_4 == neg.q(*(arg1 + 0x120)))
        rbx_2 = nullptr
    else
        arg_8 = 0
        *rbx_2 = arg_8
        *(rbx_2 + 8) = 2
        *(rbx_2 + 0xc) = 0xffffffff
        __builtin_memset(&rbx_2[1], 0, 0x1c)
    
    *rbx_2 = *arg2
    *(rbx_2 + 0x24) = 0
    *(rbx_2 + 0x1c) = 0
    goto label_142131678

char result

while (true)
    rbx_2 = *(arg1 + 0x120) + rsi
    
    if (*sub_140b4c620(&arg_8, rbx_2) == var_38 && *(rbx_2 + 0xc) == rax)
        result = result_1
        
        if (*(rbx_2 + 8) == result)
            break
    
    rbx = *(arg1 + 0x128)
    rdi += 1
    rsi += 0x30
    
    if (rdi s>= rbx)
        goto label_1421315f3

if (rbx_2[1].q != arg3 || *(rbx_2 + 0x18) != arg4)
label_142131678:
    rbx_2[1].q = arg3
    *(rbx_2 + 0x18) = arg4
    result = sub_142118140(arg1, rbx_2)
    int64_t* rcx_5 = *(arg1 + 0x140)
    
    if (rcx_5 != 0)
        return sub_14211ef90(rcx_5, 0)

return result
