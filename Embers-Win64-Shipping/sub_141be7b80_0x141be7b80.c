// 函数: sub_141be7b80
// 地址: 0x141be7b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0)
    int64_t rax_1 = *arg1
    int512_t zmm0
    zmm0.o = zx.o(0)
    int128_t var_18 = zx.o(0)
    (*(rax_1 + 0x8d0))(zmm0, &var_18)
    int64_t* rbx_1 = var_18:8.q
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

if (arg1[0x94] != 0)
    sub_141bdbcc0(arg1)

int64_t rax_4 = *arg1
arg1[0x94] = arg2
jump(*(rax_4 + 0x8b0))
