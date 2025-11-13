// 函数: sub_140b54e30
// 地址: 0x140b54e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result_1 = 0
arg1[1] = &arg1[2]
__builtin_memset(&arg1[2], 0, 0x18)
sub_140b4e510(arg1, arg2)
(*(*arg1 + 0x80))(arg1, *(arg2 + 0x80), *(arg2 + 0x78))
*(arg1 + 0x2b) &= 0xfd
uint64_t result = zx.q(*(arg2 + 0x88))
uint64_t* rbx = arg1[0xc]
arg1[0x11].b = result.b
int64_t* rdx_1 = *(arg2 + 0x60)

if (rdx_1 != 0)
    if (rbx != 0)
        return sub_140b4cd20(rbx, rdx_1)
    
    result = j_sub_140a82f30(0x10)
    
    if (result != 0)
        result = sub_140b4c5b0(result, *(arg2 + 0x60))
        result_1 = result
    
    arg1[0xc] = result_1
else if (rbx != 0)
    uint64_t rcx_3 = *rbx
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    result = j_sub_140a74f90(rbx)
    arg1[0xc] = result_1

return result
