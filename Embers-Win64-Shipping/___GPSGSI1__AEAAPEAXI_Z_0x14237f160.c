// 函数: ??_GPSGSI1@@AEAAPEAXI@Z
// 地址: 0x14237f160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1] = -1
*arg1 = &data_143335b70
InitializeCriticalSection(&arg1[2])
SetCriticalSectionSpinCount(&arg1[2], 0xfa0)
arg1[9] = arg2
arg1[7] = 0
arg1[8].d = 0
arg1[0xa].d = 0
*(arg1 + 0x54) = 0
arg1[0xb].d = 4
*(arg1 + 0x5c) = 0
int32_t rbx = (*(*arg2 + 0x270))(arg2)
int32_t rax_3 = (*(*arg2 + 0x268))(arg2)

if (arg3 s>= rbx)
    rbx = rax_3
    
    if (arg3 s< rax_3)
        rbx = arg3

int32_t rax_5

if (rbx s> 0)
    rax_5 = (*(*arg2 + 0x2a0))(arg2)

if (rbx s<= 0 || rbx == rax_5 || (*(arg2 + 0x3d) & 8) == 0)
    *(arg1 + 0x54) = 1
else
    *(arg1 + 0xc) = rbx
    arg1[1].d = rax_3 - rbx

return arg1
