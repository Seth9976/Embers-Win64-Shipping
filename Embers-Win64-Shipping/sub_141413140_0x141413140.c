// 函数: sub_141413140
// 地址: 0x141413140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = sx.q(*(arg1 + 0xa8))
void* r8 = *(*(arg1 + 0xa0) + 0xf0)
void* rdi = r8 + 0x1bb8

if (*(r8 + 0x1bdc) != 0)
    *(*(r8 + 0x1ba8) + (sx.q(*(r8 + 0x1bd8)) << 3)) = rdx.d

int64_t rax_2 = *(r8 + 0x1ba8)
int32_t r9 = -1
*(rax_2 + (rdx << 3)) = 0xffffffff
int32_t rax_3

if (*(r8 + 0x1bdc) s<= 0)
    rax_3 = -1
else
    rax_3 = *(r8 + 0x1bd8)

*(rax_2 + (rdx << 3) + 4) = rax_3
*(r8 + 0x1bdc) += 1
*(r8 + 0x1bd8) = rdx.d
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rdx.d)
void* rcx_3 = *(rdi + 0x10)

if (rcx_3 != 0)
    rdi = rcx_3

int32_t result = (temp1 + (temp0 & 0x1f)) s>> 5
int64_t result_1 = sx.q(result)
*(rdi + (result_1 << 2)) &= not.d(rol.d(1, rdx.b))
int64_t rdx_3 = sx.q(*(arg1 + 0xac))

if (rdx_3.d != 0xffffffff)
    void* rbx_2 = r8 + 0x1bf0
    
    if (*(r8 + 0x1c14) != 0)
        *(*(r8 + 0x1be0) + (sx.q(*(r8 + 0x1c10)) << 3)) = rdx_3.d
    
    int64_t rax_8 = *(r8 + 0x1be0)
    *(rax_8 + (rdx_3 << 3)) = 0xffffffff
    
    if (*(r8 + 0x1c14) s> 0)
        r9 = *(r8 + 0x1c10)
    
    *(rax_8 + (rdx_3 << 3) + 4) = r9
    *(r8 + 0x1c14) += 1
    *(r8 + 0x1c10) = rdx_3.d
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rdx_3.d)
    void* rcx_6 = *(rbx_2 + 0x10)
    
    if (rcx_6 != 0)
        rbx_2 = rcx_6
    
    result = (temp3_1 + (temp2_1 & 0x1f)) s>> 5
    int64_t result_2 = sx.q(result)
    *(rbx_2 + (result_2 << 2)) &= not.d(rol.d(1, rdx_3.b))

int64_t rcx_7 = *(arg1 + 0x68)

if (rcx_7 == 0)
    return result

return sub_140a74f90(rcx_7)
