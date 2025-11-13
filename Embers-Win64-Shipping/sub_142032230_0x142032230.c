// 函数: sub_142032230
// 地址: 0x142032230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(*arg1 + 0x178))() != 0)
    return 0

int64_t* rcx = arg1[3]
uint64_t rdi
int32_t var_30

if (rcx == 0)
    rdi.b = 0
label_1420322e9:
    void* rax_4
    int32_t zmm6
    rax_4, zmm6 = sub_1423dda40(data_143f5b298, &arg1[-5], arg3)
    
    if (rax_4 != 0)
        int64_t* rcx_2 = *(rax_4 + 0x30)
        
        if (rcx_2 != 0)
            int64_t var_38
            var_38.d = arg10
            int32_t var_40
            var_40.q = arg9
            int64_t var_48
            var_48.d = zmm6
            rdi = zx.q((*(*rcx_2 + 0xbf8))(rcx_2, zx.q(arg4), zx.q(arg6), arg7, var_48, var_40, 
                var_38, var_30, arg5))
else
    var_30 = arg10
    char rax_3 =
        (*(*rcx + 0x328))(rcx, zx.q(arg3), zx.q(arg4), zx.q(arg6), arg7, arg8.d, arg9, var_30, arg5)
    rdi = zx.q(rax_3)
    
    if (rax_3 == 0)
        goto label_1420322e9
return zx.q(rdi.b)
