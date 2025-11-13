// 函数: sub_140d3c5d0
// 地址: 0x140d3c5d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2)
uint32_t rdx_1 = zx.d(temp0)
int32_t rax_2 = temp1 + rdx_1
uint64_t result = zx.q(zx.d(rax_2.w) - rdx_1)
int32_t* rbx_2 = (sx.q(rax_2 s>> 0x10) << 4) + *(arg1 + 8)
int64_t rcx = *(rbx_2 + 8)

if (rcx != 0)
    result = sx.q(result.d) * 2
    
    if (*(rcx + (result << 3)) != 0)
        int32_t var_10_1 = 0xffffffff
        *(rcx + (result << 3)) = 0.o
        int32_t temp2_1 = *rbx_2
        *rbx_2 -= 1
        
        if (temp2_1 == 1)
            result = j_sub_140a74f90(*(rbx_2 + 8))
            *(rbx_2 + 8) = 0
            *(arg1 + 0x20) -= 0x100000
        
        *(arg1 + 0x18) -= 1

return result
