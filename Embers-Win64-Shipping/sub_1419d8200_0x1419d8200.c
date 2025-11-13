// 函数: sub_1419d8200
// 地址: 0x1419d8200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = data_143f1da40

if (rdx == 0)
    return 

int64_t rbx_1
int64_t rdi_2

if (arg1 == 1)
    int64_t rdi_4 = data_143f20250
    int64_t rcx_3
    
    if (data_143de5480 == 0)
        rbx_1 = 0
        rcx_3 = 0
    else
        uint32_t rax_5 = GetCurrentThreadId()
        rdx = data_143f1da40
        rbx_1 = 0
        rcx_3.b = rax_5 != data_143de5470
    
    *(rdx + 0xd4) = *(rdi_4 + (rcx_3 << 2))
    rdi_2 = data_143f20298
else if (arg1 == 2)
    int64_t rdi_3 = data_143f20268
    int64_t rcx_2
    
    if (data_143de5480 == 0)
        rbx_1 = 0
        rcx_2 = 0
    else
        uint32_t rax_3 = GetCurrentThreadId()
        rdx = data_143f1da40
        rbx_1 = 0
        rcx_2.b = rax_3 != data_143de5470
    
    *(rdx + 0xd4) = *(rdi_3 + (rcx_2 << 2))
    rdi_2 = data_143f202b0
else
    int64_t rdi_1 = data_143f20238
    int64_t rcx_1
    
    if (data_143de5480 == 0)
        rbx_1 = 0
        rcx_1 = 0
    else
        uint32_t rax_1 = GetCurrentThreadId()
        rdx = data_143f1da40
        rbx_1 = 0
        rcx_1.b = rax_1 != data_143de5470
    
    *(rdx + 0xd4) = *(rdi_1 + (rcx_1 << 2))
    rdi_2 = data_143f20280

if (data_143de5480 != 0)
    rbx_1.b = GetCurrentThreadId() != data_143de5470

*(data_143f1da40 + 0xd8) = *(rdi_2 + (rbx_1 << 2))
