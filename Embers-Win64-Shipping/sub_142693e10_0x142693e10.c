// 函数: sub_142693e10
// 地址: 0x142693e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm1 = sub_140ce8e10(arg1, arg2)
int64_t* rdx = arg2[1]
int32_t arg_10 = 0xd
int32_t* r8 = *rdx

if (&r8[1] u> rdx[1])
    int32_t* rdx_1 = &arg_10
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, rdx_1, zmm1)
    else
        (*(*arg2 + 0x150))(arg2, rdx_1, 4)
else
    arg_10 = *r8
    *rdx += 4

int64_t rax_3 = *arg2
int64_t arg_18 = 0
int64_t rax_4 = (*(rax_3 + 0x20))(arg2)
int64_t* rdx_2 = arg2[1]
int64_t* rax_5 = *rdx_2

if (&rax_5[1] u> rdx_2[1])
    int64_t* rdx_3 = &arg_18
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b540d0(arg2, rdx_3, zmm1)
    else
        (*(*arg2 + 0x150))(arg2, rdx_3, 8)
else
    arg_18 = *rax_5
    *rdx_2 += 8

char result = arg2[5].b
int64_t rdx_7

if ((result & 1) == 0)
    if ((result & 2) == 0)
        return result
    
    sub_142694090(arg1, arg2, arg_10, zmm1)
    int64_t rax_10 = (*(*arg2 + 0x20))(arg2)
    int64_t r8_4 = *arg2
    arg_18 = rax_10 - rax_4
    (*(r8_4 + 0x178))(arg2, rax_4, r8_4)
    int64_t* rdx_10 = arg2[1]
    int64_t* r8_5 = *rdx_10
    
    if (&r8_5[1] u> rdx_10[1])
        int64_t* rdx_11 = &arg_18
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b540d0(arg2, rdx_11, zmm1)
        else
            (*(*arg2 + 0x150))(arg2, rdx_11, 8)
    else
        arg_18 = *r8_5
        *rdx_10 += 8
    
    rdx_7 = rax_10
else
    int32_t r8_1 = arg_10
    
    if (r8_1 s< 0xd)
        int64_t r8_2 = *arg2
        return (*(r8_2 + 0x178))(arg2, arg_18 + rax_4, r8_2)
    
    int64_t rcx_6 = arg_18
    
    if (rcx_6 s> 4)
        return sub_142694090(arg1, arg2, r8_1, zmm1)
    
    rdx_7 = rax_4 + rcx_6

return (*(*arg2 + 0x178))(arg2, rdx_7)
