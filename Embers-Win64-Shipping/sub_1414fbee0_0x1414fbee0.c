// 函数: sub_1414fbee0
// 地址: 0x1414fbee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141504b40(arg1)
int64_t i_4 = 0x10
int64_t* rdi = &arg1[2]
int64_t* i_3 = 0x10
int64_t* i

do
    int64_t* rcx = *rdi
    
    if (rcx != 0)
        sub_141997f50(rcx)
    
    rdi = &rdi[1]
    i = i_3
    i_3 -= 1
while (i != 1)
int32_t i_1 = i_3.d

if (arg1[0x24] s> i_3.d)
    int64_t* i_5 = i_3
    
    do
        int64_t* rcx_1 = *(i_5 + *(arg1 + 0x88))
        
        if (rcx_1 != 0)
            sub_141997f50(rcx_1)
        
        i_1 += 1
        i_5 = &i_5[1]
    while (i_1 s< arg1[0x24])

int64_t rcx_2 = *(arg1 + 0x300)

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = *(arg1 + 0x2f0)

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t rcx_4 = *(arg1 + 0x2e0)

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

arg1[0xb6] = i_3.d
int64_t rcx_5 = *(arg1 + 0x2d0)

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

arg1[0xa6] = i_3.d

if (arg1[0xa7] != i_3.d)
    sub_1405a5410(&arg1[0xa4], 0)

arg1[0xb0] = 0xffffffff
arg1[0xb1] = i_3.d
sub_14059a8e0(&arg1[0xa8], 0)
int64_t rcx_8 = *(arg1 + 0x2b0)

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int64_t rcx_9 = *(arg1 + 0x290)

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

arg1[0xa2] = i_3.d
int64_t rcx_10 = *(arg1 + 0x280)

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

arg1[0x92] = i_3.d

if (arg1[0x93] != i_3.d)
    sub_1405a5410(&arg1[0x90], 0)

arg1[0x9c] = 0xffffffff
arg1[0x9d] = i_3.d
sub_14059a8e0(&arg1[0x94], 0)
int64_t rcx_13 = *(arg1 + 0x260)

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

int64_t rcx_14 = *(arg1 + 0x240)

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

DeleteCriticalSection(&arg1[0x86])
sub_1414fb920(&arg1[0x72])
int64_t rcx_17 = *(arg1 + 0x1b8)

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

int64_t rcx_18 = *(arg1 + 0x1a8)

if (rcx_18 != 0)
    sub_140a74f90(rcx_18)

DeleteCriticalSection(&arg1[0x60])
*(arg1 + 0x170) = &data_142d3ff10
int64_t* rcx_20 = data_143db18d0

if (rcx_20 == 0)
    sub_140a53c40()
    rcx_20 = data_143db18d0

int64_t r8
r8.b = 1
(*(*rcx_20 + 0xa8))(rcx_20, *(arg1 + 0x178), r8)
*(arg1 + 0x160) = &data_142d3ff10
int64_t* rcx_21 = data_143db18d0

if (rcx_21 == 0)
    sub_140a53c40()
    rcx_21 = data_143db18d0

int64_t r8_1
r8_1.b = 1
(*(*rcx_21 + 0xa8))(rcx_21, *(arg1 + 0x168), r8_1)
*(arg1 + 0x150) = &data_142d3ff10
int64_t* rcx_22 = data_143db18d0

if (rcx_22 == 0)
    sub_140a53c40()
    rcx_22 = data_143db18d0

int64_t r8_2
r8_2.b = 1
(*(*rcx_22 + 0xa8))(rcx_22, *(arg1 + 0x158), r8_2)
sub_1414fb840(&arg1[0x3e])
int64_t rcx_24 = *(arg1 + 0xe8)

if (rcx_24 != 0)
    sub_140a74f90(rcx_24)

DeleteCriticalSection(&arg1[0x30])
int64_t rcx_26 = *(arg1 + 0xa8)

if (rcx_26 != 0)
    sub_140a74f90(rcx_26)

sub_1414fb7b0(&arg1[0x26])
void* rbx_1 = &arg1[0x22]
int64_t rcx_28 = *rbx_1

if (rcx_28 != 0)
    sub_140a74f90(rcx_28)

int64_t result
int64_t i_2

do
    void*** rdx_3 = *(rbx_1 - 8)
    rbx_1 -= 8
    result = sub_1414fcbe0(rbx_1, rdx_3)
    i_2 = i_4
    i_4 -= 1
while (i_2 != 1)
return result
