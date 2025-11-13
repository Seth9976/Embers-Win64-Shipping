// 函数: sub_1414fcbe0
// 地址: 0x1414fcbe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

*arg2 = &data_142fbb448
sub_1405ec8a0(&arg2[0xd1])
int64_t* rdi_1 = &arg2[0xd0]
sub_1405d1550(rdi_1)
int64_t i_3 = 8

for (int64_t i = 8; i != 0; )
    int64_t rcx_2 = rdi_1[-2]
    rdi_1 = &rdi_1[-2]
    i -= 1
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)

int64_t i_1 = 2
void* rbx_1 = &arg2[0xbf]

do
    rbx_1 -= 0x10
    i_1 -= 1
    sub_1405d1550(rbx_1 + 8)
    int64_t* rcx_4 = *rbx_1
    
    if (rcx_4 != 0)
        (*(*rcx_4 + 0x38))(rcx_4)
while (i_1 != 0)

void* rbx_2 = &arg2[0xbb]
int64_t i_2

do
    rbx_2 -= 0xa8
    sub_1414fb9a0(rbx_2)
    i_2 = i_3
    i_3 -= 1
while (i_2 != 1)
sub_1414fbb00(&arg2[4])
sub_1419948a0(arg2)
j_sub_140a74f90(arg2)
