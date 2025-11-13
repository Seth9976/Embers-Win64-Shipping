// 函数: sub_14100f260
// 地址: 0x14100f260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

DeleteCriticalSection(arg1 + 0x58)
bool cond:0 = *(arg1 + 0x40) == 0
void** const rax = &data_142efce08
*(arg1 + 0x38) = &data_142efce08

if (not(cond:0))
    int64_t i
    
    do
        void* rcx_1 = *(arg1 + 0x40)
        i = *(rcx_1 + 8)
        j_sub_140a74f90(rcx_1)
        *(arg1 + 0x40) = i
    while (i != 0)
    rax = *(arg1 + 0x38)

*(arg1 + 0x48) = 0
*(arg1 + 0x40) = 0
rax[1](arg1 + 0x38, 0)
return sub_14100dcd0(arg1 + 0x28) __tailcall
