// 函数: sub_14206a0d0
// 地址: 0x14206a0d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = sx.q(arg2)
int64_t* rdi_1 = r9 * 0x150 + *(arg1 + 0x20)
*rdi_1 = arg3
rdi_1[8].d = arg2
rdi_1[7] = arg4
void* arg_28
void* rcx = arg_28
int64_t* r8 = *(*(arg1 + 0x30) + 0x40)
void* r14 = *(*r8 + (sx.q(*(arg1 + 0x70)) << 3))
rdi_1[0xa].d = arg6
int32_t* rax_3

if (rcx != 0)
    rax_3 = *(rcx + 0x20)
    r8 = &rax_3[sx.q(*(rcx + 0x28))]

int32_t rcx_2

if (rcx == 0 || rax_3 == r8)
label_14206a152:
    rcx_2 = 0
else
    while (*rax_3 != arg2)
        rax_3 = &rax_3[1]
        
        if (rax_3 == r8)
            goto label_14206a152
    
    rcx_2 = 1
    *(rdi_1 + 0x84) = *(arg4 + 0x10)

if (arg5 != 0)
    if (*(arg5 + 0x28) s> arg2)
        rdi_1[0x11].d = *(*(arg5 + 0x20) + (r9 << 3))
    
    rcx_2 = 2

*(rdi_1 + 0x44) = rcx_2
*(rdi_1 + 0x54) = arg7
*(rdi_1 + 0x4c) = *(arg4 + 0x10)
sub_1405d16e0(&rdi_1[0xc], *(*(*arg8 + 0x98))(arg8, &arg_28, r8))
sub_1405ec8a0(&arg_28)
sub_1405d16e0(&rdi_1[0xd], *(*(*arg8 + 0xa0))(arg8, &arg_28))
sub_1405ec8a0(&arg_28)
sub_1405d16e0(&rdi_1[0xe], *(*(*arg8 + 0xa8))(arg8, &arg_28))
sub_1405ec8a0(&arg_28)
rdi_1[0xb].d = (*(*arg8 + 0xb0))(arg8)
sub_1405d16e0(&rdi_1[0xf], *(*(*arg8 + 0x90))(arg8, &arg_28))
sub_1405ec8a0(&arg_28)
rdi_1[9].d = (*(*arg8 + 0x80))(arg8)
int32_t rax_21 = *(arg1 + 0x44) * *(arg4 + 0x10)
rdi_1[4] = arg8
rdi_1[0x10].d = rax_21 u>> 2
rdi_1[5] = arg9
*(arg9 + 0x240) = -1
uint64_t result = zx.q(data_143a2e214)

if (data_143f40a3c s> 0)
    result = 1

if (result.d s> 0 && (*(arg4 + 0xc) != 0 || result.d == 1))
    result = *(r14 + 0x18)
    int64_t rcx_18 = *(result + 0x18)
    rdi_1[6] = rcx_18
    
    if (rcx_18 != 0)
        *(rdi_1 + 0x114) = *(arg4 + 8)
        result = zx.q(*(arg4 + 4))
        rdi_1[0x22].d = result.d

return result
