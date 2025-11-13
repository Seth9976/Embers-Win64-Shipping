// 函数: sub_14101f480
// 地址: 0x14101f480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1)
int64_t* rax = j_sub_140a82f30(0x18)

if (rax != 0)
    *rax = 0
    void* rax_1 = *(arg2 + 8)
    rax[1] = &data_142efcd90
    rax[2] = rax_1
    
    if (rax_1 != 0)
        *(rax_1 + 0x14) += 1
    
    rax[1] = &data_142efcd90
    void** rax_2 = arg1->__offset(0x30).q
    arg1->__offset(0x30).q = rax
    *rax_2 = rax

arg1->__offset(0x40).d += 1
return LeaveCriticalSection(arg1) __tailcall
