// 函数: sub_1427c8600
// 地址: 0x1427c8600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = *(arg1 + 0x28)

if (i_2 != 0)
    uint64_t i_1 = zx.q(i_2)
    int64_t* rdi_1 = nullptr
    uint64_t i
    
    do
        int64_t* rcx = *(rdi_1 + *(arg1 + 0x18))
        
        if (rcx != 0)
            (*(*rcx + 0x10))(rcx)
        
        rdi_1 = &rdi_1[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

j_sub_140a74f90(*(arg1 + 0x18))
sub_1427c7e80(arg1 + 0x20)
sub_1427c7e80(arg1 + 0x30)
__builtin_memset(arg1, 0, 0x20)
*(arg1 + 0x40) = 0
return 0
