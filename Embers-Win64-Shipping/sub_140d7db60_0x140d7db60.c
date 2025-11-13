// 函数: sub_140d7db60
// 地址: 0x140d7db60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    void* rax_1 = arg1[0x14]
    int64_t* rcx = *(rax_1 + 0x28)
    int64_t* rbx_1 = *(rax_1 + 0x30)
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    char rax_3 = data_143e206e0 & 1
    
    if (rax_3 != *(rcx + 9))
        int64_t rdx = *rcx
        *(rcx + 9) = rax_3
        
        if (rax_3 == 0)
            (*(rdx + 0x30))()
        else
            (*(rdx + 0x28))()
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp4_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    sub_140d89b60(arg1)
    char* rax_6 = sub_140a752e0()
    void*** rax_7 = sub_140a84c80(0, 0x30, 0)
    
    if (rax_7 != 0)
        rax_7[1] = arg1
        *rax_7 = &data_142d3fe58
        rax_7[2] = sub_140d89b60
        rax_7[4] = sub_140a387b0()
        *rax_7 = &data_142d3feb0
    
    int64_t rbx_2 = 0
    
    if (rax_7 != 0)
        sub_140599630(&rax_6[8], 1)
        void arg_8
        int64_t* rax_10 = (*rax_7)[6](rax_7, &arg_8)
        int64_t r15_1 = sx.q(*(rax_6 + 0x10))
        rbx_2 = *rax_10
        int32_t rax_11 = (r15_1 + 1).d
        *(rax_6 + 0x10) = rax_11
        
        if (rax_11 s> *(rax_6 + 0x14))
            sub_1405a4f90(&rax_6[8])
        
        void** rax_14 = (r15_1 << 4) + *(rax_6 + 8)
        *rax_14 = rax_7
        rax_14[1].d = 3
    
    arg1[0x15] = rbx_2

int64_t var_38 = *arg2
int64_t* rax_16 = arg2[1]

if (rax_16 != 0)
    rax_16[1].d += 1

void* rax_17 = arg1[0x14]
int64_t* rbx_3 = *(rax_17 + 0x30)
int64_t* rcx_7 = *(rax_17 + 0x28)

if (rbx_3 != 0)
    rbx_3[1].d += 1

uint128_t var_28
(*(*rcx_7 + 8))(rcx_7, &var_28, &var_38)

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t temp3_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx_3 + 8))(rbx_3, 1)

if (rax_16 != 0)
    rax_16[1].d -= 1
    
    if (rax_16[1].d == 1)
        (**rax_16)(rax_16)
        int32_t temp5_1 = *(rax_16 + 0xc)
        *(rax_16 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*rax_16 + 8))(rax_16, 1)

uint128_t zmm0 = var_28
var_38.o = zmm0
void* rax_23 = _mm_bsrli_si128(zmm0, 8).q

if (rax_23 != 0)
    *(rax_23 + 8) += 1

int64_t result = sub_140d7d8b0(arg1, &var_38)
int64_t* rbx_5 = var_28:8.q

if (rbx_5 != 0)
    rbx_5[1].d -= 1
    
    if (rbx_5[1].d == 1)
        int64_t rdx_6 = *rbx_5
        (*rdx_6)(rbx_5, rdx_6)
        int32_t temp8_1 = *(rbx_5 + 0xc)
        *(rbx_5 + 0xc) -= 1
        
        if (temp8_1 == 1)
            (*(*rbx_5 + 8))(rbx_5, 1)

int64_t* rbx_6 = arg2[1]

if (rbx_6 != 0)
    rbx_6[1].d -= 1
    
    if (rbx_6[1].d == 1)
        (**rbx_6)(rbx_6)
        int32_t temp9_1 = *(rbx_6 + 0xc)
        *(rbx_6 + 0xc) -= 1
        
        if (temp9_1 == 1)
            (*(*rbx_6 + 8))(rbx_6, 1)

return result
