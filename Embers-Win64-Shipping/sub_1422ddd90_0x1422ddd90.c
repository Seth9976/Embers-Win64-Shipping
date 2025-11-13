// 函数: sub_1422ddd90
// 地址: 0x1422ddd90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rcx = arg1[6].b

if (rcx - 1 u<= 1 || rcx u>= 6)
    if (*arg4 != 0)
        void* rax_36 = arg4[2]
        void* rcx_24 = &arg4[4]
        
        if (rax_36 != 0)
            rcx_24 = rax_36
        
        (*(*rcx_24 + 0x10))(rcx_24)
    
    return 0

arg1[6].b = 1

if (arg3 != 0)
    arg1[5] = arg3
    int32_t rax_11 = *(arg3 + 0xc)
    void* const rax_18
    
    if (rax_11 s>= data_143e1d9b4)
        rax_18 = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_11)
        uint32_t rdx_4 = zx.d(temp0_1)
        int32_t rax_13 = temp1_1 + rdx_4
        rax_18 =
            *(data_143e1d9a0 + (sx.q(rax_13 s>> 0x10) << 3)) + sx.q(zx.d(rax_13.w) - rdx_4) * 0x18
    
    arg1[9].b = (*(rax_18 + 8) u>> 0x1e).b & 1
    int32_t rax_21 = *(arg3 + 0xc)
    void* const rax_28
    
    if (rax_21 s>= data_143e1d9b4)
        rax_28 = nullptr
    else
        int16_t temp4_1
        int32_t temp5_1
        temp4_1:temp5_1 = sx.q(rax_21)
        uint32_t rdx_7 = zx.d(temp4_1)
        int32_t rax_23 = temp5_1 + rdx_7
        rax_28 =
            *(data_143e1d9a0 + (sx.q(rax_23 s>> 0x10) << 3)) + sx.q(zx.d(rax_23.w) - rdx_7) * 0x18
    
    *(rax_28 + 8) |= 0x40000000
    void* rax_29 = sub_1423dcff0(data_143f5b298)
    
    if (rax_29 != 0)
        sub_141e89100(rax_29, arg1[5], nullptr)
else
    void* rax_2 = sub_140626600(sub_140cde0b0())
    arg1[5] = rax_2
    int32_t rax_3 = *(rax_2 + 0xc)
    
    if (rax_3 s>= data_143e1d9b4)
        *8 |= 0x40000000
    else
        int16_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rax_3)
        uint32_t rdx_1 = zx.d(temp2_1)
        int32_t rax_5 = temp3_1 + rdx_1
        int64_t rdx_2 = sx.q(zx.d(rax_5.w) - rdx_1) * 3
        int64_t rcx_5 = *(data_143e1d9a0 + (sx.q(rax_5 s>> 0x10) << 3))
        *(rcx_5 + (rdx_2 << 3) + 8) |= 0x40000000

sub_1422dbf70(arg1, arg2)

if (arg1[3].d s> 2)
    sub_1422eba20(arg1, 2)

void*** rax_30 = j_sub_140a82f30(0xb0)
void*** rdi_1 = rax_30

if (rax_30 == 0)
    rdi_1 = nullptr
else
    int64_t var_48 = 0
    *rdi_1 = &data_143321810
    int64_t rcx_18 = *arg4
    int64_t var_58 = rcx_18
    
    if (rcx_18 != 0)
        void* rdx_11 = arg4[2]
        void* rcx_19 = &arg4[4]
        
        if (rdx_11 != 0)
            rcx_19 = rdx_11
        
        (**rcx_19)(rcx_19, &var_48)
    
    sub_1422d62b0(&rdi_1[2], arg1, 1, &var_58)
    rdi_1[0x12].d = 0
    rdi_1[0x13] = 0
    rdi_1[0x14] = 0

void*** rcx_21 = arg1[0xa]
void*** rax_32 = rcx_21

if (rcx_21 != rdi_1)
    arg1[0xa] = rdi_1
    rax_32 = rdi_1
    
    if (rcx_21 != 0)
        (*rcx_21)[2](rcx_21, 1)
        rax_32 = arg1[0xa]

sub_1422f56f0(rax_32, data_143db7ac8)

if (*arg4 != 0)
    void* rax_34 = arg4[2]
    void* rcx_23 = &arg4[4]
    
    if (rax_34 != 0)
        rcx_23 = rax_34
    
    (*(*rcx_23 + 0x10))(rcx_23)

uint64_t result
result.b = 1
return result
