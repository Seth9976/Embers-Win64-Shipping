// 函数: sub_14186b480
// 地址: 0x14186b480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142fe7e70

if (arg1[4] != 0)
    void* rax_1 = arg1[6]
    void* rcx = &arg1[8]
    
    if (rax_1 != 0)
        rcx = rax_1
    
    (*(*rcx + 0x10))(rcx)

int64_t rcx_1 = arg1[1]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

*arg1 = &data_142e52080

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
