// 函数: sub_141d0b280
// 地址: 0x141d0b280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140b6b7d0()
int64_t var_28
int64_t* rax = sub_140b63b70(arg1 + 0xa8, &var_28)
int16_t* const rdi = &data_142d40450
int16_t* const rdx_1

if (rax[1].d == 0)
    rdx_1 = &data_142d40450
else
    rdx_1 = *rax

int64_t* rax_2 = (*(data_1439a9568 + 0xc0))(&data_1439a9568, rdx_1, 0)
int64_t rcx_1 = var_28

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t var_18

if (rax_2 == 0)
    int64_t* rax_3 = sub_140b63b70(arg1 + 0xa8, &var_18)
    int16_t* const r9_1
    
    if (rax_3[1].d == rax_2.d)
        r9_1 = &data_142d40450
    else
        r9_1 = *rax_3
    
    sub_140af98a0("Unknown", 0xc93, u"PanicSyncRead failed to open pak file %s", r9_1)
    int64_t rcx_3 = var_18
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    sub_140afbb40()

if ((*(*rax_2 + 0x10))(rax_2, *(arg1 + 0x88)) == 0)
    int64_t* rax_6 = sub_140b63b70(arg1 + 0xa8, &var_18)
    int16_t* const r9_2
    
    if (rax_6[1].d == 0)
        r9_2 = &data_142d40450
    else
        r9_2 = *rax_6
    
    int64_t var_30_1 = *(arg1 + 0x88)
    int64_t var_38_1 = *(arg1 + 0x90)
    sub_140af98a0("Unknown", 0xc96, PanicSyncRead failed to seek pak file %s   %d bytes at %lld ", 
        r9_2)
    int64_t rcx_6 = var_18
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    sub_140afbb40()

if ((*(*rax_2 + 0x20))(rax_2, arg2, *(arg1 + 0x90)) == 0)
    int16_t** rax_11 = sub_140b63b70(arg1 + 0xa8, &var_18)
    
    if (rax_11[1].d != 0)
        rdi = *rax_11
    
    int64_t var_30_2 = *(arg1 + 0x88)
    int64_t var_38_2 = *(arg1 + 0x90)
    sub_140af98a0("Unknown", 0xc9b, PanicSyncRead failed to read pak file %s   %d bytes at %lld ", 
        rdi)
    int64_t rcx_9 = var_18
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)
    
    sub_140afbb40()

return (**rax_2)(rax_2, 1)
