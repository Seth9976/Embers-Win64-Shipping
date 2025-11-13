// 函数: sub_1405df6f0
// 地址: 0x1405df6f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142d5a4e0
sub_1405e3ab0(arg1)
int64_t rcx = arg1[0x13]

if (rcx != 0)
    sub_140a74f90(rcx)

sub_140a1d5c0(&arg1[0x10])
int64_t result = sub_140a1d5c0(&arg1[0xe])
int64_t rcx_3 = arg1[0xa]

if (rcx_3 != 0)
    result = sub_140a74f90(rcx_3)

int64_t rcx_4 = arg1[7]

if (rcx_4 != 0)
    result = sub_140a74f90(rcx_4)

void* rbx = arg1[5]

if (rbx != 0)
    int32_t temp0_1 = *(rbx + 0x44)
    *(rbx + 0x44) -= 1
    
    if (temp0_1 == 1)
        if ((*(rbx + 0x4c) & 1) != 0)
            void* rax = *(rbx + 0x28)
            sub_1405e3820(zx.q(*(rax + 0x58)) * 0x50 + &data_143cd84b0, rax + 0x70)
            *(rbx + 0x4c) &= 0xfffffffe
        
        *(rbx + 0x48) = 1
        result = sub_141997870(rbx + 0x38)

int32_t i_1 = arg1[4].d
int64_t* rbx_1 = arg1[3]

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_9 = *rbx_1
        
        if (rcx_9 != 0)
            result = sub_140a74f90(rcx_9)
        
        rbx_1 = &rbx_1[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx_1 = arg1[3]

if (rbx_1 != 0)
    result = sub_140a74f90(rbx_1)

int64_t rcx_11 = arg1[1]

if (rcx_11 == 0)
    return result

return sub_140a74f90(rcx_11)
