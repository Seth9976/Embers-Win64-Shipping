// 函数: sub_1426b1cc0
// 地址: 0x1426b1cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = data_143b57f88
*arg2 = data_143b57f80
arg2[1].d = rax

if (zx.d(arg3) s< arg1[0x59].d)
    int32_t* rdi_1 = arg1[0x58] + zx.q(arg3) * 0x14
    int64_t rax_4 = sub_140d3c6e0(rdi_1)
    int32_t rax_6
    int64_t zmm0
    
    if (rax_4 == 0)
        zmm0 = *(rdi_1 + 8)
        rax_6 = rdi_1[4]
    else
        int64_t r9_1 = *arg1
        void var_18
        int64_t* rax_5 = (*(r9_1 + 0x7c0))(arg1, &var_18, rax_4, r9_1)
        zmm0 = *rax_5
        rax_6 = rax_5[1].d
    
    *arg2 = zmm0
    arg2[1].d = rax_6

return arg2
