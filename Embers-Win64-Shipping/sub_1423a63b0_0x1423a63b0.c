// 函数: sub_1423a63b0
// 地址: 0x1423a63b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_1433395e0

if (arg1[0x42] != 0)
    void* rax_1 = arg1[0x44]
    void* rcx = &arg1[0x46]
    
    if (rax_1 != 0)
        rcx = rax_1
    
    (*(*rcx + 0x10))(rcx)

int64_t rcx_1 = arg1[0x3f]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

*arg1 = &data_143339560
int64_t rcx_2 = arg1[0x2f]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

return sub_1423a6430(arg1) __tailcall
