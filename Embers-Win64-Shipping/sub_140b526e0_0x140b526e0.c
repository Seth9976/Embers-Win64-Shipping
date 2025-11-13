// 函数: sub_140b526e0
// 地址: 0x140b526e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg1[1], 0, 0x18)
arg1[8].d = 0x206
*(arg1 + 0x44) = 0
int64_t* rax_1 = j_sub_140b17d00()
arg1[9] = *rax_1
arg1[0xa].d = rax_1[1].d
*(arg1 + 0x54) = sub_140b19bb0()
int32_t rax_4 = sub_140b19e50()
*(arg1 + 0x2b) &= 0xe0
void* rdi = arg1[0x10]
arg1[0xb].d = rax_4
arg1[5].w = 0
*(arg1 + 0x2c) = 0
*(arg1 + 0x2a) = 0
arg1[7] = 0
__builtin_memset(&arg1[0xd], 0, 0x18)

if (rdi != 0)
    int64_t rcx = *(rdi + 0x40)
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    j_sub_140a74f90(rdi)

int64_t rax_5 = *arg1
arg1[0x10] = 0
jump(*(rax_5 + 0x58))
