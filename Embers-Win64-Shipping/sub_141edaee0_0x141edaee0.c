// 函数: sub_141edaee0
// 地址: 0x141edaee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(*arg1 + 0x5c0))() != 0)
    if (arg10 != 0)
    label_141edaf3c:
        int128_t __saved_zmm6 = arg5
        arg5 = arg8
        (*(*arg1 + 0x5e8))(arg1, arg2 + 0x40, arg2 + 0x34, arg6, arg5.d)
        
        if ((*(*arg1 + 0x550))(arg1) != 0)
            int512_t zmm3
            zmm3.o = arg5
            int512_t zmm2
            zmm2.o = arg7
            int32_t var_28
            var_28.q = arg4
            (*(*arg1 + 0x5d8))(arg1, zx.q(arg9), zmm2, zmm3, var_28, arg6, __saved_zmm6)
        
        return 1
    
    if ((*(*arg1 + 0x818))(arg1) != 0)
        goto label_141edaf3c

return 0
