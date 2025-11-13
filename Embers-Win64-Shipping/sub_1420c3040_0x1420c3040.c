// 函数: sub_1420c3040
// 地址: 0x1420c3040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = 0
int64_t var_18
int64_t rax_5
int64_t* rcx_3
int32_t rbx_1

if (arg2 == 0)
    rbx_1 = 2
    int64_t var_20_1 = 0
    int64_t var_28
    rcx_3 = &var_28
    rax_5 = 0
label_1420c30d4:
    *arg1 = rax_5
    *rcx_3 = 0
    arg1[1].d = rcx_3[1].d
    *(arg1 + 0xc) = *(rcx_3 + 0xc)
    rcx_3[1] = 0
    
    if ((rbx_1.b & 2) != 0)
        int64_t rcx_4 = var_28
        rbx_1 &= 0xfffffffd
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
    
    if ((rbx_1.b & 1) != 0)
        int64_t rcx_5 = var_18
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
else
    void* rax = sub_142459c10()
    void* rdx = arg2[2]
    int64_t rax_1 = sx.q(*(rax + 0x38))
    
    if (rax_1.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_1 << 3)) != rax + 0x30)
        arg_10.q = arg2[3]
        rbx_1 = 1
        sub_140b63b70(&arg_10, &var_18)
        rax_5 = var_18
        rcx_3 = &var_18
        goto label_1420c30d4
    
    (*(*arg2 + 0x388))(arg2, arg1)
return arg1
