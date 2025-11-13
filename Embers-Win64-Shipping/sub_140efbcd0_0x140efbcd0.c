// 函数: sub_140efbcd0
// 地址: 0x140efbcd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i = arg1[3]

for (void* rbp_1 = sx.q(arg1[4].d) * 0x70 + i; i != rbp_1; i += 0x70)
    int64_t* j = *(i + 0x28)
    
    for (void* rdi_3 = &j[sx.q(*(i + 0x30)) * 6]; j != rdi_3; j = &j[6])
        int64_t* rcx = *j
        (*(*rcx + 0x58))(rcx)

jump(*(*arg1 + 0x50))
