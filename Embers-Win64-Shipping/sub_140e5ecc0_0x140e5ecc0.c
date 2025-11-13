// 函数: sub_140e5ecc0
// 地址: 0x140e5ecc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi_1 = *(arg1 + 0x58) - 1
int64_t r14 = sx.q(arg2)
int64_t rbx = sx.q(rdi_1)

if (rbx s< r14)
    return 

int64_t rsi_2 = rbx << 4

do
    if (rbx s>= 0 && rdi_1 s< *(arg1 + 0x58))
        int64_t* rcx = *(rsi_2 + *(arg1 + 0x50))
        (*(*rcx + 0x38))(rcx)
    
    rdi_1 -= 1
    rbx -= 1
    rsi_2 -= 0x10
while (rbx s>= r14)
