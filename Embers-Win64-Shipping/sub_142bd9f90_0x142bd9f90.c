// 函数: sub_142bd9f90
// 地址: 0x142bd9f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi_1 = zx.q(*arg1 + 1)
int32_t r8 = arg1[1]
int32_t* rbx = arg1
int32_t r9 = 0

if (rdi_1.d u> r8)
    int64_t rax_1 = *(arg1 + 8)
    int32_t rbp_2 = (rdi_1 + 7).d & 0xfffffff8
    int32_t arg_8 = 0
    int64_t rax_2 = sub_142b99a90(arg2, 0x18, r8, rbp_2, rax_1, &arg_8)
    r9 = arg_8
    *(rbx + 8) = rax_2
    
    if (r9 == 0)
        rbx[1] = rbp_2
    
    if (r9 != 0)
        *arg3 = 0
        return zx.q(r9)

int64_t rax_4 = *(rbx + 8)
int64_t rdx_1 = (rdi_1 - 1) * 3
*(rax_4 + (rdx_1 << 3)) = 0
*(rax_4 + (rdx_1 << 3) + 0x10) = 0
*rbx = rdi_1.d
*arg3 = rax_4 + (rdx_1 << 3)
return zx.q(r9)
