// 函数: sub_14209fa90
// 地址: 0x14209fa90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = sub_140ce4310(arg1, arg2, arg3, arg4)

if (rax != 0 && ((*(arg1 + 8) u>> 4).b & 1) == 0)
    int64_t rbx_1 = *(arg1 + 0x38)
    sub_140aae6a0()
    sub_140ac7160(&data_143db9ce0, rbx_1)
    int64_t var_20
    int64_t* rax_1 = sub_140d21e10(arg1, &var_20, 0)
    int16_t* rdx_4
    
    if (rax_1[1].d == 0)
        rdx_4 = &data_142d40450
    else
        rdx_4 = *rax_1
    
    int64_t var_38
    sub_140b58260(&var_38, rdx_4, 1)
    int64_t rcx_2 = var_20
    *(arg1 + 0x38) = var_38
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
    
    int64_t var_30 = *(arg1 + 0x28)
    void* rax_4 = *(arg1 + 0x30)
    void* var_28_1 = rax_4
    
    if (rax_4 != 0)
        *(rax_4 + 8) += 1
    
    int64_t rbx_2 = *(arg1 + 0x38)
    sub_140aae6a0()
    sub_140abe080(&data_143db9ce0, rbx_2, &var_30)

return zx.q(rax)
