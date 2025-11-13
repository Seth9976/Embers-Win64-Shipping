// 函数: sub_1403f7180
// 地址: 0x1403f7180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = sx.q(arg2)
uint64_t rflags
int32_t temp0
temp0, rflags = __bsr_gprv_memv(arg6[4].d)
int32_t r15_1 = arg6[1].d << 3
int32_t r12 = arg3
int32_t r10_2 = arg6[3].d - temp0 - 1
int32_t r8 = arg5
int32_t rdx = 4
int64_t rbx = sx.q(arg1)

if (arg3 != 0)
    rdx = 2

uint32_t result_1 = 0
uint32_t result

if (r8 s> 0)
    result = 1

if (r8 s<= 0 || rdx + 1 + r10_2 u> r15_1)
    result = 0

int32_t rbp = 0
int32_t r11 = 0
int32_t arg_8 = 0
int64_t rdi = rbx

if (rbx s< r9)
    do
        if (rdx + r10_2 u<= r15_1 - result)
            int32_t rax_6 = sub_1403f72f0(arg6, rdx.b)
            int32_t r10_3 = arg6[3].d
            rbp ^= rax_6
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = __bsr_gprv_memv(arg6[4].d)
            r10_2 = r10_3 - temp0_2 - 1
            r11 = arg_8 | rbp
            arg_8 = r11
        
        *(arg4 + (rdi << 2)) = rbp
        rdi += 1
        rdx = sbb.d(r12, r12, r12 != 0) + 5
    while (rdi s< r9)
    
    r12 = arg3
    r8 = arg5
    result_1 = 0

if (result != 0)
    int64_t r8_2 = sx.q(r11) + ((sx.q(r12) + (sx.q(r8) << 1)) << 2)
    result = zx.d(*(r8_2 + 0x1435fd672))
    
    if (*(r8_2 + &data_1435fd670) != result.b)
        result = sub_1403f72f0(arg6, 1)
        result_1 = result

while (rbx s< r9)
    int64_t rax_11 = sx.q(*(arg4 + (rbx << 2)))
    rbx += 1
    result = sx.d(
        *(rax_11 + (sx.q(result_1) + (sx.q(r12) << 1)) * 2 + (sx.q(arg5) << 3) + &data_1435fd670))
    *(arg4 + (rbx << 2) - 4) = result

return result
