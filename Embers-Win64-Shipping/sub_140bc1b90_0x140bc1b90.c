// 函数: sub_140bc1b90
// 地址: 0x140bc1b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg2 != 0)
    sub_140ac59f0(arg2)

sub_140a99e20(arg2, &data_14399eba0)
int64_t* rcx_2 = *(arg2 + 0x108)
*(arg2 + 0x108) = 0
int64_t* rax_1 = *arg1 + 0xf8
int64_t* var_20 = rcx_2

if (rax_1 != &var_20)
    int64_t* rbx_1 = *rax_1
    *rax_1 = rcx_2
    
    if (rbx_1 != 0)
        int32_t rax_2 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rax_2 == 1)
            sub_140a99090(rbx_1)
            j_sub_140a74f90(rbx_1)
else if (rcx_2 != 0)
    int32_t rax_3 = *(rcx_2 + 0xc)
    *(rcx_2 + 0xc) -= 1
    
    if (rax_3 == 1)
        sub_140a99090(var_20)
        j_sub_140a74f90(var_20)

int64_t* rcx_6 = *(*arg1 + 0xe8)
rcx_6[2].d -= 1

if (rcx_6[2].d == 1)
    sub_140bc7180(rcx_6)

void* rdx_1 = *(*arg1 + 0xc8)
*(rdx_1 + 0x170) -= 1
return sub_140a980e0(arg2) __tailcall
