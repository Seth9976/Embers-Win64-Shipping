// 函数: sub_140fc7020
// 地址: 0x140fc7020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t var_28 = zx.o(0)
int64_t* rbx
void*** result

if (sub_140fc71b0(arg1, arg2, &var_28) == 0)
    void*** result_1 = j_sub_140a82f30(0x148)
    result = result_1
    
    if (result_1 == 0)
        result = nullptr
    else
        *result = &data_142ef1ac8
        result[1] = 0
        result[2] = 0
        result[0x23].d = 0
        *(result + 0x11c) = 0
        result[0x24] = &data_142ef1ab0
        result[0x25] = result
        result[0x26].d = 0
        result[0x27] = 0
        result[0x28] = 0
        strncpy(&result[3], arg2, 0x100)
        *(result + 0x117) = 0
    
    int64_t rax_3 = data_143db7ac8
    result[0x26].d += 1
    void*** rcx_2 = result[0x27]
    result[0x28] = rax_3
    
    if (rax_3 == 0)
        sub_140a4fc50(rcx_2)
        void* rcx_4 = result[0x25]
        result[0x27] = 0
        sub_140fc5b50(rcx_4)
        result[0x26].d -= 1
    else
        if (rcx_2 == 0)
            rcx_2.b = 1
            void*** rax_4 = sub_140a491d0(rcx_2.b)
            result[0x27] = rax_4
            rcx_2 = rax_4
        
        (*rcx_2)[3](rcx_2)
        int64_t* rcx_3 = result[0x28]
        (*(*rcx_3 + 0x10))(rcx_3, &result[0x24])
    
    rbx = var_28:8.q
else
    uint128_t zmm0_1 = var_28
    uint128_t var_18 = zmm0_1
    rbx = _mm_bsrli_si128(zmm0_1, 8).q
    
    if (rbx != 0)
        rbx[1].d += 1
    
    result = (*(*arg1 + 0x30))(arg1, &var_18)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

return result
