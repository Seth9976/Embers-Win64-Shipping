// 函数: sub_141763830
// 地址: 0x141763830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142fc6e98
int64_t rcx = arg1[0x30]

if (rcx != 0)
    sub_140a74f90(rcx)

if (arg1[0x28] != 0)
    void* rax_1 = arg1[0x2a]
    void* rcx_1 = &arg1[0x2c]
    
    if (rax_1 != 0)
        rcx_1 = rax_1
    
    (*(*rcx_1 + 0x10))(rcx_1)

if (arg1[0x20] != 0)
    void* rax_3 = arg1[0x22]
    void* rcx_2 = &arg1[0x24]
    
    if (rax_3 != 0)
        rcx_2 = rax_3
    
    (*(*rcx_2 + 0x10))(rcx_2)

if (arg1[0x18] != 0)
    void* rax_5 = arg1[0x1a]
    void* rcx_3 = &arg1[0x1c]
    
    if (rax_5 != 0)
        rcx_3 = rax_5
    
    (*(*rcx_3 + 0x10))(rcx_3)

int64_t rcx_4 = arg1[0x14]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = arg1[0x12]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t rcx_6 = arg1[0x10]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t rcx_7 = arg1[0xe]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int64_t rcx_8 = arg1[0xc]

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

*arg1 = &data_142d40478

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
