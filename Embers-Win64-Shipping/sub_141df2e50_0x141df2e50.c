// 函数: sub_141df2e50
// 地址: 0x141df2e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 8))(arg1, sx.q(arg2[1].d) * 2, sx.q(*(arg2 + 0xc)) * 2)
int32_t rax_1 = 0

if ((arg1[5].b & 1) == 0)
    rax_1 = arg2[1].d

int64_t* rcx = arg1[1]
int32_t arg_8 = rax_1
int32_t* rdx_2 = *rcx

if (&rdx_2[1] u> rcx[1])
    int32_t* rdx_3 = &arg_8
    
    if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, rdx_3, arg3)
    else
        (*(*arg1 + 0x150))(arg1, rdx_3, 4)
else
    arg_8 = *rdx_2
    *rcx += 4

int32_t rcx_4 = arg_8

if (rcx_4 != 0)
    char rax_5 = *(arg1 + 0x29)
    
    if ((rax_5 & 1) != 0 || rcx_4 s<= 0 || ((*(arg1 + 0x2b) & 8) != 0 && rcx_4 s> 0x800000))
        *(arg1 + 0x29) = rax_5 | 1
    else
        arg2[1].d = rcx_4
        
        if ((arg1[5].b & 1) != 0)
            sub_1405a4c70(arg2, rcx_4, *(arg2 + 0xc))
            rcx_4 = arg2[1].d
        
        (*(*arg1 + 0x150))(arg1, *arg2, sx.q(rcx_4) * 2)
else if ((arg1[5].b & 1) != 0)
    arg2[1].d = 0
    
    if (*(arg2 + 0xc) != 0)
        sub_1405947f0(arg2, 0)

int64_t* rcx_6 = arg1[1]
void* r14 = &arg2[2]
int32_t* rdx_6 = *rcx_6

if (&rdx_6[1] u<= rcx_6[1])
    *(r14 + 0x18) = *rdx_6
    int64_t* rax_9 = arg1[1]
    *rax_9 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, r14 + 0x18, arg3)
else
    (*(*arg1 + 0x150))(arg1, r14 + 0x18, 4)

if ((arg1[5].b & 1) != 0)
    *(r14 + 0x1c) = *(r14 + 0x18)
    sub_1405a4410(r14, 0)

void* rcx_9 = *(r14 + 0x10)
int64_t r9 = *arg1
uint64_t r8_8 = zx.q(*(r14 + 0x18) + 0x1f) u>> 5 << 2

if (rcx_9 != 0)
    r14 = rcx_9

(*(r9 + 0x150))(arg1, r14, r8_8, r9)
(*(*arg1 + 0x108))(arg1, &arg2[6])
(*(*arg1 + 0x108))(arg1, &arg2[7])
(*(*arg1 + 0x108))(arg1, &arg2[8])
int64_t* rax_16 = sub_14090ad70(sub_14090ad70(arg1, &arg2[0xa], arg3), &arg2[0xc], arg3)
int64_t* rdx_14 = rax_16[1]
int32_t* rax_17 = *rdx_14

if (&rax_17[1] u> rdx_14[1])
    int32_t rax_18
    rax_18.b = arg2[0x1e].b != 0
    int32_t arg_10 = rax_18
    (*(*rax_16 + 0x150))(rax_16, &arg_10, 4)
    arg2[0x1e].b = arg_10 != 0
else
    void* rcx_16
    rcx_16.b = *rax_17 != 0
    arg2[0x1e].b = rcx_16.b
    int64_t* rcx_17 = rax_16[1]
    *rcx_17 += 4

int64_t* rcx_19 = rax_16[1]
int32_t* rdx_16 = *rcx_19

if (&rdx_16[1] u> rcx_19[1])
    int32_t rax_23
    rax_23.b = *(arg2 + 0xf1) != 0
    int32_t arg_18 = rax_23
    (*(*rax_16 + 0x150))(rax_16, &arg_18, 4)
    *(arg2 + 0xf1) = arg_18 != 0
else
    void* rax_21
    rax_21.b = *rdx_16 != 0
    *(arg2 + 0xf1) = rax_21.b
    int64_t* rax_22 = rax_16[1]
    *rax_22 += 4

int64_t* rcx_21 = rax_16[1]
int32_t* rdx_18 = *rcx_21

if (&rdx_18[1] u<= rcx_21[1])
    void* rax_26
    rax_26.b = *rdx_18 != 0
    *(arg2 + 0xf2) = rax_26.b
    int64_t* rax_27 = rax_16[1]
    *rax_27 += 4
    return arg1

int64_t rax_29 = *rax_16
int32_t rbp
rbp.b = *(arg2 + 0xf2) != 0
int32_t arg_20 = rbp
(*(rax_29 + 0x150))(rax_16, &arg_20, 4)
*(arg2 + 0xf2) = arg_20 != 0
return arg1
