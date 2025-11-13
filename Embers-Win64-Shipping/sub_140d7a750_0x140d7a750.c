// 函数: sub_140d7a750
// 地址: 0x140d7a750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *arg2

if (rax == 2)
    *arg1 = 0xb
    char rax_9
    int16_t rcx_12
    rax_9, rcx_12 = sub_140d70060(arg2)
    arg1[4] = sbb.w(rcx_12, rcx_12, rax_9 != 0)
else if (rax == 8)
    *arg1 = 5
    *(arg1 + 8) = sub_140d6fea0(arg2, arg3)
else if (rax == 0xa)
    *arg1 = 4
    void** const var_c8
    memset(&var_c8, 0, 0x90)
    sub_140b4c2a0(&var_c8)
    int64_t var_38_1 = 0
    var_c8 = &data_142d6b230
    void* var_30_1 = &arg2[2]
    int64_t var_28_1 = 0x7fffffffffffffff
    sub_140b55290(&var_c8, 1)
    var_c8[0x1b](&var_c8, 1)
    int64_t* var_c0
    int32_t* rdx_2 = *var_c0
    int32_t arg_8
    
    if (&rdx_2[1] u> var_c0[1])
        int32_t* rdx_3 = &arg_8
        void** const* rcx_8 = &var_c8
        char var_9f
        
        if ((var_9f & 0x20) != 0)
            sub_140b54070(rcx_8, rdx_3, arg3)
        else
            var_c8[0x2a](rcx_8, rdx_3, 4)
    else
        arg_8 = *rdx_2
        *var_c0 += 4
    
    int128_t zmm6 = arg_8
    sub_140b4cb40(&var_c8)
    *(arg1 + 8) = zmm6.d
else if (rax == 0xe)
    *arg1 = 3
    *(arg1 + 8) = sub_140d6fdb0(arg2, arg3)
else if (rax == 0x18)
    *arg1 = 8
    int64_t var_d8
    int64_t* rax_1 = sub_140d6ffa0(arg2, &var_d8, arg3)
    PWSTR psz
    
    if (rax_1[1].d == 0)
        psz = &data_142d40450
    else
        psz = *rax_1
    
    BSTR rax_2 = SysAllocString(psz)
    int64_t rcx_1 = var_d8
    *(arg1 + 8) = rax_2
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
else
    *arg1 = 0

return arg1
