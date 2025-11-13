// 函数: sub_1426f6710
// 地址: 0x1426f6710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1426f8190(arg1 + 0x78, 0)
sub_1426278c0(*(arg1 + 0xe8))
void* rsi = *(arg1 + 0xe0)

if (rsi != 0)
    *(rsi + 0x70) = 0
    int64_t rcx_2 = *(rsi + 0x68)
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
    
    sub_140597460(rsi + 0x28)
    j_sub_140a74f90(rsi)

sub_142609170(*(arg1 + 0xd8))
*(arg1 + 0xd8) = 0
return sub_140cd7d40(arg1) __tailcall
