// 函数: sub_14181e3b0
// 地址: 0x14181e3b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12 = 0
*arg1 = &data_142fe3548
arg1[1] = &data_142fe3578
arg1[2] = *arg2
arg1[3] = 0
arg1[3] = arg2[1]
__builtin_memset(&arg2[1], 0, 0x40)
arg1[4].d = arg2[2].d
*(arg1 + 0x24) = *(arg2 + 0x14)
arg1[5] = 0
arg1[5] = arg2[3]
arg1[6].d = arg2[4].d
*(arg1 + 0x34) = *(arg2 + 0x24)
arg1[7] = 0
arg1[7] = arg2[5]
arg1[8].d = arg2[6].d
*(arg1 + 0x44) = *(arg2 + 0x34)
arg1[9] = 0
arg1[9] = arg2[7]
arg1[0xa].d = arg2[8].d
*(arg1 + 0x54) = *(arg2 + 0x44)
arg1[0xb].d = arg2[9].d
arg1[0xc] = 0
arg1[0xd].d = 0
*(arg1 + 0x6c) = 0
arg1[0xe].d = 0
*(arg1 + 0x74) = 0
InitializeCriticalSection(&arg1[0xf])
SetCriticalSectionSpinCount(&arg1[0xf], 0xfa0)
arg1[0x14] = 0
arg1[0x15] = 0
arg1[0x18] = arg5
arg1[0x19] = arg6
arg1[0x1a] = arg7
arg1[0x16] = arg3
arg1[0x1b] = arg8
arg1[0x17] = arg4
__builtin_memset(&arg1[0x1c], 0, 0x30)
arg1[0x22] = 2
int64_t i_2 = sx.q(arg1[0xa].d)

if (i_2.d s> *(arg1 + 0xac))
    sub_14061cd70(&arg1[0x14], i_2.d)

int64_t rbx = sx.q(arg1[0x15].d)
int32_t rax_18 = (rbx + i_2).d
arg1[0x15].d = rax_18

if (rax_18 s> *(arg1 + 0xac))
    sub_1405a4f90(&arg1[0x14])

int64_t i_1 = i_2
int64_t count = i_2 << 4
memset(&arg1[0x14][rbx * 2], 0, count)

if (i_2.d s> 0)
    int64_t r15_1 = count - 0x10
    int64_t i
    
    do
        int64_t* rcx_7 = arg1[2]
        int64_t* rdi_2 = arg1[9] + r12
        void* rax_20 = (*(*rcx_7 + 0x68))(rcx_7, rdi_2)
        
        if (rax_20 != 0)
            arg1[0x1c] += *(rax_20 + 0x58)
        
        int64_t* rbx_2 = arg1[0x14] + r15_1
        
        if (rbx_2 != rdi_2)
            int32_t rsi_1 = rdi_2[1].d
            int64_t rdi_3 = *rdi_2
            int32_t r8_1 = *(rbx_2 + 0xc)
            rbx_2[1].d = rsi_1
            
            if (rsi_1 != 0 || r8_1 != 0)
                sub_1405a4c70(rbx_2, rsi_1, r8_1)
                memcpy(*rbx_2, rdi_3, rsi_1 * 2)
            else
                *(rbx_2 + 0xc) = rsi_1
        
        r12 += 0x10
        r15_1 -= 0x10
        i = i_1
        i_1 -= 1
    while (i != 1)

arg1[0xc] = sub_140a6e140(arg1, u"FileConstructorThread", 0, 0, -1, 0)
sub_141822ac0(arg2)
return arg1
