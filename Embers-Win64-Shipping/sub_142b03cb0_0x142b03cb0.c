// 函数: sub_142b03cb0
// 地址: 0x142b03cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbp = *(arg1 + 0x10)

if (rbp == 0)
    return 

int64_t* rbx_1 = rbp
int64_t i_1 = 0xa
int64_t i

do
    void* rcx = *rbx_1
    
    if (rcx != 0)
        sub_142a92480(rcx)
    
    rbx_1 = &rbx_1[1]
    i = i_1
    i_1 -= 1
while (i != 1)
sub_142a84ad0(rbp[0xa], arg2)

if (*(arg1 + 0x3e) == 0)
    sub_142a7dcd0(*(arg1 + 0x10))
    *(arg1 + 0x10) = 0
