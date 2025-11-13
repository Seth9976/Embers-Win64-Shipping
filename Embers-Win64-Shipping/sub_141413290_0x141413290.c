// 函数: sub_141413290
// 地址: 0x141413290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0x1d68) s> 0)
    int64_t* rsi_1 = nullptr
    
    do
        int64_t* rcx = *(rsi_1 + *(arg1 + 0x1d60))
        (*(*rcx + 8))(rcx)
        i += 1
        rsi_1 = &rsi_1[1]
    while (i s< *(arg1 + 0x1d68))

int64_t* rcx_1 = *(arg1 + 0x5160)

if (rcx_1 != 0)
    (*(*rcx_1 + 0x10))(rcx_1)

for (int32_t i_1 = 0; i_1 s< 0x12; i_1 += 1)
    sub_1412e9820(zx.q(i_1) * 0x1d0 + 0x2740 + arg1)

sub_14141d6f0(arg1 + 0x1758, 0)
int32_t i_14 = *(arg1 + 0x17a0)

if (i_14 s> 0)
    int64_t r8_1 = 0
    uint64_t i_13 = zx.q(i_14)
    uint64_t i_2
    
    do
        void* rcx_6 = *(arg1 + 0x1798)
        void* rax_5 = arg1 + 0x1790
        int64_t rdx_3 = (sx.q(*(arg1 + 0x17a0)) - 1) & r8_1
        
        if (rcx_6 != 0)
            rax_5 = rcx_6
        
        r8_1 += 1
        *(rax_5 + (rdx_3 << 2)) = 0xffffffff
        i_2 = i_13
        i_13 -= 1
    while (i_2 != 1)

sub_1405ec8a0(arg1 + 0x5230)
sub_1405d1550(arg1 + 0x5228)
sub_14081c9d0(arg1 + 0x5220)
sub_1405ec8a0(arg1 + 0x5218)
int64_t* rcx_11 = *(arg1 + 0x5210)

if (rcx_11 != 0)
    (*(*rcx_11 + 0x38))(rcx_11)

int64_t* rcx_12 = *(arg1 + 0x5208)

if (rcx_12 != 0)
    rcx_12[9].d -= 1
    
    if (rcx_12[9].d == 1)
        sub_140a2f6e0(rcx_12)

int64_t rcx_13 = *(arg1 + 0x51f8)

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

sub_1405d1550(arg1 + 0x51e8)
sub_1419948a0(arg1 + 0x51d8)
int32_t i_8 = *(arg1 + 0x51d0)

if (i_8 != 0)
    void* rbx_1 = *(arg1 + 0x51c8) + 0x78
    int32_t i_3
    
    do
        int64_t rcx_16 = *(rbx_1 + 0x10)
        
        if (rcx_16 != 0)
            sub_140a74f90(rcx_16)
        
        sub_1405ec8a0(rbx_1)
        int64_t rcx_18 = *(rbx_1 - 0x28)
        
        if (rcx_18 != 0)
            sub_140a74f90(rcx_18)
        
        rbx_1 += 0xa0
        i_3 = i_8
        i_8 -= 1
    while (i_3 != 1)

sub_141412f70(arg1 + 0x51b0)
sub_140837d00(arg1 + 0x5190)
sub_1405ec8a0(arg1 + 0x51a0)
sub_1405d1550(arg1 + 0x5198)
sub_14081c9d0(arg1 + 0x5190)
sub_1405ec8a0(arg1 + 0x5188)
sub_1405d1550(arg1 + 0x5180)
sub_1405ec8a0(arg1 + 0x5178)
*(arg1 + 0x5148) = 0
int64_t rcx_27 = *(arg1 + 0x5140)

if (rcx_27 != 0)
    sub_140a74f90(rcx_27)

sub_14100e4f0(arg1 + 0x5100)
int64_t* rcx_29 = *(arg1 + 0x5080)

if (rcx_29 != 0)
    (*(*rcx_29 + 0x38))(rcx_29)

sub_1405d1550(arg1 + 0x5078)
sub_1413ca320(arg1 + 0x5070, *(arg1 + 0x5070))
int64_t* rcx_32 = *(arg1 + 0x5060)

if (rcx_32 != 0)
    (*(*rcx_32 + 0x38))(rcx_32)

int64_t* rcx_33 = *(arg1 + 0x5058)

if (rcx_33 != 0)
    (*(*rcx_33 + 0x38))(rcx_33)

sub_1405d1550(arg1 + 0x5050)
int64_t* rcx_35 = *(arg1 + 0x5038)

if (rcx_35 != 0)
    (*(*rcx_35 + 0x38))(rcx_35)

int64_t* rcx_36 = *(arg1 + 0x5030)

if (rcx_36 != 0)
    (*(*rcx_36 + 0x38))(rcx_36)

sub_1405d1550(arg1 + 0x5028)
int32_t i_9 = *(arg1 + 0x5010)
int64_t* rbx_2 = *(arg1 + 0x5008)

if (i_9 != 0)
    int32_t i_4
    
    do
        sub_1413de930(rbx_2)
        rbx_2 = &rbx_2[5]
        i_4 = i_9
        i_9 -= 1
    while (i_4 != 1)

sub_1405d1550(arg1 + 0x5000)
int32_t i_10 = *(arg1 + 0x4fe8)
int64_t* rbx_3 = *(arg1 + 0x4fe0)

if (i_10 != 0)
    int32_t i_5
    
    do
        sub_1413de930(rbx_3)
        rbx_3 = &rbx_3[5]
        i_5 = i_10
        i_10 -= 1
    while (i_5 != 1)

sub_1413c4c10(arg1 + 0x4990)
int32_t i_11 = *(arg1 + 0x48a0)
int64_t* rbx_4 = *(arg1 + 0x4898)

if (i_11 != 0)
    int32_t i_6
    
    do
        sub_140b16b40(rbx_4, 0)
        rbx_4 = &rbx_4[5]
        i_6 = i_11
        i_11 -= 1
    while (i_6 != 1)

sub_14141d630(arg1 + 0x47f8, 0)
int64_t rcx_44 = *(arg1 + 0x47f8)

if (rcx_44 != 0)
    sub_140a74f90(rcx_44)

void* rbx_5 = arg1 + 0x47e0
uint64_t* rsi_2 = *rbx_5

if (rsi_2 != 0)
    sub_1410eb840(rsi_2)
    j_sub_140a74f90(rsi_2)

int64_t i_12 = 0x12
int64_t i_7

do
    rbx_5 -= 0x1d0
    sub_14125cfd0(rbx_5)
    i_7 = i_12
    i_12 -= 1
while (i_7 != 1)
sub_1411938c0(arg1 + 0x2720)
sub_1405ec8a0(arg1 + 0x2730)
sub_1405d1550(arg1 + 0x2728)
sub_1405d1550(arg1 + 0x2720)
sub_140837d00(arg1 + 0x2700)
sub_1405ec8a0(arg1 + 0x2710)
sub_1405d1550(arg1 + 0x2708)
sub_14081c9d0(arg1 + 0x2700)
int64_t rcx_56 = *(arg1 + 0x26f0)

if (rcx_56 != 0)
    sub_140a74f90(rcx_56)

sub_1422dbe10(arg1 + 0x2260)
sub_1422dbe10(arg1 + 0x1dd0)
int64_t rcx_59 = *(arg1 + 0x1d60)

if (rcx_59 != 0)
    sub_140a74f90(rcx_59)

sub_141412b90(arg1 + 0x1d50)
sub_141412b90(arg1 + 0x1d40)
sub_141412c30(arg1 + 0x1b10)
sub_141412c30(arg1 + 0x18e0)
sub_141412b10(arg1 + 0x17c8)
sub_141412b10(arg1 + 0x17b8)
*(arg1 + 0x17a0) = 0
sub_14141d6f0(arg1 + 0x1758, 0)
sub_1405d1550(arg1 + 0x1650)
sub_1405d1550(arg1 + 0x1648)
j_sub_140a74f90(*(arg1 + 0x15b0))
return sub_1413c58e0(arg1) __tailcall
