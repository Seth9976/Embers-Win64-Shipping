// 函数: sub_140cde390
// 地址: 0x140cde390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg2

if (rcx == 0 || ((*(rcx + 8) u>> 0x12).b & 1) == 0)
    return 

int64_t** rax_2 = *(arg1 + 0x18)

for (int64_t* i = *rax_2; i != &i[sx.q(rax_2[1].d)]; i = &i[1])
    if (*i == rcx)
        return 

if (sub_140d23d40(rcx, *(arg1 + 0x20)).b != 0)
    return 

void* rcx_1 = *(arg1 + 0x20)
uint64_t rax = *arg2
int64_t rdx_1 = *(rcx_1 + 0x20)
void* r8_1 = *(rax + 0x20)

if (rdx_1 == r8_1 || rax == rdx_1)
    return 

if (arg3 != 0)
    rax = *(r8_1 + 0x10)
    
    if (arg3 != rax && rcx_1 != rax)
        goto label_140cde41d
    
    return 

label_140cde41d:
int64_t* rbx_1 = *(arg1 + 0x18)
int64_t rdi_1 = sx.q(rbx_1[1].d)
int32_t rax_3 = (rdi_1 + 1).d
rbx_1[1].d = rax_3

if (rax_3 s> *(rbx_1 + 0xc))
    sub_1405a4d70(rbx_1)

*(*rbx_1 + (rdi_1 << 3)) = *arg2
