// 函数: sub_141963e70
// 地址: 0x141963e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[1]
int64_t arg_8

if ((arg1[5].b & 1) == 0)
    __builtin_strncpy(&arg_8, "TRATSCOT", 8)
    int64_t* rdx_7 = *rcx
    
    if (&rdx_7[1] u> rcx[1])
        int64_t* rdx_8 = &arg_8
        
        if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b540d0(arg1, rdx_8, arg3)
        else
            (*(*arg1 + 0x150))(arg1, rdx_8, 8)
    else
        arg_8 = *rdx_7
        *rcx += 8
else
    arg_8 = 0
    int64_t* rdx = *rcx
    
    if (&rdx[1] u> rcx[1])
        int64_t* rdx_1 = &arg_8
        
        if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b540d0(arg1, rdx_1, arg3)
        else
            (*(*arg1 + 0x150))(arg1, rdx_1, 8)
    else
        arg_8 = *rdx
        *rcx += 8
    
    if (arg_8 != 0x544f435354415254)
        *(arg1 + 0x29) |= 1
        return arg1
    
    int64_t rax_3 = *arg1
    int64_t arg_18 = 0
    int64_t rax_4 = (*(rax_3 + 0x28))(arg1)
    int64_t rdx_2 = *arg1
    int64_t rax_5 = (*(rdx_2 + 0x20))(arg1, rdx_2)
    int64_t r8_1 = *arg1
    (*(r8_1 + 0x178))(arg1, rax_4 - 8, r8_1)
    int64_t* rdx_4 = arg1[1]
    int64_t* r8_2 = *rdx_4
    
    if (&r8_2[1] u> rdx_4[1])
        int64_t* rdx_5 = &arg_18
        
        if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b540d0(arg1, rdx_5, arg3)
        else
            (*(*arg1 + 0x150))(arg1, rdx_5, 8)
    else
        arg_18 = *r8_2
        *rdx_4 += 8
    
    (*(*arg1 + 0x178))(arg1, rax_5)
    
    if (arg_18 != 0x454f462d4d41524b)
        *(arg1 + 0x29) |= 1
        return arg1

int64_t* rcx_10 = arg1[1]
int32_t* rdx_9 = *rcx_10

if (&rdx_9[1] u<= rcx_10[1])
    *arg2 = *rdx_9
    int64_t* rax_14 = arg1[1]
    *rax_14 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, arg2, arg3)
else
    (*(*arg1 + 0x150))(arg1, arg2, 4)

int512_t zmm1 = sub_141964ac0(arg1, &arg2[2], arg3)

if ((arg1[5].b & 1) != 0)
    int64_t rcx_13 = *(arg2 + 0x48)
    
    if (rcx_13 != 0)
        *(arg2 + 0x48) = sub_140a84c80(rcx_13, 0, 0)
    
    arg2[0x14] = 0
    zmm1 = sub_141967fb0(&arg2[2], arg2[4] - arg2[0xf], 0)

if ((arg1[5].b & 2) != 0)
    int64_t* rcx_15 = arg1[1]
    __builtin_strncpy(&arg_8, "KRAM-FOE", 8)
    int64_t* rdx_14 = *rcx_15
    
    if (&rdx_14[1] u<= rcx_15[1])
        arg_8 = *rdx_14
        *rcx_15 += 8
        return arg1
    
    int64_t* rdx_15 = &arg_8
    
    if ((*(arg1 + 0x29) & 0x20) == 0)
        (*(*arg1 + 0x150))(arg1, rdx_15, 8)
        return arg1
    
    sub_140b540d0(arg1, rdx_15, zmm1)

return arg1
