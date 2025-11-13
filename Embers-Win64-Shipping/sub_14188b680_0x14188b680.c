// 函数: sub_14188b680
// 地址: 0x14188b680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
int64_t rax_1 = __security_cookie ^ &var_188
int64_t* rdi = arg1
void* rax_2 = sub_140cde0b0()
sub_140d19010(rax_2, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
void* rsi = nullptr
int64_t var_130 = 0
void* rax_4 = sub_140d2dfc0(sub_1418add00(), rax_2, 0, 0, 0, 0, 0, 0, 0)
int32_t rax_5 = *(rax_4 + 0xc)
void* const rax_12

if (rax_5 s>= data_143e1d9b4)
    rax_12 = nullptr
else
    int16_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rax_5)
    uint32_t rdx_2 = zx.d(temp0_1)
    int32_t rax_7 = temp1_1 + rdx_2
    rax_12 = *(data_143e1d9a0 + (sx.q(rax_7 s>> 0x10) << 3)) + sx.q(zx.d(rax_7.w) - rdx_2) * 0x18

*(rax_12 + 8) |= 0x40000000
(*(*rdi + 0xe0))(rdi, 0x1b8)

if ((rdi[5].b & 1) == 0)
    *(rdi + 0x29) |= 1
else
    (*(*rax_4 + 0xa0))(rax_4, rdi)
    sub_141834c60(arg2)
    *(arg2 + 8) = zx.d(*(rax_4 + 0x28))
    *(arg2 + 0xc) = *(rax_4 + 0x29)
    *(arg2 + 0x10) = *(rax_4 + 0x2c)
    
    if (arg2 + 0x18 != rax_4 + 0x30)
        int64_t rcx_9 = *(arg2 + 0x18)
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
        
        *(arg2 + 0x18) = *(rax_4 + 0x30)
        *(rax_4 + 0x30) = 0
        *(arg2 + 0x20) = *(rax_4 + 0x38)
        *(arg2 + 0x24) = *(rax_4 + 0x3c)
        *(rax_4 + 0x38) = 0
    
    if (arg2 + 0x28 != rax_4 + 0x40)
        int64_t rcx_10 = *(arg2 + 0x28)
        
        if (rcx_10 != 0)
            sub_140a74f90(rcx_10)
        
        *(arg2 + 0x28) = *(rax_4 + 0x40)
        *(rax_4 + 0x40) = 0
        *(arg2 + 0x30) = *(rax_4 + 0x48)
        *(arg2 + 0x34) = *(rax_4 + 0x4c)
        *(rax_4 + 0x48) = 0
    
    if (arg2 + 0x38 != rax_4 + 0x50)
        int64_t rcx_11 = *(arg2 + 0x38)
        
        if (rcx_11 != 0)
            sub_140a74f90(rcx_11)
        
        *(arg2 + 0x38) = *(rax_4 + 0x50)
        *(rax_4 + 0x50) = 0
        *(arg2 + 0x40) = *(rax_4 + 0x58)
        *(arg2 + 0x44) = *(rax_4 + 0x5c)
        *(rax_4 + 0x58) = 0
    
    if (arg2 + 0x48 != rax_4 + 0x60)
        int64_t rcx_12 = *(arg2 + 0x48)
        
        if (rcx_12 != 0)
            sub_140a74f90(rcx_12)
        
        *(arg2 + 0x48) = *(rax_4 + 0x60)
        *(rax_4 + 0x60) = 0
        *(arg2 + 0x50) = *(rax_4 + 0x68)
        *(arg2 + 0x54) = *(rax_4 + 0x6c)
        *(rax_4 + 0x68) = 0
    
    sub_141823570(arg2 + 0x58, rax_4 + 0x70)
    
    if (arg2 + 0xa8 != rax_4 + 0xc0)
        int64_t rcx_14 = *(arg2 + 0xa8)
        
        if (rcx_14 != 0)
            sub_140a74f90(rcx_14)
        
        *(arg2 + 0xa8) = *(rax_4 + 0xc0)
        *(rax_4 + 0xc0) = 0
        *(arg2 + 0xb0) = *(rax_4 + 0xc8)
        *(arg2 + 0xb4) = *(rax_4 + 0xcc)
        *(rax_4 + 0xc8) = 0
    
    if (arg2 + 0xb8 != rax_4 + 0xd0)
        int64_t rcx_15 = *(arg2 + 0xb8)
        
        if (rcx_15 != 0)
            sub_140a74f90(rcx_15)
        
        *(arg2 + 0xb8) = *(rax_4 + 0xd0)
        *(rax_4 + 0xd0) = 0
        *(arg2 + 0xc0) = *(rax_4 + 0xd8)
        *(arg2 + 0xc4) = *(rax_4 + 0xdc)
        *(rax_4 + 0xd8) = 0
    
    if (arg2 + 0xc8 != rax_4 + 0xe0)
        int64_t rcx_16 = *(arg2 + 0xc8)
        
        if (rcx_16 != 0)
            sub_140a74f90(rcx_16)
        
        *(arg2 + 0xc8) = *(rax_4 + 0xe0)
        *(rax_4 + 0xe0) = 0
        *(arg2 + 0xd0) = *(rax_4 + 0xe8)
        *(arg2 + 0xd4) = *(rax_4 + 0xec)
        *(rax_4 + 0xe8) = 0
    
    int32_t rax_39 = *(rax_4 + 0xf8)
    int32_t i_4 = *(arg2 + 0x100)
    void* r14_1 = *(arg2 + 0xf8)
    
    if (i_4 != 0)
        int32_t i
        
        do
            int64_t rcx_17 = *(r14_1 + 0x48)
            
            if (rcx_17 != 0)
                sub_140a74f90(rcx_17)
            
            int32_t j_1 = *(r14_1 + 0x40)
            int64_t* rbx_8 = *(r14_1 + 0x38)
            
            if (j_1 != 0)
                int32_t j
                
                do
                    int64_t rcx_18 = *rbx_8
                    
                    if (rcx_18 != 0)
                        sub_140a74f90(rcx_18)
                    
                    rbx_8 = &rbx_8[2]
                    j = j_1
                    j_1 -= 1
                while (j != 1)
                rbx_8 = *(r14_1 + 0x38)
            
            if (rbx_8 != 0)
                sub_140a74f90(rbx_8)
            
            int64_t rcx_20 = *(r14_1 + 0x10)
            
            if (rcx_20 != 0)
                sub_140a74f90(rcx_20)
            
            int64_t rcx_21 = *r14_1
            
            if (rcx_21 != 0)
                sub_140a74f90(rcx_21)
            
            r14_1 += 0x60
            i = i_4
            i_4 -= 1
        while (i != 1)
    
    *(arg2 + 0x100) = 0
    
    if (*(arg2 + 0x104) != rax_39)
        sub_14090a730(arg2 + 0xf8, rax_39)
    
    int64_t* rbp_1 = *(rax_4 + 0xf0)
    void* r14_3 = sx.q(*(rax_4 + 0xf8)) * 0x68 + rbp_1
    int64_t i_3
    int64_t var_a8
    
    while (rbp_1 != r14_3)
        uint64_t* rax_41 = sub_141884ce0(&var_a8, rbp_1)
        uint64_t rcx_24 = *rax_41
        __builtin_memset(rax_41, 0, 0x20)
        int32_t rcx_25 = rax_41[1].d
        int32_t rcx_26 = *(rax_41 + 0xc)
        int64_t rcx_27 = rax_41[2]
        int32_t rcx_28 = rax_41[3].d
        int32_t rcx_29 = *(rax_41 + 0x1c)
        int128_t zmm0_1 = *(rax_41 + 0x20)
        int32_t rcx_30 = rax_41[6].d
        char rcx_31 = *(rax_41 + 0x34)
        int64_t rcx_32 = rax_41[7]
        __builtin_memset(&rax_41[7], 0, 0x20)
        int32_t rcx_33 = rax_41[8].d
        int32_t rcx_34 = *(rax_41 + 0x44)
        int64_t rcx_35 = rax_41[9]
        int32_t rcx_36 = rax_41[0xa].d
        var_130.d = *(rax_41 + 0x54)
        i_3 = rax_41[0xb]
        int64_t var_60
        
        if (var_60 != 0)
            sub_140a74f90(var_60)
        
        int32_t i_6
        int32_t i_5 = i_6
        int64_t* var_70
        int64_t* rbx_9 = var_70
        
        if (i_5 != 0)
            int32_t i_1
            
            do
                int64_t rcx_39 = *rbx_9
                
                if (rcx_39 != 0)
                    sub_140a74f90(rcx_39)
                
                rbx_9 = &rbx_9[2]
                i_1 = i_5
                i_5 -= 1
            while (i_1 != 1)
            rbx_9 = var_70
        
        if (rbx_9 != 0)
            sub_140a74f90(rbx_9)
        
        int64_t var_98
        
        if (var_98 != 0)
            sub_140a74f90(var_98)
        
        int64_t rcx_42 = var_a8
        
        if (rcx_42 != 0)
            sub_140a74f90(rcx_42)
        
        int64_t rbx_10 = sx.q(*(arg2 + 0x100))
        int32_t rax_43 = (rbx_10 + 1).d
        *(arg2 + 0x100) = rax_43
        
        if (rax_43 s> *(arg2 + 0x104))
            sub_14090a6a0(arg2 + 0xf8)
        
        rbp_1 = &rbp_1[0xd]
        uint64_t* rcx_46 = rbx_10 * 0x60 + *(arg2 + 0xf8)
        *rcx_46 = rcx_24
        rcx_46[1].d = rcx_25
        *(rcx_46 + 0xc) = rcx_26
        rcx_46[2] = rcx_27
        rcx_46[3].d = rcx_28
        *(rcx_46 + 0x1c) = rcx_29
        *(rcx_46 + 0x20) = zmm0_1
        rcx_46[6].d = rcx_30
        *(rcx_46 + 0x34) = rcx_31
        rcx_46[7] = rcx_32
        rcx_46[8].d = rcx_33
        *(rcx_46 + 0x44) = rcx_34
        rcx_46[9] = rcx_35
        rcx_46[0xa].d = rcx_36
        *(rcx_46 + 0x54) = var_130.d
        rcx_46[0xb] = i_3
    
    int32_t rdx_9 = *(rax_4 + 0x108)
    *(arg2 + 0xf0) = 0
    
    if (*(arg2 + 0xf4) != rdx_9)
        sub_1405a52a0(arg2 + 0xe8, rdx_9)
    
    int128_t* rdi_8 = *(rax_4 + 0x100)
    void* r14_6 = &rdi_8[sx.q(*(rax_4 + 0x108)) * 4]
    
    while (rdi_8 != r14_6)
        int128_t* rax_59 = sub_141884c50(&var_a8, rdi_8)
        int64_t rbp_2 = sx.q(*(arg2 + 0xf0))
        int128_t zmm0_2 = *rax_59
        int128_t zmm1_1 = rax_59[1]
        int128_t zmm2_1 = rax_59[2]
        int128_t zmm3_1 = rax_59[3]
        int32_t rax_60 = (rbp_2 + 1).d
        *(arg2 + 0xf0) = rax_60
        i_3.o = zmm1_1
        int64_t var_d8
        var_d8.o = zmm2_1
        int64_t var_e8
        var_e8.o = zmm3_1
        
        if (rax_60 s> *(arg2 + 0xf4))
            sub_1405c4fe0(arg2 + 0xe8)
            zmm1_1 = i_3.o
            zmm2_1 = var_d8.o
            zmm3_1 = var_e8.o
        
        int64_t rax_61 = *(arg2 + 0xe8)
        int64_t rcx_51 = rbp_2 << 6
        rdi_8 = &rdi_8[4]
        *(rcx_51 + rax_61) = zmm0_2
        *(rcx_51 + rax_61 + 0x10) = zmm1_1
        *(rcx_51 + rax_61 + 0x20) = zmm2_1
        *(rcx_51 + rax_61 + 0x30) = zmm3_1
    
    char rdx_13 = sub_1405e1ad0(arg2 + 0x108, *(rax_4 + 0x118))
    int64_t i_2 = *(rax_4 + 0x110)
    
    for (int64_t rdi_11 = (sx.q(*(rax_4 + 0x118)) << 5) + i_2; i_2 != rdi_11; i_2 += 0x20)
        i_3 = i_2
        int64_t var_100_1 = i_2 + 0x10
        rdx_13 = sub_14185a5b0(arg2 + 0x108, &var_130, &i_3, nullptr)
    
    if (*(arg2 + 8) == 0xffffffff)
        *(arg2 + 8) = 9
    
    sub_141845210(arg2 + 0xf8, rdx_13)
    sub_141840c70(arg2)
    rdi = arg1

*(rax_4 + 0x38) = 0

if (*(rax_4 + 0x3c) != 0)
    sub_1405947f0(rax_4 + 0x30, 0)

*(rax_4 + 0x48) = 0

if (*(rax_4 + 0x4c) != 0)
    sub_1405947f0(rax_4 + 0x40, 0)

*(rax_4 + 0x58) = 0

if (*(rax_4 + 0x5c) != 0)
    sub_1405947f0(rax_4 + 0x50, 0)

*(rax_4 + 0x68) = 0

if (*(rax_4 + 0x6c) != 0)
    sub_1405947f0(rax_4 + 0x60, 0)

sub_14059a980(rax_4 + 0x70, 0)
*(rax_4 + 0xc8) = 0

if (*(rax_4 + 0xcc) != 0)
    sub_1405947f0(rax_4 + 0xc0, 0)

*(rax_4 + 0xd8) = 0

if (*(rax_4 + 0xdc) != 0)
    sub_1405947f0(rax_4 + 0xd0, 0)

*(rax_4 + 0xe8) = 0

if (*(rax_4 + 0xec) != 0)
    sub_1405947f0(rax_4 + 0xe0, 0)

sub_14187f750(rax_4 + 0xf0, 0)
*(rax_4 + 0x108) = 0

if (*(rax_4 + 0x10c) != 0)
    sub_1405a52a0(rax_4 + 0x100, 0)

sub_140ba25b0(rax_4 + 0x110, 0)
int32_t rax_63 = *(rax_4 + 0xc)

if (rax_63 s< data_143e1d9b4)
    int16_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rax_63)
    uint32_t rdx_16 = zx.d(temp2_1)
    int32_t rax_65 = temp3_1 + rdx_16
    rsi = *(data_143e1d9a0 + (sx.q(rax_65 s>> 0x10) << 3)) + sx.q(zx.d(rax_65.w) - rdx_16) * 0x18

*(rsi + 8) &= 0xbfffffff
char result = not.b(*(rdi + 0x29)) & 1
__security_check_cookie(rax_1 ^ &var_188)
return result
