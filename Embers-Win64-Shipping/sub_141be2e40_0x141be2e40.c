// 函数: sub_141be2e40
// 地址: 0x141be2e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

char var_10_1 = 3
void** const var_28 = &data_14306d960
int128_t var_20_1 = zx.o(0)
sub_142279610(&var_28, arg3)

if (arg2 != 0)
    char arg_8 = 0
    char* var_50_1 = &arg_8
    void** (* var_58)(void** arg1, int64_t arg2, int64_t* arg3, int64_t* arg4) = sub_141b970e0
    uint128_t var_48
    sub_141befea0(arg2, &var_48, &var_58)
    uint128_t zmm0_1 = var_48
    uint128_t var_38 = zmm0_1
    int64_t* rbx_2 = _mm_bsrli_si128(zmm0_1, 8).q
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    sub_14227aa60(&var_28, &var_38, arg4)
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp3_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)

(*(*arg1 + 0xbb0))(arg1, &var_28)
int64_t* rbx_3 = var_20_1:8.q

if (rbx_3 == 0)
    return 

rbx_3[1].d -= 1

if (rbx_3[1].d != 1)
    return 

(**rbx_3)(rbx_3)
int32_t temp1_1 = *(rbx_3 + 0xc)
*(rbx_3 + 0xc) -= 1

if (temp1_1 == 1)
    (*(*rbx_3 + 8))(rbx_3, 1)
