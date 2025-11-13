// 函数: sub_140f02610
// 地址: 0x140f02610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg2 + 0x30) s<= 0)
    return 

int64_t rdi_1 = 0

do
    int64_t* r14_1 = *(arg2 + 0x28)
    int64_t* rcx = *(r14_1 + rdi_1)
    int64_t arg_20
    (*(*rcx + 8))(rcx, &arg_20)
    int32_t rcx_1 = arg_20.d
    int32_t r8 = *arg3
    int32_t r9_1 = arg3[1]
    int32_t rdx_1 = r9_1
    
    if (rcx_1 s>= r8)
        r8 = rcx_1
    
    if (arg_20:4.d s<= r9_1)
        rdx_1 = arg_20:4.d
    
    int32_t var_34_1 = rdx_1
    int64_t arg_10
    int64_t rax_2
    int32_t rdx_2
    
    if (rdx_1 s> r8)
        rax_2 = r8.q
        arg_10 = rax_2
        rdx_2 = arg_10.d
    else
        rdx_2 = 0
        arg_10:4.d = 0
        arg_10.d = 0
        rax_2 = arg_10
    
    if ((rax_2 u>> 0x20).d - rdx_2 s> 0)
        int64_t* rcx_2 = *(r14_1 + rdi_1)
        (*(*rcx_2 + 0x70))(rcx_2, arg1, &arg_10)
    else if (rcx_1 s> r9_1)
        break
    
    i += 1
    rdi_1 += 0x30
while (i s< *(arg2 + 0x30))
