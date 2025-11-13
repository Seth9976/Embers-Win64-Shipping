// 函数: sub_142bae160
// 地址: 0x142bae160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg1[3]
uint64_t rbx = zx.q(arg4)
int64_t var_40 = *(rdi + 0x20) + (rbx << 3)
int16_t var_46 = *(rdi + 0x1a) - arg4.w
int16_t rax_2 = *(arg2 + 4) & 0xc8
int64_t r12
r12.b = rax_2 != 0
void var_48

if (rax_2 != 0)
    sub_142b95190(&var_48, arg2 + 0x10)

int16_t rax_3 = *(arg2 + 4)
int32_t rbp_2
int32_t rsi_2

if ((rax_3.b & 2) == 0)
    uint64_t rdx_2 = zx.q(*(arg2 + 8) + arg3)
    uint64_t r8_1 = zx.q(*(arg2 + 0xc) + rbx.d)
    
    if (rdx_2.d u>= rbx.d || r8_1.d u>= sx.d(*(rdi + 0x1a)))
        return 0x15
    
    int64_t rcx_1 = *(rdi + 0x20)
    rbp_2 = *(rcx_1 + (rdx_2 << 3)) - *(rcx_1 + (r8_1 << 3))
    rsi_2 = *(rcx_1 + (rdx_2 << 3) + 4) - *(rcx_1 + (r8_1 << 3) + 4)
    goto label_142bae2be

rbp_2 = *(arg2 + 8)
rsi_2 = *(arg2 + 0xc)

if (rbp_2 != 0 || rsi_2 != 0)
    if (r12.b != 0 && (0x800 & rax_3) != 0)
        *(arg2 + 0x14)
        int32_t rax_5 = sub_142b92d60(*(arg2 + 0x10))
        *(arg2 + 0x18)
        int32_t rax_6 = sub_142b92d60(*(arg2 + 0x1c))
        rbp_2 = sub_142b93e80(rbp_2, rax_5)
        rsi_2 = sub_142b93e80(rsi_2, rax_6)
    
    if ((arg1[4].b & 1) == 0)
        void* rcx_6 = *(arg1[1] + 0x40)
        int32_t rbx_2 = *(rcx_6 + 8)
        rbp_2 = sub_142b93e80(rbp_2, *(rcx_6 + 4))
        rsi_2 = sub_142b93e80(rsi_2, rbx_2)
        
        if ((*(arg2 + 4) & 4) != 0 && (arg1[4].b & 2) == 0)
            if (*(*(*arg1 + 0x90) + 0x78) == 0x23)
                rbp_2 = (rbp_2 + 0x20) & 0xffffffc0
            
            rsi_2 = (rsi_2 + 0x20) & 0xffffffc0
        
        goto label_142bae2be
    
label_142bae2be:
    
    if (rbp_2 != 0 || rsi_2 != 0)
        sub_142b95270(&var_48, rbp_2, rsi_2)

return 0
