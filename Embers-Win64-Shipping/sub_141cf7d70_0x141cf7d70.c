// 函数: sub_141cf7d70
// 地址: 0x141cf7d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_14321cc00
__builtin_memset(&arg1[1], 0, 0x29)
InitializeCriticalSection(&arg1[7])
SetCriticalSectionSpinCount(&arg1[7], 0xfa0)
arg1[0xc] = 0
void* rcx_2 = &arg1[0xe]
arg1[0xd] = 0
*(rcx_2 + 0x10) = 0
*(rcx_2 + 0x18) = 0
*(rcx_2 + 0x1c) = 0x80
void* rax = *(rcx_2 + 0x10)

if (rax != 0)
    rcx_2 = rax

*rcx_2 = 0
*(rcx_2 + 8) = 0
arg1[0x12].d = 0xffffffff
*(arg1 + 0x94) = 0
arg1[0x14] = 0
arg1[0x15].d = 0
__builtin_memset(&arg1[0x16], 0, 0x20)
sub_140af4dc0()
int64_t* rax_1 = sub_140a84c80(0, 0x30, 0)

if (rax_1 != 0)
    rax_1[1] = arg1
    *rax_1 = &data_142d3fe58
    rax_1[2] = sub_141d0cb40
    rax_1[4] = sub_140a387b0()
    *rax_1 = &data_142d3feb0

void var_18

if (&var_18 != &data_143de5cc8)
    if (rax_1 != 0)
        (*(*rax_1 + 0x40))(rax_1, &data_143de5cc8)
    else if (data_143de5cd0 != 0)
        int64_t* rcx_4 = data_143de5cc8
        
        if (rcx_4 != 0)
            (*(*rcx_4 + 0x38))(rcx_4, 0)
            int64_t rcx_5 = data_143de5cc8
            
            if (rcx_5 != 0)
                data_143de5cc8 = sub_140a84c80(rcx_5, 0, 0)
            
            data_143de5cd0 = 0

if (rax_1 != 0)
    (*(*rax_1 + 0x38))(rax_1, 0)
    int64_t rax_7 = sub_140a84c80(rax_1, 0, 0)
    
    if (rax_7 != 0)
        sub_140a74f90(rax_7)

return arg1
