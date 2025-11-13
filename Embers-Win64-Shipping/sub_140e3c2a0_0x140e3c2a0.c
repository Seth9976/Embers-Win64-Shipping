// 函数: sub_140e3c2a0
// 地址: 0x140e3c2a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140e3c210(arg1, 0xc0)
uint32_t rax = zx.d(*(arg1 + 0x14))
sub_140e3c5a0(arg1, rax + ((rax + 4) << 1))
bool cond:0 = *(arg1 + 0x34b5) == 0
char arg_8 = 8
uint8_t rax_1

if (not(cond:0))
    int64_t* rcx_1 = *arg1
    rax_1 = (*(*rcx_1 + 8))(rcx_1, &arg_8, 1)

if (cond:0 || rax_1 == 0)
    rax_1 = 0
else
    rax_1 = 1

int32_t rdx_3 = arg1[4].d
*(arg1 + 0x34b5) = rax_1
sub_140e3c5a0(arg1, rdx_3)
sub_140e3c5a0(arg1, *(arg1 + 0x1c))
bool cond:1 = *(arg1 + 0x34b5) == 0
uint32_t result = zx.d(*(arg1 + 0x14))
arg_8 = result.b

if (not(cond:1))
    int64_t* rcx_5 = *arg1
    result = (*(*rcx_5 + 8))(rcx_5, &arg_8, 1)

char rcx_4

if (cond:1 || result.b == 0)
    rcx_4 = 0
else
    rcx_4 = 1

int32_t rdi = 0
*(arg1 + 0x34b5) = rcx_4

if (*(arg1 + 0x14) u> 0)
    do
        arg_8 = rdi.b + 1
        char rax_6
        
        if (rcx_4 != 0)
            int64_t* rcx_6 = *arg1
            rax_6 = (*(*rcx_6 + 8))(rcx_6, &arg_8, 1)
        
        char rdx_5
        
        if (rcx_4 == 0 || rax_6 == 0)
            rdx_5 = 0
        else
            rdx_5 = 1
        
        int64_t rax_8 = sx.q(rdi)
        *(arg1 + 0x34b5) = rdx_5
        arg_8 = (*(rax_8 + arg1 + 0x15) << 4) + *(rax_8 + arg1 + 0x18)
        
        if (rdx_5 != 0)
            int64_t* rcx_7 = *arg1
            rax_8 = (*(*rcx_7 + 8))(rcx_7, &arg_8, 1)
        
        if (rdx_5 == 0 || rax_8.b == 0)
            rax_8.b = 0
        else
            rax_8.b = 1
        
        *(arg1 + 0x34b5) = rax_8.b
        arg_8 = rdi s> 0
        char rax_10
        
        if (rax_8.b != 0)
            int64_t* rcx_8 = *arg1
            rax_10 = (*(*rcx_8 + 8))(rcx_8, &arg_8, 1)
        
        if (rax_8.b == 0 || rax_10 == 0)
            rcx_4 = 0
        else
            rcx_4 = 1
        
        *(arg1 + 0x34b5) = rcx_4
        rdi += 1
        result = zx.d(*(arg1 + 0x14))
    while (rdi s< result)

return result
