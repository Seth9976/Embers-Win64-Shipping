// 函数: sub_140e54f20
// 地址: 0x140e54f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140e55320(arg1, arg2)

if (&arg2[0x18] != &arg1[0x18])
    if (arg1[0x20] != 0)
        arg1[0x20] = 0
    
    if (arg2[0x20] != 0)
        *(arg1 + 0x18) = *(arg2 + 0x18)
        arg1[0x20] = 1

int64_t* rcx_1 = *(arg2 + 0x30)
int64_t var_28 = *(arg2 + 0x28)

if (rcx_1 != 0)
    *(rcx_1 + 0xc) += 1

if (&var_28 != &arg1[0x28])
    var_28.o = *(arg1 + 0x28)
    *(arg1 + 0x28) = var_28.o

if (rcx_1 != 0)
    int32_t temp0_1 = *(rcx_1 + 0xc)
    *(rcx_1 + 0xc) -= 1
    
    if (temp0_1 == 1)
        (*(*rcx_1 + 8))(rcx_1, 1)

int64_t* rcx_2 = *(arg2 + 0x40)
var_28 = *(arg2 + 0x38)

if (rcx_2 != 0)
    *(rcx_2 + 0xc) += 1

if (&var_28 != &arg1[0x38])
    var_28.o = *(arg1 + 0x38)
    *(arg1 + 0x38) = var_28.o

if (rcx_2 != 0)
    int32_t temp1_1 = *(rcx_2 + 0xc)
    *(rcx_2 + 0xc) -= 1
    
    if (temp1_1 == 1)
        (*(*rcx_2 + 8))(rcx_2, 1)

int64_t* rcx_3 = *(arg2 + 0x50)
var_28 = *(arg2 + 0x48)

if (rcx_3 != 0)
    *(rcx_3 + 0xc) += 1

if (&var_28 != &arg1[0x48])
    var_28.o = *(arg1 + 0x48)
    *(arg1 + 0x48) = var_28.o

if (rcx_3 != 0)
    int32_t temp2_1 = *(rcx_3 + 0xc)
    *(rcx_3 + 0xc) -= 1
    
    if (temp2_1 == 1)
        (*(*rcx_3 + 8))(rcx_3, 1)

int64_t* rcx_4 = *(arg2 + 0x60)
var_28 = *(arg2 + 0x58)

if (rcx_4 != 0)
    *(rcx_4 + 0xc) += 1

if (&var_28 != &arg1[0x58])
    var_28.o = *(arg1 + 0x58)
    *(arg1 + 0x58) = var_28.o

if (rcx_4 != 0)
    int32_t temp3_1 = *(rcx_4 + 0xc)
    *(rcx_4 + 0xc) -= 1
    
    if (temp3_1 == 1)
        (*(*rcx_4 + 8))(rcx_4, 1)

int64_t* rcx_5 = *(arg2 + 0x70)
var_28 = *(arg2 + 0x68)

if (rcx_5 != 0)
    *(rcx_5 + 0xc) += 1

if (&var_28 != &arg1[0x68])
    var_28.o = *(arg1 + 0x68)
    *(arg1 + 0x68) = var_28.o

if (rcx_5 != 0)
    int32_t temp4_1 = *(rcx_5 + 0xc)
    *(rcx_5 + 0xc) -= 1
    
    if (temp4_1 == 1)
        (*(*rcx_5 + 8))(rcx_5, 1)

int64_t* rcx_6 = *(arg2 + 0x80)
var_28 = *(arg2 + 0x78)

if (rcx_6 != 0)
    *(rcx_6 + 0xc) += 1

if (&var_28 != &arg1[0x78])
    var_28.o = *(arg1 + 0x78)
    *(arg1 + 0x78) = var_28.o

if (rcx_6 != 0)
    int32_t temp5_1 = *(rcx_6 + 0xc)
    *(rcx_6 + 0xc) -= 1
    
    if (temp5_1 == 1)
        (*(*rcx_6 + 8))(rcx_6, 1)

sub_140627710(&arg1[0x88], &arg2[0x88])
int64_t* rdi = *(arg2 + 0xa8)
var_28 = *(arg2 + 0xa0)

if (rdi != 0)
    rdi[1].d += 1

if (&var_28 != &arg1[0xa0])
    var_28.o = *(arg1 + 0xa0)
    *(arg1 + 0xa0) = var_28.o

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp7_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*(*rdi + 8))(rdi, 1)

arg1[0xb0] = arg2[0xb0]
arg1[0xb1] = arg2[0xb1]
arg1[0xb2] = arg2[0xb2]
arg1[0xb3] = arg2[0xb3]
*(arg1 + 0xb4) ^= (*(arg1 + 0xb4) ^ *(arg2 + 0xb4)) & 1
int32_t rax_24 = *(arg1 + 0xb4)
int32_t rcx_14 = ((rax_24 ^ *(arg2 + 0xb4)) & 2) ^ rax_24
*(arg1 + 0xb4) = rcx_14
int32_t rax_28 = ((rcx_14 ^ *(arg2 + 0xb4)) & 4) ^ rcx_14
*(arg1 + 0xb4) = rax_28
int32_t rcx_18 = ((rax_28 ^ *(arg2 + 0xb4)) & 8) ^ rax_28
*(arg1 + 0xb4) = rcx_18
int32_t rax_32 = ((rcx_18 ^ *(arg2 + 0xb4)) & 0x10) ^ rcx_18
*(arg1 + 0xb4) = rax_32
int32_t rcx_22 = ((rax_32 ^ *(arg2 + 0xb4)) & 0x20) ^ rax_32
*(arg1 + 0xb4) = rcx_22
int32_t rdx_10 = ((rcx_22 ^ *(arg2 + 0xb4)) & 0x40) ^ rcx_22
*(arg1 + 0xb4) = rdx_10
*(arg1 + 0xb4) = ((rdx_10 ^ *(arg2 + 0xb4)) & 0x80) ^ rdx_10
return arg1
