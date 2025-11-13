// 函数: sub_142b8cf20
// 地址: 0x142b8cf20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r14 = arg3

if (*arg3 s> 0)
    return 

if (arg1 == 0 || arg2 u> 1)
    *arg3 = 1
    return 

void* rbx_1 = arg1[9]

if (rbx_1 == 0)
    int32_t r15_1
    r15_1.b = arg1[1] == 0
    
    if (arg2 != r15_1)
        *arg3 = 1
    
    return 

if (*(rbx_1 + 0x2332c) == 0)
    sub_142b8cab0(arg1, r14)

if (*(rbx_1 + 0x2332c) == 0 && *r14 s> 0)
    return 

uint64_t rax = zx.q(*(arg1 + 0x2c))
uint64_t r12_1 = 0x840
int32_t arg_18 = rax.d

if (rax.d s> 0x10000)
    r12_1 = zx.q(*(rbx_1 + 0x23310))

int32_t rdi_1 = 0

if (arg2 == 0)
    rdi_1 = r12_1.d

uint64_t rcx_2

if (r12_1.d s<= 0xffff && *(rbx_1 + 0x23324) + rdi_1 s<= 0xffff && rdi_1 + 0x880 s<= 0xffff)
    rcx_2 = zx.q(*(rbx_1 + 0x23318))

if (r12_1.d s> 0xffff || *(rbx_1 + 0x23324) + rdi_1 s> 0xffff || rdi_1 + 0x880 s> 0xffff
        || rcx_2.d + rdi_1 s> 0x3fffc)
    *r14 = 8
    return 

int32_t rax_1 = ((r12_1 << 1) + 0x10).d
int32_t r13_1 = rax_1 + (rcx_2 << 1).d

if (arg2 != 0)
    r13_1 = rax_1 + (rcx_2 << 2).d

rax = sub_142a7dd00(sx.q(r13_1))
arg1[7] = rax

if (rax == 0)
    *r14 = 7
    return 

arg1[8].d = r13_1
*(arg1 + 0x44) = 1
arg1[3].d = r12_1.d
*(arg1 + 0x1c) = *(rbx_1 + 0x23318)
int16_t rax_3

if (arg_18 s> 0x10000)
    rax_3 = *(rbx_1 + 0x23320)
else
    rax_3 = -1

int64_t i_5 = 0x410
arg1[4].w = rax_3
arg1[6].d = *(arg1 + 0x1c) - 4 + rdi_1
*(arg1 + 0x22) = *(rbx_1 + 0x23324) + rdi_1.w
__builtin_strncpy(rax, "2irT", 4)
*(rax + 4) = arg2.w
*(rax + 6) = arg1[3].w
*(rax + 8) = (*(arg1 + 0x1c) s>> 2).w
*(rax + 0xa) = arg1[4].w
*(rax + 0xc) = *(arg1 + 0x22)
*(rax + 0xe) = (arg_18 s>> 0xb).w
uint16_t* rax_12 = rax + 0x10
*arg1 = rax_12
void* rdx_2 = rbx_1 + 0x880
int64_t i

do
    int32_t rcx_7 = *rdx_2
    rdx_2 += 8
    *rax_12 = ((rcx_7 + rdi_1) u>> 2).w
    rax_12[1] = ((*(rdx_2 - 4) + rdi_1) u>> 2).w
    rax_12 = &rax_12[2]
    i = i_5
    i_5 -= 1
while (i != 1)
int32_t i_1 = 2
*rax_12 = 0x80 + rdi_1.w
rax_12[1] = 0x80 + rdi_1.w
rax = &rax_12[2]

do
    int32_t rcx_14 = i_1 * 2
    i_1 += 1
    *rax = *(rbx_1 + (sx.q(rcx_14) << 2) + 0x880) + rdi_1.w
    rax += 2
while (i_1 s< 0x20)

if (arg_18 s> 0x10000)
    int32_t i_2 = (arg_18 - 0x10000) s>> 0xb
    void* r8 = rbx_1 + 0x80
    int32_t r9_2 = i_2 + 0x840
    
    while (i_2 s> 0)
        int16_t rcx_16 = *r8
        r8 += 4
        *rax = rcx_16
        i_2 -= 1
        rax += 2
    
    int32_t i_3 = *(rbx_1 + 0x23310) - r9_2
    void* r8_3 = rbx_1 + ((sx.q(r9_2) + 0x220) << 2)
    
    while (i_3 s> 0)
        int32_t rcx_17 = *r8_3
        r8_3 += 4
        i_3 -= 1
        *rax = ((rcx_17 + rdi_1) u>> 2).w
        rax += 2

if (arg2 == 0)
    arg1[1] = rax
    arg1[2] = 0
    int32_t i_4 = *(rbx_1 + 0x23318)
    int16_t* r8_6 = *(rbx_1 + 0x23300)
    
    while (i_4 s> 0)
        i_4 -= 1
        *rax = *r8_6
        rax += 2
        r8_6 = &r8_6[2]
    
    goto label_142b8d24c

if (arg2 != 1)
    *r14 = 1
    return 

arg1[1] = 0
arg1[2] = rax
memcpy(rax, *(rbx_1 + 0x23300), *(rbx_1 + 0x23318) << 2)
label_142b8d24c:
sub_142a7dcd0(*(rbx_1 + 0x23300))
sub_142a7dcd0(rbx_1)
arg1[9] = 0
