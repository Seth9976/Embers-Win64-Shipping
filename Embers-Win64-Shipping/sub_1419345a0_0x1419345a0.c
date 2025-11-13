// 函数: sub_1419345a0
// 地址: 0x1419345a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = arg1[1].d
int32_t rbx = 0
arg2[1].d = 0
uint128_t zmm0
zmm0.d = _mm_cvtepi32_ps(zx.o(rbp)).d f* 1.33333337f
int32_t rdi = int.d(zmm0.d)
int32_t arg_8 = rdi

if (*(arg2 + 0xc) != rdi)
    sub_1405c5510(arg2, rdi)
    rbx = arg2[1].d
    rdi = arg_8

if (rdi s> rbx)
    int32_t rdi_1 = rdi - rbx
    int32_t rax_1 = rbx + rdi_1
    arg2[1].d = rax_1
    
    if (rax_1 s> *(arg2 + 0xc))
        sub_1405daba0(arg2)
    
    memset(sx.q(rbx) + *arg2, 0, sx.q(rdi_1))
else if (rdi s< rbx && rbx != rdi)
    arg2[1].d = rdi
    sub_1405dac10(arg2)

int32_t var_38 = 0
int32_t arg_1c = 0
void arg_10
char rax_5 = sub_140aecc20((*sub_140b5e500(&arg_10, 0x101)).q, *arg2, &arg_8, *arg1, rbp, 0x10)
*(arg2 + 0x14) = rax_5
int32_t rax_6

if (rax_5 == 0)
    rax_6 = sub_14081d8c0(arg2, arg1)
else
    int64_t rbx_3 = sx.q(arg2[1].d)
    rax_6 = arg_8
    
    if (rax_6 s> rbx_3.d)
        arg2[1].d = rax_6
        
        if (rax_6 s> *(arg2 + 0xc))
            sub_1405daba0(arg2)
        
        int64_t rax_7 = memset(rbx_3 + *arg2, 0, sx.q(rax_6 - rbx_3.d))
        arg2[2].d = rbp
        return rax_7
    
    if (rax_6 s< rbx_3.d)
        int32_t rcx_11 = rbx_3.d
        
        if (rcx_11 != rax_6)
            arg2[1].d = rbx_3.d - (rcx_11 - rax_6)
            int64_t rax_8 = sub_1405dac10(arg2)
            arg2[2].d = rbp
            return rax_8

arg2[2].d = rbp
return rax_6
