// 函数: sub_141ed2060
// 地址: 0x141ed2060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8 = 0
sub_1422883b0(arg1, arg2, 0)
arg1[0x2a].d &= 0xfffffff0
*arg1 = &data_143262068
*(arg1 + 0x154) = *(data_143f5b298 + 0x870)
arg1[0x2e] = arg2[0x82]
int128_t* rax_3 = (*(*arg2 + 0x4b0))(arg2)
*(arg1 + 0x178) = *rax_3
int128_t zmm1 = rax_3[1]
*(arg1 + 0x39) &= 0xfe
*(arg1 + 0x188) = zmm1

if (arg3 == 0)
label_141ed21c5:
    int64_t* rcx_16 = data_143f5b298
    (*(*rcx_16 + 0x300))(rcx_16, arg2, &arg_8)
    arg1[0x2d].d = arg_8.d
else
    int64_t* rcx_2 = data_143f5b298
    
    if ((*(*rcx_2 + 0x2e8))(rcx_2, arg3) != 0)
        char rax_7 = (*(*arg3 + 0x638))(arg3)
        arg1[0x2a].d &= 0xfffffffe
        arg1[0x2a].d |= zx.d(rax_7) & 1
        char rax_10 = sub_1405949a0()
        arg1[0x2a].d &= 0xfffffffd
        arg1[0x2a].d |= zx.d(rax_10) * 2
        void arg_10
        *(arg1 + 0x154) = *(*(*arg3 + 0x648))(arg3, &arg_10)
        int32_t rcx_11 = (((*(arg3 + 0x22c) * 2) ^ arg1[0x2a].d) & 4) ^ arg1[0x2a].d
        arg1[0x2a].d = rcx_11
        int32_t rcx_12 = rcx_11 ^ ((arg3[0x48].d << 3 ^ rcx_11) & 8)
        arg1[0x2a].d = rcx_12
        
        if ((rcx_12.b & 2) == 0)
            void* rax_20 = sub_1420e3ab0(sub_141dc9840(arg3))
            
            if (rax_20 != 0)
                *(arg1 + 0x158) = *(rax_20 + 0xbc)
        else
            int128_t var_28
            sub_140acc920(&var_28, arg1 + 0x154)
            *(arg1 + 0x158) = var_28
        
        goto label_141ed21c5

return arg1
