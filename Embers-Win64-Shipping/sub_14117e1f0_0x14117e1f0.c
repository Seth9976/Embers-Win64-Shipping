// 函数: sub_14117e1f0
// 地址: 0x14117e1f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_58 = nullptr
int32_t i_2 = 0
int32_t* var_48 = nullptr
int64_t var_40 = 0
sub_14118c420(arg1[2].d, arg2, arg1[3], &var_58, &var_48)
int32_t* r13 = var_48

if (i_2 s> 0)
    int32_t* rsi_1 = r13
    int64_t* rdi_1 = var_58
    uint64_t i_1 = zx.q(i_2)
    uint64_t i
    
    do
        int32_t rbp_1 = *rsi_1
        int64_t* var_88
        
        if (arg3 != 0)
            var_88.d = 0
            sub_1411813e0(*arg1, arg1[1], *arg1[4], 1, 0, rbp_1, rdi_1, arg1[5], arg1[6])
            *arg1[4] = 0
        
        if (arg4 != 0)
            var_88.d = 0
            sub_1411813e0(*arg1, arg1[1], *arg1[4], 0, 0, rbp_1, rdi_1, arg1[5], arg1[6])
            *arg1[4] = 0
        
        if (arg5 != 0)
            var_88.d = 1
            sub_1411813e0(*arg1, arg1[1], *arg1[4], 1, 1, rbp_1, rdi_1, arg1[5], arg1[6])
            *arg1[4] = 0
        
        if (arg6 != 0)
            var_88.d = 1
            sub_1411813e0(*arg1, arg1[1], *arg1[4], 0, 1, rbp_1, rdi_1, arg1[5], arg1[6])
            *arg1[4] = 0
        
        rdi_1 = &rdi_1[0xe]
        rsi_1 = &rsi_1[1]
        i = i_1
        i_1 -= 1
    while (i != 1)
    r13 = var_48

if (r13 != 0)
    sub_140a74f90(r13)

return sub_14117b500(&var_58)
