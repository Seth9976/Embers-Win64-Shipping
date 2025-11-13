// 函数: sub_140829930
// 地址: 0x140829930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x208)
uint64_t rdi = sx.q(*(arg1 + 0x210))
void* rbp_1 = rdi * 0x58 + rbx

if (rbx != rbp_1)
    do
        sub_14084d9f0(rbx)
        rbx += 0x58
    while (rbx != rbp_1)
    
    rdi = zx.q(*(arg1 + 0x210))

int64_t* rbx_1 = *(arg1 + 0x208)

if (rdi.d != 0)
    int32_t i
    
    do
        sub_14081c910(rbx_1)
        rbx_1 = &rbx_1[0xb]
        i = rdi.d
        rdi = zx.q(rdi.d - 1)
    while (i != 1)

bool cond:0 = *(arg1 + 0x214) == 0
*(arg1 + 0x210) = 0

if (not(cond:0))
    sub_140775cf0(arg1 + 0x208, 0)
