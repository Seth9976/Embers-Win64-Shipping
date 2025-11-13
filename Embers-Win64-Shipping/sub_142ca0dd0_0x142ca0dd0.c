// 函数: sub_142ca0dd0
// 地址: 0x142ca0dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = arg2
*(arg2 + 0x40) = 0
*(arg2 + 0x48) = 0
sub_1405947f0(arg2 + 0x40, 0xe)
int32_t rbx_1 = *(arg2 + 0x48) + 0xe
*(arg2 + 0x48) = rbx_1
int32_t r14 = *(arg2 + 0x4c)

if (rbx_1 s> r14)
    sub_140594770(arg2 + 0x40)
    r14 = *(arg2 + 0x4c)
    rbx_1 = *(arg2 + 0x48)

int64_t rdi = *(arg2 + 0x40)
sub_1405a7220(rdi, 0xe, "Unknown Style", 0xe, 0x3f)
int64_t* rsi = *(arg2 + 0xb0)

if (rsi != arg2 + 0x40)
    int64_t rcx_3 = *rsi
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    *rsi = rdi
    rdi = 0
    rsi[1].d = rbx_1
    *(rsi + 0xc) = r14

if (rdi != 0)
    sub_140a74f90(rdi)

return 0
