// 函数: sub_142874200
// 地址: 0x142874200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x28)
int64_t rdx = arg1[3]
uint64_t r9_1 = rdx - arg2[3]

if (rdx != arg2[3])
label_14287425c:
    void* i_1 = arg2[2]
    
    if (i_1 == 0)
    label_1428742b0:
        
        if (arg3 != 0)
            arg1[5] = *arg2
            sub_1428a6780(arg2)
        
        return 1
    
    int64_t rcx_2 = arg1[1]
    
    if (rcx_2 == 0)
        rcx_2 = *(*arg1 + 8)
    
    char* rcx_4 = i_1 - 1 + arg2[1] + rcx_2
    void* i
    
    do
        *rcx_4 = r9_1.b
        rcx_4 = &rcx_4[-1]
        r9_1 u>>= 8
        i = i_1
        i_1 -= 1
    while (i != 1)
    
    if (r9_1 == 0)
        goto label_1428742b0
else
    char rax_1 = (arg2[4].d).b
    
    if ((rax_1 & 1) == 0)
        if ((rax_1 & 2) == 0)
            goto label_14287425c
        
        if (arg3 != 0)
            int64_t rcx = arg1[2]
            
            if (rcx - arg2[2] == arg2[1])
                arg1[3] = rdx - arg2[2]
                arg1[2] = rcx - arg2[2]
            
            arg2[1] = 0
            arg2[2] = 0
            goto label_14287425c

return 0
