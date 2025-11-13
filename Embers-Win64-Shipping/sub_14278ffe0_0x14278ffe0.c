// 函数: sub_14278ffe0
// 地址: 0x14278ffe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
void* rax = *(arg1 + 0x38)
int64_t var_88
int64_t var_78
int64_t* rdx_1
int32_t r14

if (rax == 0)
    var_88 = 0
    int32_t var_80_1 = 0
    sub_1405947f0(&var_88, 5)
    int32_t rax_2 = var_80_1 + 5
    var_80_1 = rax_2
    
    if (rax_2 s> 0)
        sub_140594770(&var_88)
    
    UnDecorator::getReferenceType(var_88, u"None", 0xa)
    rdx_1 = &var_88
    r14 = 2
else
    arg_8.q = *(rax + 0x18)
    sub_140b63b70(&arg_8, &var_78)
    rdx_1 = &var_78
    r14 = 1

int64_t var_68 = data_143f88140
int64_t var_60
sub_140596d10(&var_60, rdx_1)
int64_t rbx = sx.q(arg2[1].d)
int32_t rax_4 = (rbx + 1).d
arg2[1].d = rax_4

if (rax_4 s> *(arg2 + 0xc))
    sub_1405c4e40(arg2)

int64_t* rcx_8 = (rbx << 5) + *arg2
*rcx_8 = var_68
rcx_8[1] = var_60
int32_t var_58
rcx_8[2].d = var_58
int32_t var_54
*(rcx_8 + 0x14) = var_54
rcx_8[3] = 1

if ((r14.b & 2) != 0)
    int64_t rcx_9 = var_88
    r14 &= 0xfffffffd
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)

if ((r14.b & 1) != 0)
    int64_t rcx_10 = var_78
    r14 &= 0xfffffffe
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)

void* rax_9 = *(arg1 + 0x38)
int32_t rbx_1 = 0x10
int64_t* rdx_5
int32_t rsi

if (rax_9 == 0)
    var_88 = 0
    int32_t var_80_2 = 0
    sub_1405947f0(&var_88, 8)
    int32_t rax_10 = var_80_2 + 8
    var_80_2 = rax_10
    
    if (rax_10 s> 0)
        sub_140594770(&var_88)
    
    UnDecorator::getReferenceType(var_88, u"INVALID", 0x10)
    rdx_5 = &var_88
    rsi = 8
else
    var_68.o = *(rax_9 + 0x98)
    sub_140b291e0(&var_68, &var_78, 0)
    rdx_5 = &var_78
    rsi = 4

int64_t rax_11 = data_143f88148
int32_t rsi_1 = rsi | r14
int64_t var_40
sub_140596d10(&var_40, rdx_5)
int64_t r14_1 = sx.q(arg2[1].d)
int32_t rax_12 = (r14_1 + 1).d
arg2[1].d = rax_12

if (rax_12 s> *(arg2 + 0xc))
    sub_1405c4e40(arg2)

int64_t* rcx_19 = (r14_1 << 5) + *arg2
*rcx_19 = rax_11
rcx_19[1] = var_40
int32_t var_38
rcx_19[2].d = var_38
int32_t result_1
*(rcx_19 + 0x14) = result_1
rcx_19[3] = 0

if ((rsi_1.b & 8) != 0)
    int64_t rcx_20 = var_88
    rsi_1 &= 0xfffffff7
    
    if (rcx_20 != 0)
        sub_140a74f90(rcx_20)

if ((rsi_1.b & 4) != 0)
    int64_t rcx_21 = var_78
    rsi_1 &= 0xfffffffb
    
    if (rcx_21 != 0)
        sub_140a74f90(rcx_21)

int64_t* rdx_9

if (*(arg1 + 0x38) == 0)
    var_88 = 0
    int32_t var_80_3 = 0
    sub_1405947f0(&var_88, 8)
    int32_t rax_17 = var_80_3 + 8
    var_80_3 = rax_17
    
    if (rax_17 s> 0)
        sub_140594770(&var_88)
    
    UnDecorator::getReferenceType(var_88, u"INVALID", 0x10)
    rdx_9 = &var_88
    rbx_1 = 0x20
else
    sub_140b291e0(arg1 + 0x40, &var_78, 0)
    rdx_9 = &var_78

int64_t rax_18 = data_143f88150
int32_t rbx_2 = rbx_1 | rsi_1
sub_140596d10(&var_40, rdx_9)
int64_t rsi_2 = sx.q(arg2[1].d)
int32_t rax_19 = (rsi_2 + 1).d
arg2[1].d = rax_19

if (rax_19 s> *(arg2 + 0xc))
    sub_1405c4e40(arg2)

int64_t* rcx_30 = (rsi_2 << 5) + *arg2
*rcx_30 = rax_18
rcx_30[1] = var_40
rcx_30[2].d = var_38
int32_t result = result_1
*(rcx_30 + 0x14) = result
rcx_30[3] = 0

if ((rbx_2.b & 0x20) != 0)
    int64_t rcx_31 = var_88
    rbx_2 &= 0xffffffdf
    
    if (rcx_31 != 0)
        result = sub_140a74f90(rcx_31)

if ((rbx_2.b & 0x10) != 0)
    int64_t rcx_32 = var_78
    
    if (rcx_32 != 0)
        return sub_140a74f90(rcx_32)

return result
