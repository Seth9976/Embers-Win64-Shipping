// 函数: sub_141863500
// 地址: 0x141863500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r15 = arg7
*arg1 = &data_142fe7f68
arg1[1] = arg2
arg1[2] = arg3
arg1[3] = arg4
arg1[4] = 0
arg1[4] = *r15
*r15 = 0
arg1[5].d = r15[1].d
*(arg1 + 0x2c) = *(r15 + 0xc)
r15[1] = 0
arg1[6].d = r15[2].d
arg1[7] = r15[3]
InitializeCriticalSection(&arg1[8])
SetCriticalSectionSpinCount(&arg1[8], 0xfa0)
arg1[0xe] = 0
arg1[0x10] = 0
InitializeCriticalSection(&arg1[0x16])
SetCriticalSectionSpinCount(&arg1[0x16], 0xfa0)
__builtin_memset(&arg1[0x1b], 0, 0x28)
void* rcx_4 = &arg1[0x20]
*(rcx_4 + 0x10) = 0
*(rcx_4 + 0x18) = 0
*(rcx_4 + 0x1c) = 0x80
void* rax_5 = *(rcx_4 + 0x10)

if (rax_5 != 0)
    rcx_4 = rax_5

*rcx_4 = 0
*(rcx_4 + 8) = 0
arg1[0x24].d = 0xffffffff
*(arg1 + 0x124) = 0
arg1[0x26] = 0
arg1[0x27].d = 0
arg1[0x28].d = 1
int64_t* rax_6 = j_sub_140a82f30(0x28)

if (rax_6 == 0)
    rax_6 = nullptr
else
    *rax_6 = 0
    rax_6[4].b = 0xff

arg1[0x2b] = rax_6
arg1[0x2a] = rax_6
arg1[0x2c].d = 0
arg1[0x2e] = 0
arg1[0x2f] = 0
arg1[0x2d] = sub_140a491d0(1)
arg1[0x30] = sub_140a491d0(1)
int64_t var_58[0x2]
var_58[0] = 0
int64_t var_48 = 0
arg7 = arg1
void* var_68
void** rax_9 = sub_141855180(&var_68, 2, &arg7, &var_58, arg5, arg6)

if (&arg1[0x2e] != rax_9)
    arg1[0x2e] = *rax_9
    *rax_9 = nullptr
    sub_1405aeff0(&arg1[0x2f], &rax_9[1])

int64_t* var_60

if (var_60 != 0)
    var_60[1].d -= 1
    
    if (var_60[1].d == 1)
        (**var_60)(var_60)
        int32_t rsi_1 = *(var_60 + 0xc)
        *(var_60 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*var_60 + 8))(var_60, zx.q(rsi_1))

int64_t rcx_11 = *r15

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

return arg1
