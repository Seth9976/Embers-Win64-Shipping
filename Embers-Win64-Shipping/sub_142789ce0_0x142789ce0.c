// 函数: sub_142789ce0
// 地址: 0x142789ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_1434ad598
sub_142795a30(arg1)
int64_t* rbx = arg1[0xe1]

if (rbx != 0)
    int64_t rcx = rbx[2]
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    int64_t rcx_1 = *rbx
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    j_sub_140a74f90(rbx)

int64_t* rcx_3 = arg1[0xe2]

if (rcx_3 != 0)
    sub_142789be0(rcx_3, 1)

int64_t rcx_4 = arg1[0xdf]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

sub_142788040(&arg1[0xcd])
sub_142788040(&arg1[0xbc])
sub_1405ec8a0(&arg1[0xbb])
arg1[0xb7] = &data_142dda848
sub_1405d1550(&arg1[0xb9])
sub_1419948a0(&arg1[0xb7])
arg1[0xb3] = &data_142e0ef98
sub_14081c9d0(&arg1[0xb5])
sub_1419948a0(&arg1[0xb3])
arg1[0xaf] = &data_142e0ef98
sub_14081c9d0(&arg1[0xb1])
sub_1419948a0(&arg1[0xaf])
sub_142289b70(&arg1[0xa7])
sub_142289c80(&arg1[0x9f])
sub_1422b5620(&arg1[0x8e])
sub_1405d1550(&arg1[0x6e])
sub_14081d2f0(&arg1[0x2e])
int64_t rcx_19 = arg1[0x2a]

if (rcx_19 != 0)
    sub_140a74f90(rcx_19)

sub_142289fd0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
