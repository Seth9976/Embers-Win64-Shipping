// 函数: sub_14241fb50
// 地址: 0x14241fb50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char var_4c
char var_4c_1 = var_4c & 0xfe
int64_t var_48 = data_143e1df90
int64_t var_40 = data_143e1df98
void* rax_2 = data_143e1dfa0
int32_t var_58 = 0x3e4ccccd
int32_t var_50 = 0x3f800000
void* var_38 = rax_2

if (rax_2 != 0)
    *(rax_2 + 8) += 1

if (sub_14240faf0(arg1, &var_48, &var_58) != 0)
    int64_t* rbx_1 = data_143e1dfa0
    int64_t r9_1 = data_143e1df90
    int32_t var_54_1 = arg2.d
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    int64_t* rdx_1 = *(arg1 + 0x130)
    void* r8_1 = &rdx_1[sx.q(*(arg1 + 0x138)) * 3]
    
    if (rdx_1 != r8_1)
        int128_t zmm0_1 = var_58.o
        int128_t* rax_5 = &rdx_1[1]
        
        do
            if (*rdx_1 == r9_1)
                *rax_5 = zmm0_1
            
            rdx_1 = &rdx_1[3]
            rax_5 += 0x18
        while (rdx_1 != r8_1)
    
    sub_14241e7d0(arg1 + 0x170)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

var_48 = data_143e1dfa8
int64_t var_40_1 = data_143e1dfb0
void* rax_10 = data_143e1dfb8
void* var_38_1 = rax_10

if (rax_10 != 0)
    *(rax_10 + 8) += 1

char result = sub_14240faf0(arg1, &var_48, &var_58)

if (result != 0)
    int64_t* rbx_2 = data_143e1dfb8
    int64_t r9_2 = data_143e1dfa8
    int32_t var_54_2 = arg3.d
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    int64_t* rdx_3 = *(arg1 + 0x130)
    void* r8_3 = &rdx_3[sx.q(*(arg1 + 0x138)) * 3]
    
    if (rdx_3 != r8_3)
        int128_t zmm0_2 = var_58.o
        int128_t* rax_12 = &rdx_3[1]
        
        do
            if (*rdx_3 == r9_2)
                *rax_12 = zmm0_2
            
            rdx_3 = &rdx_3[3]
            rax_12 += 0x18
        while (rdx_3 != r8_3)
    
    result = sub_14241e7d0(arg1 + 0x170)
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            result = (**rbx_2)(rbx_2)
            int32_t temp3_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp3_1 == 1)
                return (*(*rbx_2 + 8))(rbx_2, 1)

return result
