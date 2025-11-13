// 函数: sub_141b77e10
// 地址: 0x141b77e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_141bb5d50(arg2, arg3) != 0)
    return 0

int64_t r15

if (*(arg2 + 0x28) == 0)
    r15.b = 0
else
    int64_t* rcx_1 = arg2[2].q
    
    if (rcx_1 == 0)
        r15.b = 0
    else if ((*(*rcx_1 + 0x28))(rcx_1) == 0)
        r15.b = 0
    else
        r15.b = 1

int64_t r14

if (arg3[0xa] == 0)
    r14.b = 0
else
    int64_t* rcx_2 = *(arg3 + 0x20)
    
    if (rcx_2 == 0)
        r14.b = 0
    else if ((*(*rcx_2 + 0x28))(rcx_2) == 0)
        r14.b = 0
    else
        r14.b = 1

if (arg3 != arg2)
    if (*(arg2 + 0x18) != 0)
        *(arg2 + 0x18) = 0
    
    if (arg3[6].b != 0)
        *arg2 = *arg3
        arg2[1].q = *(arg3 + 0x10)
        *(arg2 + 0x18) = 1

*(arg2 + 0x1c) = arg3[7].b

if (&arg3[8] != &arg2[2])
    int64_t* rcx_3
    
    if (arg3[0xa] != 0)
        rcx_3 = *(arg3 + 0x20)
    
    if (arg3[0xa] != 0 && rcx_3 != 0)
        (*(*rcx_3 + 0x40))(rcx_3, &arg2[2])
    else if (*(arg2 + 0x28) != 0)
        int64_t* rcx_4 = arg2[2].q
        
        if (rcx_4 != 0)
            (*(*rcx_4 + 0x38))(rcx_4, 0)
            int64_t rcx_5 = arg2[2].q
            
            if (rcx_5 != 0)
                arg2[2].q = sub_140a84c80(rcx_5, 0, 0)
            
            *(arg2 + 0x28) = 0

char rdx_2 = arg4 | 4

if (r15.b == r14.b)
    rdx_2 = arg4

sub_140e19ef0(arg1, rdx_2)
int64_t result
result.b = 1
return result
