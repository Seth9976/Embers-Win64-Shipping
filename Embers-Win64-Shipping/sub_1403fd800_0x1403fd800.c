// 函数: sub_1403fd800
// 地址: 0x1403fd800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r15 = arg3
int32_t r8 = 4
uint64_t rflags
int32_t temp0
temp0, rflags = __bsr_gprv_memv(arg7[4].d)
int32_t rbp_1 = arg7[1].d << 3
int32_t r10_2 = arg7[3].d - temp0 - 1

if (r15 != 0)
    r8 = 2

int32_t r12 = 0
int64_t r9 = sx.q(arg1)
uint32_t result

if (arg5 s> 0)
    result = 1

if (arg5 s<= 0 || r10_2 + 1 + r8 u> rbp_1)
    result = 0

int64_t rsi = sx.q(arg2)
int32_t r11 = 0
int32_t arg_8 = 0
int32_t rcx = 0
int64_t rbx = r9
int64_t rdi = r9

if (r9 s< rsi)
    do
        if (r8 + r10_2 u> rbp_1 - result)
            *(arg4 + (rdi << 2)) = rcx
        else
            sub_1403fe0d0(arg7, *(arg4 + (rdi << 2)) ^ rcx, r8.b)
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = __bsr_gprv_memv(arg7[4].d)
            rcx = *(arg4 + (rdi << 2))
            r10_2 = arg7[3].d - temp0_2 - 1
            r11 = arg_8 | rcx
            arg_8 = r11
        
        rdi += 1
        r8 = sbb.d(r15, r15, r15 != 0) + 5
    while (rdi s< rsi)
    
    r15 = arg3

int64_t rdi_1

if (result == 0)
    rdi_1 = zx.q(arg5)
else
    rdi_1 = sx.q(arg5)
    int64_t rdx_2 = sx.q(r11) + ((sx.q(r15) + (rdi_1 << 1)) << 2)
    result = zx.d(*(rdx_2 + 0x1435fd672))
    
    if (*(rdx_2 + &data_1435fd670) != result.b)
        r12 = arg6
        result = sub_1403fe0d0(arg7, r12, 1)

while (rbx s< rsi)
    int64_t rax_10 = sx.q(*(arg4 + (rbx << 2)))
    rbx += 1
    result = sx.d(
        *(rax_10 + (sx.q(r12) + (sx.q(r15) << 1)) * 2 + (sx.q(rdi_1.d) << 3) + &data_1435fd670))
    *(arg4 + (rbx << 2) - 4) = result

return result
