// 函数: sub_1407c91d0
// 地址: 0x1407c91d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg4
int64_t rax = 0

if (rcx != 0)
    int64_t rdx = sx.q(*(rcx + 0x10c))
    int64_t* rdi_1 = *(arg4[1] + 0x10)
    int64_t rsi_1 = rdx << 3
    int64_t rax_2 = rdi_1[3]
    
    if (*(rsi_1 + rax_2) == 0)
        sub_1419ccf30(rdi_1, rdx.d)
        rax_2 = rdi_1[3]
    
    rax = *(rsi_1 + rax_2)

int64_t r9_1 = arg4[2] + 0xc8
int64_t arg_10 = rax
return sub_14077c5f0(arg3, &arg_10, arg2 + 8, r9_1, 0)
