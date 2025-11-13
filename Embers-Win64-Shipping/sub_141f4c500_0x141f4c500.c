// 函数: sub_141f4c500
// 地址: 0x141f4c500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rdi
void* const var_8 = rdi
sub_141f4dc50(arg1, sub_140b33630("Animation"))
sub_141f4d2c0(arg1)

if ((*(arg1 + 0x71e) & 8) != 0)
    int64_t* rcx_2 = arg1[0x116]
    
    if (rcx_2 != 0 && (*(*rcx_2 + 0x38))(rcx_2) != 0)
        void* rax_3 = sub_140d3c6e0(&arg1[0x87])
        rdi = rax_3
        void* rax_4
        void* rcx_4
        int64_t rdx_1
        
        if (rax_3 != 0)
            rax_4 = sub_142591550()
            rcx_4 = *(rdi + 0x10)
            rdx_1 = sx.q(*(rax_4 + 0x38))
        
        if (rax_3 == 0 || rdx_1.d s> *(rcx_4 + 0x38)
                || *(*(rcx_4 + 0x30) + (rdx_1 << 3)) != rax_4 + 0x30)
            rdi = nullptr
        
        int64_t* rcx_6 = arg1[0x116]
        (*(*rcx_6 + 0x58))(rcx_6, &arg1[0x11c], arg1, rdi, arg5)

sub_141f747a0(arg1, arg2, zx.q(arg3), arg4)
arg1[0xf2].d = 0

if (*(arg1 + 0x794) s<= 0xffffffff)
    sub_140991380(&arg1[0xf1], 0)

char rax_7 = *(arg1 + 0x71c)
*(arg1 + 0x71c) = ((rax_7 << 3 ^ rax_7) & 0x20) ^ rax_7
char* rax_9 = arg1[0x13a]

if (rax_9 == 0 || (*rax_9 & 1) == 0)
    rdi.b = 0
else
    rdi.b = 1

if (*data_143f3b610 s<= 0 || rdi.b != 0)
    rax_9.b = 0
else
    rax_9.b = 4

if (arg4 != 0)
    *(arg4 + 9) = rax_9.b
    bool cond:2_1 = *data_143f3b628 s> 0
    
    if ((*(arg4 + 0xa) u>> 4 & 1) != cond:2_1)
        sub_1423c9c20(arg4, cond:2_1)

if (arg1[0x13c] == 0 && rdi.b == 0)
    sub_141f375c0(arg1)

return sub_140b37f60("Animation") __tailcall
