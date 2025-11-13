// 函数: sub_141dd06d0
// 地址: 0x141dd06d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((arg1[0xb].b & 0x10) == 0)
    return 

void* rdi_1 = arg1[0x26]

if (rdi_1 == 0)
    return 

uint8_t rcx = arg1[0x12].b

if (data_143f38d82 != (rcx u>> 1 & 1))
    sub_141dd9fc0(arg1)
    rcx = arg1[0x12].b
    rdi_1 = arg1[0x26]

if ((rcx & 2) != 0)
    if (rdi_1 == 0)
        jump(*(*arg1 + 0x438))
    
    void* rax_1 = sub_142577430()
    void* rcx_2 = *(rdi_1 + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s> *(rcx_2 + 0x38) || *(*(rcx_2 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
        jump(*(*arg1 + 0x438))
    
    if (sub_141f1e460(rdi_1) == 0)
        jump(*(*arg1 + 0x438))
else if (*(rdi_1 + 0xc0) == 0 && arg1[0x1e].b == 1)
    (*(*arg1 + 0x430))(arg1, &arg1[0xc])
    (*(*arg1 + 0x428))(arg1)
