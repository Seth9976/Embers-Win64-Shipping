// 函数: sub_14105ab40
// 地址: 0x14105ab40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141040890(arg1 + 0xc8, arg2)
void* rax = arg2[1]

if (rax != 0)
    rax = *(rax + 0x60)

*(arg1 + 0xd8) = rax
int32_t result = 0x42efcd90
void* rcx_1 = arg2[1]
*arg2 = &data_142efcd90

if (rcx_1 != 0)
    result = *(rcx_1 + 0x14)
    *(rcx_1 + 0x14) -= 1
    
    if (result == 1)
        int64_t* rbx_1 = arg2[1]
        
        if (rbx_1 != 0)
            sub_14100eba0(rbx_1)
            return j_sub_140a74f90(rbx_1)

return result
