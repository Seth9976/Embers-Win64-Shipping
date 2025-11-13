// 函数: sub_14209ff00
// 地址: 0x14209ff00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x20)
int64_t rax
int64_t* rbx
int64_t* rdi
void* r8

if (rcx == 0)
    rbx = nullptr
    rdi = nullptr
else
    rax, r8 = (*(*rcx + 0x260))(rcx)
    rbx = rax
    
    if (rax == 0)
        rdi = nullptr
    else
        void* rax_2 = sub_1424a23e0()
        void* rdx_1 = rbx[2]
        rax = sx.q(*(rax_2 + 0x38))
        
        if (rax.d s> *(rdx_1 + 0x38))
            rdi = nullptr
        else if (*(*(rdx_1 + 0x30) + (rax << 3)) != rax_2 + 0x30)
            rdi = nullptr
        else
            rdi = rbx

if (rbx == 0)
    rbx = nullptr
else
    void* rax_3 = sub_14252e610()
    void* rdx_2 = rbx[2]
    rax = sx.q(*(rax_3 + 0x38))
    
    if (rax.d s> *(rdx_2 + 0x38))
        rbx = nullptr
    else if (*(*(rdx_2 + 0x30) + (rax << 3)) != rax_3 + 0x30)
        rbx = nullptr

if (rdi != 0)
    int64_t* rcx_3 = rdi[0x44]
    (*(*rcx_3 + 0x278))(rcx_3, *(arg1 + 0x30) & 1, 0)
    rdi[0x45].d ^= (*(arg1 + 0x30) << 2 ^ rdi[0x45].d) & 4
    jump(*(*rdi + 0x5e0))

if (rbx != 0 && sub_1420e6770(rbx).b != 0)
    r8.b = 1
    sub_141f49a80(rbx[0x44], *(arg1 + 0x30) & 1, r8.b)
