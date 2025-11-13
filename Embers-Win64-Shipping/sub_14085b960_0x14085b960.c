// 函数: sub_14085b960
// 地址: 0x14085b960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = arg1

if (arg3 == 0)
    return 

int32_t temp0_1
int32_t temp1_1
temp0_1:temp1_1 = sx.q(arg2)
int32_t rdx_1 = temp0_1 & 0x1f
int32_t r8 = arg3 + arg2
int32_t rax_3 = temp1_1 + rdx_1
uint64_t rbx_2 = zx.q(rax_3 s>> 5)
int32_t temp2_1
int32_t temp3_1
temp2_1:temp3_1 = sx.q(r8 + 0x1f)
int32_t rdi_1 = 0xffffffff << ((rax_3.b & 0x1f) - rdx_1.b)
int32_t rdx_6 = (((temp2_1 & 0x1f) + temp3_1) s>> 5) - rbx_2.d
int32_t r8_1 = r8 & 0x8000001f

if (r8_1 s< 0)
    r8_1 = ((r8_1 - 1) | 0xffffffe0) + 1

int32_t rax_9 = (0x20 - r8_1) & 0x8000001f

if (rax_9 s< 0)
    rax_9 = ((rax_9 - 1) | 0xffffffe0) + 1

void* rax_12 = *(r10 + 0x80)
uint32_t r9 = 0xffffffff u>> rax_9.b

if (rax_12 != 0)
    r10 = rax_12

int32_t rax = *(r10 + (rbx_2 << 2))
void* r8_4 = r10 + (rbx_2 << 2)

if (arg4 != 0)
    if (rdx_6 == 1)
        *r8_4 = (r9 & rdi_1) | rax
        return 
    
    *r8_4 = rax | rdi_1
    int32_t* r8_5 = r8_4 + 4
    uint64_t rdx_7 = zx.q(rdx_6 - 2)
    
    if (rdx_6 != 2)
        int32_t* rdi_2 = r8_5
        r8_5 = &r8_5[rdx_7]
        __builtin_memset(rdi_2, 0xffffffff, zx.q(rdx_7.d) << 2)
    
    *r8_5 |= r9
    return 

if (rdx_6 == 1)
    *r8_4 = not.d(r9 & rdi_1) & rax
    return 

*r8_4 = not.d(rdi_1) & rax
int32_t* r8_6 = r8_4 + 4
uint64_t rdx_8 = zx.q(rdx_6 - 2)

if (rdx_6 != 2)
    int32_t* rdi_5 = r8_6
    r8_6 = &r8_6[rdx_8]
    __builtin_memset(rdi_5, 0, zx.q(rdx_8.d) << 2)

*r8_6 &= not.d(r9)
