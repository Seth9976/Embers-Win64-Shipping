// 函数: sub_14200df50
// 地址: 0x14200df50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_88 = 0
int32_t var_80 = 0
sub_1405947f0(&var_88, 0x10)
int32_t rsi = var_80 + 0x10

if (rsi s> 0)
    sub_140594770(&var_88)

int64_t r15 = var_88
sub_1405a7220(r15, 0x10, "WindowsNoEditor", 0x10, 0x3f)
int32_t rbx = arg2[1].d
int64_t r14 = *arg2
int64_t var_78 = 0
int64_t var_70 = 0
int64_t var_a8 = 0
int32_t var_a0 = rbx

if (rbx != 0)
    sub_1405a4c70(&var_a8, rbx, 0)
    memcpy(var_a8, r14, rbx * 2)
else
    int32_t var_9c_1 = 0

int64_t var_98

if (sub_140b21e10(&var_a8, &var_78) != 0)
    int64_t* rax_1 = sub_140b291e0(&var_78, &var_98, 2)
    
    if (&var_a8 != rax_1)
        int64_t rcx_7 = var_a8
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
        
        var_a8 = *rax_1
        *rax_1 = 0
        var_a0 = rax_1[1].d
        int32_t var_9c_2 = *(rax_1 + 0xc)
        rax_1[1] = 0
    
    int64_t rcx_9 = var_98
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)

int64_t* rax_4

if (arg2[8].b != 0)
    rax_4 = &data_143f3f050
else if (*(arg2 + 0x43) == 0)
    rax_4 = &data_143f3f080
    
    if (*(arg2 + 0x59) != 0)
        rax_4 = &data_143f3f060
else
    rax_4 = &data_143f3f070

int32_t rbx_2 = rax_4[1].d
int64_t r13 = 0
int64_t r14_1 = *rax_4
var_98 = 0

if (rbx_2 != 0)
    sub_1405a4c70(&var_98, rbx_2, 0)
    r13 = var_98
    memcpy(r13, r14_1, rbx_2 * 2)

bool cond:1 = arg2[2].d == 0
int64_t* r14_2 = &data_143f3f260
int64_t var_b8 = 0
int32_t var_b0 = 0
int64_t var_68 = 0

if (cond:1)
    r14_2 = &data_143f3f250

int32_t var_60 = 0
sub_1405947f0(&var_68, 8)
int32_t rax_5 = var_60 + 8
int32_t var_5c

if (rax_5 s> var_5c)
    sub_140594770(&var_68)

UnDecorator::getReferenceType(var_68, u"RunType", 0x10)
int64_t var_58
sub_140596d10(&var_58, r14_2)
int64_t r14_3 = sx.q(var_b0)
int32_t rax_6 = (r14_3 + 1).d

if (rax_6 s> 0)
    sub_1405c4f50(&var_b8)

int64_t rax_7 = var_68
int64_t* rcx_19 = r14_3 * 0x30 + var_b8
var_68 = 0
*rcx_19 = rax_7
rcx_19[1].d = rax_5
*(rcx_19 + 0xc) = var_5c
rcx_19[2] = var_58
int32_t var_50
rcx_19[3].d = var_50
int32_t var_4c
*(rcx_19 + 0x1c) = var_4c
rcx_19[4] = 0
rcx_19[5].b = 0
*(rcx_19 + 0x2c) = 0
int32_t var_60_1 = 0
sub_1405947f0(&var_68, 0xc)
int32_t rax_13 = var_60_1 + 0xc

if (rax_13 s> var_5c)
    sub_140594770(&var_68)

UnDecorator::getReferenceType(var_68, u"ProjectName", 0x18)
sub_140596d10(&var_58, &arg2[3])
int64_t r14_4 = sx.q(rax_6)
int32_t rax_14 = (r14_4 + 1).d

if (rax_14 s> 0)
    sub_1405c4f50(&var_b8)

int64_t rax_15 = var_68
int64_t* rcx_27 = r14_4 * 0x30 + var_b8
var_68 = 0
*rcx_27 = rax_15
rcx_27[1].d = rax_13
*(rcx_27 + 0xc) = var_5c
rcx_27[2] = var_58
rcx_27[3].d = var_50
*(rcx_27 + 0x1c) = var_4c
rcx_27[4] = 0
rcx_27[5].b = 0
*(rcx_27 + 0x2c) = 0
int32_t var_60_2 = 0
sub_1405947f0(&var_68, 9)
int32_t rax_21 = var_60_2 + 9

if (rax_21 s> var_5c)
    sub_140594770(&var_68)

int64_t r12 = var_68
UnDecorator::getReferenceType(r12, u"Platform", 0x12)
var_58 = 0
int64_t r14_5 = 0
int32_t arg_10

if (rsi != 0)
    sub_1405a4c70(&var_58, rsi, 0)
    r14_5 = var_58
    memcpy(r14_5, r15, rsi * 2)
    r12 = var_68
    arg_10 = var_4c
else
    arg_10 = 0

int64_t r15_1 = sx.q(rax_14)
int32_t rax_23 = (r15_1 + 1).d

if (rax_23 s> 0)
    sub_1405c4f50(&var_b8)

int64_t* rcx_36 = r15_1 * 0x30 + var_b8
*rcx_36 = r12
rcx_36[1].d = rax_21
*(rcx_36 + 0xc) = var_5c
rcx_36[2] = r14_5
rcx_36[3].d = rsi
*(rcx_36 + 0x1c) = arg_10
rcx_36[4] = 0
rcx_36[5].b = 0
*(rcx_36 + 0x2c) = 0
var_68 = 0
int32_t var_60_3 = 0
sub_1405947f0(&var_68, 0xa)
int32_t rax_27 = var_60_3 + 0xa

if (rax_27 s> var_5c)
    sub_140594770(&var_68)

int64_t r12_1 = var_68
UnDecorator::getReferenceType(r12_1, u"SessionId", 0x14)
int64_t r14_6 = var_a8
int64_t r15_2 = 0
var_58 = 0
int32_t rsi_1 = var_a0
int32_t var_50_2 = rsi_1

if (rsi_1 != 0)
    sub_1405a4c70(&var_58, rsi_1, 0)
    r15_2 = var_58
    memcpy(r15_2, r14_6, rsi_1 * 2)
    rsi_1 = var_50_2
    r12_1 = var_68
    arg_10 = var_4c
else
    arg_10 = 0

int64_t r14_7 = sx.q(rax_23)
int32_t rax_29 = (r14_7 + 1).d

if (rax_29 s> 0)
    sub_1405c4f50(&var_b8)

int64_t* rcx_45 = r14_7 * 0x30 + var_b8
var_68 = 0
*rcx_45 = r12_1
rcx_45[1].d = rax_27
*(rcx_45 + 0xc) = var_5c
rcx_45[2] = r15_2
rcx_45[3].d = rsi_1
*(rcx_45 + 0x1c) = arg_10
rcx_45[4] = 0
rcx_45[5].b = 0
*(rcx_45 + 0x2c) = 0
int32_t var_60_4 = 0
sub_1405947f0(&var_68, 0xe)
int32_t rax_33 = var_60_4 + 0xe

if (rax_33 s> var_5c)
    sub_140594770(&var_68)

UnDecorator::getReferenceType(var_68, u"EngineVersion", 0x1c)
sub_140596d10(&var_58, &arg2[5])
int64_t rsi_2 = sx.q(rax_29)
int32_t rax_34 = (rsi_2 + 1).d

if (rax_34 s> 0)
    sub_1405c4f50(&var_b8)

int64_t rax_35 = var_68
int64_t* rcx_53 = rsi_2 * 0x30 + var_b8
var_68 = 0
*rcx_53 = rax_35
rcx_53[1].d = rax_33
*(rcx_53 + 0xc) = var_5c
rcx_53[2] = var_58
rcx_53[3].d = var_50_2
*(rcx_53 + 0x1c) = var_4c
rcx_53[4] = 0
rcx_53[5].b = 0
*(rcx_53 + 0x2c) = 0
int32_t var_60_5 = 0
sub_1405947f0(&var_68, 0xd)
int32_t rax_41 = var_60_5 + 0xd

if (rax_41 s> var_5c)
    sub_140594770(&var_68)

int64_t r15_3 = var_68
UnDecorator::getReferenceType(r15_3, u"ShutdownType", 0x1a)
var_58 = 0
int64_t rsi_3 = 0
int32_t var_50_3 = rbx_2
int32_t r12_2

if (rbx_2 != 0)
    sub_1405a4c70(&var_58, rbx_2, 0)
    rsi_3 = var_58
    memcpy(rsi_3, r13, rbx_2 * 2)
    r12_2 = var_4c
    rbx_2 = var_50_3
    r15_3 = var_68
else
    r12_2 = 0

int64_t r14_8 = sx.q(rax_34)
int32_t rax_42 = (r14_8 + 1).d

if (rax_42 s> 0)
    sub_1405c4f50(&var_b8)

int64_t* rcx_62 = r14_8 * 0x30 + var_b8
*rcx_62 = r15_3
rcx_62[1].d = rax_41
*(rcx_62 + 0xc) = var_5c
rcx_62[2] = rsi_3
rcx_62[3].d = rbx_2
*(rcx_62 + 0x1c) = r12_2
rcx_62[4] = 0
rcx_62[5].b = 0
*(rcx_62 + 0x2c) = 0
int64_t* rax_45 = sub_140b28950(&arg2[7], &var_98)
var_68 = 0
int32_t var_60_6 = 0
sub_1405947f0(&var_68, 0xa)
int32_t r14_9 = var_5c
int32_t rsi_4 = var_60_6 + 0xa

if (rsi_4 s> r14_9)
    sub_140594770(&var_68)
    r14_9 = var_5c

int64_t r15_4 = var_68
UnDecorator::getReferenceType(r15_4, u"Timestamp", 0x14)
int64_t r12_3 = *rax_45
*rax_45 = 0
int32_t rax_46 = rax_45[1].d
int32_t rax_47 = *(rax_45 + 0xc)
rax_45[1] = 0
int64_t rbx_4 = sx.q(rax_42)
int32_t rax_48 = (rbx_4 + 1).d

if (rax_48 s> 0)
    sub_1405c4f50(&var_b8)

int64_t* rcx_70 = rbx_4 * 0x30 + var_b8
*rcx_70 = r15_4
*(rcx_70 + 0xc) = r14_9
rcx_70[1].d = rsi_4
rcx_70[2] = r12_3
rcx_70[3].d = rax_46
*(rcx_70 + 0x1c) = rax_47
rcx_70[4] = 0
rcx_70[5].b = 0
*(rcx_70 + 0x2c) = 0
int64_t rcx_71 = var_98

if (rcx_71 != 0)
    sub_140a74f90(rcx_71)

var_68 = 0
int32_t var_60_7 = 0
sub_1405947f0(&var_68, 0x14)
int32_t rax_51 = var_60_7 + 0x14

if (rax_51 s> var_5c)
    sub_140594770(&var_68)

UnDecorator::getReferenceType(var_68, u"CurrentUserActivity", 0x28)
sub_140596d10(&var_58, &arg2[9])
int64_t rbx_5 = sx.q(rax_48)
int32_t rax_52 = (rbx_5 + 1).d

if (rax_52 s> 0)
    sub_1405c4f50(&var_b8)

int64_t* rcx_79 = rbx_5 * 0x30 + var_b8
*rcx_79 = var_68
rcx_79[1].d = rax_51
*(rcx_79 + 0xc) = var_5c
rcx_79[2] = var_58
rcx_79[3].d = var_50_3
*(rcx_79 + 0x1c) = var_4c
rcx_79[4] = 0
rcx_79[5].b = 0
*(rcx_79 + 0x2c) = 0
char rsi_5 = arg2[0xb].b
sub_1417ea920(&var_68, u"IsVanilla")
int64_t rbx_6 = sx.q(rax_52)
var_58 = 0
var_50_3.q = 0
int32_t rax_59 = (rbx_6 + 1).d

if (rax_59 s> 0)
    sub_1405c4f50(&var_b8)

int64_t* rcx_84 = rbx_6 * 0x30 + var_b8
*rcx_84 = var_68
rcx_84[1].d = rax_51
*(rcx_84 + 0xc) = var_5c
__builtin_memset(&rcx_84[2], 0, 0x18)
rcx_84[5].b = rsi_5
*(rcx_84 + 0x2c) = 2
char rsi_6 = *(arg2 + 0x43)
sub_1417ea920(&var_68, u"WasDebugged")
int64_t rbx_7 = sx.q(rax_59)
var_58 = 0
var_50_3.q = 0
int32_t rax_63 = (rbx_7 + 1).d

if (rax_63 s> 0)
    sub_1405c4f50(&var_b8)

int64_t* rcx_89 = rbx_7 * 0x30 + var_b8
*rcx_89 = var_68
rcx_89[1].d = rax_51
*(rcx_89 + 0xc) = var_5c
__builtin_memset(&rcx_89[2], 0, 0x18)
rcx_89[5].b = rsi_6
*(rcx_89 + 0x2c) = 2
char rdi_1 = *(arg2 + 0x41)
sub_1417ea920(&var_68, u"GPUCrash")
int64_t rbx_8 = sx.q(rax_63)
int32_t rax_67 = (rbx_8 + 1).d
var_b0 = rax_67

if (rax_67 s> 0)
    sub_1405c4f50(&var_b8)

int64_t rax_68 = var_68
int64_t* rcx_94 = rbx_8 * 0x30 + var_b8
var_98 = 0
int32_t var_90
var_90.q = 0
*rcx_94 = rax_68
rcx_94[1].d = rax_51
*(rcx_94 + 0xc) = var_5c
__builtin_memset(&rcx_94[2], 0, 0x18)
rcx_94[5].b = rdi_1
*(rcx_94 + 0x2c) = 2
sub_1405947f0(&var_98, 0x18)
int32_t var_90_1 = var_90 + 0x18
int32_t var_8c

if (var_90 + 0x18 s> var_8c)
    sub_140594770(&var_98)

UnDecorator::getReferenceType(var_98, u"Engine.AbnormalShutdown", 0x30)
int64_t* rcx_98 = data_143f3efd8
(*(*rcx_98 + 0x58))(rcx_98, &var_98, &var_b8)
int64_t rcx_99 = var_98

if (rcx_99 != 0)
    sub_140a74f90(rcx_99)

int64_t result = sub_14180c130(&var_b8)

if (r13 != 0)
    result = sub_140a74f90(r13)

int64_t rcx_102 = var_a8

if (rcx_102 != 0)
    result = sub_140a74f90(rcx_102)

int64_t rcx_103 = var_88

if (rcx_103 == 0)
    return result

return sub_140a74f90(rcx_103)
