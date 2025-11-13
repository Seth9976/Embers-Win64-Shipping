// 函数: sub_14084e690
// 地址: 0x14084e690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r8 = zx.q(*(arg1 + 0xcb8))
int64_t rbx = 0

if (r8.d s> 0)
    sub_140b1f700(arg2, u"\t\tSystemInstances %d", r8)
    int64_t rbp_1 = 0
    int64_t* rdi_1 = *(arg1 + 0xcb0)
    uint64_t r14_2 = sx.q(*(arg1 + 0xcb8)) << 3 u>> 3
    
    if (rdi_1 u> &rdi_1[sx.q(*(arg1 + 0xcb8))])
        r14_2 = 0
    
    if (r14_2 != 0)
        do
            sub_14084e230(*rdi_1, arg2)
            rbp_1 += 1
            rdi_1 = &rdi_1[1]
        while (rbp_1 != r14_2)

uint64_t r8_1 = zx.q(*(arg1 + 0xce8))

if (r8_1.d s> 0)
    sub_140b1f700(arg2, u"\t\tPendingSystemInstances %d", r8_1)
    int64_t rbp_2 = 0
    void** rdi_2 = *(arg1 + 0xce0)
    uint64_t r14_4 = sx.q(*(arg1 + 0xce8)) << 3 u>> 3
    
    if (rdi_2 u> &rdi_2[sx.q(*(arg1 + 0xce8))])
        r14_4 = 0
    
    if (r14_4 != 0)
        do
            sub_14084e230(*rdi_2, arg2)
            rbp_2 += 1
            rdi_2 = &rdi_2[1]
        while (rbp_2 != r14_4)

uint64_t r8_2 = zx.q(*(arg1 + 0xcd8))

if (r8_2.d s<= 0)
    return 

sub_140b1f700(arg2, u"\t\tPausedSystemInstances %d", r8_2)
void** rdi_3 = *(arg1 + 0xcd0)
uint64_t r14_6 = sx.q(*(arg1 + 0xcd8)) << 3 u>> 3

if (rdi_3 u> &rdi_3[sx.q(*(arg1 + 0xcd8))])
    r14_6 = 0

if (r14_6 == 0)
    return 

do
    sub_14084e230(*rdi_3, arg2)
    rbx += 1
    rdi_3 = &rdi_3[1]
while (rbx != r14_6)
