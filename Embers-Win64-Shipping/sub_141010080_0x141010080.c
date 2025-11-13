// 函数: sub_141010080
// 地址: 0x141010080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0x2a].d = 0
int64_t rcx = arg1[0x29]

if (rcx != 0)
    sub_140a74f90(rcx)

sub_140618750(&arg1[0x21])
int64_t rcx_2 = arg1[0x1e]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = arg1[0x1c]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t rcx_4 = arg1[0x1a]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t* rcx_5 = arg1[0x18]

if (rcx_5 != 0)
    rcx_5[1].d -= 1
    
    if (rcx_5[1].d == 1 && rcx_5 != 0)
        (**rcx_5)(rcx_5, 1)

sub_14100dfc0(&arg1[0x16])
sub_1419948a0(&arg1[0x10])
DeleteCriticalSection(&arg1[0xb])
int64_t rcx_9 = arg1[9]

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

sub_140dde9c0(&arg1[7])
*arg1 = &data_142ef5810
return &data_142ef5810
