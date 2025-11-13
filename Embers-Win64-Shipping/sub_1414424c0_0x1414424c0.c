// 函数: sub_1414424c0
// 地址: 0x1414424c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg1 + 0x28
int64_t* rcx = *(arg1 + 0x28)

if (rcx != 0)
    (*(*rcx + 0x38))(rcx)

for (int64_t i = 3; i != 0; )
    int64_t* rcx_1 = *(rdi - 8)
    rdi -= 8
    i -= 1
    
    if (rcx_1 != 0)
        (*(*rcx_1 + 0x38))(rcx_1)
