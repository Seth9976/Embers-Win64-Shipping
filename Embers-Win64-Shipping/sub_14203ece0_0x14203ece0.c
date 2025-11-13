// 函数: sub_14203ece0
// 地址: 0x14203ece0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0)
    void* rax_1 = sub_1423de540(data_143f5b298, arg1, 1)
    
    if (rax_1 != 0)
        void* rax_2
        int64_t r9
        rax_2, r9 = sub_142437e30(rax_1, 0, 1)
        int512_t zmm3
        zmm3.o = arg6
        char var_30 = arg9
        void* result = sub_1420214f0(arg2, rax_2, arg5, r9, arg8)
        int32_t var_20 = arg4[1].d
        int32_t rcx_4 = arg3[1].d
        int64_t var_28 = *arg4
        int32_t var_10 = rcx_4
        int64_t var_18 = *arg3
        sub_141f4a260(result, &var_18, &var_28, 0, 0, 0)
        int512_t zmm1
        zmm1.o = arg7
        (*(*result + 0x520))(result, zmm1)
        return result

return 0
