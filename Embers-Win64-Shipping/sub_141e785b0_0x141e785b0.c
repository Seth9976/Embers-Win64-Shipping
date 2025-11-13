// 函数: sub_141e785b0
// 地址: 0x141e785b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x118) += 1
int32_t r8 = *(arg1 + 0x118)
int32_t arg_8 = r8
int64_t* var_48
int64_t* rax_1 = sub_141e70a60(&var_48, arg3, r8, arg1)
int32_t r8_1 = *(arg1 + 0xd4)
int32_t* var_58 = &arg_8
int64_t* var_50 = rax_1
int64_t r14

if (r8_1 == 0)
    r14 = zx.q(*(arg1 + 0xa8))
    int32_t rax_7 = (r14 + 1).d
    *(arg1 + 0xa8) = rax_7
    
    if (rax_7 s> *(arg1 + 0xac))
        sub_1405c4fe0(arg1 + 0xa0)
    
    sub_1405b2ba0(arg1 + 0xb0, 0)
else
    r14 = sx.q(*(arg1 + 0xd0))
    int64_t rdx_1 = *(arg1 + 0xa0)
    int64_t rcx_1 = sx.q(*((r14 << 6) + rdx_1 + 4))
    *(arg1 + 0xd0) = rcx_1.d
    *(arg1 + 0xd4) = r8_1 - 1
    
    if (r8_1 != 1)
        *((rcx_1 << 6) + rdx_1) = 0xffffffff

void* rax_8 = *(arg1 + 0xc0)
void* r8_2 = arg1 + 0xb0

if (rax_8 != 0)
    r8_2 = rax_8

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(r14.d)
void* r8_3 = r8_2 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
*r8_3 |= 1 << (r14.b & 0x1f)
int32_t* rbx_2 = (sx.q(r14.d) << 6) + *(arg1 + 0xa0)
sub_141e6d440(&var_58, rbx_2)
rbx_2[0xe] = 0xffffffff
void* rbp = nullptr
void arg_20
sub_141e79c00(arg1 + 0xa0, &arg_20, *rbx_2, rbx_2, r14.d, nullptr)
int64_t* rcx_9 = var_48

if (rcx_9 != 0)
    (*(*rcx_9 + 0x28))(rcx_9)
    sub_141e895d0(var_48)
    int64_t* rcx_11 = var_48
    
    if (rcx_11 != 0)
        (**rcx_11)(rcx_11, 1)
    
    var_48 = nullptr

int64_t var_38

if (var_38 != 0)
    sub_140a74f90(var_38)

int64_t rbx_3 = sx.q(arg_8)
void* r14_1

if (*(arg1 + 0xa8) == *(arg1 + 0xd4))
labelid_1c:
    r14_1 = nullptr
else
    void* rcx_13 = *(arg1 + 0xe0)
    void* r8_5 = arg1 + 0xd8
    
    if (rcx_13 != 0)
        r8_5 = rcx_13
    
    int32_t rax_16 = *(r8_5 + (((sx.q(*(arg1 + 0xe8)) - 1) & rbx_3) << 2))
    
    if (rax_16 == 0xffffffff)
    label_141e78776:
        r14_1 = nullptr
    else
        int32_t* rdx_13
        
        while (true)
            rdx_13 = (sx.q(rax_16) << 6) + *(arg1 + 0xa0)
            
            if (*rdx_13 == rbx_3.d)
                break
            
            rax_16 = rdx_13[0xe]
            
            if (rax_16 == 0xffffffff)
                goto label_141e78776_2
        
        if (rax_16 == 0xffffffff)
        label_141e78776_1:
            r14_1 = nullptr
        else
            r14_1 = &rdx_13[2]
            
            if (rdx_13 == 0)
            label_141e78776_2:
                r14_1 = nullptr

if (*r14_1 != 0)
    void* rcx_15 = data_143f5b298
    void* const rax_17
    
    if (rcx_15 == 0)
        rax_17 = nullptr
    else
        rax_17 = sub_1423dcff0(rcx_15)
    
    sub_141e7f240(rax_17, rbx_3.d)
    int64_t rdi_1 = *r14_1
    sub_1405f1d00(&data_143a2d488, arg_8)
    void* rcx_17 = data_143f5b298
    *arg2 = 0
    arg2[1] = 0
    arg2[2].d = 0xffffffff
    
    if (rcx_17 != 0)
        int64_t rax_18 = sub_1423dcff0(rcx_17)
        rcx_17 = data_143f5b298
        
        if (rax_18 != 0)
            if (rcx_17 == 0)
                rax_18.b = 0
            else if (sub_1423dcff0(rcx_17) == 0 || arg2[1] == 0)
                rcx_17 = data_143f5b298
                rax_18.b = 0
            else
                rcx_17 = data_143f5b298
                rax_18.b = 1
            
            if (rax_18.b != 0)
                if (rcx_17 != 0)
                    rbp = sub_1423dcff0(rcx_17)
                
                sub_141e797e0(rbp, zx.q(arg2[2].d), *arg2)
                rcx_17 = data_143f5b298
    
    arg2[1] = rdi_1
    arg2[2].d = rbx_3.d
    
    if (rcx_17 != 0)
        sub_1423dcff0(rcx_17)
else
    sub_141e83e30(arg1 + 0xa0, rbx_3.d)
    *arg2 = 0
    arg2[1] = 0
    arg2[2].d = 0xffffffff

return arg2
