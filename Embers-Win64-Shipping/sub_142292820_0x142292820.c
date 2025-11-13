// 函数: sub_142292820
// 地址: 0x142292820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = 1
int64_t* rcx = arg2[1]
int32_t* rdx = *rcx

if (&rdx[1] u> rcx[1])
    int32_t* rdx_1 = &arg_10
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, rdx_1, arg4)
    else
        (*(*arg2 + 0x150))(arg2, rdx_1, 4)
else
    arg_10 = *rdx
    *rcx += 4

if (arg3 != 0 || ((arg2[5].b & 2) != 0 && arg2[0xe] == 0) || (*(arg2 + 0x29) & 0x20) != 0)
    return sub_14228af70(arg2, arg1, arg4)

(*(*arg2 + 8))(arg2, sx.q(arg1[1].d), sx.q(*(arg1 + 0xc)))
char result = arg2[5].b
int32_t arg_18

if ((result & 1) == 0)
    if ((result & 2) == 0)
        return result
    
    int64_t* rcx_10 = arg2[1]
    arg_18 = arg1[1].d
    int32_t* rdx_10 = *rcx_10
    
    if (&rdx_10[1] u> rcx_10[1])
        int32_t* rdx_11 = &arg_18
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, rdx_11, arg4)
        else
            (*(*arg2 + 0x150))(arg2, rdx_11, 4)
    else
        arg_18 = *rdx_10
        *rcx_10 += 4
    
    void* rdx_13 = *arg1
    
    if ((rdx_13.b & 1) != 0)
        rdx_13 = (rdx_13 s>> 1) + arg1
    
    int64_t r9 = *arg2
    return (*(r9 + 0x150))(arg2, rdx_13, sx.q(arg_18 * arg_10), r9)

int64_t* rcx_3 = arg2[1]
int32_t rsi_1 = 0
arg_18 = 0
int32_t* rdx_3 = *rcx_3

if (&rdx_3[1] u> rcx_3[1])
    int32_t* rdx_4 = &arg_18
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, rdx_4, arg4)
    else
        (*(*arg2 + 0x150))(arg2, rdx_4, 4)
else
    arg_18 = *rdx_3
    *rcx_3 += 4

int32_t rdx_6 = *(arg1 + 0xc)
int32_t rcx_5 = arg_18
arg1[1].d = 0

if (rdx_6 != rcx_5)
    sub_14083acb0(arg1, rcx_5)
    rdx_6 = *(arg1 + 0xc)
    rcx_5 = arg_18
    rsi_1 = arg1[1].d

int32_t rax_7 = rsi_1 + rcx_5
arg1[1].d = rax_7

if (rax_7 s> rdx_6)
    sub_1407c3da0(arg1, rsi_1)
    rcx_5 = arg_18

void* rdx_9 = *arg1

if ((rdx_9.b & 1) != 0)
    rdx_9 = (rdx_9 s>> 1) + arg1

return (*(*arg2 + 0x150))(arg2, rdx_9, sx.q(rcx_5 * arg_10))
