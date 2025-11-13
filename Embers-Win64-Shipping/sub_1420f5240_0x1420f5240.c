// 函数: sub_1420f5240
// 地址: 0x1420f5240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_8 = *arg2
sub_1420d96c0(arg1, &arg_8, arg3)

if ((arg1[5].b & 1) != 0)
    void* rax_1 = arg_8
    int64_t* rcx = *arg2
    *arg2 = rax_1
    
    if (rax_1 != 0)
        *(rax_1 + 0x1c) += 1
    
    if (rcx != 0)
        int32_t temp0_1 = *(rcx + 0x1c)
        *(rcx + 0x1c) -= 1
        
        if (temp0_1 == 1)
            (*(*rcx + 0x40))()

arg_8 = arg2[1]
sub_142307be0(arg1, &arg_8, arg3)

if ((arg1[5].b & 1) != 0)
    void* rax_4 = arg_8
    int64_t* rcx_2 = arg2[1]
    arg2[1] = rax_4
    
    if (rax_4 != 0)
        *(rax_4 + 0x18) += 1
    
    if (rcx_2 != 0)
        rcx_2[3].d -= 1
        
        if (rcx_2[3].d == 1)
            (*(*rcx_2 + 0x38))()

(*(*arg1 + 8))(arg1, sx.q(arg2[3].d) << 4, sx.q(*(arg2 + 0x1c)) << 4)
int32_t rax_7

if ((arg1[5].b & 1) == 0)
    rax_7 = arg2[3].d
else
    rax_7 = 0

int64_t* rcx_4 = arg1[1]
arg_8.d = rax_7
int32_t* rdx_4 = *rcx_4

if (&rdx_4[1] u> rcx_4[1])
    void** rdx_5 = &arg_8
    
    if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, rdx_5, arg3)
    else
        (*(*arg1 + 0x150))(arg1, rdx_5, 4)
else
    arg_8.d = *rdx_4
    *rcx_4 += 4

int32_t rcx_8 = arg_8.d

if (rcx_8 != 0)
    char rax_11 = *(arg1 + 0x29)
    
    if ((rax_11 & 1) != 0 || rcx_8 s<= 0 || ((*(arg1 + 0x2b) & 8) != 0 && rcx_8 s> 0x100000))
        *(arg1 + 0x29) = rax_11 | 1
    else
        arg2[3].d = rcx_8
        
        if ((arg1[5].b & 1) != 0)
            sub_1405a4be0(&arg2[2], rcx_8, *(arg2 + 0x1c))
            rcx_8 = arg2[3].d
        
        (*(*arg1 + 0x150))(arg1, arg2[2], sx.q(rcx_8) << 4)
else if ((arg1[5].b & 1) != 0)
    arg2[3].d = rcx_8
    
    if (*(arg2 + 0x1c) != rcx_8)
        sub_1405a5410(&arg2[2], 0)

sub_1420f6370(&arg2[4], arg1, 0, arg3)
return arg1
