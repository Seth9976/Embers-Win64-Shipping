// 函数: sub_1421bf930
// 地址: 0x1421bf930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg2[1]
int32_t arg_8 = *(arg1 + 8)
int32_t* rdx = *rcx

if (&rdx[1] u> rcx[1])
    int32_t* rdx_1 = &arg_8
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, rdx_1, arg3)
    else
        (*(*arg2 + 0x150))(arg2, rdx_1, 4)
else
    arg_8 = *rdx
    *rcx += 4

*(arg1 + 8) = arg_8
int64_t* rcx_2 = arg2[1]
int32_t* r8 = *rcx_2

if (&r8[1] u<= rcx_2[1])
    *(arg1 + 0xc) = *r8
    int64_t* rax_7 = arg2[1]
    *rax_7 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0xc, arg3)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0xc, 4)

int64_t* rcx_4 = arg2[1]
int32_t* r8_1 = *rcx_4

if (&r8_1[1] u<= rcx_4[1])
    *(arg1 + 0x10) = *r8_1
    int64_t* rax_11 = arg2[1]
    *rax_11 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0x10, arg3)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0x10, 4)

bool cond:3 = (arg2[5].b & 1) != 0
int64_t r13 = 0
int64_t var_58 = 0
uint32_t count_2 = 0
int32_t var_4c = 0
uint64_t r12 = 0
uint64_t var_48 = 0
uint32_t count_10 = 0
int32_t var_3c = 0

if (not(cond:3) && (*(arg2 + 0x2a) & 0x20) == 0)
    uint32_t count = *(arg1 + 0x1c)
    
    if (count != 0)
        count_2 = count
        uint32_t count_1 = count
        
        if (count s> 0)
            sub_1405daba0(&var_58)
            count = *(arg1 + 0x1c)
            count_2 = count_1
            r13 = var_58
        
        memcpy(r13, *(arg1 + 0x28), count)
    
    uint32_t count_13 = *(arg1 + 0x20)
    
    if (count_13 != 0)
        count_10 = count_13
        uint32_t count_11 = count_13
        
        if (count_13 s> 0)
            sub_140594770(&var_48)
            count_13 = *(arg1 + 0x20)
            count_10 = count_11
            r12 = var_48
        
        memcpy(r12, *(arg1 + 0x30), count_13 * 2)

(*(*arg2 + 8))(arg2, sx.q(count_2), sx.q(var_4c))
uint32_t count_4 = count_2
int64_t* rcx_11 = arg2[1]

if ((arg2[5].b & 1) != 0)
    count_4 = 0

uint32_t count_6 = count_4
int32_t* rdx_9 = *rcx_11

if (&rdx_9[1] u> rcx_11[1])
    uint32_t* rdx_10 = &count_6
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, rdx_10, arg3)
    else
        (*(*arg2 + 0x150))(arg2, rdx_10, 4)
else
    count_6 = *rdx_9
    *rcx_11 += 4

uint32_t count_5 = count_6

if (count_5 != 0)
    char rax_17 = *(arg2 + 0x29)
    
    if ((rax_17 & 1) != 0 || count_5 s<= 0 || ((*(arg2 + 0x2b) & 8) != 0 && count_5 s> 0x1000000))
        *(arg2 + 0x29) = rax_17 | 1
    else
        count_2 = count_5
        
        if ((arg2[5].b & 1) != 0)
            sub_1405da9e0(&var_58, count_5, var_4c)
            count_2 = count_5
            r13 = var_58
        
        (*(*arg2 + 0x150))(arg2, r13, sx.q(count_2))
else if ((arg2[5].b & 1) != 0)
    count_2 = 0
    uint32_t count_3 = 0
    
    if (var_4c != 0)
        sub_1405c5510(&var_58, count_5)
        count_2 = count_3
        r13 = var_58

(*(*arg2 + 8))(arg2, sx.q(count_10) * 2, sx.q(var_3c) * 2)
uint32_t count_7 = count_10
int64_t* rcx_17 = arg2[1]

if ((arg2[5].b & 1) != 0)
    count_7 = 0

count_6 = count_7
int32_t* rdx_14 = *rcx_17

if (&rdx_14[1] u> rcx_17[1])
    uint32_t* rdx_15 = &count_6
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, rdx_15, arg3)
    else
        (*(*arg2 + 0x150))(arg2, rdx_15, 4)
else
    count_6 = *rdx_14
    *rcx_17 += 4

uint32_t count_8 = count_6

if (count_8 != 0)
    char rax_23 = *(arg2 + 0x29)
    
    if ((rax_23 & 1) != 0 || count_8 s<= 0 || ((*(arg2 + 0x2b) & 8) != 0 && count_8 s> 0x800000))
        *(arg2 + 0x29) = rax_23 | 1
    else
        count_10 = count_8
        
        if ((arg2[5].b & 1) != 0)
            sub_1405a4c70(&var_48, count_8, var_3c)
            count_10 = count_8
            r12 = var_48
        
        (*(*arg2 + 0x150))(arg2, r12, sx.q(count_10) * 2)
    
label_1421bfc77:
    
    if ((arg2[5].b & 1) != 0)
        arg3 = sub_1421b4b80(arg1 + 0x18)
        
        if (count_2 != 0)
            sub_1421ad850(arg1 + 0x18, count_2, zx.q(count_10))
            memcpy(*(arg1 + 0x28), r13, *(arg1 + 0x1c))
            int32_t rax_25 = *(arg1 + 0x20)
            
            if (rax_25 != 0)
                memcpy(*(arg1 + 0x30), r12, rax_25 * 2)
else if ((arg2[5].b & 1) != 0)
    count_10 = 0
    uint32_t count_12 = 0
    
    if (var_3c != 0)
        sub_1405947f0(&var_48, count_8)
        count_10 = count_12
        r12 = var_48
    
    goto label_1421bfc77

sub_1408d9160(arg2, arg1 + 0x38, arg3)
int64_t* rcx_27 = arg2[1]
int32_t* r8_17 = *rcx_27

if (&r8_17[1] u<= rcx_27[1])
    *(arg1 + 0x44) = *r8_17
    int64_t* rax_28 = arg2[1]
    *rax_28 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0x44, arg3)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0x44, 4)

int64_t* rcx_29 = arg2[1]
int32_t* rdx_22 = *rcx_29

if (&rdx_22[1] u> rcx_29[1])
    int64_t rax_32 = *arg2
    uint32_t count_9
    count_9.b = *(arg1 + 0x48) != 0
    count_6 = count_9
    (*(rax_32 + 0x150))(arg2, &count_6, 4)
    *(arg1 + 0x48) = count_6 != 0
else
    void* rax_30
    rax_30.b = *rdx_22 != 0
    *(arg1 + 0x48) = rax_30.b
    int64_t* rax_31 = arg2[1]
    *rax_31 += 4

int64_t* rcx_31 = arg2[1]
int32_t* r8_18 = *rcx_31

if (&r8_18[1] u<= rcx_31[1])
    *(arg1 + 0x4c) = *r8_18
    int64_t* rax_36 = arg2[1]
    *rax_36 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0x4c, arg3)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0x4c, 4)

int64_t result = sub_1408d9160(arg2, arg1 + 0x50, arg3)

if (r12 != 0)
    result = sub_140a74f90(r12)

if (r13 == 0)
    return result

return sub_140a74f90(r13)
