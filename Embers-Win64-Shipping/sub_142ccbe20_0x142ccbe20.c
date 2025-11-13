// 函数: sub_142ccbe20
// 地址: 0x142ccbe20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = data_143e2b048
data_143e2b050 = 0

if (rcx != 0)
    sub_140a74f90(rcx)

sub_140acd470(&data_143e2b008)
int64_t rcx_1 = data_143e2aff8
data_143e2b000 = 0

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

sub_140acd470(&data_143e2afb8)
int64_t rcx_2 = data_143e2afa8
data_143e2afb0 = 0

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

sub_140acd470(&data_143e2af68)
int64_t rcx_3 = data_143e2af58
data_143e2af60 = 0

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

sub_140acd470(&data_143e2af18)
int64_t result = sub_140acd8c0(&data_143e2add8)
int32_t i_1 = data_143e2add0
int64_t* rbx = data_143e2adc8

if (i_1 != 0)
    int32_t i
    
    do
        if (*rbx != 0)
            void* rax = rbx[2]
            void* rcx_4 = &rbx[4]
            
            if (rax != 0)
                rcx_4 = rax
            
            result = (*(*rcx_4 + 0x10))(rcx_4)
        
        rbx = &rbx[8]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = data_143e2adc8

if (rbx == 0)
    return result

return sub_140a74f90(rbx)
