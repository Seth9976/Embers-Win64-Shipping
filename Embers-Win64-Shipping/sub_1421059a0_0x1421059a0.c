// 函数: sub_1421059a0
// 地址: 0x1421059a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_1432c74f8
arg1[1] = 0
arg1[4].d &= 0xfffffff2
arg1[2] = 0
arg1[3].d = 1
*(arg1 + 0x1c) = 3
int64_t rdi = data_143f48ac0

if (rdi == 0)
    int64_t* rcx = data_143db18d0
    
    if (rcx == 0)
        sub_140a53c40()
        rcx = data_143db18d0
    
    int64_t r8
    r8.b = 1
    int64_t* rax_2 = (*(*rcx + 0xb0))(rcx, u"r.StencilForLODDither", r8)
    
    if (rax_2 == 0)
        rdi = 0
    else
        int64_t rdx_1 = *rax_2
        rdi = (*(rdx_1 + 0x58))(rax_2, rdx_1)
    
    data_143f48ac0 = rdi

int64_t rcx_2

if (data_143de5480 == 0)
    rcx_2 = 0
else
    rcx_2.b = GetCurrentThreadId() != data_143de5470

bool c = *(rdi + (rcx_2 << 2)) != 0
arg1[5] = 0
int32_t rax_6 = arg1[4].d
arg1[6] = 0
*arg1 = &data_14301dae8
arg1[4].d = (sbb.d(rcx_2.d, rcx_2.d, c) & 2) | (rax_6 & 0xfffffffd)
return arg1
