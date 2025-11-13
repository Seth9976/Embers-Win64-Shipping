// 函数: sub_140e98140
// 地址: 0x140e98140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140596eb0(arg1 + 0xc0)
int64_t rcx_1 = *(arg1 + 0xb0)

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

*(arg1 + 0xa8) = 0
int64_t rcx_2 = *(arg1 + 0xa0)

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

sub_140597460(arg1 + 0x60)
*(arg1 + 0x58) = 0
int64_t rcx_4 = *(arg1 + 0x50)

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

void* result = sub_140597460(arg1 + 0x10)
int64_t* rcx_6 = *(arg1 + 8)

if (rcx_6 != 0)
    int32_t temp0_1 = *(rcx_6 + 0xc)
    *(rcx_6 + 0xc) -= 1
    
    if (temp0_1 == 1)
        return (*(*rcx_6 + 8))(rcx_6, 1)

return result
