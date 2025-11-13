// 函数: sub_141d0f7d0
// 地址: 0x141d0f7d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r9 = arg2[1]
int64_t* rcx = *r9

if (&rcx[1] u<= r9[1])
    *arg1 = *rcx
    int64_t* rax_2 = arg2[1]
    *rax_2 += 8
else if ((*(arg2 + 0x29) & 0x20) != 0)
    r9 = sub_140b540d0(arg2, arg1, arg4)
else
    r9 = (*(*arg2 + 0x150))(arg2, arg1, 8)

int64_t* rcx_2 = arg2[1]
int64_t* r8 = *rcx_2

if (&r8[1] u<= rcx_2[1])
    arg1[1] = *r8
    int64_t* rax_6 = arg2[1]
    *rax_6 += 8
else if ((*(arg2 + 0x29) & 0x20) != 0)
    r9 = sub_140b540d0(arg2, &arg1[1], arg4)
else
    r9 = (*(*arg2 + 0x150))(arg2, &arg1[1], 8)

int64_t* rcx_4 = arg2[1]
int64_t* r8_1 = *rcx_4

if (&r8_1[1] u<= rcx_4[1])
    arg1[2] = *r8_1
    int64_t* rax_10 = arg2[1]
    *rax_10 += 8
else if ((*(arg2 + 0x29) & 0x20) != 0)
    r9 = sub_140b540d0(arg2, &arg1[2], arg4)
else
    r9 = (*(*arg2 + 0x150))(arg2, &arg1[2], 8)

int64_t* rdx_4 = arg2[1]
int32_t* rcx_6 = *rdx_4
int64_t r8_2 = rdx_4[1]

if (arg3 s< 8)
    int32_t arg_18
    
    if (&rcx_6[1] u> r8_2)
        int32_t* rdx_5 = &arg_18
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            r9 = sub_140b54070(arg2, rdx_5, arg4)
        else
            r9 = (*(*arg2 + 0x150))(arg2, rdx_5, 4)
    else
        arg_18 = *rcx_6
        *rdx_4 = &rcx_6[1]
    
    int32_t rax_16 = arg_18
    
    if (rax_16 == 0)
        *(arg1 + 0x44) = rax_16
    else if ((rax_16.b & 1) != 0)
        *(arg1 + 0x44) = 1
    else if ((rax_16.b & 2) != 0)
        *(arg1 + 0x44) = 2
    else if ((rax_16.b & 4) == 0)
        arg4 = sub_140af98a0("Unknown", 0x1c9, 
            Found an unknown compression type in pak file, will need to be supported for legacy files", 
            r9)
        sub_140afbb40()
    else
        *(arg1 + 0x44) = 3
else if (&rcx_6[1] u<= r8_2)
    *(arg1 + 0x44) = *rcx_6
    int64_t* rax_18 = arg2[1]
    *rax_18 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0x44, arg4)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0x44, 4)

if (arg3 s<= 1)
    int64_t* rcx_9 = arg2[1]
    int64_t* rdx_7 = *rcx_9
    int64_t arg_8
    
    if (&rdx_7[1] u> rcx_9[1])
        int64_t* rdx_8 = &arg_8
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b540d0(arg2, rdx_8, arg4)
        else
            (*(*arg2 + 0x150))(arg2, rdx_8, 8)
    else
        arg_8 = *rdx_7
        *rcx_9 += 8

int64_t* rax_24 = (*(*arg2 + 0x150))(arg2, &arg1[3], 0x14)

if (arg3 s< 3)
    return rax_24

if (*(arg1 + 0x44) != 0)
    sub_141cf9320(arg2, &arg1[6], arg4)

int64_t* rcx_13 = arg2[1]
char* rdx_11 = *rcx_13

if (&rdx_11[1] u> rcx_13[1])
    (*(*arg2 + 0x150))(arg2, &arg1[9], 1)
else
    arg1[9].b = *rdx_11
    int64_t* rax_27 = arg2[1]
    *rax_27 += 1

int64_t* rcx_15 = arg2[1]
int32_t* r8_3 = *rcx_15

if (&r8_3[1] u<= rcx_15[1])
    arg1[8].d = *r8_3
    int64_t* rax_31 = arg2[1]
    *rax_31 += 4
    return rax_31

if ((*(arg2 + 0x29) & 0x20) != 0)
    return sub_140b54070(arg2, &arg1[8], arg4)

jump(*(*arg2 + 0x150))
