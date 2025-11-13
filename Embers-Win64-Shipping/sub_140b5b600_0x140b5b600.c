// 函数: sub_140b5b600
// 地址: 0x140b5b600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((arg1[5].b & 1) != 0)
    int64_t* rcx = arg1[1]
    int32_t* r8_1 = *rcx
    int32_t arg_8
    
    if (&r8_1[1] u> rcx[1])
        int32_t* rdx = &arg_8
        
        if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b54070(arg1, rdx, arg3)
        else
            (*(*arg1 + 0x150))(arg1, rdx, 4)
    else
        arg_8 = *r8_1
        *rcx += 4
    
    int64_t rcx_2 = sx.q(arg_8)
    int64_t r8_3
    
    if (rcx_2.d s>= 0)
        int64_t rdx_2 = arg1[7]
        
        if (rdx_2 s> 0 && rcx_2 s> rdx_2)
            *(arg1 + 0x29) |= 3
            return arg1
        
        *(arg2 + 4) = 0
        r8_3 = rcx_2
    else
        if (rcx_2.d == 0x80000000)
            *(arg1 + 0x29) |= 3
            return arg1
        
        int64_t rdx_1 = arg1[7]
        int32_t rcx_3 = neg.d(rcx_2.d)
        arg_8 = rcx_3
        
        if (rdx_1 s> 0 && sx.q(rcx_3) s> rdx_1)
            *(arg1 + 0x29) |= 3
            return arg1
        
        r8_3 = sx.q(rcx_3) * 2
        *(arg2 + 4) = 1
    
    (*(*arg1 + 0x150))(arg1, arg2 + 6, r8_3)
    int64_t rcx_5 = 0
    
    if (arg1[8].d s>= 0x1f8)
        rcx_5 = 4
    
    void arg_18
    (*(*arg1 + 0x150))(arg1, &arg_18, rcx_5)
    return arg1

int32_t rcx_7 = 0
bool cond:1 = *(arg2 + 4) == 0
int32_t rdx_5 = 0
uint64_t var_28 = 0
int64_t var_20 = 0

if (cond:1)
    if (arg2 != -6 && *(arg2 + 6) != 0)
        int64_t rdi_3 = -1
        
        do
            rdi_3 += 1
        while (*(arg2 + 6 + rdi_3) != 0)
        
        if (rdi_3.d + 1 s> 0)
            sub_1405947f0(&var_28, rdi_3.d + 1)
            rdx_5 = var_20:4.d
            rcx_7 = var_20.d
        
        int32_t rax_10 = rdi_3.d + 1 + rcx_7
        var_20.d = rax_10
        
        if (rax_10 s> rdx_5)
            sub_140594770(&var_28)
        
        arg3 = sub_1405a7220(var_28, rdi_3.d + 1, arg2 + 6, rdi_3.d + 1, 0x3f)
else if (arg2 != -6 && *(arg2 + 6) != 0)
    int64_t rdi_1 = -1
    
    do
        rdi_1 += 1
    while ((arg2 + 6)[rdi_1] != 0)
    
    if (rdi_1.d + 1 s> 0)
        sub_1405947f0(&var_28, rdi_1.d + 1)
        rdx_5 = var_20:4.d
        rcx_7 = var_20.d
    
    int32_t rax_9 = rdi_1.d + 1 + rcx_7
    var_20.d = rax_9
    
    if (rax_9 s> rdx_5)
        sub_140594770(&var_28)
    
    UnDecorator::getReferenceType(var_28, arg2 + 6, (rdi_1.d + 1) * 2)

int512_t zmm1 = sub_140a1d9d0(arg1, &var_28, arg3)
int64_t* rcx_15 = arg1[1]
int16_t* r8_8 = *rcx_15

if (&r8_8[1] u<= rcx_15[1])
    *(arg2 + 0x806) = *r8_8
    int64_t* rax_13 = arg1[1]
    *rax_13 += 2
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54000(arg1, arg2 + 0x806, zmm1)
else
    (*(*arg1 + 0x150))(arg1, arg2 + 0x806, 2)

int64_t* rcx_17 = arg1[1]
int16_t* r8_9 = *rcx_17

if (&r8_9[1] u<= rcx_17[1])
    *(arg2 + 0x808) = *r8_9
    int64_t* rax_17 = arg1[1]
    *rax_17 += 2
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54000(arg1, arg2 + 0x808, zmm1)
else
    (*(*arg1 + 0x150))(arg1, arg2 + 0x808, 2)

uint64_t rcx_19 = var_28

if (rcx_19 != 0)
    sub_140a74f90(rcx_19)

return arg1
