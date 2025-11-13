// 函数: sub_141d3d110
// 地址: 0x141d3d110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
void* arg_10 = arg2
void* rdi = arg2
int64_t r8 = *(arg2 + 0x58)

if (r8 == arg3)
    return 

if (r8 != 0)
    int32_t arg_20
    sub_1405ba560(arg1 + 0x50, &arg_20, r8)
    int64_t rax_1 = sx.q(arg_20)
    void* const rdx_3
    
    if (rax_1.d == 0xffffffff)
        rdx_3 = nullptr
    else
        rdx_3 = (rax_1 << 5) + *(arg1 + 0x50)
    
    int64_t* rcx_1 = rdx_3 + 8
    
    if (rdx_3 == 0)
        rcx_1 = nullptr
    
    sub_1409d7d20(rcx_1, &arg_10)
    rdi = arg_10

*(rdi + 0x58) = arg3

if (arg3 == 0)
    return 

uint32_t rbx_1 = (arg3 u>> 4).d
int32_t rcx_3 = (0x9e3779b9 - rbx_1) ^ rbx_1 << 8
int32_t rdx_7 = neg.d(rcx_3 + rbx_1) ^ rcx_3 u>> 0xd
int32_t rbx_4 = (rbx_1 - rcx_3 - rdx_7) ^ rdx_7 u>> 0xc
int32_t rcx_6 = (rcx_3 - rbx_4 - rdx_7) ^ rbx_4 << 0x10
int32_t rdx_10 = (rdx_7 - rcx_6 - rbx_4) ^ rcx_6 u>> 5
int32_t rbx_7 = (rbx_4 - rcx_6 - rdx_10) ^ rdx_10 u>> 3
int32_t rcx_9 = (rcx_6 - rbx_7 - rdx_10) ^ rbx_7 << 0xa
uint64_t* rax_16 = sub_141d2c030(arg1 + 0x50, (rdx_10 - rcx_9 - rbx_7) ^ rcx_9 u>> 0xf, &arg_18)
int64_t rsi_1 = sx.q(rax_16[1].d)
int32_t rcx_12 = (rsi_1 + 1).d
rax_16[1].d = rcx_12

if (rcx_12 s> *(rax_16 + 0xc))
    sub_1405a4d70(rax_16)

*(*rax_16 + (rsi_1 << 3)) = rdi
