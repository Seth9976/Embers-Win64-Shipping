// 函数: sub_141a37230
// 地址: 0x141a37230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** rbx = arg2

if (arg1[1].b == 0)
    char rax_1 = arg2[8].b & 2
    
    if (rax_1 == 0)
        arg2 = *arg2
    
    if (arg2[2].b != 0)
        void** rax_2 = rbx
        
        if (rax_1 == 0)
            rax_2 = *rbx
        
        if (rax_2 + 0xc != arg1)
            *arg1 = *(rax_2 + 0xc)
            arg1[1].b = 1

int64_t rsi = sx.q(arg1[4])
int32_t rax_5 = (rsi + 1).d
arg1[4] = rax_5

if (rax_5 s> arg1[5])
    sub_140775520(&arg1[2])

int64_t rax_6 = *(arg1 + 8)
int64_t rcx_1 = rsi * 9
int128_t* rdx_1 = rax_6 + (rcx_1 << 3)
char result = (*(rax_6 + (rcx_1 << 3) + 0x40) & 0xfe) | 2
rdx_1[4].b = result

if ((rbx[8].b & 1) != 0)
    rdx_1[4].b = result | 1
    rbx[8].b &= 0xfe
    rdx_1[4].b &= 0xfd
    result = rbx[8].b & 2
    rdx_1[4].b |= result
    *rdx_1 = *rbx
    rdx_1[1] = *(rbx + 0x10)
    rdx_1[2] = *(rbx + 0x20)
    rdx_1[3] = *(rbx + 0x30)

return result
