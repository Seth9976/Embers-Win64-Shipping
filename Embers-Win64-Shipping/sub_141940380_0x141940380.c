// 函数: sub_141940380
// 地址: 0x141940380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rcx = arg2.b
uint32_t rdx_1 = *(arg1 + 0x60) u>> rcx
int64_t r10 = sx.q(*(arg1 + 0x3c)) * 5
int64_t rbp
rbp.b = 1
uint32_t rbx = *((r10 << 3) + &data_1439c85ec)
uint32_t r11 = *((r10 << 3) + 0x1439c85e8)
int32_t r10_1 = (&data_1439c85f4)[r10 * 2]
uint32_t rax_1 = r11
uint32_t r9_1 = *(arg1 + 0x64) u>> rcx

if (rdx_1 u>= r11)
    rax_1 = rdx_1

uint32_t temp0 = divu.dp.d(0:(rax_1 - 1 + r11), r11)
*arg5 = temp0 * r10_1
uint32_t rcx_2 = rbx

if (r9_1 u>= rbx)
    rcx_2 = r9_1

int32_t rcx_3 = 1
int32_t rax_8 = *(arg1 + 0x68)

if (rax_8 != 0)
    rcx_3 = rax_8

int32_t rax_9 = 1

if ((*(arg1 + 0xe8) & 1) != 0)
    rax_9 = 6

int64_t r14 = sx.q(rax_9 * rcx_3 * arg2 + arg3) << 3
uint64_t rax_14

if (*(r14 + *(arg1 + 0xa0)) == 0)
    rbp.b = 0
    void*** rax_15
    rax_15, r9_1 = j_sub_140a82f30(0x58)
    void*** rcx_4 = nullptr
    
    if (rax_15 != 0)
        void*** rax_16
        rax_16, r9_1 = sub_1419058e0(rax_15, 0, 
            divu.dp.d(0:(rbx - 1 + rcx_2), rbx) * temp0 * r10_1, 2, 0, 0, 0, 0)
        rcx_4 = rax_16
    
    rax_14 = *(arg1 + 0xa0)
    int64_t* r8_2 = *(r14 + rax_14)
    *(r14 + rax_14) = rcx_4
    
    if (rcx_4 != 0)
        rcx_4[1].d += 1
    
    if (r8_2 != 0)
        r8_2[1].d -= 1
        
        if (r8_2[1].d == 1)
            rax_14, r9_1 = (**r8_2)(r8_2, 1)

int64_t* rbx_5 = *(r14 + *(arg1 + 0xa0))

if (rbx_5 != 0)
    rbx_5[1].d += 1

if (rbp.b == 0 || (*(arg1 + 0x40) & 0x40005) != 0x40000)
    rax_14.b = 0
else
    rax_14.b = 1

if (arg4 != 1 && rax_14.b == 0)
    rax_14, r9_1 = sub_14194c4c0(arg1, arg2, arg3)

rax_14.b = arg4 != 0
r9_1.b = arg4 == 0
int64_t result = sub_14193fea0(rbx_5, 0, rbx_5[2].d, r9_1.b, rax_14.b)
rbx_5[1].d -= 1

if (rbx_5[1].d != 1)
    return result

int64_t r8_5 = *rbx_5
(*r8_5)(rbx_5, 1, r8_5)
return result
