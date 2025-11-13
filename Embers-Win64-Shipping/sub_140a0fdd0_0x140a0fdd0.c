// 函数: sub_140a0fdd0
// 地址: 0x140a0fdd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1)

while (arg1->__offset(0x30).d u> 0)
    int64_t rdx = sx.q(arg1->__offset(0x30).d)
    int64_t* rcx = *(arg1->__offset(0x28).q + (rdx << 3) - 8)
    arg1->__offset(0x30).d = (rdx - 1).d
    
    if (rcx != 0)
        (*(*rcx + 0x80))(rcx, 1)

LeaveCriticalSection(arg1)

while (true)
    void* rdx_1 = *arg1->__offset(0x48).q
    
    if (rdx_1 == 0)
        break
    
    int64_t* rdi_1 = *(rdx_1 + 8)
    int64_t rcx_2 = arg1->__offset(0x48).q
    arg1->__offset(0x48).q = rdx_1
    *(rdx_1 + 8) = 0
    j_sub_140a74f90(rcx_2)
    (*(rdi_1[1] + 8))(&rdi_1[1])
    (*(*rdi_1 + 0x80))(rdi_1, 1)

while (arg1->__offset(0x48).q != 0)
    int64_t* rcx_5 = arg1->__offset(0x48).q
    arg1->__offset(0x48).q = *rcx_5
    j_sub_140a74f90(rcx_5)

int64_t rcx_6 = arg1->__offset(0x28).q

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

DeleteCriticalSection(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
