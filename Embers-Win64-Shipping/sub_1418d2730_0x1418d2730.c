// 函数: sub_1418d2730
// 地址: 0x1418d2730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142fef6a8
sub_141902870(arg1[0xa8])
int64_t rdi = arg1[0xa8]

if (rdi != 0)
    j_sub_140a74f90(rdi)

void* rdi_1 = arg1[0x48]
arg1[0xa8] = 0

if (rdi_1 != 0)
    sub_1418b9dc0(rdi_1)
    j_sub_140a74f90(rdi_1)

arg1[0x48] = 0
data_143efb320 = 0
void* r8 = &arg1[0x49]

if (arg1[0x27] == 0)
    r8 = nullptr

sub_1418de6c0(&arg1[0x49], arg1[0x28], r8)
void* rdi_2 = arg1[0x2b]

if (rdi_2 != 0)
    sub_1418f4a90(rdi_2)
    j_sub_140a74f90(rdi_2)

void* rdi_3 = arg1[0x8a]

if (rdi_3 != 0)
    sub_1418d2e60(rdi_3)
    j_sub_140a74f90(rdi_3)

void* rcx_10 = arg1[0x8b]

if (rcx_10 != 0)
    sub_1418d8740(rcx_10, 1)

sub_1418bd430(&arg1[0x2c])
int64_t rcx_12 = arg1[0xa9]

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

sub_1418f4940(&arg1[0x8d])
DeleteCriticalSection(&arg1[0x84])
sub_1418d2580(&arg1[0x67])
sub_1405ae080(&arg1[0x5d])
sub_1405ae080(&arg1[0x53])
sub_1405ae080(&arg1[0x49])
int32_t i_1 = arg1[0x47].d
int64_t* rdi_4 = arg1[0x46]

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_19 = *rdi_4
        
        if (rcx_19 != 0)
            sub_140a74f90(rcx_19)
        
        rdi_4 = &rdi_4[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rdi_4 = arg1[0x46]

if (rdi_4 != 0)
    sub_140a74f90(rdi_4)

sub_1418b9ac0(&arg1[0x2c])
*arg1 = &data_142ef2bd8
return sub_1405d1550(&arg1[0x22]) __tailcall
