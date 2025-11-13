// 函数: sub_140746700
// 地址: 0x140746700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405ae180(&arg1[8])
int32_t i_1 = arg1[7].d
void* rcx_1 = arg1[6]

if (i_1 != 0)
    char* rax_1 = rcx_1 + 4
    int32_t i
    
    do
        if (*rax_1 != 0)
            *rax_1 = 0
        
        rax_1 = &rax_1[8]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx_1 = arg1[6]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t rcx_2 = arg1[4]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = arg1[1]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

*arg1 = &data_142d4bb80
return &data_142d4bb80
