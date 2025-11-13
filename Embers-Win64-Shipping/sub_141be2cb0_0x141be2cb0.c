// 函数: sub_141be2cb0
// 地址: 0x141be2cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

uint128_t zmm0 = zx.o(0)
void** const var_50 = &data_14306d970
uint128_t var_48_1 = zx.o(0)
char r8
char var_38_1 = r8
char r9
char var_37_1 = r9

if (arg2 != 0)
    char var_58
    char* var_28_1 = &var_58
    var_58 = 0
    void** (* var_30)(void** arg1, int64_t arg2, int64_t* arg3, int64_t* arg4) = sub_141b970e0
    uint128_t var_18
    sub_141befea0(arg2, &var_18, &var_30)
    int64_t* var_10
    
    if (var_10 != 0)
        var_10[1].d += 1
    
    if (var_10 != 0)
        var_10[1].d += 1
    
    zmm0 = var_48_1
    var_48_1 = var_18
    zmm0 = _mm_bsrli_si128(zmm0, 8)
    int64_t* rdi_1 = zmm0.q
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp4_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)
    
    if (var_10 != 0)
        var_10[1].d -= 1
        
        if (var_10[1].d == 1)
            (**var_10)(var_10)
            int32_t temp6_1 = *(var_10 + 0xc)
            *(var_10 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*var_10 + 8))(var_10, 1)
        
        var_10[1].d -= 1
        
        if (var_10[1].d == 1)
            (**var_10)(var_10)
            int32_t temp7_1 = *(var_10 + 0xc)
            *(var_10 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*var_10 + 8))(var_10, 1)

(*(*arg1 + 0xbb0))(zmm0, &var_50)
int64_t* rbx_2 = var_48_1:8.q

if (rbx_2 == 0)
    return 

rbx_2[1].d -= 1

if (rbx_2[1].d != 1)
    return 

(**rbx_2)(rbx_2)
int32_t temp1_1 = *(rbx_2 + 0xc)
*(rbx_2 + 0xc) -= 1

if (temp1_1 == 1)
    (*(*rbx_2 + 8))(rbx_2, 1)
