// 函数: sub_14108f6e0
// 地址: 0x14108f6e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_20 = arg4
int64_t arg_10 = arg2
void*** r12 = nullptr
void*** var_80 = nullptr
int32_t r15 = arg4
void*** r14 = nullptr
void*** rax = j_sub_140a82f30(0xc0)
void*** r13

if (rax == 0)
    r13 = nullptr
else
    r13 = sub_141346640(rax, *(arg3 + 0x10) + 0x5030)

int64_t* rbx = *(arg3 + 8)
int64_t rsi = sx.q(rbx[1].d)
int32_t rax_2 = (rsi + 1).d
rbx[1].d = rax_2

if (rax_2 s> *(rbx + 0xc))
    sub_1405a4d70(rbx)

*(*rbx + (rsi << 3)) = r13
int32_t rsi_1
int32_t r13_1

if (*(*(arg3 + 0x10) + 0x1548) s< 3 || *(data_143e2de08 + 4) s< 1)
    rsi_1 = 0
    r13_1 = 0
else
    r13_1 = 1
    rsi_1 = 0

void*** (* var_70)()
char arg_18

if (r15 u>= 2)
    var_70 = j_sub_140597fc0
    char* var_68_1 = &arg_18
    arg_18 = 0
    void*** rax_7 = sub_14081d830(0xc8, sub_140a756e0(&var_70, &data_143958018) + 0x10, 1, 0)
    
    if (rax_7 == 0)
        r12 = nullptr
    else
        memset(rax_7, 0, 0xc8)
        r12 = sub_14108bd00(rax_7)
    
    int64_t* rbx_2 = *(arg3 + 8)
    int64_t rsi_2 = sx.q(rbx_2[1].d)
    int32_t rax_9 = (rsi_2 + 1).d
    rbx_2[1].d = rax_9
    
    if (rax_9 s> *(rbx_2 + 0xc))
        sub_1405a4d70(rbx_2)
    
    *(*rbx_2 + (rsi_2 << 3)) = r12
    rsi_1 = 0
    var_70 = *(arg3 + 0x20)
    var_68_1.d = 0
    (*r12)[3](r12, 0, &var_70)

if (r15 u>= 3)
    var_70 = j_sub_140597fc0
    char* var_68_2 = &arg_18
    arg_18 = 0
    void*** rax_14 = sub_14081d830(0xc8, sub_140a756e0(&var_70, &data_143958018) + 0x10, 1, 0)
    void*** r15_1
    
    if (rax_14 == 0)
        r15_1 = nullptr
    else
        memset(rax_14, 0, 0xc8)
        r15_1 = sub_14108bd00(rax_14)
    
    int64_t* rbx_4 = *(arg3 + 8)
    int64_t rsi_3 = sx.q(rbx_4[1].d)
    int32_t rax_16 = (rsi_3 + 1).d
    rbx_4[1].d = rax_16
    
    if (rax_16 s> *(rbx_4 + 0xc))
        sub_1405a4d70(rbx_4)
    
    int64_t rax_17 = *rbx_4
    var_70 = r12
    var_68_2.d = 0
    *(rax_17 + (rsi_3 << 3)) = r15_1
    (*r15_1)[3](r15_1, 1, &var_70)
    arg_18 = 0
    char* var_68_3 = &arg_18
    var_70 = j_sub_140597fc0
    void*** rax_20 = sub_14081d830(0xf8, sub_140a756e0(&var_70, &data_143958018) + 0x10, 1, 0)
    
    if (rax_20 != 0)
        r14 = sub_14108bc20(rax_20, *(arg3 + 0x10), r13_1, 1, 0, 0)
    
    int64_t* rbx_5 = *(arg3 + 8)
    int64_t rsi_4 = sx.q(rbx_5[1].d)
    int32_t rax_22 = (rsi_4 + 1).d
    rbx_5[1].d = rax_22
    
    if (rax_22 s> *(rbx_5 + 0xc))
        sub_1405a4d70(rbx_5)
    
    int64_t rax_23 = *rbx_5
    var_70 = r15_1
    *(rax_23 + (rsi_4 << 3)) = r14
    rsi_1 = 0
    var_68_3.d = 0
    (*r14)[3](r14, 0, &var_70)
    void** rax_25 = *r14
    var_70 = r15_1
    var_68_3.d = 0
    rax_25[3](r14, 1, &var_70)
    var_70 = r13
    var_68_3.d = 0
    (*r14)[3](r14, 3, &var_70)
    r15 = arg_20

if (r15 u>= 2)
    arg_18 = 0
    char* var_68_4 = &arg_18
    var_70 = j_sub_140597fc0
    void*** rax_29 = sub_14081d830(0xf8, sub_140a756e0(&var_70, &data_143958018) + 0x10, 1, 0)
    void*** r15_2
    
    if (rax_29 == 0)
        r15_2 = nullptr
    else
        r15_2 = sub_14108bc20(rax_29, *(arg3 + 0x10), r13_1, 1, 0, 0)
    
    int64_t* rbx_6 = *(arg3 + 8)
    var_80 = r15_2
    int64_t rsi_5 = sx.q(rbx_6[1].d)
    int32_t rax_31 = (rsi_5 + 1).d
    rbx_6[1].d = rax_31
    
    if (rax_31 s> *(rbx_6 + 0xc))
        sub_1405a4d70(rbx_6)
    
    int64_t rax_32 = *rbx_6
    var_70 = r12
    *(rax_32 + (rsi_5 << 3)) = r15_2
    rsi_1 = 0
    var_68_4.d = 0
    (*r15_2)[3](r15_2, 0, &var_70)
    void** rax_34 = *r15_2
    var_70 = r12
    var_68_4.d = 0
    rax_34[3](r15_2, 1, &var_70)
    void** rax_35 = *r15_2
    var_70 = r14
    var_68_4.d = 0
    rax_35[3](r15_2, 2, &var_70)
    var_70 = r13
    var_68_4.d = 0
    (*r15_2)[3](r15_2, 3, &var_70)

void* rcx_26 = *(arg3 + 0x10)
var_70 = &data_143ec4c60
arg_18.q = 0

if (*(rcx_26 + 0x1548) s>= 3)
    int32_t rdx_13 = *(data_143e2de08 + 4)
    
    if (rdx_13 s>= 1)
        if (arg_20 == 1 && rdx_13 s>= 2)
            rsi_1 = 2
        
        if (arg_20 != 1 || rdx_13 s< 2 || data_143f0f1c5 == 0)
            rsi_1 = 1

int64_t* rbx_7 = &data_143ec4cd0
void*** var_60
void*** r15_3

if (data_143ec4cd0 != 0)
    arg_20.b = 0
    int32_t* var_58_1 = &arg_20
    var_60 = j_sub_140597fc0
    void*** rax_39 = sub_14081d830(0xc0, sub_140a756e0(&var_60, &data_143958018) + 0x10, 1, 0)
    
    if (rax_39 == 0)
        r15_3 = nullptr
    else
        r15_3 = sub_141346640(rax_39, &data_143ec4cd0)
    
    rbx_7 = *(arg3 + 8)
    arg_18.q = r15_3
    int64_t r14_1 = sx.q(rbx_7[1].d)
    int32_t rax_41 = (r14_1 + 1).d
    rbx_7[1].d = rax_41
    
    if (rax_41 s> *(rbx_7 + 0xc))
        sub_1405a4d70(rbx_7)
    
    *(*rbx_7 + (r14_1 << 3)) = r15_3

if (rsi_1 == 0 || *(*(arg3 + 0x10) + 0x1520) == 2 || *(data_143e2d7c8 + 4) == 0)
    r15_3.b = 0
else
    r15_3.b = 1

arg_20.b = 0
var_60 = j_sub_140597fc0
int32_t* var_58_2 = &arg_20
void*** rax_47 = sub_14081d830(0xf8, sub_140a756e0(&var_60, &data_143958018) + 0x10, 1, 0)
void*** r14_2

if (rax_47 == 0)
    r14_2 = nullptr
else
    r14_2 = sub_14108bc20(rax_47, *(arg3 + 0x10), rsi_1, 0, r15_3.b, 
        sbb.d(rbx_7.d, rbx_7.d, r15_3.b != 0) & 3)

int64_t* rbx_10 = *(arg3 + 8)
int64_t r13_2 = sx.q(rbx_10[1].d)
int32_t rax_49 = (r13_2 + 1).d
rbx_10[1].d = rax_49

if (rax_49 s> *(rbx_10 + 0xc))
    sub_1405a4d70(rbx_10)

*(*rbx_10 + (r13_2 << 3)) = r14_2
var_60 = arg_18.q
var_58_2.d = 0
(*r14_2)[3](r14_2, 0, &var_60)
void** rax_53 = *r14_2
var_60 = r12
var_58_2.d = 0
rax_53[3](r14_2, 1, &var_60)
var_60 = var_80
var_58_2.d = 0
(*r14_2)[3](r14_2, 2, &var_60)
var_60 = r13
var_58_2.d = 0
(*r14_2)[3](r14_2, 3, &var_60)
void*** rbx_11 = r14_2

if (r15_3.b != 0)
    arg_20.b = 0
    var_58_2 = &arg_20
    var_60 = j_sub_140597fc0
    void*** rax_59 = sub_14081d830(0xc0, sub_140a756e0(&var_60, &data_143958018) + 0x10, 1, 0)
    rbx_11 = rax_59
    
    if (rax_59 == 0)
        rbx_11 = nullptr
    else
        rax_59[1].d = 0
        rax_59[2] = 0
        rax_59[3].d = 0
        rax_59[4] = 1
        __builtin_memset(&rax_59[5], 0, 0x18)
        rax_59[8] = 1
        rax_59[9].w = 1
        *(rax_59 + 0x4c) = 0
        *(rax_59 + 0x54) = 0
        rax_59[0xb].w = 0
        rbx_11[0xc] = u"UnknownTexture"
        rbx_11[0xd].w = 1
        *(rbx_11 + 0x6a) = 0
        rbx_11[0xe] = 0
        rbx_11[0xf].d = 0
        __builtin_memset(&rbx_11[0x10], 0, 0x38)
        *rbx_11 = &data_142f12270
        rbx_11[0x17].d = rsi_1
        *(rbx_11 + 0xbc) = 1
    
    int64_t* rsi_6 = *(arg3 + 8)
    int64_t r15_4 = sx.q(rsi_6[1].d)
    int32_t rax_60 = (r15_4 + 1).d
    rsi_6[1].d = rax_60
    
    if (rax_60 s> *(rsi_6 + 0xc))
        sub_1405a4d70(rsi_6)
    
    int64_t rax_61 = *rsi_6
    var_80 = r14_2
    int32_t var_78_1 = 0
    *(rax_61 + (r15_4 << 3)) = rbx_11
    (*rbx_11)[3](rbx_11, 0, &var_80)

void** rax_63
void*** rcx_41

if (r12 == 0)
    rax_63 = *r14_2
    rcx_41 = r14_2
else
    rax_63 = *r12
    rcx_41 = r12

rax_63[4](rcx_41)
void*** (* rax_64)() = var_70
var_60 = rbx_11
var_58_2.d = 0
*(arg3 + 0x28) = var_60.o
*(rax_64 + 0x1d8) = 1
*arg1 = rbx_11
arg1[1].d = 0
return arg1
