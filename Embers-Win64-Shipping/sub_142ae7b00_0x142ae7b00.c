// 函数: sub_142ae7b00
// 地址: 0x142ae7b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i = 0
int64_t rsi = sx.q(arg2)
int32_t rbx = 0
int64_t rdi = 0
uint32_t rax = arg3

do
    uint32_t temp1_1 = modu.dp.d(0:rax, arg4)
    rax = divu.dp.d(0:rax, arg4)
    int16_t rdx_1
    
    if (temp1_1 s> 9)
        rdx_1 = temp1_1.w + 0x37
    else
        rdx_1 = temp1_1.w + 0x30
    
    rbx += 1
    *(arg1 + (rdi << 1)) = rdx_1
    rdi += 1
    
    if (rax == 0)
        break
while (rdi s< rsi)

int32_t r8 = rbx

if (rbx s< arg5)
    r8 = arg5
    int64_t rcx_1
    int64_t rdi_2
    rdi_2, rcx_1 = __memfill_u16(arg1 + (sx.q(rbx) << 1), 0x30, sx.q(arg5 - rbx))

if (r8 s< rsi.d)
    *(arg1 + (sx.q(r8) << 1)) = 0

int32_t temp7
int32_t temp8
temp7:temp8 = sx.q(r8)
int32_t rax_8 = (temp8 - temp7) s>> 1

if (rax_8 s> 0)
    int16_t* rdi_5 = arg1 + ((sx.q(r8) - 1) << 1)
    
    do
        int16_t rdx_3 = *rdi_5
        *rdi_5 = *(arg1 + (i << 1))
        rdi_5 = &rdi_5[-1]
        *(arg1 + (i << 1)) = rdx_3
        i += 1
    while (i s< sx.q(rax_8))

return zx.q(r8)
