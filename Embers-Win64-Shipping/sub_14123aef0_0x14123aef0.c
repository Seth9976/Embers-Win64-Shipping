// 函数: sub_14123aef0
// 地址: 0x14123aef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0xe0))
int32_t r9 = 0
int64_t r15 = *(arg2 + 0x1b0)

if (rdi s> 0)
    int64_t rdx = 0
    
    while (true)
        void* rcx_1 = *(arg1 + 0xd8)
        
        if ((*(arg1 + 0xd8) & 1) != 0)
            rcx_1 = (rcx_1 s>> 1) + arg1 + 0xd8
        
        if (*(rcx_1 + (rdx << 3)) == data_143e824d0)
            break
        
        r9 += 1
        rdx += 1
        
        if (rdx s>= rdi)
            goto label_14123af8e

void* rdx_1

if (rdi s<= 0 || r9 == 0xffffffff)
label_14123af8e:
    TEB* gsbase
    
    if (data_143ce8564
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143ce8564)
        
        if (data_143ce8564 == 0xffffffff)
            data_143ce8560 = 0xffff
            _Init_thread_footer(&data_143ce8564)
    
    rdx_1 = &data_143ce8560
else
    void* rcx_10 = *(arg1 + 0xe8)
    
    if ((rcx_10.b & 1) != 0)
        rcx_10 = (rcx_10 s>> 1) + arg1 + 0xe8
    
    rdx_1 = rcx_10 + (sx.q(r9) << 1)

int16_t rax_3 = *rdx_1

if (rax_3 != 0xffff)
    int64_t rsi_1 = *arg3
    void*** rcx_6 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_4 = &rcx_6[5]
    
    if (rax_4 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_6 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_4 = &rcx_6[5]
    
    *(arg2 + 0x30) = rax_4
    void**** rax_5 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_5 = rcx_6
    *(arg2 + 8) = &rcx_6[1]
    rcx_6[1] = 0
    *rcx_6 = &data_142da77a8
    rcx_6[2] = r15
    rcx_6[3].d = zx.d(rax_3)
    rcx_6[4] = rsi_1

int64_t result_2 = 0
int64_t var_78 = 7
int32_t r9_1 = 0
int64_t result = 0
int64_t result_1 = 0
int32_t arg_10 = 0
int32_t r14_2 = 0
int32_t var_5c = 0
uint64_t r15_1 = 0
int64_t var_88 = 0
int64_t var_58 = 0
void* rdi_1 = arg1 + 0x11a
int32_t arg_20 = 0
void* r13_1 = &arg3[1]
int32_t var_4c = 0
void* rdx_4

while (true)
    if (*rdi_1 u> 0)
        uint32_t rax_9 = zx.d(*(rdi_1 - 2))
        int64_t r12_1 = *r13_1
        void*** rcx_14 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_10 = &rcx_14[5]
        
        if (rax_10 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            r9_1 = arg_10
            rcx_14 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_10 = &rcx_14[5]
        
        *(arg2 + 0x30) = rax_10
        void**** rax_11 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_11 = rcx_14
        *(arg2 + 8) = &rcx_14[1]
        rcx_14[1] = 0
        *rcx_14 = &data_142da77b8
        rcx_14[2] = r15
        rcx_14[3].d = rax_9
        rcx_14[4] = r12_1
        result_2 = result
    
    if (*(rdi_1 + 0x1c) u> 0)
        uint32_t r12_2 = zx.d(*(rdi_1 + 0x1a))
        int64_t rsi_2 = sx.q(r14_2)
        r14_2 = (rsi_2 + 1).d
        
        if (r14_2 s> r9_1)
            sub_1405a4cf0(&result_1)
            result_2 = result_1
            result = result_2
            arg_10 = var_5c
        
        *(result_2 + (rsi_2 << 2)) = r12_2
        int64_t rsi_3 = sx.q(r15_1.d)
        r15_1 = zx.q((rsi_3 + 1).d)
        int32_t var_50_1 = r15_1.d
        int64_t r8_1
        
        if (r15_1.d s<= arg_20)
            r8_1 = var_88
        else
            sub_1405a4d70(&var_58)
            r8_1 = var_58
            r15_1 = zx.q(var_50_1)
            var_88 = r8_1
            arg_20 = var_4c
        
        *(r8_1 + (rsi_3 << 3)) = *(r13_1 + 0x38)
    
    int64_t rax_18 = *r13_1
    int64_t* r12_3 = data_14395f4d0
    
    if (*rdi_1 u> 0)
        uint32_t rax_19 = zx.d(*(rdi_1 - 2))
        void*** rcx_22 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_20 = &rcx_22[5]
        
        if (rax_20 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_22 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_20 = &rcx_22[5]
        
        *(arg2 + 0x30) = rax_20
        int64_t* rax_21 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_21 = rcx_22
        *(arg2 + 8) = &rcx_22[1]
        rcx_22[1] = 0
        *rcx_22 = &data_142da77b8
        rcx_22[2] = r15
        rcx_22[3].d = rax_19
        rcx_22[4] = rax_18
    
    rdx_4 = arg1
    
    if (*(rdx_4 + 0x152) u> 0)
        uint32_t rax_26 = zx.d(*(rdx_4 + 0x150))
        
        if ((*(*r12_3 + 8))(r12_3) == 0)
            void*** rcx_29 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_29 = &rcx_29[5]
            
            if (rax_29 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_29 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_29 = &rcx_29[5]
            
            *(arg2 + 0x30) = rax_29
            void**** rax_30 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_30 = rcx_29
            *(arg2 + 8) = &rcx_29[1]
            rcx_29[1] = 0
            *rcx_29 = &data_142da77c8
            rcx_29[2] = r15
            rcx_29[3].d = rax_26
            rcx_29[4] = r12_3
        
        rdx_4 = arg1
    
    result_2 = result
    rdi_1 += 4
    r13_1 += 8
    int64_t temp0_1 = var_78
    var_78 -= 1
    
    if (temp0_1 == 1)
        break
    
    r9_1 = arg_10

if (*(rdx_4 + 0x156) u> 0)
    uint32_t r12_4 = zx.d(*(rdx_4 + 0x154))
    void*** rcx_35 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    int64_t rsi_5 = arg3[0xf]
    void* rax_34 = &rcx_35[5]
    
    if (rax_34 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rdx_4 = arg1
        rcx_35 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_34 = &rcx_35[5]
    
    *(arg2 + 0x30) = rax_34
    void**** rax_35 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_35 = rcx_35
    *(arg2 + 8) = &rcx_35[1]
    rcx_35[1] = 0
    rcx_35[2] = r15
    *rcx_35 = &data_142d99560
    rcx_35[3].d = r12_4
    rcx_35[4] = rsi_5

int64_t* r8_2
int64_t r13_2

if (*(rdx_4 + 0x15a) u<= 0)
    r13_2 = var_88
    r8_2 = arg3
else
    uint32_t rsi_6 = zx.d(*(rdx_4 + 0x158))
    int64_t rdi_2 = sx.q(r14_2)
    r14_2 = (rdi_2 + 1).d
    
    if (r14_2 s> arg_10)
        sub_1405a4cf0(&result_1)
        arg_10 = var_5c
        result = result_1
    
    *(result + (rdi_2 << 2)) = rsi_6
    int64_t rdi_3 = sx.q(r15_1.d)
    r15_1 = zx.q((rdi_3 + 1).d)
    int32_t var_50_2 = r15_1.d
    
    if (r15_1.d s<= arg_20)
        r13_2 = var_88
    else
        sub_1405a4d70(&var_58)
        r13_2 = var_58
        r15_1 = zx.q(var_50_2)
        arg_20 = var_4c
        var_88 = r13_2
    
    r8_2 = arg3
    rdx_4 = arg1
    *(r13_2 + (rdi_3 << 3)) = r8_2[0x10]

if (*(rdx_4 + 0x15e) u> 0)
    int64_t rsi_7 = r8_2[0x11]
    uint32_t r12_5 = zx.d(*(rdx_4 + 0x15c))
    void*** rcx_44 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_42 = &rcx_44[5]
    
    if (rax_42 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rdx_4 = arg1
        r8_2 = arg3
        rcx_44 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_42 = &rcx_44[5]
    
    *(arg2 + 0x30) = rax_42
    void**** rax_43 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_43 = rcx_44
    *(arg2 + 8) = &rcx_44[1]
    rcx_44[1] = 0
    *rcx_44 = &data_142d99560
    rcx_44[2] = r15
    rcx_44[3].d = r12_5
    rcx_44[4] = rsi_7

if (*(rdx_4 + 0x162) u> 0)
    uint32_t rsi_8 = zx.d(*(rdx_4 + 0x160))
    int64_t rdi_4 = sx.q(r14_2)
    r14_2 = (rdi_4 + 1).d
    
    if (r14_2 s> arg_10)
        sub_1405a4cf0(&result_1)
        arg_10 = var_5c
        result = result_1
    
    *(result + (rdi_4 << 2)) = rsi_8
    int64_t rdi_5 = sx.q(r15_1.d)
    r15_1 = zx.q((rdi_5 + 1).d)
    int32_t var_50_3 = r15_1.d
    
    if (r15_1.d s> arg_20)
        sub_1405a4d70(&var_58)
        r13_2 = var_58
        r15_1 = zx.q(var_50_3)
        arg_20 = var_4c
        var_88 = r13_2
    
    r8_2 = arg3
    rdx_4 = arg1
    *(r13_2 + (rdi_5 << 3)) = r8_2[0x12]

void* r13_3 = &r8_2[0x13]
int64_t i_2 = 2
void* var_78_1 = r13_3
void* rdi_6 = rdx_4 + 0x166
void* rdx_12
int64_t i

do
    if (*rdi_6 u> 0)
        int64_t r12_6 = *r13_3
        uint32_t r13_4 = zx.d(*(rdi_6 - 2))
        void*** rcx_53 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_50 = &rcx_53[5]
        
        if (rax_50 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_53 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_50 = &rcx_53[5]
        
        *(arg2 + 0x30) = rax_50
        void**** rax_51 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_51 = rcx_53
        *(arg2 + 8) = &rcx_53[1]
        rcx_53[1] = 0
        *rcx_53 = &data_142da77b8
        rcx_53[3].d = r13_4
        r13_3 = var_78_1
        rcx_53[2] = r15
        rcx_53[4] = r12_6
    
    if (*(rdi_6 + 8) u> 0)
        uint32_t r12_7 = zx.d(*(rdi_6 + 6))
        int64_t rsi_9 = sx.q(r14_2)
        r14_2 = (rsi_9 + 1).d
        
        if (r14_2 s> arg_10)
            sub_1405a4cf0(&result_1)
            arg_10 = var_5c
            result = result_1
        
        *(result + (rsi_9 << 2)) = r12_7
        int64_t rsi_10 = sx.q(r15_1.d)
        r15_1 = zx.q((rsi_10 + 1).d)
        int32_t var_50_4 = r15_1.d
        
        if (r15_1.d s> arg_20)
            sub_1405a4d70(&var_58)
            r15_1 = zx.q(var_50_4)
            arg_20 = var_4c
            var_88 = var_58
        
        *(var_88 + (rsi_10 << 3)) = *(r13_3 + 0x18)
    
    int64_t* r12_8 = data_14395f4d0
    int64_t r13_5 = *r13_3
    
    if (*rdi_6 u> 0)
        uint32_t rax_59 = zx.d(*(rdi_6 - 2))
        void*** rcx_62 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_60 = &rcx_62[5]
        
        if (rax_60 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_62 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_60 = &rcx_62[5]
        
        *(arg2 + 0x30) = rax_60
        void**** rax_61 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_61 = rcx_62
        *(arg2 + 8) = &rcx_62[1]
        rcx_62[1] = 0
        *rcx_62 = &data_142da77b8
        rcx_62[2] = r15
        rcx_62[3].d = rax_59
        rcx_62[4] = r13_5
    
    rdx_12 = arg1
    
    if (*(rdx_12 + 0x152) u> 0)
        uint32_t r13_6 = zx.d(*(rdx_12 + 0x150))
        
        if ((*(*r12_8 + 8))(r12_8, rdx_12) == 0)
            void*** rcx_69 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_67 = &rcx_69[5]
            
            if (rax_67 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_69 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_67 = &rcx_69[5]
            
            *(arg2 + 0x30) = rax_67
            void**** rax_68 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_68 = rcx_69
            *(arg2 + 8) = &rcx_69[1]
            rcx_69[1] = 0
            *rcx_69 = &data_142da77c8
            rcx_69[2] = r15
            rcx_69[3].d = r13_6
            rcx_69[4] = r12_8
        
        rdx_12 = arg1
    
    rdi_6 += 4
    r13_3 = var_78_1 + 8
    i = i_2
    i_2 -= 1
    var_78_1 = r13_3
while (i != 1)
int64_t* r8_3
int64_t result_3
int64_t r13_8

if (*(rdx_12 + 0x17a) u<= 0)
    r13_8 = var_88
    result_3 = result
    r8_3 = arg3
else
    uint32_t rsi_11 = zx.d(*(rdx_12 + 0x178))
    int64_t rdi_7 = sx.q(r14_2)
    r14_2 = (rdi_7 + 1).d
    
    if (r14_2 s<= arg_10)
        result_3 = result
    else
        sub_1405a4cf0(&result_1)
        result_3 = result_1
        arg_10 = var_5c
        result = result_3
    
    *(result_3 + (rdi_7 << 2)) = rsi_11
    int64_t rdi_8 = sx.q(r15_1.d)
    r15_1 = zx.q((rdi_8 + 1).d)
    int32_t var_50_5 = r15_1.d
    
    if (r15_1.d s<= arg_20)
        r13_8 = var_88
    else
        sub_1405a4d70(&var_58)
        r13_8 = var_58
        r15_1 = zx.q(var_50_5)
        arg_20 = var_4c
        var_88 = r13_8
    
    r8_3 = arg3
    rdx_12 = arg1
    *(r13_8 + (rdi_8 << 3)) = r8_3[0x1c]

if (*(rdx_12 + 0x182) u> 0)
    uint32_t rsi_12 = zx.d(*(rdx_12 + 0x180))
    int64_t rdi_9 = sx.q(r14_2)
    r14_2 = (rdi_9 + 1).d
    
    if (r14_2 s> arg_10)
        sub_1405a4cf0(&result_1)
        result_3 = result_1
        arg_10 = var_5c
        result = result_3
    
    *(result_3 + (rdi_9 << 2)) = rsi_12
    int64_t rdi_10 = sx.q(r15_1.d)
    r15_1 = zx.q((rdi_10 + 1).d)
    int32_t var_50_6 = r15_1.d
    
    if (r15_1.d s> arg_20)
        sub_1405a4d70(&var_58)
        r13_8 = var_58
        r15_1 = zx.q(var_50_6)
        arg_20 = var_4c
        var_88 = r13_8
    
    r8_3 = arg3
    rdx_12 = arg1
    *(r13_8 + (rdi_10 << 3)) = r8_3[0x1a]

if (*(rdx_12 + 0x176) u> 0)
    int64_t rsi_13 = r8_3[0x1b]
    uint32_t r12_9 = zx.d(*(rdx_12 + 0x174))
    void*** rcx_79 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_77 = &rcx_79[5]
    
    if (rax_77 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rdx_12 = arg1
        r8_3 = arg3
        rcx_79 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_77 = &rcx_79[5]
    
    *(arg2 + 0x30) = rax_77
    void**** rax_78 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_78 = rcx_79
    *(arg2 + 8) = &rcx_79[1]
    rcx_79[1] = 0
    *rcx_79 = &data_142d99560
    rcx_79[2] = r15
    rcx_79[3].d = r12_9
    rcx_79[4] = rsi_13

if (*(rdx_12 + 0x17e) u> 0)
    int64_t rsi_14 = r8_3[0x19]
    uint32_t r12_10 = zx.d(*(rdx_12 + 0x17c))
    void*** rcx_85 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_81 = &rcx_85[5]
    
    if (rax_81 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rdx_12 = arg1
        r8_3 = arg3
        rcx_85 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_81 = &rcx_85[5]
    
    *(arg2 + 0x30) = rax_81
    void**** rax_82 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_82 = rcx_85
    *(arg2 + 8) = &rcx_85[1]
    rcx_85[1] = 0
    *rcx_85 = &data_142d99560
    rcx_85[2] = r15
    rcx_85[3].d = r12_10
    rcx_85[4] = rsi_14

if (*(rdx_12 + 0x186) u> 0)
    uint32_t rsi_15 = zx.d(*(rdx_12 + 0x184))
    int64_t rdi_11 = sx.q(r14_2)
    r14_2 = (rdi_11 + 1).d
    
    if (r14_2 s> arg_10)
        sub_1405a4cf0(&result_1)
        result = result_1
    
    *(result + (rdi_11 << 2)) = rsi_15
    int64_t rdi_12 = sx.q(r15_1.d)
    r15_1 = zx.q((rdi_12 + 1).d)
    int32_t var_50_7 = r15_1.d
    
    if (r15_1.d s> arg_20)
        sub_1405a4d70(&var_58)
        r13_8 = var_58
        r15_1 = zx.q(var_50_7)
        var_88 = r13_8
    
    r8_3 = arg3
    rdx_12 = arg1
    *(r13_8 + (rdi_12 << 3)) = r8_3[0x1d]

if (*(rdx_12 + 0x18a) u> 0)
    int64_t rsi_16 = r8_3[0x1e]
    uint32_t r12_11 = zx.d(*(rdx_12 + 0x188))
    void*** rcx_94 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_87 = &rcx_94[5]
    
    if (rax_87 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_94 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_87 = &rcx_94[5]
    
    *(arg2 + 0x30) = rax_87
    void**** rax_88 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_88 = rcx_94
    *(arg2 + 8) = &rcx_94[1]
    rcx_94[1] = 0
    *rcx_94 = &data_142da77b8
    rcx_94[2] = r15
    rcx_94[3].d = r12_11
    rcx_94[4] = rsi_16

uint32_t rdx_19 = (r15_1 << 3).d
int64_t r12_12 = sx.q(rdx_19)
int64_t* rsi_19 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_91 = r12_12 + rsi_19

if (rax_91 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, rdx_19 + 8)
    rsi_19 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_91 = r12_12 + rsi_19

*(arg2 + 0x30) = rax_91
int64_t i_3 = sx.q(r15_1.d)

if (r15_1.d s> 0)
    int64_t* rcx_99 = rsi_19
    int64_t i_1
    
    do
        *rcx_99 = *(r13_8 - rsi_19 + rcx_99)
        rcx_99 = &rcx_99[1]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

void*** rcx_102 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_93 = &rcx_102[6]

if (rax_93 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x38)
    rcx_102 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_93 = &rcx_102[6]

*(arg2 + 0x30) = rax_93
void**** rax_94 = *(arg2 + 8)
int32_t r12_13 = 0
*(arg2 + 0x14) += 1
*rax_94 = rcx_102
*(arg2 + 8) = &rcx_102[1]
rcx_102[1] = 0
*rcx_102 = &data_142da7798
rcx_102[2].d = r15_1.d
rcx_102[3] = rsi_19
rcx_102[4] = 2
rcx_102[5] = 0

if (r14_2 s> 0)
    int32_t* rsi_22 = nullptr
    int64_t* r15_2 = nullptr
    
    do
        int64_t r13_9 = *(r15_2 + r13_8)
        void*** rcx_108 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* arg_8
        arg_8.d = *(rsi_22 + result)
        void* rax_98 = &rcx_108[5]
        
        if (rax_98 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_108 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_98 = &rcx_108[5]
        
        *(arg2 + 0x30) = rax_98
        r12_13 += 1
        int64_t* rax_99 = *(arg2 + 8)
        r15_2 = &r15_2[1]
        *(arg2 + 0x14) += 1
        rsi_22 = &rsi_22[1]
        *rax_99 = rcx_108
        *(arg2 + 8) = &rcx_108[1]
        rcx_108[1] = 0
        *rcx_108 = &data_142da77d8
        rcx_108[2] = r15
        rcx_108[4] = r13_9
        r13_8 = var_88
        rcx_108[3].d = arg_8.d
    while (r12_13 s< r14_2)

if (var_88 != 0)
    sub_140a74f90(var_88)

if (result == 0)
    return result

return sub_140a74f90(result)
