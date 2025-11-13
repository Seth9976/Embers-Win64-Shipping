// 函数: sub_141d10c30
// 地址: 0x141d10c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x148) == 0)
    sub_140af2b60()
    
    if (sub_140b21a10(&data_143dbb3f0, u"signedpak") == 0)
        sub_140af2b60()
        
        if (sub_140b21a10(&data_143dbb3f0, u"signed") == 0)
            return arg2

if (*(arg1 + 0x20) == 0)
    void*** rax_3 = j_sub_140a82f30(0x1d8)
    int64_t* rcx_1
    
    if (rax_3 == 0)
        rcx_1 = nullptr
    else
        rcx_1 = sub_141cf6f80(rax_3, arg2, arg3)
    
    void arg_20
    
    if (arg1 + 0x20 != &arg_20)
        int64_t* r8_1 = *(arg1 + 0x20)
        *(arg1 + 0x20) = rcx_1
        
        if (r8_1 != 0)
            (*(*r8_1 + 0x28))(r8_1, 1)
    else if (rcx_1 != 0)
        (*(*rcx_1 + 0x28))(rcx_1, 1)

void* rcx_2 = *(*(arg1 + 0x20) + 8)

if (rcx_2 == 0 || *(rcx_2 + 0x38) s<= 0)
    if (arg2 != 0)
        (**arg2)(arg2, 1)
    
    return nullptr

void*** rax_7 = j_sub_140a82f30(0xd8)

if (rax_7 == 0)
    return nullptr

int64_t rbx_2 = *(arg1 + 0x20)
sub_140b4c2a0(rax_7)
rax_7[0x12].d = 0
*rax_7 = &data_14321ce00
rax_7[0x13] = arg2
__builtin_memset(&rax_7[0x14], 0, 0x18)
rax_7[0x17] = rbx_2
rax_7[0x18] = 0
rax_7[0x19].d = 0
*(rax_7 + 0xcc) = 0xffffffff
rax_7[0x1a] = 0
int64_t rax_8
int64_t rdx_1
rax_8, rdx_1 = sub_140a82f30(0x10000, 0)
rax_7[0x18] = rax_8
rdx_1.b = 1
(*rax_7)[0x14](rax_7, rdx_1)
int64_t* rcx_5 = rax_7[0x13]
int64_t rax_11 = (*(*rcx_5 + 0x28))(rcx_5)
rax_7[0x14] = rax_11
int64_t rax_12
int16_t rdx_2
rdx_2:rax_12 = sx.o(rax_11)
rax_7[0x15] = rax_11
uint64_t rdx_3 = zx.q(rdx_2)
int64_t rax_13 = rax_12 + rdx_3
int32_t rbp_1
rbp_1.b = zx.q(rax_13.w) != rdx_3
rax_7[0x12].d = rbp_1 + (rax_13 s>> 0x10).d
return rax_7
