// 函数: sub_1426b0e80
// 地址: 0x1426b0e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_1426b2ca0(arg1)

if (rax == 0)
    return rax

int64_t rax_1 = sub_1426b21d0(rax, arg2 + 0x10)
void* rdx_1 = *(rax + 0xc0)
int64_t r14 = 0
char rbp = rax_1.b
int64_t rdi

if (rdx_1 == 0 || rax_1.b == 0xff)
    rdi = 0
else
    rax_1 = zx.q(*(rdx_1 + 0x4c))
    
    if (rbp u< rax_1.b)
        void* rcx_4 = *(rdx_1 + 0x30)
        
        if (rcx_4 == 0)
            rdi = 0
        else
            rdi = sub_1426b21a0(rcx_4, rbp)
    else
        rdi = *(rdx_1 + 0x38) + (zx.q(rbp) - zx.q(rax_1.b)) * 0x18

if (rdi != 0)
    void* rbx_1 = *(rdi + 8)
    
    if (rbx_1 != 0 && *(rbx_1 + 0x10) == sub_14272dfc0())
        if (*(rax + 0xd0) != 0 && zx.d(rbp) s< *(rax + 0xe0))
            r14 = zx.q(*(*(rax + 0xd8) + (zx.q(rbp) << 1))) + *(rax + 0xc8)
        
        char* rcx_6 = r14 + ((zx.q(*(*(rdi + 8) + 0x2b) u>> 1) & 1) << 2)
        
        if (rcx_6 != 0)
            return zx.q(*rcx_6)

rax_1.b = 0
return rax_1
