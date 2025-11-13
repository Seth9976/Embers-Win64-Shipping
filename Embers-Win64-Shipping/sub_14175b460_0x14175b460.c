// 函数: sub_14175b460
// 地址: 0x14175b460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int64_t rax_2 = *arg1
int32_t rbx = 0
int64_t rax_3 = arg1[2]
int64_t rax_4 = arg1[4]
int64_t rax_5 = arg1[5]
void* var_70 = &arg1[9]
void* var_60 = &arg1[0xb]
void* var_40 = &arg1[0xf]
int64_t var_c0 = 0
int64_t var_b0 = 0
int64_t var_a0 = 0
int64_t var_90 = 0
int64_t var_88 = 0
void* var_80 = &arg1[0x34]
int64_t var_78 = 0
int64_t var_68 = 0
int64_t var_58 = 0
void* var_50 = &arg1[0xd]
int64_t var_48 = 0
uint64_t var_118 = 0
int32_t var_110 = 9
sub_1405a4be0(&var_118, 9, 0)
uint64_t rsi = var_118
int64_t r15 = sx.q(var_110)
uint64_t rcx_1 = rsi
*rsi = rax_2.o
int64_t r8_2 = (r15 << 4) + rsi
*(rsi + 0x10) = rax_3.o
*(rsi + 0x20) = rax_4.o
*(rsi + 0x30) = rax_5.o
*(rsi + 0x40) = var_88.o
*(rsi + 0x50) = var_78.o
*(rsi + 0x60) = var_68.o
*(rsi + 0x70) = var_58.o
*(rsi + 0x80) = var_48.o

if (rsi != r8_2)
    do
        void* rax_9 = *(rcx_1 + 8)
        int32_t rdx_1
        
        if (rax_9 == 0)
            rdx_1 = *(*rcx_1 + 0x18)
        else
            rdx_1 = *(rax_9 + 8)
        
        rbx += rdx_1
        rcx_1 += 0x10
    while (rcx_1 != r8_2)

int32_t result_1
int64_t var_108

if (&arg1[0x36] != &var_108)
    uint64_t rcx_2 = arg1[0x36]
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
    
    arg1[0x36] = rsi
    rsi = 0
    arg1[0x37].d = r15.d
    *(arg1 + 0x1bc) = result_1

arg1[0x38].d = rbx

if (rsi != 0)
    sub_140a74f90(rsi)

var_108 = arg1[4]
void* var_f0 = &arg1[0x34]
void* var_e0 = &arg1[0xd]
int64_t var_100 = 0
int64_t var_f8 = 0
int64_t var_e8 = 0
int64_t var_d8 = 0
void* var_d0 = &arg1[0xf]
var_118 = 0
int32_t var_110_1 = 4
sub_1405a4be0(&var_118, 4, 0)
uint64_t rsi_1 = var_118
int32_t rbx_1 = 0
int64_t r15_1 = sx.q(var_110_1)
uint64_t rcx_5 = rsi_1
*rsi_1 = var_108.o
int64_t r8_5 = (r15_1 << 4) + rsi_1
*(rsi_1 + 0x10) = var_f8.o
*(rsi_1 + 0x20) = var_e8.o
*(rsi_1 + 0x30) = var_d8.o

if (rsi_1 != r8_5)
    do
        void* rax_13 = *(rcx_5 + 8)
        int32_t rdx_2
        
        if (rax_13 == 0)
            rdx_2 = *(*rcx_5 + 0x18)
        else
            rdx_2 = *(rax_13 + 8)
        
        rbx_1 += rdx_2
        rcx_5 += 0x10
    while (rcx_5 != r8_5)

if (&arg1[0x39] != &var_108)
    uint64_t rcx_6 = arg1[0x39]
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    arg1[0x39] = rsi_1
    rsi_1 = 0
    arg1[0x3a].d = r15_1.d
    *(arg1 + 0x1d4) = result_1

arg1[0x3b].d = rbx_1

if (rsi_1 != 0)
    sub_140a74f90(rsi_1)

int32_t rbx_2 = 0
var_108 = 0
int64_t var_f8_1 = 0
void* var_100_1 = &arg1[0x1c]
int64_t var_e8_1 = 0
void* var_f0_1 = &arg1[9]
void* var_e0_1 = &arg1[0xb]
int64_t var_d8_1 = 0
void* var_d0_1 = &arg1[0xf]
var_118 = 0
int32_t var_110_2 = 4
sub_1405a4be0(&var_118, 4, 0)
uint64_t rsi_2 = var_118
int64_t r15_2 = sx.q(var_110_2)
uint64_t rcx_9 = rsi_2
*rsi_2 = var_108.o
int64_t r8_8 = (r15_2 << 4) + rsi_2
*(rsi_2 + 0x10) = var_f8_1.o
*(rsi_2 + 0x20) = var_e8_1.o
*(rsi_2 + 0x30) = var_d8_1.o

if (rsi_2 != r8_8)
    do
        void* rax_18 = *(rcx_9 + 8)
        int32_t rdx_3
        
        if (rax_18 == 0)
            rdx_3 = *(*rcx_9 + 0x18)
        else
            rdx_3 = *(rax_18 + 8)
        
        rbx_2 += rdx_3
        rcx_9 += 0x10
    while (rcx_9 != r8_8)

if (&arg1[0x3c] != &var_108)
    int64_t rcx_10 = arg1[0x3c]
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)
    
    arg1[0x3c] = rsi_2
    rsi_2 = 0
    arg1[0x3d].d = r15_2.d
    *(arg1 + 0x1ec) = result_1

arg1[0x3e].d = rbx_2

if (rsi_2 != 0)
    sub_140a74f90(rsi_2)

int64_t rax_21 = *arg1
int32_t rbx_3 = 0
int64_t rax_22 = arg1[1]
int64_t rax_23 = arg1[2]
int64_t rax_24 = arg1[3]
int64_t rax_25 = arg1[4]
int64_t rax_26 = arg1[6]
int64_t rax_27 = arg1[5]
int64_t rax_28 = arg1[7]
int64_t rax_29 = arg1[8]
int64_t var_c0_1 = 0
int64_t var_b0_1 = 0
int64_t var_a0_1 = 0
int64_t var_90_1 = 0
int64_t var_80_1 = 0
int64_t var_70_1 = 0
int64_t var_60_1 = 0
int64_t var_50_1 = 0
int64_t var_40_1 = 0
var_118 = 0
int32_t var_110_3 = 9
sub_1405a4be0(&var_118, 9, 0)
uint64_t rsi_3 = var_118
int64_t r15_3 = sx.q(var_110_3)
uint64_t rcx_13 = rsi_3
*rsi_3 = rax_21.o
int64_t r8_11 = (r15_3 << 4) + rsi_3
*(rsi_3 + 0x10) = rax_22.o
*(rsi_3 + 0x20) = rax_23.o
*(rsi_3 + 0x30) = rax_24.o
*(rsi_3 + 0x40) = rax_25.o
*(rsi_3 + 0x50) = rax_26.o
*(rsi_3 + 0x60) = rax_27.o
*(rsi_3 + 0x70) = rax_28.o
*(rsi_3 + 0x80) = rax_29.o

if (rsi_3 != r8_11)
    do
        void* rax_30 = *(rcx_13 + 8)
        int32_t rdx_4
        
        if (rax_30 == 0)
            rdx_4 = *(*rcx_13 + 0x18)
        else
            rdx_4 = *(rax_30 + 8)
        
        rbx_3 += rdx_4
        rcx_13 += 0x10
    while (rcx_13 != r8_11)

if (&arg1[0x3f] != &var_108)
    int64_t rcx_14 = arg1[0x3f]
    
    if (rcx_14 != 0)
        sub_140a74f90(rcx_14)
    
    arg1[0x3f] = rsi_3
    rsi_3 = 0
    arg1[0x40].d = r15_3.d
    *(arg1 + 0x204) = result_1

arg1[0x41].d = rbx_3

if (rsi_3 != 0)
    sub_140a74f90(rsi_3)

int32_t rbx_4 = 0
var_108 = arg1[2]
int64_t rax_34 = arg1[5]
int64_t var_100_2 = 0
void* var_e0_2 = &arg1[0xb]
var_f0_1.o = zx.o(0)
var_118 = 0
int32_t var_110_4 = 3
sub_1405a4be0(&var_118, 3, 0)
uint64_t rsi_4 = var_118
int64_t r15_4 = sx.q(var_110_4)
uint64_t rcx_17 = rsi_4
*rsi_4 = var_108.o
int64_t r8_14 = (r15_4 << 4) + rsi_4
*(rsi_4 + 0x10) = rax_34.o
*(rsi_4 + 0x20) = var_e8_1.o

if (rsi_4 != r8_14)
    do
        void* rax_35 = *(rcx_17 + 8)
        int32_t rdx_5
        
        if (rax_35 == 0)
            rdx_5 = *(*rcx_17 + 0x18)
        else
            rdx_5 = *(rax_35 + 8)
        
        rbx_4 += rdx_5
        rcx_17 += 0x10
    while (rcx_17 != r8_14)

if (&arg1[0x42] != &var_108)
    int64_t rcx_18 = arg1[0x42]
    
    if (rcx_18 != 0)
        sub_140a74f90(rcx_18)
    
    arg1[0x42] = rsi_4
    rsi_4 = 0
    arg1[0x43].d = r15_4.d
    *(arg1 + 0x21c) = result_1

arg1[0x44].d = rbx_4

if (rsi_4 != 0)
    sub_140a74f90(rsi_4)

int32_t rbx_5 = 0
void* var_f0_2 = &arg1[0xb]
var_108 = 0
void* var_100_3 = &arg1[9]
int64_t var_f8_3 = 0
int64_t var_e8_2 = 0
void* var_e0_3 = &arg1[0xf]
var_118 = 0
int32_t var_110_5 = 3
sub_1405a4be0(&var_118, 3, 0)
uint64_t rdi_5 = var_118
int64_t r15_5 = sx.q(var_110_5)
uint64_t rcx_21 = rdi_5
*rdi_5 = var_108.o
int64_t r8_17 = (r15_5 << 4) + rdi_5
*(rdi_5 + 0x10) = var_f8_3.o
*(rdi_5 + 0x20) = var_e8_2.o

if (rdi_5 != r8_17)
    do
        void* rax_39 = *(rcx_21 + 8)
        int32_t rdx_6
        
        if (rax_39 == 0)
            rdx_6 = *(*rcx_21 + 0x18)
        else
            rdx_6 = *(rax_39 + 8)
        
        rbx_5 += rdx_6
        rcx_21 += 0x10
    while (rcx_21 != r8_17)

int32_t result = &var_108

if (&arg1[0x45] != &var_108)
    int64_t rcx_22 = arg1[0x45]
    
    if (rcx_22 != 0)
        sub_140a74f90(rcx_22)
    
    result = result_1
    arg1[0x45] = rdi_5
    rdi_5 = 0
    arg1[0x46].d = r15_5.d
    *(arg1 + 0x234) = result

arg1[0x47].d = rbx_5

if (rdi_5 != 0)
    result = sub_140a74f90(rdi_5)

__security_check_cookie(rax_1 ^ &var_138)
return result
