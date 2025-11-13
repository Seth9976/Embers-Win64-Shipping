// 函数: sub_141ed7690
// 地址: 0x141ed7690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm7 = arg2
int128_t zmm8 = zx.o(0)
int32_t result

if (arg1[0xb4].b == 0 || zmm7.d f<= 0f)
    int32_t rax_2 = *(arg1 + 0xcc)
    int64_t rbp
    rbp.b = 0
    int128_t zmm6
    int128_t var_18_1 = zmm6
    
    if (sub_142008320(&arg1[0x9b]) != 0)
        arg3, zmm7, zmm8 = sub_141ffa8c0(&arg1[0x9b], zmm7, arg1[0x29], arg1, arg1 + 0xc4)
        rbp.b = 1
    
    result = sub_141ded590(&arg1[0x9b])
    
    if (result.b != 0)
        int32_t rax_4 = *(arg1 + 0xcc)
        int64_t* r8_3 = arg1[0x29]
        *(arg1 + 0x504) = *(arg1 + 0xc4)
        *(arg1 + 0x50c) = rax_4
        result, arg3, zmm7, zmm8 = sub_141ffa890(&arg1[0x9b], zmm7, r8_3, arg1, arg1 + 0xc4)
        arg1[0xa0].b |= 8
        rbp.b = 1
    
    zmm6.d = (*(arg1 + 0xcc)).d f- rax_2
    
    if (rbp.b != 0 && not(zmm6.d f== zmm8.d))
        result = (*(*arg1 + 0x550))(arg1)
        
        if (result.b != 0)
            result = sub_141a415a0(arg1 + 0x501, 1)
            
            if (result.b == 0)
                result = (*(*arg1 + 0x3e8))(arg1)
                arg3.d = arg3.d f* zmm7.d
                arg3 = __maxss_xmmss_memss(arg3.d, 0x322bcc77)
            else
                arg3 = 0x322bcc77
            
            if (not(zmm6.d f<= arg3.d))
                result = (*(*arg1 + 0x590))(arg3, 3, 0)
else
    void var_48
    int64_t* rax_1 = (*(*arg1 + 0xab8))(arg3, &var_48, &arg1[0xbc], arg1 + 0xc4)
    *(arg1 + 0xc4) = *rax_1
    result = rax_1[1].d
    *(arg1 + 0xcc) = result

return result
