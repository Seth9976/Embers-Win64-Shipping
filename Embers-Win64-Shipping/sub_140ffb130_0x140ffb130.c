// 函数: sub_140ffb130
// 地址: 0x140ffb130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

void* rbx_1 = nullptr
int64_t* rdi_1 = nullptr

if (arg3 != 0)
    void* rax_2 = (*(*arg3 + 0x48))(arg3)
    rbx_1 = rax_2
    
    if (rax_2 != 0)
        rdi_1 = *(rax_2 + 0x40)

int64_t* r15_1 = *(arg2 + 0xa8)
*(arg2 + 0xa8) = rdi_1

if (rdi_1 != 0)
    int64_t rdx = *rdi_1
    (*(rdx + 8))(rdi_1, rdx)

if (r15_1 != 0)
    (*(*r15_1 + 0x10))(r15_1)

*(arg2 + 0x98) = rbx_1
sub_1408c8cf0(arg2 + 0x60, arg3)
