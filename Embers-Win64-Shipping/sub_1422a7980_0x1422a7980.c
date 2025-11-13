// 函数: sub_1422a7980
// 地址: 0x1422a7980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18
int64_t* rax = sub_1422a12b0(arg1, &var_18)

if (&arg1[0x62] != rax)
    int64_t rcx = arg1[0x62]
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    arg1[0x62] = *rax
    *rax = 0
    arg1[0x63].d = rax[1].d
    *(arg1 + 0x31c) = *(rax + 0xc)
    rax[1] = 0

int64_t rcx_2 = var_18

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

jump(*(*arg1 + 0x6e8))
