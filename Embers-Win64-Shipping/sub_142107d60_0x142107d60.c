// 函数: sub_142107d60
// 地址: 0x142107d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
*arg1 = &data_1432caeb8
arg1[8] = 0
arg1[9] = 0
int64_t var_38 = 0
int64_t var_30 = 0
sub_1405947f0(&var_38, 7)
int32_t r15 = var_30:4.d
int32_t rdi = var_30.d + 7
var_30.d = rdi

if (rdi s> r15)
    sub_140594770(&var_38)
    r15 = var_30:4.d
    rdi = var_30.d

int64_t r12 = var_38
UnDecorator::getReferenceType(r12, u"Param1", 0xe)
int64_t rsi = sx.q(arg1[9].d)
int32_t rax = (rsi + 1).d
arg1[9].d = rax

if (rax s> *(arg1 + 0x4c))
    sub_1405a4f90(&arg1[8])

var_38 = 0
int64_t* rax_3 = &arg1[8][rsi * 2]
int64_t var_30_1 = 0
*rax_3 = r12
rax_3[1].d = rdi
*(rax_3 + 0xc) = r15
sub_1405947f0(&var_38, 7)
int32_t r15_1 = var_30_1:4.d
int32_t rsi_1 = var_30_1.d + 7
var_30_1.d = rsi_1

if (rsi_1 s> r15_1)
    sub_140594770(&var_38)
    r15_1 = var_30_1:4.d
    rsi_1 = var_30_1.d

int64_t r12_1 = var_38
UnDecorator::getReferenceType(r12_1, u"Param2", 0xe)
int64_t rdi_1 = sx.q(arg1[9].d)
int32_t rax_4 = (rdi_1 + 1).d
arg1[9].d = rax_4

if (rax_4 s> *(arg1 + 0x4c))
    sub_1405a4f90(&arg1[8])

var_38 = 0
int64_t* rax_7 = &arg1[8][rdi_1 * 2]
int64_t var_30_2 = 0
*rax_7 = r12_1
rax_7[1].d = rsi_1
*(rax_7 + 0xc) = r15_1
sub_1405947f0(&var_38, 7)
int32_t r15_2 = var_30_2:4.d
int32_t rsi_2 = var_30_2.d + 7
var_30_2.d = rsi_2

if (rsi_2 s> r15_2)
    sub_140594770(&var_38)
    r15_2 = var_30_2:4.d
    rsi_2 = var_30_2.d

int64_t r12_2 = var_38
UnDecorator::getReferenceType(r12_2, u"Param3", 0xe)
int64_t rdi_2 = sx.q(arg1[9].d)
int32_t rax_8 = (rdi_2 + 1).d
arg1[9].d = rax_8

if (rax_8 s> *(arg1 + 0x4c))
    sub_1405a4f90(&arg1[8])

var_38 = 0
int64_t* rax_11 = &arg1[8][rdi_2 * 2]
int64_t var_30_3 = 0
*rax_11 = r12_2
rax_11[1].d = rsi_2
*(rax_11 + 0xc) = r15_2
sub_1405947f0(&var_38, 7)
int32_t r15_3 = var_30_3:4.d
int32_t rsi_3 = var_30_3.d + 7
var_30_3.d = rsi_3

if (rsi_3 s> r15_3)
    sub_140594770(&var_38)
    r15_3 = var_30_3:4.d
    rsi_3 = var_30_3.d

int64_t r12_3 = var_38
UnDecorator::getReferenceType(r12_3, u"Param4", 0xe)
int64_t rdi_3 = sx.q(arg1[9].d)
int32_t rax_12 = (rdi_3 + 1).d
arg1[9].d = rax_12

if (rax_12 s> *(arg1 + 0x4c))
    sub_1405a4f90(&arg1[8])

int64_t* rax_15 = &arg1[8][rdi_3 * 2]
*rax_15 = r12_3
rax_15[1].d = rsi_3
*(rax_15 + 0xc) = r15_3
arg1[0xc].d = 0
*(arg1 + 0x50) = data_14399f5c0
return arg1
