// 函数: sub_140969190
// 地址: 0x140969190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg2 + 8)

if (rcx == 0 || (*(*rcx + 0x28))(rcx).b == 0)
    return 

void* rcx_1 = *(arg1 + 0x248)

if (rcx_1 == 0 || sub_140947320(rcx_1 + 0x50, *(arg2 + 8)) != 0xffffffff)
    return 

void* rdi_1 = *(arg1 + 0x248)
int64_t rbp_1 = sx.q(*(rdi_1 + 0x58))
int32_t rax_2 = (rbp_1 + 1).d
*(rdi_1 + 0x58) = rax_2

if (rax_2 s> *(rdi_1 + 0x5c))
    sub_1405a4f90(rdi_1 + 0x50)

int64_t* rcx_6 = (rbp_1 << 4) + *(rdi_1 + 0x50)
*rcx_6 = *(arg2 + 8)
void* rax_4 = *(arg2 + 0x10)
rcx_6[1] = rax_4

if (rax_4 != 0)
    *(rax_4 + 8) += 1

sub_140926420(arg1 + 0x290, arg2)
