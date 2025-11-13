// 函数: sub_140b27e20
// 地址: 0x140b27e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

int64_t rbx_1 = -1
uint64_t rax = -1

do
    rax += 1
while (arg1[rax] != 0)

if (rax.d == 0)
    return 

sub_140b1aa70()

if (data_143de6cd0 != arg1)
    int32_t rdx_1 = 0
    int32_t rbx_2
    
    if (*arg1 == 0)
        rbx_2 = 0
    else
        do
            rbx_1 += 1
        while (arg1[rbx_1] != 0)
        
        rbx_2 = rbx_1.d + 1
    
    data_143de6cd8 = 0
    
    if (data_143de6cdc != rbx_2)
        sub_1405947f0(&data_143de6cd0, rbx_2)
        rdx_1 = data_143de6cd8
    
    rax = zx.q(rdx_1 + rbx_2)
    data_143de6cd8 = rax.d
    
    if (rax.d s> data_143de6cdc)
        sub_140594770(&data_143de6cd0)
    
    if (rbx_2 != 0)
        memcpy(data_143de6cd0, arg1, rbx_2 * 2)

data_143de5dc4 = 0
