// 函数: sub_142132210
// 地址: 0x142132210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38
sub_140b4c620(&var_38, arg2)
int32_t rax = arg2[3]
int32_t rbx = *(arg1 + 0xf8)
int32_t rdi = 0
char result_1 = arg2[2].b
int64_t arg_8
int128_t* rbx_2

if (rbx s<= 0)
label_1421322b1:
    *(arg1 + 0xf8) = rbx + 1
    
    if (rbx + 1 s> *(arg1 + 0xfc))
        sub_1405c4f50(arg1 + 0xf0)
    
    int64_t rbx_4 = sx.q(rbx) * 0x30
    rbx_2 = rbx_4 + *(arg1 + 0xf0)
    
    if (rbx_4 == neg.q(*(arg1 + 0xf0)))
        rbx_2 = nullptr
    else
        arg_8 = 0
        *rbx_2 = 0
        *(rbx_2 + 8) = 2
        *(rbx_2 + 0xc) = 0xffffffff
        __builtin_memset(&rbx_2[1], 0, 0x20)
    
    *rbx_2 = *arg2
    *(rbx_2 + 0x28) = 0
    rbx_2[2].q = 0
    goto label_142132347

int64_t rsi_1 = 0
char result

while (true)
    rbx_2 = *(arg1 + 0xf0) + rsi_1
    
    if (*sub_140b4c620(&arg_8, rbx_2) == var_38 && *(rbx_2 + 0xc) == rax)
        result = result_1
        
        if (*(rbx_2 + 8) == result)
            break
    
    rbx = *(arg1 + 0xf8)
    rdi += 1
    rsi_1 += 0x30
    
    if (rdi s>= rbx)
        goto label_1421322b1

if ((*arg3).d f!= rbx_2[1].d || (*(arg3 + 4)).d f!= *(rbx_2 + 0x14)
    || (*(arg3 + 8)).d f!= *(rbx_2 + 0x18) || not((*(arg3 + 0xc)).d f== *(rbx_2 + 0x1c)))
label_142132347:
    rbx_2[1] = *arg3
    result = sub_1421186c0(arg1, rbx_2)
    int64_t* rcx_5 = *(arg1 + 0x140)
    
    if (rcx_5 != 0)
        return sub_14211ef90(rcx_5, 0)

return result
