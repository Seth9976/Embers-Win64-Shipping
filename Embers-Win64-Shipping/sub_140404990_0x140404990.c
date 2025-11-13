// 函数: sub_140404990
// 地址: 0x140404990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *(arg1 + 8)
int32_t r12 = arg10
uint64_t rbp = zx.q(arg5)
int32_t r15 = 0
int64_t* r13 = *(arg1 + 0x20)
int64_t rax_1 = *(arg1 + 0x30)
int32_t r9 = *arg1
int64_t rcx = sx.q(arg1[4])
uint64_t rbx = 0
int32_t result = 0
float var_50 = rcx.d
int32_t r11 = sx.d(*(*(r8 + 0x40) + (rcx << 1))) + (arg9 << 3)
int32_t rax_4

if (r12 != 0)
    rax_4 = 0x10

if (r12 == 0 || rbp.d != 2)
    rax_4 = 4

int32_t r8_2 = ((rbp << 1) + -ffffffffffffffff).d
int32_t r10 = *arg6

if (r12 != 0 && rbp.d == 2)
    r8_2 -= 1

int32_t temp0 = divs.dp.d(sx.q(r8_2 * ((r11 s>> 1) - rax_4) + r10), r8_2)
int32_t r8_3 = temp0

if (r10 - r11 - 0x20 s< temp0)
    r8_3 = r10 - r11 - 0x20

if (r8_3 s> 0x40)
    r8_3 = 0x40

uint64_t rdi

if (r8_3 s>= 4)
    rdi = zx.q((sx.d(*(&data_143700618 + ((zx.q(r8_3) & 7) << 1))) s>> (0xe - (r8_3 s>> 3).b)) + 1)
        & 0xfffffffe
else
    rdi = 1

if (r12 != 0 && var_50 s>= arg1[5])
    rdi = 1

if (r9 != 0)
    rbx = zx.q(sub_14040b950(arg3, arg4, r12, rbp.d))

int32_t rax_17 = sub_140403430(r13)

if (rdi.d != 1)
    if (r9 != 0)
        rbx = zx.q((rbx.d * rdi.d + 0x2000) s>> 0xe)
    
    if (r12 != 0 && rbp.d s> 2)
        int32_t temp8_1
        int32_t temp9_1
        temp8_1:temp9_1 = sx.q(rdi.d)
        int32_t rax_21 = (temp9_1 - temp8_1) s>> 1
        uint32_t r12_1 = (rax_21 + 1) * 3
        int32_t rax_22 = rax_21 + r12_1
        
        if (r9 == 0)
            int32_t rax_23 = sub_1403f7690(r13, rax_22)
            
            if (rax_23 s>= r12_1)
                rbx = zx.q(rax_23 - r12_1 + 1 + rax_21)
            else
                rbx = zx.q(rax_23 s/ 3)
            
            uint32_t r8_9
            
            if (rbx.d s> rax_21)
                r8_9 = r12_1 - rax_21 + rbx.d
            else
                r8_9 = (rbx + 1).d * 3
            
            uint32_t rdx_9
            
            if (rbx.d s> rax_21)
                rdx_9 = r12_1 - rax_21 - 1 + rbx.d
            else
                rdx_9 = (rbx * 3).d
            
            sub_1403f7650(r13, rdx_9, r8_9, rax_22)
            r12 = arg10
            r15 = 0
        else
            uint32_t r8_6
            
            if (rbx.d s> rax_21)
                r8_6 = r12_1 - rax_21 + rbx.d
            else
                r8_6 = (rbx + 1).d * 3
            
            uint32_t rdx_5
            
            if (rbx.d s> rax_21)
                rdx_5 = r12_1 - rax_21 - 1 + rbx.d
            else
                rdx_5 = (rbx * 3).d
            
            sub_1403fe730(r13, rdx_5, r8_6, rax_22)
            r12 = arg10
            r15 = 0
    else if (arg8 s<= 1 && r12 == 0)
        int32_t rcx_16 = rdi.d s>> 1
        int32_t r12_5 = (rcx_16 + 1) * (rcx_16 + 1)
        
        if (r9 == 0)
            uint64_t rdx_16 = zx.q(sub_1403f7690(r13, r12_5))
            int32_t rcx_24
            int32_t rdx_19
            
            if (rdx_16.d s>= ((rcx_16 + 1) * rcx_16) s>> 1)
                rbx = zx.q((((rdi << 1) + 2).d
                    - sub_14040bbd0(((zx.q(r12_5 - rdx_16.d) << 3) + -fffffffffffffff9).d)) u>> 1)
                int32_t rax_37 = rdi.d - rbx.d
                rcx_24 = rax_37 + 1
                rdx_19 = r12_5 - (((rax_37 + 2) * rcx_24) s>> 1)
            else
                rbx = zx.q((sub_14040bbd0(((rdx_16 << 3) + 1).d) - 1) u>> 1)
                rcx_24 = (rbx + 1).d
                rdx_19 = (rcx_24 * rbx.d) s>> 1
            
            sub_1403f7650(r13, rdx_19, rdx_19 + rcx_24, r12_5)
            r12 = arg10
        else
            int32_t r8_12
            
            if (rbx.d s> rcx_16)
                r8_12 = rdi.d - rbx.d + 1
            else
                r8_12 = (rbx + 1).d
            
            int32_t rdx_13
            
            if (rbx.d s> rcx_16)
                int32_t rax_28 = rdi.d - rbx.d
                rdx_13 = r12_5 - (((rax_28 + 2) * (rax_28 + 1)) s>> 1)
            else
                rdx_13 = ((rbx + 1).d * rbx.d) s>> 1
            
            sub_1403fe730(r13, rdx_13, r8_12 + rdx_13, r12_5)
            r12 = arg10
    else if (r9 == 0)
        rbx = zx.q(sub_1403f7510(r13, (rdi + 1).d))
    else
        sub_1403fe640(r13, rbx.d, (rdi + 1).d)
    
    int32_t temp0_1 = divs.dp.d(sx.q(rbx.d << 0xe), rdi.d)
    rbx = zx.q(temp0_1)
    
    if (r9 != 0 && r12 != 0)
        if (temp0_1 != 0)
            sub_140408400(arg3, arg4, rbp.d)
        else
            sub_1404058f0(r8, arg3, arg4, rax_1, var_50, rbp.d)
else if (r12 != 0)
    int32_t result_1
    
    if (r9 == 0)
        result_1 = 0
    else
        result_1.b = rbx.d s> 0x2000
        result = result_1
        
        if (result_1 != 0)
            int32_t i = 0
            int128_t zmm1
            
            if (rbp.d s> 0 && rbp.d u>= 8)
                int32_t rax_47 = rbp.d & 0x80000007
                
                if (rax_47 s< 0)
                    rax_47 = ((rax_47 - 1) | 0xfffffff8) + 1
                
                zmm1 = data_142d3f780
                
                do
                    int64_t i_3 = sx.q(i)
                    *(arg4 + (i_3 << 2)) ^= zmm1
                    int32_t rax_50 = i + 4
                    i += 8
                    int64_t rcx_32 = sx.q(rax_50)
                    *(arg4 + (rcx_32 << 2)) ^= zmm1
                while (i s< rbp.d - rax_47)
            
            int64_t i_6 = sx.q(i)
            
            if (i s< rbp.d)
                int128_t zmm0
                
                if (rbp.d - i s>= 4)
                    void* rcx_34 = arg4 + 8 + (i_6 << 2)
                    uint64_t rax_57 = zx.q(((rbp.d - i - 4) u>> 2) + 1)
                    uint64_t i_5 = zx.q(rax_57.d)
                    i += (rax_57 << 2).d
                    i_6 += rax_57 << 2
                    uint64_t i_1
                    
                    do
                        zmm0 = *(rcx_34 - 8)
                        zmm1 = *(rcx_34 - 4)
                        rcx_34 += 0x10
                        *(rcx_34 - 0x18) = (zmm0 ^ 0x80000000).d
                        zmm0 = *(rcx_34 - 0x10)
                        *(rcx_34 - 0x14) = (zmm1 ^ 0x80000000).d
                        zmm1 = *(rcx_34 - 0xc) ^ 0x80000000
                        *(rcx_34 - 0x10) = (zmm0 ^ 0x80000000).d
                        *(rcx_34 - 0xc) = zmm1.d
                        i_1 = i_5
                        i_5 -= 1
                    while (i_1 != 1)
                
                if (i s< rbp.d)
                    void* rcx_35 = arg4 + (i_6 << 2)
                    int64_t i_4 = sx.q(rbp.d - i)
                    int64_t i_2
                    
                    do
                        zmm0 = *rcx_35
                        rcx_35 += 4
                        *(rcx_35 - 4) = (zmm0 ^ 0x80000000).d
                        i_2 = i_4
                        i_4 -= 1
                    while (i_2 != 1)
        
        sub_1404058f0(r8, arg3, arg4, rax_1, var_50, rbp.d)
    
    if (*arg6 s<= 0x10 || arg1[0xa] s<= 0x10)
        result = 0
    else if (r9 == 0)
        result = sub_1403f72f0(r13, 2)
    else
        sub_1403fe0d0(r13, result_1, 2)
    
    rbx = 0

int32_t rsi_2 = sub_140403430(r13) - rax_17
*arg6 -= rsi_2
int32_t rdi_6
int32_t r12_6

if (rbx.d != 0)
    r12_6 = 0x4000
    
    if (rbx.d != 0x4000)
        int32_t r8_23 = sx.d(rbx.w)
        int16_t r8_26 = ((r8_23 * r8_23 + 0x1000) s>> 0xd).w
        int32_t rdx_29 = sx.d(r8_26)
        int32_t r8_27 = sx.d(0x4000 - rbx.w)
        r15 = sx.d(((sx.d(
            ((sx.d(0x2055 + ((0x4000 - rdx_29 * 0x272) s>> 0xf).w) * rdx_29 + 0x4000) s>> 0xf).w
            - 0x1de3) * rdx_29 + 0x4000) s>> 0xf).w - r8_26 - 0x8000)
        int16_t r8_30 = ((r8_27 * r8_27 + 0x1000) s>> 0xd).w
        int32_t rdx_30 = sx.d(r8_30)
        uint64_t rflags_1
        int16_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(r15)
        rdi_6 = sx.d(((sx.d(
            ((sx.d(0x2055 + ((0x4000 - rdx_30 * 0x272) s>> 0xf).w) * rdx_30 + 0x4000) s>> 0xf).w
            - 0x1de3) * rdx_30 + 0x4000) s>> 0xf).w - r8_30 - 0x8000)
        uint64_t rflags_2
        int16_t temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rdi_6)
        int32_t r8_32 = sx.d((r15 << (0xf - (temp0_2 + 1).b)).w)
        int32_t rdx_33 = sx.d((rdi_6 << (0xf - (temp0_3 + 1).b)).w)
        int16_t r9_11 =
            ((sx.d(((0x4000 - rdx_33 * 0xa25) s>> 0xf).w + 0x1efc) * rdx_33 + 0x4000) s>> 0xf).w
            - ((sx.d(0x1efc + ((0x4000 - r8_32 * 0xa25) s>> 0xf).w) * r8_32 + 0x4000) s>> 0xf).w
        rbp.w *= 0x80
        rbp.w -= 0x80
        r12_6 = (0x4000 + sx.d(r9_11 + (temp0_3 + 1 - (temp0_2 + 1)) * 0x800) * sx.d(rbp.w)) s>> 0xf
    else
        rdi_6 = 0x7fff
        *arg11 &= ((1 << arg7) - 1) << arg7
else
    r15 = 0x7fff
    r12_6 = -0x4000
    *arg11 &= (1 << arg7) - 1
    rdi_6 = 0

arg2[4] = rbx.d
*arg2 = result
arg2[1] = r15
arg2[2] = rdi_6
arg2[3] = r12_6
arg2[5] = rsi_2
return result
