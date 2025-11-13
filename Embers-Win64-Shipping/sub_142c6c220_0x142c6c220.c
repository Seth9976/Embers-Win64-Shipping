// 函数: sub_142c6c220
// 地址: 0x142c6c220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg2
int64_t r14 = arg2[sx.q(arg7) + 0x47]
int64_t rsi = arg1[2]
void* rdi = *(rcx + 0x250)
int64_t* r12 = *arg1
uint64_t rax_2 = rsi - arg4

if (((*(arg2[0x87] + 0x80) & 1) != 0 || *(arg2 + 0x164) == 2) && arg2[0x42].d != 0x14)
    int64_t rbp = 0x4000
    
    if (rsi u< 0x4000)
        rbp = rsi
    
    arg5 = memcpy(rcx + 0xa88, r12, rbp.d)
    r12 = *arg2 + 0xa88

uint64_t arg_8
int64_t* var_48 = &arg_8
int32_t rax_4 = sub_142c64d60(arg2, r14, arg5, r12)

if (rax_4 == 0)
    uint64_t rdx_2 = arg_8
    uint64_t r14_1 = rdx_2
    void* rcx_3 = *arg2
    
    if (rdx_2 u> rax_2)
        r14_1 = rax_2
    
    void* rbp_2 = rdx_2 - r14_1
    
    if (*(rcx_3 + 0x5f0) != rax_4.b)
        int512_t zmm2 = sub_142c64600(rcx_3, rax_4 + 2, r12, r14_1, arg6, arg2)
        
        if (rbp_2 != 0)
            sub_142c64600(*arg2, rax_4 + 4, r14_1 + r12, rbp_2, zmm2, arg2)
        
        rdx_2 = arg_8
    
    *arg3 += rdx_2.d
    
    if (rdi == 0)
        if (rdx_2 != rsi)
            return 0x37
        
        sub_142c6ff90(arg2)
    else
        *(rdi + 0x30) += rbp_2
        uint64_t rcx_5 = arg_8
        
        if (rcx_5 != rsi)
            void* rdx_6 = *arg1 + rcx_5
            *(rdi + 0x58) = *(*arg2 + 0x4e80)
            int64_t rcx_7 = *(*arg2 + 0x4e88)
            *(rdi + 0x68) = *(rdi + 0x10)
            *(rdi + 0x70) = *(rdi + 8)
            *(rdi + 0x60) = rcx_7
            *(*arg2 + 0x4e80) = sub_142c6e910
            *(*arg2 + 0x4e88) = arg2
            *(rdi + 0x10) = rdx_6
            *(rdi + 8) = rsi - rcx_5
            *(rdi + 0x80) = arg1
            *(rdi + 0x78) = 1
            return 0
        
        *(rdi + 0x78) = 2

data_143ccb8a0(*arg1)
data_143ccb8a0(arg1)
return zx.q(rax_4)
