// 函数: sub_1405a6af0
// 地址: 0x1405a6af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result_2 = j_sub_140a82f30(0x60)
void*** rbx = nullptr
void*** result = result_2
void*** result_1

if (result_2 == 0)
    result = nullptr
else
    int64_t* rcx = &result[3]
    *result = &data_142d4c300
    result[1] = 0
    result[2] = 0
    rcx[2] = 0
    rcx[3].d = 0
    *(rcx + 0x1c) = 0x80
    int64_t* rax = rcx[2]
    
    if (rax != 0)
        rcx = rax
    
    *rcx = 0
    rcx[1] = 0
    result[7].d = 0xffffffff
    *(result + 0x3c) = 0
    result[9] = 0
    result[0xa].d = 0
    result[0xb] = 0
    void* rax_1 = sub_140cde0b0()
    sub_140d19010(rax_1, 
        NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
    "class constructor) as it produces incon")
    result_1 = nullptr
    void* rax_3 = sub_140d2dfc0(sub_1405cbc40(), rax_1, 0, 0, 0, 0, 0, 0, 0)
    void*** rcx_3 = nullptr
    
    if (rax_3 != 0)
        void*** rax_4 = j_sub_140a82f30(0x18)
        
        if (rax_4 != 0)
            sub_1405ab8c0(rax_4)
            rax_4[2] = rax_3
            *rax_4 = &data_142d4c240
            rbx = rax_4
        
        rcx_3 = rbx
    
    if (&result[0xb] != &result_1)
        int64_t* rcx_5 = result[0xb]
        result[0xb] = rbx
        
        if (rcx_5 != 0)
            (**rcx_5)(rcx_5, 1)
    else if (rcx_3 != 0)
        (**rbx)(rbx, 1)

int64_t* rcx_7 = *(arg1 + 0x10)
result_1 = result
sub_1405a7400(rcx_7, arg2, &result_1)
void*** result_3 = result_1

if (result_3 != 0)
    void** r8_1 = *result_3
    (*r8_1)(result_3, 1, r8_1)

return result
