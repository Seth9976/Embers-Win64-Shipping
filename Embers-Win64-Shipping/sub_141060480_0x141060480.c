// 函数: sub_141060480
// 地址: 0x141060480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *arg1
bool cond:0 = arg1[2].b == 0
int64_t* rcx = arg1[3]
arg1[3] = 0
int64_t rcx_6

if (cond:0)
    if (rcx != 0)
        (*(*rcx + 0x10))(rcx)
    
    sub_14105ef00(&arg1[3], rsi, arg1[1])
    rcx_6 = *(arg1[1] + 0x10)
else
    if (rcx != 0)
        (*(*rcx + 0x10))(rcx)
    
    sub_14105f040(&arg1[3], rsi, arg1[1])
    void* rbx_1 = arg1[1]
    sub_140a74f90(*(rbx_1 + 0x10))
    sub_140a74f90(*(rbx_1 + 0x20))
    sub_140a74f90(*(rbx_1 + 0x50))
    sub_140a74f90(*(rbx_1 + 0x40))
    rcx_6 = *(rbx_1 + 0x30)

sub_140a74f90(rcx_6)
return j_sub_140a74f90(arg1[1]) __tailcall
