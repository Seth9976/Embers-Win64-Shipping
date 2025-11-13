// 函数: sub_140b1b080
// 地址: 0x140b1b080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_140b17d90()

if (*(rax + 0x101) != 0)
    return rax + 0xc8

int64_t var_38 = 0
int64_t var_30 = 0
sub_1405947f0(&var_38, 0x10)
int32_t rsi = var_30:4.d
int32_t rdi = var_30.d + 0x10
var_30.d = rdi

if (rdi s> rsi)
    sub_140594770(&var_38)
    rsi = var_30:4.d
    rdi = var_30.d

int64_t r12 = var_38
UnDecorator::getReferenceType(r12, u"NotForLicensees", 0x20)
int64_t r14 = sx.q(*(rax + 0xd0))
int32_t rax_1 = (r14 + 1).d
*(rax + 0xd0) = rax_1

if (rax_1 s> *(rax + 0xd4))
    sub_1405a4f90(rax + 0xc8)

var_38 = 0
int64_t* rax_4 = (r14 << 4) + *(rax + 0xc8)
int64_t var_30_1 = 0
*rax_4 = r12
rax_4[1].d = rdi
*(rax_4 + 0xc) = rsi
sub_1405947f0(&var_38, 9)
int32_t r14_1 = var_30_1:4.d
int32_t rsi_1 = var_30_1.d + 9
var_30_1.d = rsi_1

if (rsi_1 s> r14_1)
    sub_140594770(&var_38)
    r14_1 = var_30_1:4.d
    rsi_1 = var_30_1.d

int64_t r12_1 = var_38
UnDecorator::getReferenceType(r12_1, u"NoRedist", 0x12)
int64_t rdi_1 = sx.q(*(rax + 0xd0))
int32_t rax_5 = (rdi_1 + 1).d
*(rax + 0xd0) = rax_5

if (rax_5 s> *(rax + 0xd4))
    sub_1405a4f90(rax + 0xc8)

var_38 = 0
int64_t* rax_8 = (rdi_1 << 4) + *(rax + 0xc8)
int64_t var_30_2 = 0
*rax_8 = r12_1
rax_8[1].d = rsi_1
*(rax_8 + 0xc) = r14_1
sub_1405947f0(&var_38, 0x10)
int32_t r14_2 = var_30_2:4.d
int32_t rsi_2 = var_30_2.d + 0x10
var_30_2.d = rsi_2

if (rsi_2 s> r14_2)
    sub_140594770(&var_38)
    r14_2 = var_30_2:4.d
    rsi_2 = var_30_2.d

int64_t r12_2 = var_38
UnDecorator::getReferenceType(r12_2, u"CarefullyRedist", 0x20)
int64_t rdi_2 = sx.q(*(rax + 0xd0))
int32_t rax_9 = (rdi_2 + 1).d
*(rax + 0xd0) = rax_9

if (rax_9 s> *(rax + 0xd4))
    sub_1405a4f90(rax + 0xc8)

var_38 = 0
int64_t* rax_12 = (rdi_2 << 4) + *(rax + 0xc8)
int64_t var_30_3 = 0
*rax_12 = r12_2
rax_12[1].d = rsi_2
*(rax_12 + 0xc) = r14_2
sub_1405947f0(&var_38, 0xd)
int32_t r14_3 = var_30_3:4.d
int32_t rsi_3 = var_30_3.d + 0xd
var_30_3.d = rsi_3

if (rsi_3 s> r14_3)
    sub_140594770(&var_38)
    r14_3 = var_30_3:4.d
    rsi_3 = var_30_3.d

int64_t r12_3 = var_38
UnDecorator::getReferenceType(r12_3, u"EpicInternal", 0x1a)
int64_t rdi_3 = sx.q(*(rax + 0xd0))
int32_t rax_13 = (rdi_3 + 1).d
*(rax + 0xd0) = rax_13

if (rax_13 s> *(rax + 0xd4))
    sub_1405a4f90(rax + 0xc8)

int64_t* rax_16 = (rdi_3 << 4) + *(rax + 0xc8)
*rax_16 = r12_3
rax_16[1].d = rsi_3
*(rax_16 + 0xc) = r14_3
sub_140b18ba0()
int64_t* i = data_143de68a0

for (void* r14_6 = &i[sx.q(data_143de68a8) * 2]; i != r14_6; i = &i[2])
    int64_t rdi_4 = sx.q(*(rax + 0xd0))
    int32_t rax_17 = (rdi_4 + 1).d
    *(rax + 0xd0) = rax_17
    
    if (rax_17 s> *(rax + 0xd4))
        sub_1405a4f90(rax + 0xc8)
    
    sub_140596d10((rdi_4 << 4) + *(rax + 0xc8), i)

*(rax + 0x101) = 1
return rax + 0xc8
