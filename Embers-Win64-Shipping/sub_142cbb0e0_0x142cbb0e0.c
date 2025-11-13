// 函数: sub_142cbb0e0
// 地址: 0x142cbb0e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = &data_143cf8e58
int64_t i_1 = 0x10000
int64_t i

do
    int64_t rcx_1 = *rbx
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    rbx += 8
    i = i_1
    i_1 -= 1
while (i != 1)
sub_140a2fe90(sub_140b18f30(), data_143cf8db0)
int64_t rcx_3 = data_143cf8e48

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t* rcx_4 = data_143db18d0
data_143cf8da0 = &data_142d3ff10

if (rcx_4 == 0)
    sub_140a53c40()
    rcx_4 = data_143db18d0

int64_t r8
r8.b = 1
(*(*rcx_4 + 0xa8))(rcx_4, data_143cf8da8, r8)
return DeleteCriticalSection(&data_143cf8d78) __tailcall
