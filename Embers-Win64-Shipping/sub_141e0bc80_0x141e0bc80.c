// 函数: sub_141e0bc80
// 地址: 0x141e0bc80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg1[3].d)
int64_t rcx = 4

if (*(arg1 + 0x1c) != 0 || rdi.d u> 4)
    rcx = rdi + 0x10 + ((rdi * 3) u>> 3)

int32_t rax_3 = sub_140a846a0(rcx, 0)

if (rdi.d s> rax_3)
    rax_3 = 0x7fffffff

*(arg1 + 0x1c) = rax_3
int64_t* rcx_2 = arg1[2]

if (rcx_2 != 0)
label_141e0bd04:
    (**rcx_2)(rcx_2, 1)
label_141e0bd06:
    int64_t* rcx_4 = arg1[1]
    
    if (rcx_4 != 0)
        (**rcx_4)(rcx_4, 1)
    
    rax_3 = 0
    __builtin_memset(arg1, 0, 0x18)
else
    if (arg1[1] != rcx_2)
        if (rcx_2 == 0)
            goto label_141e0bd06
        
        goto label_141e0bd04
    
    int64_t rcx_3 = *arg1
    
    if (rcx_3 != 0 || rax_3 != 0)
        int64_t rax_4 = sub_140a84c80(rcx_3, sx.q(rax_3), 0)
        *arg1 = rax_4
        return rax_4

return rax_3
