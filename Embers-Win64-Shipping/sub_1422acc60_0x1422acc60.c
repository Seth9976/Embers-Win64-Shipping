// 函数: sub_1422acc60
// 地址: 0x1422acc60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0x678))()

if ((sub_141dcdc50(arg1) & 0xfffffffd) == 0)
    (*(*arg1 + 0x630))(arg1)

int64_t var_18
int64_t* rax_3 = sub_1422a12b0(arg1, &var_18)

if (&arg1[0x62] != rax_3)
    int64_t rcx_3 = arg1[0x62]
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    arg1[0x62] = *rax_3
    *rax_3 = 0
    arg1[0x63].d = rax_3[1].d
    *(arg1 + 0x31c) = *(rax_3 + 0xc)
    rax_3[1] = 0

int64_t rcx_5 = var_18

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

jump(*(*arg1 + 0x5e8))
