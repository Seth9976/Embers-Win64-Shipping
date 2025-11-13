// 函数: sub_142d0f730
// 地址: 0x142d0f730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143f5b1f8 s> 0)
    int64_t* rax_1 = sub_140a242a0()
    int64_t r9_1 = *rax_1
    (*(r9_1 + 0x48))(rax_1, &data_143f5b1d0, 2, r9_1)
    sub_141983280(&data_143f5b1d0, 0)

sub_1408466d0(&data_143f5b1d0)
int64_t i_1 = 0x40
void* rsi = &data_143f5b1d0

for (int64_t i = 0x40; i != 0; )
    int64_t rcx_2 = *(rsi - 0x10)
    rsi -= 0x10
    i -= 1
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)

void* rdi = &data_143f5add0

do
    int64_t rcx_3 = *(rdi - 0x10)
    rdi -= 0x10
    i_1 -= 1
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
while (i_1 != 0)

int64_t i_3 = 8
void* rdi_1 = &data_143f5a9d0
int64_t result
int64_t i_2

do
    rdi_1 -= 0x30
    result = sub_1408466d0(rdi_1)
    i_2 = i_3
    i_3 -= 1
while (i_2 != 1)
return result
