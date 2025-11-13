// 函数: sub_1409b2b10
// 地址: 0x1409b2b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_38 = zmm6
void* arg_8
sub_14090aa40(*(arg1 + 0x28) + 0x150, &arg_8, data_143f35cc8)
int64_t r10 = sx.q(arg3) * 5
int64_t r8_1 = *(*(arg1 + 0x28) + 0xe0)
int32_t* rdi = *(r8_1 + (r10 << 3) + 0x10)
void* rbp = &rdi[sx.q(*(r8_1 + (r10 << 3) + 0x18))]

if (rdi == rbp)
label_1409b2c94:
    *arg2 = data_143a1c6c0
else
    void* r13_1 = arg_8
    
    while (true)
        void* r9 = *(arg1 + 0x28)
        int64_t rbx_1 = sx.q(*rdi)
        int64_t r8_3 = rbx_1 * 2
        int64_t rdx_2 = sx.q(*(*(r9 + 0x38) + sx.q(*(*(r9 + 0xa8) + (r8_3 << 3))) * 0x18)) * 3
        int64_t rcx_4 = **(r13_1 + 0x18)
        int64_t var_58 = *(rcx_4 + (rdx_2 << 2))
        int32_t var_50_1 = *(rcx_4 + (rdx_2 << 2) + 8)
        int64_t rdx_4 = sx.q(*(*(r9 + 0x38) + sx.q(*(*(r9 + 0xa8) + (r8_3 << 3) + 4)) * 0x18)) * 3
        int64_t rcx_7 = **(r13_1 + 0x18)
        int64_t var_68 = *(rcx_7 + (rdx_4 << 2))
        int32_t var_60_1 = *(rcx_7 + (rdx_4 << 2) + 8)
        int64_t rdx_6 = sx.q(*(*(r9 + 0x38) + sx.q(*(*(r9 + 0xa8) + (r8_3 << 3) + 8)) * 0x18)) * 3
        int64_t rcx_10 = **(r13_1 + 0x18)
        int64_t var_78 = *(rcx_10 + (rdx_6 << 2))
        int32_t var_70_1 = *(rcx_10 + (rdx_6 << 2) + 8)
        int32_t var_48[0x4]
        int32_t* rax_14
        rax_14, zmm6 = sub_140acfad0(&var_48, arg4, &var_58, &var_68, &var_78)
        *arg5 = *rax_14
        arg5[1].d = rax_14[2]
        
        if (not(zmm6.d f> *arg5) && not(zmm6.d f> *(arg5 + 4)) && zmm6.d f<= arg5[1].d)
            *arg2 = rbx_1.d
            break
        
        rdi = &rdi[1]
        
        if (rdi == rbp)
            goto label_1409b2c94

return arg2
