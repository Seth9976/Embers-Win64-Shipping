// 函数: sub_1426b4390
// 地址: 0x1426b4390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = sub_1426b21d0(arg1, arg3)
void* rdx_1 = *(arg1 + 0xc0)
int64_t r14 = 0
void* const rdi

if (rdx_1 == 0 || rax == 0xff)
    rdi = nullptr
else
    char rax_1 = *(rdx_1 + 0x4c)
    
    if (rax u< rax_1)
        void* rcx_3 = *(rdx_1 + 0x30)
        
        if (rcx_3 == 0)
            rdi = nullptr
        else
            rdi = sub_1426b21a0(rcx_3, rax)
    else
        rdi = *(rdx_1 + 0x38) + (zx.q(rax) - zx.q(rax_1)) * 0x18

int32_t rax_11
int64_t zmm0

if (rdi == 0)
    zmm0 = data_143f720c0
    rax_11 = data_143f720c8
else
    void* rbx_1 = *(rdi + 8)
    
    if (rbx_1 == 0)
        zmm0 = data_143f720c0
        rax_11 = data_143f720c8
    else if (*(rbx_1 + 0x10) != sub_14272e720())
        zmm0 = data_143f720c0
        rax_11 = data_143f720c8
    else
        if (*(arg1 + 0xd0) != 0 && zx.d(rax) s< *(arg1 + 0xe0))
            r14 = zx.q(*(*(arg1 + 0xd8) + (zx.q(rax) << 1))) + *(arg1 + 0xc8)
        
        int64_t* rcx_5 = r14 + ((zx.q(*(*(rdi + 8) + 0x2b) u>> 1) & 1) << 2)
        int32_t rax_10
        
        if (rcx_5 == 0)
            zmm0 = data_143f720c0
            rax_10 = data_143f720c8
        else
            zmm0 = *rcx_5
            rax_10 = rcx_5[1].d
        
        rax_11 = rax_10

*arg2 = zmm0
arg2[1].d = rax_11
return arg2
