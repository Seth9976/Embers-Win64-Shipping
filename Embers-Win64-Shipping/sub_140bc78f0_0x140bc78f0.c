// 函数: sub_140bc78f0
// 地址: 0x140bc78f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *arg1
uint8_t rax_1 = (*(arg2 + 0x18) u>> 0x11).b

if ((rax_1 & 1) == 0)
    int64_t rax_2 = sub_140a74f90(rbx)
    *arg1 = 0
    return rax_2

if (rbx == 0)
    *arg1 = 0
    return rax_1

int64_t rcx_1 = *rbx

if (rcx_1 == 0)
    int64_t* rcx_2 = rbx[2]
    
    if (rcx_2 != 0)
    label_140bc7954:
        (**rcx_2)(rcx_2, 1)
    label_140bc7956:
        int64_t* rcx_3 = rbx[1]
        
        if (rcx_3 != 0)
            (**rcx_3)(rcx_3, 1)
    else if (rbx[1] != rcx_2)
        if (rcx_2 == 0)
            goto label_140bc7956
        
        goto label_140bc7954
else
    sub_140a74f90(rcx_1)

int64_t rax_5 = j_sub_140a74f90(rbx)
*arg1 = 0
return rax_5
