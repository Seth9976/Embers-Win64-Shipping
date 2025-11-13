// 函数: sub_14102af40
// 地址: 0x14102af40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r14 = arg6

if (r14 u<= 1)
    r14 = 1

void* rbx = arg2
*(arg1 + 0x3b80) += 1

if (*(arg1 + 0x134) != 0)
    void* rdx = *(*(arg1 + 0x138) + 0x20)
    
    if (*(rdx + 0x838) != 0)
        void* rax_2 = *(rdx + 0x850)
        
        if (rax_2 != 0)
            *(rax_2 + 0x10) += 1
            void* rcx = *(rdx + 0x850)
            *(rcx + 0x14) += arg5 * r14
            void* rcx_1 = *(rdx + 0x850)
            *(rcx_1 + 0x18) += arg3 * r14

sub_141017de0(arg1, sub_141017c10(arg1))
int32_t* rax_7 = *(arg1 + 0x898)
*rax_7 += arg5
*(arg1 + 0x890) * arg5 + *(arg1 + 0x894)

if (rbx != 0 && data_1439c7a34 u> 1)
    while (*(rbx + 0x30) != *(arg1 + 0x138))
        rbx = *(rbx + 0xe0)
        
        if (rbx == 0)
            break

int64_t rdx_1 = *(rbx + 0xb8)
int32_t rax_9 = 0x2a

if (*(rbx + 0x18) == 2)
    rax_9 = 0x39

int32_t rcx_4 = *(rbx + 0xc8)

if (rdx_1 != *(arg1 + 0x878) || rcx_4 != *(arg1 + 0x880) || rax_9 != *(arg1 + 0x884))
    *(arg1 + 0x880) = rcx_4
    *(arg1 + 0x878) = rdx_1
    *(arg1 + 0x884) = rax_9
    sub_14104d420(arg1 + 0x250, *(rbx + 0x80))

sub_1410388f0(arg1 + 0x250)
int32_t r9
arg4 = r9
int32_t r8
arg3 = r8
jump(*(**(*(arg1 + 0x1c8) + 0x30) + 0x68))
