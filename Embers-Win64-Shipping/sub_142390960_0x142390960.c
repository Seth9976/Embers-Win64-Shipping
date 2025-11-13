// 函数: sub_142390960
// 地址: 0x142390960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x15) == 0 && *(arg1 + 0x10) == 0 && *(arg1 + 0x13) == 0)
    return 0

int64_t* rbx_1 = *(arg1 + 0x78)
void* rdi_3 = &rbx_1[sx.q(*(arg1 + 0x80)) * 2]

if (rbx_1 == rdi_3)
    return 1

while (true)
    int64_t rcx = *rbx_1
    
    if (rcx != 0 && sub_142390960(rcx) == 0)
        return 0
    
    rbx_1 = &rbx_1[2]
    
    if (rbx_1 == rdi_3)
        return 1
