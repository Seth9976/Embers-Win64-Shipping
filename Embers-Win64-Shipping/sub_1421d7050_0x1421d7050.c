// 函数: sub_1421d7050
// 地址: 0x1421d7050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].b = 0
int64_t rbx = 0
*arg1 = &data_142d44d70
int64_t arg_8

if (data_143de5432 == 0)
    void* rcx = data_143e1a338
    
    if (rcx == 0)
        void* rax_1 = sub_140cde0b0()
        sub_140d19010(rax_1, 
            NewObject with empty name can't be used to create default subobjects (inside of UObject "
        "derived class constructor) as it produces incon")
        arg_8 = 0
        void* rax_3 = sub_140d2dfc0(sub_140baa6d0(), rax_1, 0, 0, 0, 0, 0, 0, 0)
        data_143e1a338 = rax_3
        int32_t rax_4 = *(rax_3 + 0xc)
        void* const rax_11
        
        if (rax_4 s>= data_143e1d9b4)
            rax_11 = nullptr
        else
            int16_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(rax_4)
            uint32_t rdx_2 = zx.d(temp0_1)
            int32_t rax_6 = temp1_1 + rdx_2
            rax_11 =
                *(data_143e1d9a0 + (sx.q(rax_6 s>> 0x10) << 3)) + sx.q(zx.d(rax_6.w) - rdx_2) * 0x18
        
        *(rax_11 + 8) |= 0x40000000
        rcx = data_143e1a338
    
    sub_140b9aa70(rcx, arg1)
    arg1[1].b = 1

arg1[2] = arg2
*arg1 = &data_1433026b8
__builtin_memset(&arg1[3], 0, 0x60)
arg1[0x10] = 0
arg1[0x15] = 0
arg1[0x16].d = 0
*(arg1 + 0xb4) = 8
int64_t rdi_2 = sx.q(arg1[4].d)

if (rdi_2.d s< 7)
    arg1[4].d = 7
    int32_t i_2 = 7 - rdi_2.d
    
    if (*(arg1 + 0x24) s< 7)
        sub_1405c4f50(&arg1[3])
    
    void*** rdi_5 = &arg1[3][rdi_2 * 6]
    
    if (i_2 != 0)
        int32_t i
        
        do
            sub_1423b9d00(rdi_5)
            *rdi_5 = &data_143302698
            rdi_5 = &rdi_5[6]
            i = i_2
            i_2 -= 1
        while (i != 1)
        rbx = 0
else if (rdi_2.d s> 7)
    sub_1421f90c0(&arg1[3], 7, (rdi_2 - 7).d, 1)

int32_t i_1 = 0
arg1[0xf].d = data_143a2ef90

if (arg1[4].d s> 0)
    do
        void* rcx_12 = &arg1[3][sx.q(i_1) * 6]
        char rax_14 = *(rcx_12 + 0xa) & 0xf7
        *(rcx_12 + 8) = i_1.b
        *(rcx_12 + 9) = i_1.b
        *(rcx_12 + 0xa) = rax_14 | 0x16
        *(rcx_12 + 0x28) = arg1
        sub_1423c6c10(rcx_12, *(arg2 + 0x30))
        int64_t rbp_1 = sx.q(arg1[0xa].d)
        int32_t rax_15 = (rbp_1 + 1).d
        arg1[0xa].d = rax_15
        
        if (rax_15 s> *(arg1 + 0x54))
            sub_1405a4df0(&arg1[9])
        
        int64_t rax_16 = arg1[9]
        int64_t rcx_15 = rbp_1 * 3
        *(rax_16 + (rcx_15 << 3)) = arg1
        *(rax_16 + (rcx_15 << 3) + 8) = 0
        *(rax_16 + (rcx_15 << 3) + 0x10) = 0
        int64_t rbp_2 = sx.q(arg1[0xc].d)
        int32_t rax_17 = (rbp_2 + 1).d
        arg1[0xc].d = rax_17
        
        if (rax_17 s> *(arg1 + 0x64))
            sub_1405a4df0(&arg1[0xb])
        
        int64_t rax_18 = arg1[0xb]
        int64_t rcx_18 = rbp_2 * 3
        i_1 += 1
        *(rax_18 + (rcx_18 << 3)) = arg1
        *(rax_18 + (rcx_18 << 3) + 8) = 0
        *(rax_18 + (rcx_18 << 3) + 0x10) = 0
    while (i_1 s< arg1[4].d)

sub_140d21f60()
int64_t* rax_19 = sub_140a84c80(0, 0x30, 0)

if (rax_19 != 0)
    rax_19[1] = arg1
    *rax_19 = &data_142d3fe58
    rax_19[2] = sub_1421f5820
    rax_19[4] = sub_140a387b0()
    *rax_19 = &data_142d3feb0

if (rax_19 != 0)
    sub_140599630(&data_1439aad48, 1)
    int64_t* rax_22 = (*(*rax_19 + 0x30))(rax_19, &arg_8)
    int64_t r14_1 = sx.q(data_1439aad50)
    rbx = *rax_22
    int32_t rax_23 = (r14_1 + 1).d
    data_1439aad50 = rax_23
    
    if (rax_23 s> data_1439aad54)
        sub_1405a4f90(&data_1439aad48)
    
    void** rax_26 = (r14_1 << 4) + data_1439aad48
    *rax_26 = rax_19
    rax_26[1].d = 3

arg1[0x10] = rbx
return arg1
