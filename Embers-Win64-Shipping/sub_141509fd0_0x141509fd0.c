// 函数: sub_141509fd0
// 地址: 0x141509fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rbx = zx.d(arg1[0x1a].b)
arg1[0x1a] += 1
int64_t rdi = sx.q(arg1[8])
int32_t rax = (rdi + 1).d
arg1[8] = rax

if (rax s> arg1[9])
    sub_140594770(&arg1[6])

*(*(arg1 + 0x18) + (rdi << 1)) = 0xffff
int64_t rdi_1 = sx.q(arg1[0xc])
int32_t i_1 = (1 << (*arg1).b) - 1
int32_t rax_2 = rdi_1.d + i_1
arg1[0xc] = rax_2

if (rax_2 s> arg1[0xd])
    sub_1405a4cf0(&arg1[0xa])

int64_t rdx_3 = *(arg1 + 0x28)
int64_t i_2 = sx.q(i_1)
memmove(rdx_3 + (i_2 << 2), rdx_3, (rdi_1 << 2).d)
int32_t rdi_2 = arg1[0x10]
int32_t rax_3 = rdi_2 + i_1
arg1[0x10] = rax_3

if (rax_3 s> arg1[0x11])
    sub_140594770(&arg1[0xe])

int64_t rdx_5 = *(arg1 + 0x38)
uint32_t result = memmove(rdx_5 + (i_2 << 1), rdx_5, rdi_2 * 2)

if (i_1 != 0)
    int32_t rbp = 0
    result = rbx & 0xf
    int32_t rbx_2 = rbx << 0x18 & 0xf000000
    uint32_t result_1 = result
    int32_t arg_10 = rbx_2
    int32_t var_3c_1 = 0xffffffff
    int32_t i
    
    do
        int64_t rbx_3 = sx.q(arg1[4])
        int32_t var_40_1 = (i_1 << (result.b * (*arg1).b) & 0xffffff) | rbx_2
        int32_t rax_10 = (rbx_3 + 1).d
        arg1[4] = rax_10
        
        if (rax_10 s> arg1[5])
            sub_1405a4f90(&arg1[2])
        
        int64_t rcx_9 = rbx_3 << 4
        *(rcx_9 + *(arg1 + 8)) = 0.o
        void* r8_5 = *(arg1 + 8) + rcx_9
        int32_t rdx_7 = *(r8_5 + 8)
        int16_t r9_1 = *(*(arg1 + 0x18) + ((zx.q(rdx_7 u>> 0x18) & 0xf) << 1))
        *(r8_5 + 0xc) = r9_1
        
        if (r9_1 != 0xffff)
            *(*(arg1 + 8) + zx.q(r9_1) * 0x10 + 0xe) = rbx_3.w
            rdx_7 = *(r8_5 + 8)
        
        int64_t rdx_8 = sx.q(rbp)
        rbp += 1
        *(*(arg1 + 0x18) + ((zx.q(rdx_7 u>> 0x18) & 0xf) << 1)) = rbx_3.w
        *(*(arg1 + 0x28) + (rdx_8 << 2)) = *(r8_5 + 8) & 0xffffff
        *(*(arg1 + 0x38) + (rdx_8 << 1)) = rbx_3.w
        rbx_2 = arg_10
        result = result_1
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
