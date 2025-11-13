// 函数: sub_142ba8460
// 地址: 0x142ba8460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x410)
int64_t rsi = *(arg1 + 0x98)

if (rbx == 0)
    return 

uint64_t i_1 = zx.q(**(rbx + 0x18))
sub_142b99980(rsi, *(rbx + 8))
int64_t rdx_2 = *(rbx + 0x10)
*(rbx + 8) = 0
sub_142b99980(rsi, rdx_2)
int64_t rdx_3 = *(rbx + 0x28)
*(rbx + 0x10) = 0
sub_142b99980(rsi, rdx_3)
int64_t rdx_4 = *(rbx + 0x18)
*(rbx + 0x28) = 0
sub_142b99980(rsi, rdx_4)
*(rbx + 0x18) = 0

if (*(rbx + 0x38) != 0)
    if (i_1.d != 0)
        int64_t rdi_1 = 0
        uint64_t i
        
        do
            sub_142b99980(rsi, *(rdi_1 + *(rbx + 0x38) + 8))
            rdi_1 += 0x10
            *(rdi_1 + *(rbx + 0x38) - 8) = 0
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    sub_142b99980(rsi, *(rbx + 0x38))
    *(rbx + 0x38) = 0

int32_t* rdx_8 = *(rbx + 0x48)

if (rdx_8 != 0)
    sub_142bb0c40(arg1, rdx_8)
    sub_142b99980(rsi, *(*(rbx + 0x48) + 0x30))
    *(*(rbx + 0x48) + 0x30) = 0
    sub_142b99980(rsi, *(*(rbx + 0x48) + 0x28))
    *(*(rbx + 0x48) + 0x28) = 0
    sub_142b99980(rsi, *(rbx + 0x48))
    *(rbx + 0x48) = 0

int32_t* rdx_14 = *(rbx + 0x58)

if (rdx_14 != 0)
    sub_142bb0c40(arg1, rdx_14)
    sub_142b99980(rsi, *(*(rbx + 0x58) + 0x30))
    *(*(rbx + 0x58) + 0x30) = 0
    sub_142b99980(rsi, *(*(rbx + 0x58) + 0x28))
    *(*(rbx + 0x58) + 0x28) = 0
    sub_142b99980(rsi, *(rbx + 0x58))
    *(rbx + 0x58) = 0

void* rdx_20 = *(rbx + 0x60)

if (rdx_20 != 0)
    sub_142bb0c40(arg1, rdx_20 + 8)
    sub_142b99980(rsi, *(*(rbx + 0x60) + 0x28))
    *(*(rbx + 0x60) + 0x28) = 0
    sub_142b99980(rsi, *(rbx + 0x60))
    *(rbx + 0x60) = 0

sub_142b99980(rsi, *(rbx + 0x70))
int64_t rdx_26 = *(rbx + 0x80)
*(rbx + 0x70) = 0
sub_142b99980(rsi, rdx_26)
*(rbx + 0x80) = 0
sub_142b99980(rsi, rbx)
