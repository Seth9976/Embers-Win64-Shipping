// 函数: sub_142686430
// 地址: 0x142686430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *(arg1 + 0x4a8)

if (rsi != 0)
    uint128_t zmm0 = zx.o(data_143dbb1f8.q)
    int32_t rax_1 = data_143dbb200
    void* rcx = *(rsi + 8)
    uint64_t var_1c_1 = zmm0.q
    int32_t var_14_1 = rax_1
    uint64_t var_28 = zmm0.q
    int32_t var_20_1 = rax_1
    char var_10_1 = 0
    float rcx_3
    uint64_t zmm1
    
    if (rcx == 0 || arg3 s< 0)
    label_1426864cb:
        rcx_3 = var_10_1.d
        zmm1 = var_1c_1
        zmm0 = var_28.o
    else
        if (arg3 s>= sub_1405f8990(rcx))
            goto label_1426864cb
        
        void* rax_3 = sub_142610d00(*(rsi + 8), arg3)
        
        if (rax_3 == 0)
            goto label_1426864cb
        
        void* rdx_1 = *(rax_3 + 8)
        
        if (rdx_1 == 0)
            goto label_1426864cb
        
        float (* rax_4)[0x4] = sub_142690bc0(&var_28, rdx_1 + 0x54, rdx_1 + 0x60)
        zmm0 = *rax_4
        rcx_3 = (*rax_4)[6]
        zmm1 = rax_4[1][0].q
    
    *arg2 = zmm0
    arg2[1].q = zmm1
    *(arg2 + 0x18) = rcx_3

return arg2
