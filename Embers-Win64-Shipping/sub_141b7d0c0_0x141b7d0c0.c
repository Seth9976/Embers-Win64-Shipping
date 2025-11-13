// 函数: sub_141b7d0c0
// 地址: 0x141b7d0c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141b82ae0(arg1, arg2)
*arg1 = &data_143075f78
__builtin_memset(&arg1[0x21], 0, 0x20)
sub_140dd6ec0(&arg1[0x25])
sub_140ddc670(&arg1[0xa3])
arg1[0x19c] = 0
arg1[0x19d] = 0
sub_140d93b50(&arg1[0x19f])
__builtin_memcpy(&arg1[0x1a9], 
    "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00", 0x11)
arg1[0x1ac] = 0
arg1[0x1ad] = 0
sub_140d3a3a0(arg1 + 0xd74, nullptr)
bool cond:0 = data_143f31688 != 0
*(arg1 + 0xd7c) = 0
__builtin_memset(&arg1[0x1b1], 0, 0x70)
int64_t var_a0
int64_t var_90

if (not(cond:0))
    void*** rax_1 = j_sub_140a82f30(0x3f0)
    void*** rsi_1 = rax_1
    
    if (rax_1 == 0)
        rsi_1 = nullptr
    else
        int64_t* rbx_1 = data_143e243c8
        int64_t* rax_2 = sub_140b58170(&var_90, "ComboBox", 1)
        int64_t rdx = data_143e243f8
        int64_t r8_1 = *rax_2
        int64_t rax_3 = *rbx_1
        int64_t var_88_1 = r8_1
        var_a0 = r8_1
        void** rax_4 = (*(rax_3 + 0x88))(rbx_1, rdx)
        void** rbx_2 = rax_4
        
        if (rax_4 == 0)
            sub_140e13110()
            rbx_2 = &data_1439ae780
        
        *rsi_1 = &data_142ec9258
        rsi_1[1] = &data_142ec9240
        sub_14068def0(&rsi_1[2], &rbx_2[2])
        sub_14068e310(&rsi_1[0x51], &rbx_2[0x51])
        rsi_1[0x62] = rbx_2[0x62]
        *(rsi_1 + 0x318) = *(rbx_2 + 0x318)
        sub_14068e310(&rsi_1[0x65], &rbx_2[0x65])
        *(rsi_1 + 0x3b0) = *(rbx_2 + 0x3b0)
        *(rsi_1 + 0x3c0) = *(rbx_2 + 0x3c0)
        rsi_1[0x7a] = rbx_2[0x7a]
        *(rsi_1 + 0x3d8) = *(rbx_2 + 0x3d8)
        rsi_1[0x7d] = rbx_2[0x7d]
    
    data_143f31688 = rsi_1
    sub_141bf3c80(&rsi_1[7])
    sub_141bf3c80(&rsi_1[0x18])
    sub_141bf3c80(&rsi_1[0x29])
    sub_141bf3c80(&rsi_1[0x3a])
    sub_141bf3c80(&rsi_1[0x55])
    sub_141bf3c80(&rsi_1[0x69])

if (data_143f31690 == 0)
    void*** rax_5 = j_sub_140a82f30(0x7c8)
    void*** rbx_4
    
    if (rax_5 == 0)
        rbx_4 = nullptr
    else
        int64_t* rbx_3 = data_143e243c8
        int64_t* rax_6 = sub_140b58170(&var_a0, "TableView.Row", 1)
        int64_t r9_1 = *rbx_3
        int64_t rdx_4 = data_143e24468
        int64_t r8_2 = *rax_6
        int64_t var_88_2 = r8_2
        var_90 = r8_2
        void* rax_7 = (*(r9_1 + 0x88))(rbx_3, rdx_4, r8_2, r9_1)
        
        if (rax_7 == 0)
            rax_7 = sub_140e13880()
        
        rbx_4 = sub_140ddc440(rax_5, rax_7)
    
    data_143f31690 = rbx_4
    sub_141bf3c80(&rbx_4[5])
    sub_141bf3c80(&rbx_4[0x16])
    sub_141bf3c80(&rbx_4[0x27])
    sub_141bf3c80(&rbx_4[0x38])
    sub_141bf3c80(&rbx_4[0x49])
    sub_141bf3c80(&rbx_4[0x5a])
    sub_141bf3c80(&rbx_4[0x6b])
    sub_141bf3c80(&rbx_4[0x7c])
    sub_141bf3c80(&rbx_4[0x8d])
    sub_141bf3c80(&rbx_4[0x9a])
    sub_141bf3c80(&rbx_4[0x9f])
    sub_141bf3c80(&rbx_4[0xa8])
    sub_141bf3c80(&rbx_4[0xb9])
    sub_141bf3c80(&rbx_4[0xca])

void* rbx_5 = data_143f31688
sub_140de14d0(&arg1[0x27], rbx_5 + 0x10)
sub_140693270(&arg1[0x76], rbx_5 + 0x288)
arg1[0x87] = *(rbx_5 + 0x310)
*(arg1 + 0x440) = *(rbx_5 + 0x318)
sub_140693270(&arg1[0x8a], rbx_5 + 0x328)
*(arg1 + 0x4d8) = *(rbx_5 + 0x3b0)
*(arg1 + 0x4e8) = *(rbx_5 + 0x3c0)
arg1[0x9f] = *(rbx_5 + 0x3d0)
*(arg1 + 0x500) = *(rbx_5 + 0x3d8)
void* rbx_6 = data_143f31690
arg1[0xa2] = *(rbx_5 + 0x3e8)
sub_140693270(&arg1[0xa4], rbx_6 + 8)
sub_140693270(&arg1[0xb5], rbx_6 + 0x90)
sub_140693270(&arg1[0xc6], rbx_6 + 0x118)
sub_140693270(&arg1[0xd7], rbx_6 + 0x1a0)
sub_140693270(&arg1[0xe8], rbx_6 + 0x228)
sub_140693270(&arg1[0xf9], rbx_6 + 0x2b0)
sub_140693270(&arg1[0x10a], rbx_6 + 0x338)
sub_140693270(&arg1[0x11b], rbx_6 + 0x3c0)
sub_140693270(&arg1[0x12c], rbx_6 + 0x448)
sub_140693390(&arg1[0x13d], rbx_6 + 0x4d0)
sub_140693390(&arg1[0x142], rbx_6 + 0x4f8)
sub_140693270(&arg1[0x147], rbx_6 + 0x520)
sub_140693270(&arg1[0x158], rbx_6 + 0x5a8)
sub_140693270(&arg1[0x169], rbx_6 + 0x630)
sub_140693270(&arg1[0x17a], rbx_6 + 0x6b8)
sub_140693270(&arg1[0x18b], rbx_6 + 0x740)
int128_t* rcx_51 = arg1[0xab]
uint128_t zmm0_5

if (rcx_51 == 0)
    zmm0_5 = *(arg1 + 0x540)
else
    zmm0_5 = *rcx_51

arg1[0xaa].b = 0
*(arg1 + 0x540) = zmm0_5

if (&var_a0 != &arg1[0xab])
    zmm0_5 = *(arg1 + 0x558)
    *(arg1 + 0x558) = zx.o(0)
    int64_t* rbx_7 = _mm_bsrli_si128(zmm0_5, 8).q
    
    if (rbx_7 != 0)
        rbx_7[1].d -= 1
        
        if (rbx_7[1].d == 1)
            (**rbx_7)(rbx_7)
            int32_t temp1_1 = *(rbx_7 + 0xc)
            *(rbx_7 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_7 + 8))(rbx_7, 1)

uint128_t* rcx_54 = arg1[0xbc]

if (rcx_54 == 0)
    zmm0_5 = *(arg1 + 0x5c8)
else
    zmm0_5 = *rcx_54

arg1[0xbb].b = 0
*(arg1 + 0x5c8) = zmm0_5

if (&var_a0 != &arg1[0xbc])
    zmm0_5 = *(arg1 + 0x5e0)
    *(arg1 + 0x5e0) = zx.o(0)
    int64_t* rbx_8 = _mm_bsrli_si128(zmm0_5, 8).q
    
    if (rbx_8 != 0)
        rbx_8[1].d -= 1
        
        if (rbx_8[1].d == 1)
            (**rbx_8)(rbx_8)
            int32_t temp3_1 = *(rbx_8 + 0xc)
            *(rbx_8 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_8 + 8))(rbx_8, 1)

uint128_t* rcx_57 = arg1[0xcd]

if (rcx_57 == 0)
    zmm0_5 = *(arg1 + 0x650)
else
    zmm0_5 = *rcx_57

arg1[0xcc].b = 0
*(arg1 + 0x650) = zmm0_5

if (&var_a0 != &arg1[0xcd])
    zmm0_5 = *(arg1 + 0x668)
    *(arg1 + 0x668) = zx.o(0)
    int64_t* rbx_9 = _mm_bsrli_si128(zmm0_5, 8).q
    
    if (rbx_9 != 0)
        rbx_9[1].d -= 1
        
        if (rbx_9[1].d == 1)
            (**rbx_9)(rbx_9)
            int32_t temp5_1 = *(rbx_9 + 0xc)
            *(rbx_9 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rbx_9 + 8))(rbx_9, 1)

uint128_t* rcx_60 = arg1[0xde]

if (rcx_60 == 0)
    zmm0_5 = *(arg1 + 0x6d8)
else
    zmm0_5 = *rcx_60

arg1[0xdd].b = 0
*(arg1 + 0x6d8) = zmm0_5

if (&var_a0 != &arg1[0xde])
    zmm0_5 = *(arg1 + 0x6f0)
    *(arg1 + 0x6f0) = zx.o(0)
    int64_t* rbx_10 = _mm_bsrli_si128(zmm0_5, 8).q
    
    if (rbx_10 != 0)
        rbx_10[1].d -= 1
        
        if (rbx_10[1].d == 1)
            (**rbx_10)(rbx_10)
            int32_t temp7_1 = *(rbx_10 + 0xc)
            *(rbx_10 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*rbx_10 + 8))(rbx_10, 1)

uint128_t* rcx_63 = arg1[0xef]

if (rcx_63 == 0)
    zmm0_5 = *(arg1 + 0x760)
else
    zmm0_5 = *rcx_63

arg1[0xee].b = 0
*(arg1 + 0x760) = zmm0_5

if (&var_a0 != &arg1[0xef])
    zmm0_5 = *(arg1 + 0x778)
    *(arg1 + 0x778) = zx.o(0)
    int64_t* rbx_11 = _mm_bsrli_si128(zmm0_5, 8).q
    
    if (rbx_11 != 0)
        rbx_11[1].d -= 1
        
        if (rbx_11[1].d == 1)
            (**rbx_11)(rbx_11)
            int32_t temp9_1 = *(rbx_11 + 0xc)
            *(rbx_11 + 0xc) -= 1
            
            if (temp9_1 == 1)
                (*(*rbx_11 + 8))(rbx_11, 1)

uint128_t* rcx_66 = arg1[0x100]

if (rcx_66 == 0)
    zmm0_5 = *(arg1 + 0x7e8)
else
    zmm0_5 = *rcx_66

arg1[0xff].b = 0
*(arg1 + 0x7e8) = zmm0_5

if (&var_a0 != &arg1[0x100])
    zmm0_5 = *(arg1 + 0x800)
    *(arg1 + 0x800) = zx.o(0)
    int64_t* rbx_12 = _mm_bsrli_si128(zmm0_5, 8).q
    
    if (rbx_12 != 0)
        rbx_12[1].d -= 1
        
        if (rbx_12[1].d == 1)
            (**rbx_12)(rbx_12)
            int32_t temp11_1 = *(rbx_12 + 0xc)
            *(rbx_12 + 0xc) -= 1
            
            if (temp11_1 == 1)
                (*(*rbx_12 + 8))(rbx_12, 1)

uint128_t* rcx_69 = arg1[0x111]

if (rcx_69 == 0)
    zmm0_5 = *(arg1 + 0x870)
else
    zmm0_5 = *rcx_69

arg1[0x110].b = 0
*(arg1 + 0x870) = zmm0_5

if (&var_a0 != &arg1[0x111])
    zmm0_5 = *(arg1 + 0x888)
    *(arg1 + 0x888) = zx.o(0)
    int64_t* rbx_13 = _mm_bsrli_si128(zmm0_5, 8).q
    
    if (rbx_13 != 0)
        rbx_13[1].d -= 1
        
        if (rbx_13[1].d == 1)
            (**rbx_13)(rbx_13)
            int32_t temp13_1 = *(rbx_13 + 0xc)
            *(rbx_13 + 0xc) -= 1
            
            if (temp13_1 == 1)
                (*(*rbx_13 + 8))(rbx_13, 1)

uint128_t* rax_30 = arg1[0x122]

if (rax_30 == 0)
    zmm0_5 = *(arg1 + 0x8f8)
else
    zmm0_5 = *rax_30

uint128_t var_c8 = zmm0_5
char var_b8 = 0
uint128_t var_b0 = zx.o(0)
sub_140693390(&arg1[0x11f], &var_c8)
int64_t* rbx_14 = var_b0:8.q

if (rbx_14 != 0)
    rbx_14[1].d -= 1
    
    if (rbx_14[1].d == 1)
        (**rbx_14)(rbx_14)
        int32_t temp15_1 = *(rbx_14 + 0xc)
        *(rbx_14 + 0xc) -= 1
        
        if (temp15_1 == 1)
            (*(*rbx_14 + 8))(rbx_14, 1)

int128_t* rax_33 = arg1[0x133]
uint128_t zmm0_6

if (rax_33 == 0)
    zmm0_6 = *(arg1 + 0x980)
else
    zmm0_6 = *rax_33

var_c8 = zmm0_6
char var_b8_1 = 0
var_b0 = zx.o(0)
sub_140693390(&arg1[0x130], &var_c8)
int64_t* rbx_15 = var_b0:8.q

if (rbx_15 != 0)
    rbx_15[1].d -= 1
    
    if (rbx_15[1].d == 1)
        (**rbx_15)(rbx_15)
        int32_t temp17_1 = *(rbx_15 + 0xc)
        *(rbx_15 + 0xc) -= 1
        
        if (temp17_1 == 1)
            (*(*rbx_15 + 8))(rbx_15, 1)

int128_t* rax_36 = arg1[0x140]
uint128_t zmm0_7

if (rax_36 == 0)
    zmm0_7 = *(arg1 + 0x9e8)
else
    zmm0_7 = *rax_36

var_c8 = zmm0_7
char var_b8_2 = 0
var_b0 = zx.o(0)
sub_140693390(&arg1[0x13d], &var_c8)
int64_t* rbx_16 = var_b0:8.q

if (rbx_16 != 0)
    rbx_16[1].d -= 1
    
    if (rbx_16[1].d == 1)
        (**rbx_16)(rbx_16)
        int32_t temp19_1 = *(rbx_16 + 0xc)
        *(rbx_16 + 0xc) -= 1
        
        if (temp19_1 == 1)
            (*(*rbx_16 + 8))(rbx_16, 1)

int128_t* rax_39 = arg1[0x145]
uint128_t zmm0_8

if (rax_39 == 0)
    zmm0_8 = *(arg1 + 0xa10)
else
    zmm0_8 = *rax_39

var_c8 = zmm0_8
char var_b8_3 = 0
var_b0 = zx.o(0)
sub_140693390(&arg1[0x142], &var_c8)
int64_t* rbx_17 = var_b0:8.q

if (rbx_17 != 0)
    rbx_17[1].d -= 1
    
    if (rbx_17[1].d == 1)
        (**rbx_17)(rbx_17)
        int32_t temp21_1 = *(rbx_17 + 0xc)
        *(rbx_17 + 0xc) -= 1
        
        if (temp21_1 == 1)
            (*(*rbx_17 + 8))(rbx_17, 1)

int128_t* rax_42 = arg1[0x14e]
uint128_t zmm0_9

if (rax_42 == 0)
    zmm0_9 = *(arg1 + 0xa58)
else
    zmm0_9 = *rax_42

var_c8 = zmm0_9
char var_b8_4 = 0
var_b0 = zx.o(0)
sub_140693390(&arg1[0x14b], &var_c8)
int64_t* rbx_18 = var_b0:8.q

if (rbx_18 != 0)
    rbx_18[1].d -= 1
    
    if (rbx_18[1].d == 1)
        (**rbx_18)(rbx_18)
        int32_t temp23_1 = *(rbx_18 + 0xc)
        *(rbx_18 + 0xc) -= 1
        
        if (temp23_1 == 1)
            (*(*rbx_18 + 8))(rbx_18, 1)

int128_t* rax_45 = arg1[0x15f]
uint128_t zmm0_10

if (rax_45 == 0)
    zmm0_10 = *(arg1 + 0xae0)
else
    zmm0_10 = *rax_45

var_c8 = zmm0_10
char var_b8_5 = 0
var_b0 = zx.o(0)
sub_140693390(&arg1[0x15c], &var_c8)
int64_t* rbx_19 = var_b0:8.q

if (rbx_19 != 0)
    rbx_19[1].d -= 1
    
    if (rbx_19[1].d == 1)
        (**rbx_19)(rbx_19)
        int32_t temp25_1 = *(rbx_19 + 0xc)
        *(rbx_19 + 0xc) -= 1
        
        if (temp25_1 == 1)
            (*(*rbx_19 + 8))(rbx_19, 1)

int128_t* rax_48 = arg1[0x170]
uint128_t zmm0_11

if (rax_48 == 0)
    zmm0_11 = *(arg1 + 0xb68)
else
    zmm0_11 = *rax_48

var_c8 = zmm0_11
char var_b8_6 = 0
var_b0 = zx.o(0)
sub_140693390(&arg1[0x16d], &var_c8)
sub_140597060(&var_b0)
char var_b8_7 = 0
var_c8 = data_14399f5e0
var_b0 = zx.o(0)
sub_140693390(&arg1[0x1a9], &var_c8)
sub_140597060(&var_b0)
arg1[0x1ae].b = 1
TEB* gsbase
int64_t rax_50 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
__builtin_memcpy(&arg1[0x19c], 
    "\x00\x00\x80\x40\x00\x00\x00\x40\x00\x00\x80\x40\x00\x00\x00\x40\x00\x00\xe1\x43\x01\x01", 
    0x16)

if (data_143f316b0 s> *(0x14 + rax_50))
    _Init_thread_header(&data_143f316b0)
    
    if (data_143f316b0 == 0xffffffff)
        int64_t* rax_54 = sub_141bac150(&var_a0)
        int16_t* rdx_35
        
        if (rax_54[1].d == 0)
            rdx_35 = &data_142d40450
        else
            rdx_35 = *rax_54
        
        sub_141b78fd0(&data_143f31698, rdx_35, 0)
        int64_t rcx_101 = var_a0
        
        if (rcx_101 != 0)
            sub_140a74f90(rcx_101)
        
        atexit(sub_142cf6540)
        _Init_thread_footer(&data_143f316b0)

var_c8.d = 0
var_c8:4.w = 0
var_c8:8.q = 0
var_b8_7.o = data_14399f5e0
int64_t* rax_51 = sub_140b58170(&var_a0, "Bold", 1)
void var_80
sub_140693420(&arg1[0x19f], sub_140d93a40(&var_80, data_143f316a8, 0x10, rax_51, &var_c8))
void var_50
sub_140597060(&var_50)
return arg1
