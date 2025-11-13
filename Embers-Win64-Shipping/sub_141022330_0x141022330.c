// 函数: sub_141022330
// 地址: 0x141022330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = *(arg1 + 0x138)
int32_t rax_4 =
    *(arg1 + 0x3b94) + *(arg1 + 0x3b90) + *(arg1 + 0x3b8c) + *(arg1 + 0x3b88) + *(arg1 + 0x3b84)
int32_t rdi = *(rbp + 0x30)
char rax_5 = rax_4.b + (*(arg1 + 0x3b80)).b

if (rax_4 != neg.d(*(arg1 + 0x3b80)) || rdi s> 0)
    rax_5 = 1

if (arg3 != 0 || rax_5 != 0)
    sub_1410179a0(*(arg1 + 0x1c8))
    int32_t rdx = *(arg1 + 0x8a0)
    int32_t rcx_1 = *(arg1 + 0x8a4)
    data_143f0f214
    data_143f0f214 += *(arg1 + 0x3b80)
    data_143f0f218
    data_143f0f218 += rcx_1 + rdx
    
    if (rdi s<= 0)
        sub_14101f770(*(*(arg1 + 0x1c8) + 0x18), arg1 + 0x1c0, arg3)
    else
        int64_t rbp_1 = sx.q(*(rbp + 0x30))
        int32_t rax_8 = (rbp_1 + 1).d
        *(rbp + 0x30) = rax_8
        
        if (rax_8 s> *(rbp + 0x34))
            sub_1405a4f90(rbp + 0x28)
        
        void* rcx_5 = *(arg1 + 0x1c8)
        void*** rax_11 = (rbp_1 << 4) + *(rbp + 0x28)
        *rax_11 = &data_142efcd90
        rax_11[1] = rcx_5
        
        if (rcx_5 != 0)
            *(rcx_5 + 0x14) += 1
        
        *rax_11 = &data_142efcd90
        void* rcx_6 = *(arg1 + 0x138)
        int64_t* rcx_7
        
        if (*(arg1 + 0x136) == 0)
            rcx_7 = *(rcx_6 + 0x38)
        else
            rcx_7 = *(rcx_6 + 0x48)
        
        (*(*rcx_7 + 8))(rcx_7, rbp + 0x28, zx.q(arg3))
        sub_141033c70(rbp + 0x28, 0)
    
    sub_141027b40(arg1)

void* rax_13 = *(arg1 + 0x1c8)
*arg2 = &data_142efcd90
arg2[1] = rax_13

if (rax_13 != 0)
    *(rax_13 + 0x14) += 1

*arg2 = &data_142efcd90
return arg2
