// 函数: sub_142c53000
// 地址: 0x142c53000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i_1 = *(arg1 + 0x40)

if (i_1 == 0)
    return 

int64_t* i

do
    void* rbx_1 = *i_1
    i = i_1[2]
    
    if (*(rbx_1 + 0x48) == 1)
        *(rbx_1 + 0x48) = 2
        sub_142c68560(rbx_1)
        sub_142c6a090(arg1 + 0x40, i_1, 0)
        int64_t rax
        int512_t entry_zmm2
        rax, entry_zmm2 = sub_142c52ab0(rbx_1, 0, 6, entry_zmm2)
    
    i_1 = i
while (i != 0)
