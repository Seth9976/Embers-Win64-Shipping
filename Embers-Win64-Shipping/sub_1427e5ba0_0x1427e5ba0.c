// 函数: sub_1427e5ba0
// 地址: 0x1427e5ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = arg1[1]

if (*(rcx + 0x10) == 0)
    return 

int32_t rdi_1 = *(*(rcx + 8) + (zx.q(*(rcx + 0x10) - 1) << 2))
void* rax_2 = *arg1

for (int32_t i = *(rax_2 + 0x10); i u> rdi_1; i = *(rax_2 + 0x10))
    if (i != 0)
        if (*(*(rax_2 + 8) + zx.q(*(rax_2 + 0x10) - 1) * 0x18 + 8) != 0)
            uint64_t rdx_4 = zx.q(*(rax_2 + 0x10) - 1) * 3
            
            if (*(*(rax_2 + 8) + (rdx_4 << 3) + 0x10) != 0)
                int64_t* rcx_7 = arg1[5]
                (*(*rcx_7 + 0x48))(rcx_7, rdx_4)
        
        void* rax_4 = *arg1
        *(rax_4 + 0x10) -= 1
    
    rax_2 = *arg1
    arg1[9].b = 1
    
    if (*(rax_2 + 0x10) != 0)
        char r8_1 = arg1[9].b
        
        if (*(*(rax_2 + 8) + zx.q(*(rax_2 + 0x10) - 1) * 0x18 + 0x10) == 0)
            r8_1 = 0
        
        arg1[9].b = r8_1

void* rax = arg1[1]
*(rax + 0x10) -= 1
