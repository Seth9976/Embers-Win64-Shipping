// 函数: sub_14231aea0
// 地址: 0x14231aea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg2 + 8))(arg2, sx.q(*(arg1 + 0x10)) << 4, sx.q(*(arg1 + 0x14)) << 4)
int32_t rax_1

if ((arg2[5].b & 1) == 0)
    rax_1 = *(arg1 + 0x10)
else
    rax_1 = 0

int64_t* rcx_1 = arg2[1]
int32_t arg_8 = rax_1
int32_t* rdx_2 = *rcx_1

if (&rdx_2[1] u> rcx_1[1])
    int32_t* rdx_3 = &arg_8
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, rdx_3, arg3)
    else
        (*(*arg2 + 0x150))(arg2, rdx_3, 4)
else
    arg_8 = *rdx_2
    *rcx_1 += 4

int32_t rcx_5 = arg_8

if (rcx_5 != 0)
    char rax_5 = *(arg2 + 0x29)
    
    if ((rax_5 & 1) != 0 || rcx_5 s<= 0 || ((*(arg2 + 0x2b) & 8) != 0 && rcx_5 s> 0x100000))
        *(arg2 + 0x29) = rax_5 | 1
    else
        *(arg1 + 0x10) = rcx_5
        
        if ((arg2[5].b & 1) != 0)
            sub_1405a4be0(arg1 + 8, rcx_5, *(arg1 + 0x14))
            rcx_5 = *(arg1 + 0x10)
        
        (*(*arg2 + 0x150))(arg2, *(arg1 + 8), sx.q(rcx_5) << 4)
else if ((arg2[5].b & 1) != 0)
    *(arg1 + 0x10) = rcx_5
    
    if (*(arg1 + 0x14) != rcx_5)
        sub_1405a5410(arg1 + 8, 0)

int64_t* rcx_7 = arg2[0xe]
char rax_8

if (rcx_7 != 0)
    rax_8 = (*(*rcx_7 + 0xd8))(rcx_7, 1)

int32_t* rdx_6

if (rcx_7 == 0 || rax_8 != 0)
    rdx_6 = arg1 + 0x20
else
    arg_8.q = 0
    rdx_6 = &arg_8

(*(*arg2 + 0x130))(arg2, rdx_6)
sub_1409ac7a0(sub_1409ac7a0(arg2, arg1 + 0x28, arg3), arg1 + 0x30, arg3)
int32_t i = 0
char* rbx = arg1 + 0x38
int64_t* result

do
    int64_t* rcx_11 = arg2[1]
    int32_t* rdx_9 = *rcx_11
    
    if (&rdx_9[1] u> rcx_11[1])
        int32_t rax_12
        rax_12.b = *rbx != 0
        arg_8 = rax_12
        (*(*arg2 + 0x150))(arg2, &arg_8, 4)
        result.b = arg_8 != 0
        *rbx = result.b
    else
        void* rax_11
        rax_11.b = *rdx_9 != 0
        *rbx = rax_11.b
        result = arg2[1]
        *result += 4
    
    i += 1
    rbx = &rbx[1]
while (i u< 4)

if (arg2[8].d s>= 0x1d4)
    int64_t* rcx_13 = arg2[1]
    int32_t* rdx_11 = *rcx_13
    
    if (&rdx_11[1] u<= rcx_13[1])
        *(arg1 + 0x40) = *rdx_11
        int64_t* rax_16 = arg2[1]
        *rax_16 += 4
    else if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, arg1 + 0x40, arg3)
    else
        (*(*arg2 + 0x150))(arg2, arg1 + 0x40, 4)
    
    int64_t* rcx_15 = arg2[1]
    int32_t* r8_5 = *rcx_15
    
    if (&r8_5[1] u<= rcx_15[1])
        *(arg1 + 0x44) = *r8_5
        int64_t* rax_20 = arg2[1]
        *rax_20 += 4
    else if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, arg1 + 0x44, arg3)
    else
        (*(*arg2 + 0x150))(arg2, arg1 + 0x44, 4)
    
    int64_t* rcx_17 = arg2[1]
    int32_t* r8_6 = *rcx_17
    
    if (&r8_6[1] u<= rcx_17[1])
        *(arg1 + 0x48) = *r8_6
        int64_t* rax_24 = arg2[1]
        *rax_24 += 4
    else if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, arg1 + 0x48, arg3)
    else
        (*(*arg2 + 0x150))(arg2, arg1 + 0x48, 4)
    
    int64_t* rcx_19 = arg2[1]
    int32_t* r8_7 = *rcx_19
    
    if (&r8_7[1] u> rcx_19[1])
        if ((*(arg2 + 0x29) & 0x20) != 0)
            return sub_140b54070(arg2, arg1 + 0x4c, arg3)
        
        return (*(*arg2 + 0x150))(arg2, arg1 + 0x4c, 4)
    
    *(arg1 + 0x4c) = *r8_7
    result = arg2[1]
    *result += 4
else if ((arg2[5].b & 1) != 0)
    *(arg1 + 0x40) = data_143205580

return result
