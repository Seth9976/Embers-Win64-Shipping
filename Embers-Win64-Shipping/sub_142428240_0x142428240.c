// 函数: sub_142428240
// 地址: 0x142428240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].d = 0xffffffff
*(arg1 + 0xc) = 4
int64_t rbp = sx.q(arg3)
__builtin_memset(&arg1[2], 0, 0x18)
arg1[5] = -0x3810000020000000
__builtin_memset(&arg1[6], 0, 0x14)
*arg1 = &data_14334a970
*(arg1 + 0x44) = 0
*(arg1 + 0x46) = 0
arg1[9] = arg2
arg1[0xa] = 0
int32_t* rax = *(arg2 + 0xb8)
int32_t rax_1

if (rax == 0)
    rax_1 = 0
else
    rax_1 = *rax

arg1[0xb].d = rax_1
void* rax_2 = *(arg2 + 0xb8)
int32_t rcx

if (rax_2 == 0)
    rcx = 0
else
    rcx = *(rax_2 + 4)

*(arg1 + 0x5c) = rcx
void* rax_3 = *(arg2 + 0xb8)
int32_t rax_5

if (rax_3 == 0)
    rax_5 = 0
else
    rax_5 = *(rax_3 + 8) & 0x3fffffff

arg1[0xc].d = rax_5
*(arg1 + 0x64) = 0xffffffff
void* rax_6 = *(arg2 + 0xb8)
int32_t rax_7

if (rax_6 == 0)
    rax_7 = 0
else
    rax_7 = *(rax_6 + 0x20)

arg1[0xd].d = rax_7
void* rax_8 = *(arg2 + 0xb8)
char rcx_1

if (rax_8 == 0)
    rcx_1 = 0
else
    rcx_1 = (*(rax_8 + 0xc)).b

*(arg1 + 0x6c) = rcx_1
*(arg1 + 0x74) = 0
arg1[0x10] = 0
arg1[0x11] = arg2 + 0x80
arg1[0x28].d = rbp.d
arg1[0x12] = &data_14334a948
memset(&arg1[0x13], 0, 0xa8)
void* rbx = arg1[9]
arg1[0xa] = *(rbx + 0x18)
uint32_t rax_11 = zx.d(*(rbx + 0x60))
arg1[0xe].d = (((rax_11 & 2) * 2) | (rax_11 & 1)) << 4 | 0x80008
arg1[0xf].d = zx.d(sub_1423c1fe0(sub_1405e25d0(sub_141fe0f50(sub_141fe0c50(0))), rbx))
char rax_18 = *(arg1 + 0x6c)

if (rax_18 == 3 || rax_18 == 0x27)
    rax_18 = 1
else
    rax_18 = 0

void* r9 = arg1[9]
*(arg1 + 0x44) = rax_18
void* r13 = *(r9 + 0xb8)

if (r13 == 0)
    return arg1

int64_t r14 = rbp << 3

if (sub_1423cb230(r13, rbp.d, &arg1[0x13] + r14) == 0 || rbp.d s>= arg1[0xd].d)
    return arg1

void* r15_2 = &arg1[0x21] + (rbp << 2)

do
    void* rbx_1 = *(r14 + *(r13 + 0x18))
    int32_t rdi_1 =
        sub_141998350(arg1[0xb].d, *(arg1 + 0x5c), arg1[0xc].d, zx.d(*(arg1 + 0x6c)), rbp.b)
    int32_t rax_22 = sub_140bc7f20(rbx_1 + 0x10)
    r15_2 += 4
    r14 += 8
    
    if (rax_22 s>= rdi_1)
        rdi_1 = rax_22
    
    rbp = zx.q(rbp.d + 1)
    *(r15_2 - 4) = rdi_1
while (rbp.d s< arg1[0xd].d)

return arg1
