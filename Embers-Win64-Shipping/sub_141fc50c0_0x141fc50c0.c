// 函数: sub_141fc50c0
// 地址: 0x141fc50c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg1 + 0x20
*(arg1 + 4) = 0
void* rdi = arg1 + 0x18
*(arg1 + 0x10) = 0
int64_t i_1 = 2
void* result
int64_t i

do
    void var_18
    result = &var_18
    *rdi = 0
    
    if (rbx != &var_18)
        int64_t rcx = *rbx
        
        if (rcx != 0)
            result = sub_140a74f90(rcx)
        
        *rbx = 0
        *(rbx + 8) = 0
    
    rdi += 4
    rbx += 0x10
    i = i_1
    i_1 -= 1
while (i != 1)
return result
