// 函数: sub_1413c14b0
// 地址: 0x1413c14b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = arg2[1]
void* rax_2 = arg2[2]
arg1[2] = rax_2

if (rax_2 != 0)
    *(rax_2 + 8) += 1

void* rax_3 = arg2[3]
arg1[3] = rax_3

if (rax_3 != 0)
    *(rax_3 + 8) += 1

void* rax_4 = arg2[4]
arg1[4] = rax_4

if (rax_4 != 0)
    *(rax_4 + 8) += 1

void* rax_5 = arg2[5]
arg1[5] = rax_5

if (rax_5 != 0)
    *(rax_5 + 8) += 1

void* rax_6 = arg2[6]
arg1[6] = rax_6

if (rax_6 != 0)
    *(rax_6 + 8) += 1

arg1[7] = arg2[7]
arg1[8] = arg2[8]
arg1[9].d = arg2[9].d
*(arg1 + 0x50) = *(arg2 + 0x50)
*(arg1 + 0x60) = *(arg2 + 0x60)
*(arg1 + 0x70) = *(arg2 + 0x70)
*(arg1 + 0x80) = *(arg2 + 0x80)
*(arg1 + 0x90) = *(arg2 + 0x90)
*(arg1 + 0xa0) = *(arg2 + 0xa0)
*(arg1 + 0xb0) = *(arg2 + 0xb0)
*(arg1 + 0xc0) = *(arg2 + 0xc0)
*(arg1 + 0xd0) = *(arg2 + 0xd0)
*(arg1 + 0xe0) = *(arg2 + 0xe0)
*(arg1 + 0xf0) = *(arg2 + 0xf0)
arg1[0x20] = arg2[0x20]
arg1[0x21] = arg2[0x21]
arg1[0x22] = arg2[0x22]
arg1[0x23].d = arg2[0x23].d
arg1[0x24] = arg2[0x24]
*(arg1 + 0x128) = *(arg2 + 0x128)
*(arg1 + 0x138) = *(arg2 + 0x138)
*(arg1 + 0x148) = *(arg2 + 0x148)
arg1[0x2b].d = arg2[0x2b].d
*(arg1 + 0x15c) = *(arg2 + 0x15c)
arg1[0x2c].d = arg2[0x2c].d
void* rdx = &arg1[0x2f]
arg1[0x2d] = 0
arg1[0x2e] = 0
*(rdx + 0x10) = 0
*(rdx + 0x18) = 0
*(rdx + 0x1c) = 0x80
void* rax_17 = *(rdx + 0x10)

if (rax_17 != 0)
    rdx = rax_17

*rdx = 0
*(rdx + 8) = 0
arg1[0x33].d = 0xffffffff
*(arg1 + 0x19c) = 0
arg1[0x35] = 0
arg1[0x36].d = 0
sub_140780cc0(&arg1[0x2d], &arg2[0x2d])
sub_1413be040(&arg1[0x37], &arg2[0x37])
arg1[0x42] = arg2[0x42]
arg1[0x43].d = arg2[0x43].d
*(arg1 + 0x21c) = *(arg2 + 0x21c)
arg1[0x44] = arg2[0x44]
arg1[0x45].d = arg2[0x45].d
void* rcx_2 = &arg2[0x50]
int64_t i_3 = 7
*(arg1 + 0x22c) = *(arg2 + 0x22c)
int64_t i_4 = 7
*(arg1 + 0x22d) = *(arg2 + 0x22d)
arg1[0x46].d = arg2[0x46].d
*(arg1 + 0x234) = *(arg2 + 0x234)
arg1[0x48] = arg2[0x48]
arg1[0x49].d = arg2[0x49].d
arg1[0x4a] = arg2[0x4a]
*(arg1 + 0x258) = *(arg2 + 0x258)
*(arg1 + 0x268) = *(arg2 + 0x268)
arg1[0x4f].d = arg2[0x4f].d
void* rax_30 = &arg1[0x50]
uint128_t zmm0_1
int64_t i

do
    rax_30 += 0x80
    zmm0_1 = *rcx_2
    rcx_2 += 0x80
    *(rax_30 - 0x80) = zmm0_1
    *(rax_30 - 0x70) = *(rcx_2 - 0x70)
    *(rax_30 - 0x60) = *(rcx_2 - 0x60)
    *(rax_30 - 0x50) = *(rcx_2 - 0x50)
    *(rax_30 - 0x40) = *(rcx_2 - 0x40)
    *(rax_30 - 0x30) = *(rcx_2 - 0x30)
    *(rax_30 - 0x20) = *(rcx_2 - 0x20)
    *(rax_30 - 0x10) = *(rcx_2 - 0x10)
    i = i_4
    i_4 -= 1
while (i != 1)
*rax_30 = *rcx_2
*(rax_30 + 0x10) = *(rcx_2 + 0x10)
*(rax_30 + 0x20) = *(rcx_2 + 0x20)
arg1[0xc6] = arg2[0xc6]
arg1[0xc7].d = arg2[0xc7].d
*(arg1 + 0x63c) = *(arg2 + 0x63c)
*(arg1 + 0x644) = *(arg2 + 0x644)
*(arg1 + 0x650) = *(arg2 + 0x650)
arg1[0xcc] = arg2[0xcc]
arg1[0xcd].d = arg2[0xcd].d
*(arg1 + 0x66c) = *(arg2 + 0x66c)
arg1[0xd4].b = 0

if (arg2[0xd4].b != 0)
    *(arg1 + 0x670) = *(arg2 + 0x670)
    *(arg1 + 0x680) = *(arg2 + 0x680)
    *(arg1 + 0x690) = *(arg2 + 0x690)
    arg1[0xd4].b = 1

uint128_t* rax_35 = &arg1[0xd6]
void* rcx_3 = &arg2[0xd6]
int64_t i_1

do
    rax_35 = &rax_35[8]
    zmm0_1 = *rcx_3
    rcx_3 += 0x80
    rax_35[-8] = zmm0_1
    rax_35[-7] = *(rcx_3 - 0x70)
    rax_35[-6] = *(rcx_3 - 0x60)
    rax_35[-5] = *(rcx_3 - 0x50)
    rax_35[-4] = *(rcx_3 - 0x40)
    rax_35[-3] = *(rcx_3 - 0x30)
    rax_35[-2] = *(rcx_3 - 0x20)
    rax_35[-1] = *(rcx_3 - 0x10)
    i_1 = i_3
    i_3 -= 1
while (i_1 != 1)
*rax_35 = *rcx_3
rax_35[1] = *(rcx_3 + 0x10)
void* rdx_3 = &arg1[0x16a]
rax_35[2] = *(rcx_3 + 0x20)
*(arg1 + 0xa60) = *(arg2 + 0xa60)
*(arg1 + 0xa70) = *(arg2 + 0xa70)
*(arg1 + 0xa80) = *(arg2 + 0xa80)
*(arg1 + 0xa90) = *(arg2 + 0xa90)
*(arg1 + 0xaa0) = *(arg2 + 0xaa0)
*(arg1 + 0xab0) = *(arg2 + 0xab0)
*(arg1 + 0xac0) = *(arg2 + 0xac0)
arg1[0x15a].d = arg2[0x15a].d
*(arg1 + 0xad4) = *(arg2 + 0xad4)
arg1[0x15b].d = arg2[0x15b].d
*(arg1 + 0xadc) = *(arg2 + 0xadc)
*(arg1 + 0xadd) = *(arg2 + 0xadd)
arg1[0x15c].d = arg2[0x15c].d
*(arg1 + 0xae4) = *(arg2 + 0xae4)
arg1[0x15d].d = arg2[0x15d].d
*(arg1 + 0xaec) = *(arg2 + 0xaec)
*(arg1 + 0xb00) = *(arg2 + 0xb00)
*(arg1 + 0xb10) = *(arg2 + 0xb10)
*(arg1 + 0xb20) = *(arg2 + 0xb20)
arg1[0x166] = arg2[0x166]
arg1[0x167].d = arg2[0x167].d
arg1[0x168] = 0
arg1[0x169] = 0
*(rdx_3 + 0x10) = 0
*(rdx_3 + 0x18) = 0
*(rdx_3 + 0x1c) = 0x80
void* rax_46 = *(rdx_3 + 0x10)

if (rax_46 != 0)
    rdx_3 = rax_46

*rdx_3 = 0
*(rdx_3 + 8) = 0
arg1[0x16e].d = 0xffffffff
*(arg1 + 0xb74) = 0
arg1[0x170] = 0
arg1[0x171].d = 0
sub_140780cc0(&arg1[0x168], &arg2[0x168])
sub_1413be040(&arg1[0x172], &arg2[0x172])
arg1[0x17d].b = arg2[0x17d].b
sub_1413be260(&arg1[0x17e], &arg2[0x17e])
arg1[0x1a2].b = arg2[0x1a2].b
*(arg1 + 0xd20) = *(arg2 + 0xd20)
arg1[0x1a6].d = arg2[0x1a6].d
*(arg1 + 0xd34) = *(arg2 + 0xd34)
*(arg1 + 0xd40) = *(arg2 + 0xd40)
arg1[0x1aa] = arg2[0x1aa]
arg1[0x1ab].d = arg2[0x1ab].d
*(arg1 + 0xd5c) = *(arg2 + 0xd5c)
arg1[0x1ac].d = arg2[0x1ac].d
*(arg1 + 0xd64) = *(arg2 + 0xd64)
arg1[0x1ad] = arg2[0x1ad]
arg1[0x1ae].b = arg2[0x1ae].b
*(arg1 + 0xd71) = *(arg2 + 0xd71)
*(arg1 + 0xd72) = *(arg2 + 0xd72)
*(arg1 + 0xd73) = *(arg2 + 0xd73)
*(arg1 + 0xd74) = *(arg2 + 0xd74)
*(arg1 + 0xd75) = *(arg2 + 0xd75)
*(arg1 + 0xd76) = *(arg2 + 0xd76)
*(arg1 + 0xd77) = *(arg2 + 0xd77)
arg1[0x1af].b = arg2[0x1af].b
*(arg1 + 0xd79) = *(arg2 + 0xd79)
*(arg1 + 0xd7a) = *(arg2 + 0xd7a)
*(arg1 + 0xd7b) = *(arg2 + 0xd7b)
*(arg1 + 0xd7c) = *(arg2 + 0xd7c)
*(arg1 + 0xd7d) = *(arg2 + 0xd7d)
*(arg1 + 0xd7e) = *(arg2 + 0xd7e)
arg1[0x1b0].d = arg2[0x1b0].d
*(arg1 + 0xd84) = *(arg2 + 0xd84)
*(arg1 + 0xd90) = *(arg2 + 0xd90)
*(arg1 + 0xda0) = *(arg2 + 0xda0)
arg1[0x1b6] = arg2[0x1b6]
arg1[0x1b7].d = arg2[0x1b7].d
*(arg1 + 0xdbc) = *(arg2 + 0xdbc)
*(arg1 + 0xdc4) = 0

if (*(arg2 + 0xdc4) != 0)
    arg1[0x1b8].d = arg2[0x1b8].d
    *(arg1 + 0xdc4) = 1

*(arg1 + 0xdd0) = *(arg2 + 0xdd0)
sub_1413bebd0(&arg1[0x1bc], &arg2[0x1bc])
arg1[0x2a4].d = arg2[0x2a4].d
*(arg1 + 0x1524) = *(arg2 + 0x1524)
void* rax_78 = arg2[0x2a5]
arg1[0x2a5] = rax_78

if (rax_78 != 0)
    *(rax_78 + 8) += 1

void* rax_79 = arg2[0x2a6]
arg1[0x2a6] = rax_79

if (rax_79 != 0)
    *(rax_79 + 8) += 1

void* rax_80 = arg2[0x2a7]
arg1[0x2a7] = rax_80

if (rax_80 != 0)
    *(rax_80 + 8) += 1

arg1[0x2a8] = arg2[0x2a8]
arg1[0x2a9].d = arg2[0x2a9].d
arg1[0x2aa] = arg2[0x2aa]
arg1[0x2ab] = 0
int64_t rdi = sx.q(arg2[0x2ac].d)
int64_t rbp = arg2[0x2ab]
arg1[0x2ac].d = rdi.d

if (rdi.d != 0)
    sub_1405c4a00(&arg1[0x2ab], rdi.d, 0)
    memcpy(arg1[0x2ab], rbp, (rdi << 3).d)
else
    *(arg1 + 0x1564) = 0

void* rdi_1 = &arg1[0x2ad]
int64_t r12_1 = arg1 - arg2
void* rbx = &arg2[0x2ad]

for (int64_t i_2 = 2; i_2 != 0; )
    *rdi_1 = 0
    i_2 -= 1
    uint32_t count = *(rbx + 8)
    int64_t r13_1 = *rbx
    *(rbx + r12_1 + 8) = count
    
    if (count != 0)
        sub_1405da9e0(rdi_1, count, 0)
        memcpy(*rdi_1, r13_1, count)
    else
        *(rbx + r12_1 + 0xc) = 0
    
    rdi_1 += 0x10
    rbx += 0x10

arg1[0x2b1].d = arg2[0x2b1].d
*(arg1 + 0x158c) = *(arg2 + 0x158c)
return arg1
