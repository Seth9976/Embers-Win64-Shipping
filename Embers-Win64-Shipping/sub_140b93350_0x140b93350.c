// 函数: sub_140b93350
// 地址: 0x140b93350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg1[1].d)
int32_t rax = (rsi + 1).d
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_1405c5060(arg1)

int32_t* rcx_2 = rsi * 0x50 + *arg1
*rcx_2 = *arg2
rcx_2[1] = arg2[1]
rcx_2[2] = arg2[2]
rcx_2[3] = arg2[3]
*(rcx_2 + 0x10) = *(arg2 + 0x10)
*(rcx_2 + 0x20) = *(arg2 + 0x20)
*(arg2 + 0x20) = 0
*(rcx_2 + 0x30) = *(arg2 + 0x30)
*(rcx_2 + 0x40) = *(arg2 + 0x40)

if (*(rcx_2 + 0x10) != 0)
    *(arg2 + 0x10) = 0

int64_t r11 = *arg1
int32_t r8_1 = arg1[1].d - 1

if (r8_1 s<= 0)
    return zx.q(r8_1)

int128_t zmm6
int128_t var_18 = zmm6
int64_t r9_1

do
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r8_1 - 1)
    r9_1 = sx.q((temp1_1 - temp0_1) s>> 1)
    int32_t* rdx_4 = r9_1 * 0x50 + r11
    int32_t* rax_14 = sx.q(r8_1) * 0x50 + r11
    int32_t rcx_3 = *rax_14
    int32_t temp2_1 = *rdx_4
    
    if (rcx_3 == temp2_1)
        rcx_3 = rax_14[2]
        int32_t temp3_1 = rdx_4[2]
        
        if (rcx_3 == temp3_1)
            rcx_3 = rax_14[1]
            int32_t temp4_1 = rdx_4[1]
            
            if (rcx_3 == temp4_1)
                rcx_3.b = rax_14[3] s< rdx_4[3]
            else
                rcx_3.b = rcx_3 s> temp4_1
        else
            rcx_3.b = rcx_3 s> temp3_1
    else
        rcx_3.b = rcx_3 s> temp2_1
    
    if (rcx_3.b == 0)
        break
    
    if (rax_14 != rdx_4)
        int128_t zmm2 = *rax_14
        int128_t zmm3 = *(rax_14 + 0x10)
        int128_t zmm4 = *(rax_14 + 0x20)
        int128_t zmm5 = *(rax_14 + 0x30)
        zmm6 = *(rax_14 + 0x40)
        *rax_14 = *rdx_4
        *(rax_14 + 0x10) = *(rdx_4 + 0x10)
        *(rax_14 + 0x20) = *(rdx_4 + 0x20)
        *(rax_14 + 0x30) = *(rdx_4 + 0x30)
        *(rax_14 + 0x40) = *(rdx_4 + 0x40)
        *rdx_4 = zmm2
        *(rdx_4 + 0x10) = zmm3
        *(rdx_4 + 0x20) = zmm4
        *(rdx_4 + 0x30) = zmm5
        *(rdx_4 + 0x40) = zmm6
    
    r8_1 = r9_1.d
while (r9_1.d s> 0)
return zx.q(r8_1)
