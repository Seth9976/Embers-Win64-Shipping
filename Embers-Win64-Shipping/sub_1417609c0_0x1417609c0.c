// 函数: sub_1417609c0
// 地址: 0x1417609c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].b = 0
*arg1 = &data_142fc6e58
arg1[2] = *(arg2 + 0x18)
arg1[3].d = *(arg2 + 0x20)
*(arg1 + 0x20) = *(arg2 + 0x30)
arg1[6] = *(arg2 + 0x40)
void* rax_2 = *(arg2 + 0x48)
arg1[7] = rax_2

if (rax_2 != 0)
    *(rax_2 + 8) += 1

arg1[8].w = *(arg2 + 0xb8)
void* rbx = arg2 + 0x50
*(arg1 + 0x44) = *(arg2 + 0x24)
arg1[9] = *(arg2 + 0xc0)
void* rdi = rbx + 0x10
arg1[0xa].d = *(arg2 + 0xcc)
void* rcx = &arg1[0xb]
arg1[0xd] = 0
arg1[0xe].d = 0
*(arg1 + 0x74) = 0x80
void* rax_7 = arg1[0xd]

if (rax_7 != 0)
    rcx = rax_7

*rcx = 0
*(rcx + 8) = 0
arg1[0xf] = 0
arg1[0x10] = 0
arg1[0x11] = 0
arg1[0x12] = 0
arg1[0x13] = 0
arg1[0x14] = 0
sub_14059a8e0(&arg1[0xb], *rdi)
int32_t rdx_1 = *rdi
arg1[0x10].d = 0

if (*(arg1 + 0x84) != rdx_1)
    sub_1405dadb0(&arg1[0xf], rdx_1)

int32_t rdx_2 = *rdi
arg1[0x12].d = 0

if (*(arg1 + 0x94) != rdx_2)
    sub_1405a5410(&arg1[0x11], rdx_2)

int32_t rdx_3 = *rdi
arg1[0x14].d = 0

if (*(arg1 + 0xa4) != rdx_3)
    sub_1405a5410(&arg1[0x13], rdx_3)

void* rax_8 = *(rbx + 8)

if (rax_8 != 0)
    rbx = rax_8

void* rax_10 = rbx + (sx.q(*rdi) << 3)

if (rbx == rax_10)
    return arg1

do
    int32_t rdi_1 = arg1[0xe].d
    char r13_1 = *(*rbx + 0x88)
    sub_1405a4980(&arg1[0xb], rdi_1 + 1)
    arg1[0xe].d += 1
    void* rcx_6 = &arg1[0xb]
    void* rax_12 = arg1[0xd]
    
    if (rax_12 != 0)
        rcx_6 = rax_12
    
    int32_t rax_13 = rdi_1
    
    if (rdi_1 s< 0)
        rax_13 = rdi_1 + 0x1f
    
    void* rdx_5 = rcx_6 + (sx.q(rax_13 s>> 5) << 2)
    int32_t rax_16 = 1 << (rdi_1.b & 0x1f)
    int32_t rcx_8 = *rdx_5
    int32_t rax_17
    
    if (r13_1 == 0)
        rax_17 = not.d(rax_16) & rcx_8
    else
        rax_17 = rax_16 | rcx_8
    
    *rdx_5 = rax_17
    int64_t rdi_3 = sx.q(arg1[0x10].d)
    void* r13_2 = *rbx
    int32_t rax_19 = (rdi_3 + 1).d
    arg1[0x10].d = rax_19
    
    if (rax_19 s> *(arg1 + 0x84))
        sub_1405a4cf0(&arg1[0xf])
    
    *(arg1[0xf] + (rdi_3 << 2)) = *(r13_2 + 0x8c)
    int64_t rdi_4 = sx.q(arg1[0x12].d)
    void* r13_3 = *rbx
    int32_t rax_21 = (rdi_4 + 1).d
    arg1[0x12].d = rax_21
    
    if (rax_21 s> *(arg1 + 0x94))
        sub_1405a4f90(&arg1[0x11])
    
    *(arg1[0x11] + rdi_4 * 0x10) = *(r13_3 + 0x10)
    int64_t rdi_5 = sx.q(arg1[0x14].d)
    int128_t* r13_4 = *rbx
    int32_t rax_23 = (rdi_5 + 1).d
    arg1[0x14].d = rax_23
    
    if (rax_23 s> *(arg1 + 0xa4))
        sub_1405a4f90(&arg1[0x13])
    
    rbx += 8
    *(arg1[0x13] + rdi_5 * 0x10) = *r13_4
while (rbx != rax_10)

return arg1
