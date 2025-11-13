// 函数: sub_141bc9330
// 地址: 0x141bc9330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce3290(arg1)
int128_t var_18 = data_1439a9418
int32_t result = sub_140cdd5d0(arg1, &var_18)

if (result s< 0x19)
    sub_140d962e0(&arg1[0x71], &arg1[0xc1])
    arg1[0x7d].b = 0
    result = &var_18
    *(arg1 + 0x3d8) = *(arg1 + 0x668)
    
    if (&var_18 != &arg1[0x7e])
        uint128_t zmm0_1 = *(arg1 + 0x3f0)
        *(arg1 + 0x3f0) = zx.o(0)
        int64_t* rbx_2 = _mm_bsrli_si128(zmm0_1, 8).q
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                result = (**rbx_2)(rbx_2)
                int32_t temp1_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    jump(*(*rbx_2 + 8))

return result
