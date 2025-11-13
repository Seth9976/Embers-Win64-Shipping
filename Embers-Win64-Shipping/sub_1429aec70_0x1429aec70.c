// 函数: sub_1429aec70
// 地址: 0x1429aec70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
void** rdi = arg1
void* rbp = *arg1
void** rsi = *(rbp + 8)
void** rbx = rsi
void* rax = rbp

if (*(rsi + 0x19) == 0)
    do
        sub_1429af210(rdi, rbx[2])
        rbx = *rbx
        j_sub_140a74f90(rsi)
        rsi = rbx
    while (*(rbx + 0x19) == 0)
    
    rax = *rdi

*(rax + 8) = rbp
**rdi = rbp
*(*rdi + 0x10) = rbp
rdi[1] = 0
return j_sub_140a74f90(*rdi) __tailcall
