// 函数: sub_141d790e0
// 地址: 0x141d790e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x70)
int64_t rdi = sx.q(*(arg1 + 0x78))
void* rsi = &rbx[rdi]

if (rbx != rsi)
    do
        void* rcx = *rbx
        bool z_1
        
        if (0 == *(rcx + 8))
            *(rcx + 8) = 0
            z_1 = true
        else
            *(rcx + 8)
            z_1 = false
        
        if (not(z_1))
            int64_t* rcx_1 = *rbx
            (*(*rcx_1 + 0x10))(rcx_1)
        
        rbx = &rbx[1]
    while (rbx != rsi)
    
    rdi = zx.q(*(arg1 + 0x78))

int64_t* rbx_1 = *(arg1 + 0x70)

if (rdi.d != 0)
    int32_t i
    
    do
        int64_t* rcx_2 = *rbx_1
        
        if (rcx_2 != 0)
            (**rcx_2)(rcx_2, 1)
        
        rbx_1 = &rbx_1[1]
        i = rdi.d
        rdi = zx.q(rdi.d - 1)
    while (i != 1)

*(arg1 + 0x78) = 0

if (*(arg1 + 0x7c) != 0)
    sub_1405c5570(arg1 + 0x70, 0)

void* rcx_4 = *(arg1 + 0x60)

if (rcx_4 == 0)
    return 

sub_141d7f9e0(rcx_4)
void* rdx_1 = *(arg1 + 0x60)

if (rdx_1 != 0)
    *(arg1 + 0x60) = 0
    sub_141d75b40(arg1 + 0x60, rdx_1)
