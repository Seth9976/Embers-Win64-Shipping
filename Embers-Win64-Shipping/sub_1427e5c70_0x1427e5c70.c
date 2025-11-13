// 函数: sub_1427e5c70
// 地址: 0x1427e5c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *arg1

if (*(r8 + 0x10) != 0)
    uint64_t rdx_1 = zx.q(*(r8 + 0x10) - 1) * 3
    
    if (*(*(r8 + 8) + (rdx_1 << 3) + 8) != 0
            && *(*(r8 + 8) + zx.q(*(r8 + 0x10) - 1) * 0x18 + 0x10) != 0)
        int64_t* rcx_1 = arg1[5]
        (*(*rcx_1 + 0x48))(rcx_1, rdx_1)
    
    void* rax = *arg1
    *(rax + 0x10) -= 1

void* rdx_2 = *arg1
arg1[9].b = 1

if (*(rdx_2 + 0x10) == 0)
    return 

char rdx_3 = arg1[9].b

if (*(*(rdx_2 + 8) + zx.q(*(rdx_2 + 0x10) - 1) * 0x18 + 0x10) == 0)
    rdx_3 = 0

arg1[9].b = rdx_3
