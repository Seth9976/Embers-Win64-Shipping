// 函数: sub_1421c0cd0
// 地址: 0x1421c0cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg1 + 0x11a) u<= 0
int64_t* r12 = data_14395fa10
int64_t r14 = *(arg3 + 0x18)
int64_t arg_8 = *(arg2 + 0x1a0)
int64_t* rax_1 = data_14395f4d0

if (not(cond:0))
    uint32_t rbp_1 = zx.d(*(arg1 + 0x118))
    void*** rcx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_2 = &rcx_2[5]
    
    if (rax_2 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_2 = &rcx_2[5]
    
    *(arg2 + 0x30) = rax_2
    int64_t* rax_3 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_3 = rcx_2
    *(arg2 + 8) = &rcx_2[1]
    rcx_2[1] = 0
    *rcx_2 = &data_142d5a070
    rcx_2[2] = arg_8
    rcx_2[3].d = rbp_1
    rcx_2[4] = r14

if (*(arg1 + 0x11e) u> 0)
    uint32_t rbp_2 = zx.d(*(arg1 + 0x11c))
    
    if ((*(*r12 + 8))(r12) == 0)
        void*** rcx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_8 = &rcx_9[5]
        
        if (rax_8 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_8 = &rcx_9[5]
        
        *(arg2 + 0x30) = rax_8
        void**** rax_9 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_9 = rcx_9
        *(arg2 + 8) = &rcx_9[1]
        rcx_9[1] = 0
        rcx_9[2] = arg_8
        *rcx_9 = &data_142d5a080
        rcx_9[3].d = rbp_2
        rcx_9[4] = r12

int64_t rbp_3 = *(arg3 + 0x28)
int64_t r15_1

if (*(arg1 + 0x122) u<= 0)
    r15_1 = arg_8
else
    uint32_t r14_1 = zx.d(*(arg1 + 0x120))
    void*** rcx_15 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_12 = &rcx_15[5]
    
    if (rax_12 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_15 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_12 = &rcx_15[5]
    
    *(arg2 + 0x30) = rax_12
    void**** rax_13 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    r15_1 = arg_8
    *rax_13 = rcx_15
    *(arg2 + 8) = &rcx_15[1]
    rcx_15[1] = 0
    rcx_15[3].d = r14_1
    *rcx_15 = &data_142d5a070
    rcx_15[2] = r15_1
    rcx_15[4] = rbp_3

if (*(arg1 + 0x126) u> 0)
    uint32_t rbp_4 = zx.d(*(arg1 + 0x124))
    
    if ((*(*r12 + 8))(r12) == 0)
        void*** rcx_22 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_17 = &rcx_22[5]
        
        if (rax_17 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_22 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_17 = &rcx_22[5]
        
        *(arg2 + 0x30) = rax_17
        void**** rax_18 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_18 = rcx_22
        *(arg2 + 8) = &rcx_22[1]
        rcx_22[1] = 0
        *rcx_22 = &data_142d5a080
        rcx_22[2] = r15_1
        rcx_22[3].d = rbp_4
        rcx_22[4] = r12

int64_t rbp_5 = *(arg4 + 0x18)

if (*(arg1 + 0x12a) u> 0)
    uint32_t r14_2 = zx.d(*(arg1 + 0x128))
    void*** rcx_28 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_20 = &rcx_28[5]
    
    if (rax_20 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_28 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_20 = &rcx_28[5]
    
    *(arg2 + 0x30) = rax_20
    void**** rax_21 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_21 = rcx_28
    *(arg2 + 8) = &rcx_28[1]
    rcx_28[1] = 0
    *rcx_28 = &data_142d5a070
    rcx_28[2] = r15_1
    rcx_28[3].d = r14_2
    rcx_28[4] = rbp_5

if (*(arg1 + 0x12e) u> 0)
    uint32_t rbp_6 = zx.d(*(arg1 + 0x12c))
    
    if ((*(*r12 + 8))(r12) == 0)
        void*** rcx_35 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_25 = &rcx_35[5]
        
        if (rax_25 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_35 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_25 = &rcx_35[5]
        
        *(arg2 + 0x30) = rax_25
        void**** rax_26 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_26 = rcx_35
        *(arg2 + 8) = &rcx_35[1]
        rcx_35[1] = 0
        *rcx_35 = &data_142d5a080
        rcx_35[2] = r15_1
        rcx_35[3].d = rbp_6
        rcx_35[4] = r12

int64_t rbp_7 = data_143a2ee58

if (*(arg1 + 0x13a) u> 0)
    uint32_t r14_3 = zx.d(*(arg1 + 0x138))
    void*** rcx_41 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_28 = &rcx_41[5]
    
    if (rax_28 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_41 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_28 = &rcx_41[5]
    
    *(arg2 + 0x30) = rax_28
    void**** rax_29 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_29 = rcx_41
    *(arg2 + 8) = &rcx_41[1]
    rcx_41[1] = 0
    *rcx_41 = &data_142d5a070
    rcx_41[2] = r15_1
    rcx_41[3].d = r14_3
    rcx_41[4] = rbp_7

if (*(arg1 + 0x13e) u> 0)
    uint32_t rbp_8 = zx.d(*(arg1 + 0x13c))
    
    if ((*(*rax_1 + 8))(rax_1) == 0)
        void*** rcx_48 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_33 = &rcx_48[5]
        
        if (rax_33 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_48 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_33 = &rcx_48[5]
        
        *(arg2 + 0x30) = rax_33
        void**** rax_34 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_34 = rcx_48
        *(arg2 + 8) = &rcx_48[1]
        rcx_48[1] = 0
        *rcx_48 = &data_142d5a080
        rcx_48[2] = r15_1
        rcx_48[3].d = rbp_8
        rcx_48[4] = rax_1

sub_141080ac0(arg1, arg2, r15_1, arg6)
int32_t r8_1 = 0
int64_t rsi = sx.q(*(arg1 + 0xe0))

if (rsi s> 0)
    int64_t rdx_1 = 0
    
    while (true)
        void* rcx_54 = *(arg1 + 0xd8)
        
        if ((*(arg1 + 0xd8) & 1) != 0)
            rcx_54 = (rcx_54 s>> 1) + arg1 + 0xd8
        
        if (*(rcx_54 + (rdx_1 << 3)) == *(arg7 + 0x20))
            break
        
        r8_1 += 1
        rdx_1 += 1
        
        if (rdx_1 s>= rsi)
            goto label_1421c11ae

void* r8_2

if (rsi s<= 0 || r8_1 == 0xffffffff)
label_1421c11ae:
    TEB* gsbase
    
    if (data_143ce8564
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143ce8564)
        
        if (data_143ce8564 == 0xffffffff)
            data_143ce8560 = 0xffff
            _Init_thread_footer(&data_143ce8564)
    
    r8_2 = &data_143ce8560
else
    void* rcx_72 = *(arg1 + 0xe8)
    
    if ((rcx_72.b & 1) != 0)
        rcx_72 = (rcx_72 s>> 1) + arg1 + 0xe8
    
    r8_2 = rcx_72 + (sx.q(r8_1) << 1)

sub_141083500(arg2, &arg_8, r8_2, arg8)
int64_t r14_5 = *(arg5 + 0x18)

if (*(arg1 + 0x132) u> 0)
    uint32_t rbp_9 = zx.d(*(arg1 + 0x130))
    void*** rcx_60 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_41 = &rcx_60[5]
    
    if (rax_41 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_60 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_41 = &rcx_60[5]
    
    *(arg2 + 0x30) = rax_41
    void**** rax_42 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_42 = rcx_60
    *(arg2 + 8) = &rcx_60[1]
    rcx_60[1] = 0
    *rcx_60 = &data_142d5a070
    rcx_60[2] = r15_1
    rcx_60[3].d = rbp_9
    rcx_60[4] = r14_5

if (*(arg1 + 0x136) u> 0)
    uint32_t rbp_10 = zx.d(*(arg1 + 0x134))
    
    if ((*(*r12 + 8))(r12) == 0)
        void*** rcx_67 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_46 = &rcx_67[5]
        
        if (rax_46 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_67 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_46 = &rcx_67[5]
        
        *(arg2 + 0x30) = rax_46
        void**** rax_47 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_47 = rcx_67
        *(arg2 + 8) = &rcx_67[1]
        rcx_67[1] = 0
        *rcx_67 = &data_142d5a080
        rcx_67[2] = r15_1
        rcx_67[3].d = rbp_10
        rcx_67[4] = r12

return sub_1405eb490(arg2, &arg_8, arg1 + 0x17e, &data_143a2ecf8, 0)
