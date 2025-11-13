// 函数: sub_141b94660
// 地址: 0x141b94660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
int64_t* rcx = arg1[6]
uint128_t var_18
int32_t rdi

if (rcx != 0)
    arg_8.b = 0
    int32_t* var_20_1 = &arg_8
    void** (* var_28)(void** arg1, int64_t arg2, int64_t* arg3, int64_t* arg4) = sub_141b970e0
    sub_141befea0(rcx, &var_18, &var_28)
    rdi = 2
else
    uint128_t zmm0 = data_143e244b0.o
    var_18 = zmm0
    void* rax_1 = _mm_bsrli_si128(zmm0, 8).q
    
    if (rax_1 != 0)
        *(rax_1 + 8) += 1
    
    rdi = 1

arg1[0xd] = sub_140e99b50(sub_141b90c50(*arg2), &var_18)

if ((rdi.b & 2) != 0)
    int64_t* rbx_1 = var_18:8.q
    rdi &= 0xfffffffd
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp3_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

if ((rdi.b & 1) != 0)
    int64_t* rbx_2 = var_18:8.q
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp5_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)

int64_t result = (*(*arg1 + 0x268))(arg1)
int64_t* rbx_3 = arg2[1]

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        result = (**rbx_3)(rbx_3)
        int32_t temp4_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp4_1 == 1)
            return (*(*rbx_3 + 8))(rbx_3, 1)

return result
