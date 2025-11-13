// 函数: sub_1405ee600
// 地址: 0x1405ee600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
sub_1405fdad0(arg1, 0)

while (true)
    void* rdx = *arg1->__offset(0x48).q
    
    if (rdx == 0)
        break
    
    int64_t* rdi_1 = *(rdx + 8)
    int64_t rcx = arg1->__offset(0x48).q
    arg1->__offset(0x48).q = rdx
    *(rdx + 8) = 0
    j_sub_140a74f90(rcx)
    (*(rdi_1[1] + 8))(&rdi_1[1])
    (*(*rdi_1 + 0x80))(rdi_1, 1)

while (arg1->__offset(0x48).q != 0)
    int64_t* rcx_3 = arg1->__offset(0x48).q
    arg1->__offset(0x48).q = *rcx_3
    j_sub_140a74f90(rcx_3)

int64_t rcx_4 = arg1->__offset(0x28).q

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

DeleteCriticalSection(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
