// 函数: sub_14084c520
// 地址: 0x14084c520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg5
void* rax = sub_14082fe30(rbx)
int64_t r13 = *(rbx + 0x20)
char r8 = *(arg1 + 0x1e8)
int32_t r15 = *(rax + 0xb0)

if (*(arg1 + 0x25c) == 0xffffffff)
    char rax_1 = r8
    
    if (r8 == 2)
        rax_1 = 0
    
    r8 = rax_1

void* arg_40
void* rbx_1 = arg_40
*(rbx_1 + 0x188) = zx.d(r8)
*(rbx_1 + 0x18c) = zx.d(*(arg1 + 0x1e9))
int64_t rax_4 = *(rbx_1 + 8)
*(rbx_1 + 0x154) = 0
(*(rax_4 + 0x28))(rbx_1 + 8)
sub_1405d16e0(rbx_1 + 0x170, *(rbx_1 + 0x1b0))
int64_t rcx_3 = data_14397f978
int64_t rdx_1 = data_14397f9a8
int32_t var_68 = *(rbx_1 + 0x178)
int64_t rax_6 = *(rbx_1 + 0x180)

if (rax_6 != 0)
    rcx_3 = rax_6

int64_t var_48 = *(rbx_1 + 0x190)
int32_t var_64 = *(rbx_1 + 0x198)
int32_t var_60 = *(rbx_1 + 0x188)
int32_t var_5c = *(rbx_1 + 0x18c)
int64_t rax_11 = *(rbx_1 + 0x1a0)
int64_t var_50 = rcx_3
int64_t rcx_4 = rdx_1

if (rax_11 != 0)
    rcx_4 = rax_11

int64_t var_40 = rcx_4
int32_t var_58 = *(rbx_1 + 0x1a8)

if (arg6 == 0xffffffff)
    int64_t var_38_1 = rdx_1
    int32_t var_54_1 = 0
else
    uint32_t var_54 = arg6 u>> 2
    int64_t var_38 = *(*(arg4 + 0x1a0) + 0x110)

int64_t* rcx_6 = data_143f0f180
(*(*rcx_6 + 0xf8))(rcx_6, &arg5, &var_68, &data_143ce9170, 1, 1)
void* rax_17 = arg5
arg_40 = rax_17

if (rax_17 != 0)
    *(rax_17 + 8) += 1

sub_1405d1550(&arg5)
sub_1405d1600(rbx_1 + 0x160, &arg_40)
sub_1405d1550(&arg_40)
int64_t* rbx_2 = arg7
rbx_2[0xf] = rbx_1 + 8
*(rbx_2 + 0x9c) ^= ((zx.d(*(arg4 + 0x39)) * 2) ^ *(rbx_2 + 0x9c)) & 4
int32_t rcx_13 = (zx.d(*(arg4 + 0x39)) & 2) << 0x19 | (*(rbx_2 + 0x9c) & 0xfbffffdf)
*(rbx_2 + 0x9c) = rcx_13
int32_t r11_2 = (zx.d(*(arg4 + 0x35)) & 1) | (rcx_13 & 0xffffe07e)
*(rbx_2 + 0x9c) = r11_2
uint8_t r10 = *(arg4 + 0x36)

if ((r10 & 4) == 0)
label_14084c77e:
    r10 u>>= 4
else
    int64_t* r9 = *(arg4 + 0x70)
    int64_t* rcx_15 = r9
    void* rdx_4 = &r9[sx.q(*(arg4 + 0x78))]
    
    if (r9 == rdx_4)
    label_14084c77e_1:
        r10 u>>= 4
    else
        while (*rcx_15 != *(arg2 + 0x240))
            rcx_15 = &rcx_15[1]
            
            if (rcx_15 == rdx_4)
                goto label_14084c77e_2
        
        if (((rcx_15 - r9) s>> 3).d == 0xffffffff)
        label_14084c77e_2:
            r10 u>>= 4
        else
            r10 = *(arg4 + 0x37)

int32_t rax_29 = ((zx.d(r10) & 7) | 8) << 0xd | (r11_2 & 0xffff1fff)
*(rbx_2 + 0x9c) = rax_29
int32_t rcx_16

if (*(arg4 + 0x35) s< 0 || (*(arg4 + 0x36) & 1) != 0)
    rcx_16 = 0x20000
else
    rcx_16 = 0

*(rbx_2 + 0x9b) = 0
rbx_2[0x10] = r13
*(rbx_2 + 0x9c) = (rax_29 & 0xfffdffff) | rcx_16
int64_t* rax_32 = rbx_2[0xd]

if (rax_32 != 0)
    rbx_2 = rax_32

rbx_2[2] = &data_143a2efe0
rbx_2[8].d = 0
int32_t temp0
int32_t temp1
temp0:temp1 = mulu.dp.d(0xaaaaaaab, *(arg1 + 0xa8))
rbx_2[0xa] = 0
*(rbx_2 + 0x44) = temp0 u>> 1

if (r15 s<= 0)
    r15 = 0

rbx_2[9].d = r15
void** result

if (((*(arg1 + 0xa0) u>> 2).b & 1) == 0)
    result = sub_140765120(arg4)
else
    result = *(arg4 + 0x140)

*rbx_2 = result

if (arg6 != 0xffffffff)
    rbx_2[7].d = arg6
    result = *(*(arg4 + 0x1a0) + 0x100)
    rbx_2[6] = result
    *(rbx_2 + 0x44) = 0

if (*(arg1 + 0x240) == 8)
    result = &data_143a2eff8
    rbx_2[2] = &data_143a2eff8

return result
