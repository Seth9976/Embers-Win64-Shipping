// 函数: sub_14223c100
// 地址: 0x14223c100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = arg1[0x400]
int64_t rbp = 0
uint64_t r14_1 = sx.q(arg1[0x401].d) << 3 u>> 3

if (rsi u> &rsi[arg1[0x401]])
    r14_1 = 0

if (r14_1 != 0)
    do
        void* rdi_1 = *rsi
        
        if (rdi_1 != 0)
            sub_14223bc50(rdi_1)
            j_sub_140a74f90(rdi_1)
        
        rsi = &rsi[1]
        rbp += 1
    while (rbp != r14_1)

arg1[0x401].d = 0

if (*(arg1 + 0x200c) != 0)
    sub_1405c5570(&arg1[0x400], 0)

int64_t rbp_1 = 0
int64_t* rdi_2 = arg1[0x403]
uint64_t r14_3 = sx.q(arg1[0x404].d) << 3 u>> 3

if (rdi_2 u> &rdi_2[arg1[0x404]])
    r14_3 = 0

if (r14_3 != 0)
    do
        void* rsi_1 = *rdi_2
        
        if (rsi_1 != 0)
            int32_t* rcx_3 = *(rsi_1 + 0x18)
            sub_14177dea0(*(rcx_3 + 8), *rcx_3)
            j_sub_140a74f90(rsi_1)
        
        rdi_2 = &rdi_2[1]
        rbp_1 += 1
    while (rbp_1 != r14_3)

arg1[0x404].d = 0

if (*(arg1 + 0x2024) != 0)
    sub_1405c5570(&arg1[0x403], 0)

int64_t rcx_7 = arg1[0x40f]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

arg1[0x40e].d = 0
int64_t rcx_8 = arg1[0x40d]

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

sub_14223baa0(&arg1[0x405])
int64_t rcx_10 = arg1[0x403]

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

int64_t rcx_11 = arg1[0x400]

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

sub_14223bfc0(&arg1[0x3d6])
arg1[0x3d3] = &data_142fc6e80
arg1[0x3d0] = &data_142fc6e80
sub_1417057f0(&arg1[0x282])
int64_t rcx_14 = arg1[0x27e]

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

int64_t rcx_15 = arg1[0x19a]

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

sub_141762340(&arg1[0x96])
sub_141762820(&arg1[0x64])
sub_141d2eb40(&arg1[0xb])
sub_1417a24d0(&arg1[8])
arg1[5] = &data_142fc40a0
int64_t rcx_20 = arg1[6]

if (rcx_20 != 0)
    sub_140a74f90(rcx_20)

void** const result = &data_142fc4160
arg1[2] = &data_142fc4160
int64_t rcx_21 = arg1[3]

if (rcx_21 != 0)
    result = sub_140a74f90(rcx_21)

int64_t rcx_22 = *arg1

if (rcx_22 == 0)
    return result

return sub_140a74f90(rcx_22)
