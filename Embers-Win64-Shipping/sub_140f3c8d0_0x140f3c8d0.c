// 函数: sub_140f3c8d0
// 地址: 0x140f3c8d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x2d0) = 3
*(arg1 + 0x2d4) = (*(arg1 + 0x2d4) & 0xfffffffb) | 1
*(arg1 + 0x2b8) = 0x3f800000
*(arg1 + 0x2bc) = 0x3dcccccd
*(arg1 + 0x2c0) = 0x3f000000
*(arg1 + 0x2c4) = 0x40000000
*(arg1 + 0x2d8) = 0x3dcccccd
*(arg1 + 0x2cc) = 0
int64_t* rbx = data_143e20d20
void* rsi = data_143e20d18
int64_t (* result_1)(int64_t* arg1) = sub_140f28a84

if (rbx != 0)
    rbx[1].d += 1

int128_t var_28 = result_1.o
int64_t* result = sub_140dd1ec0(&result_1, arg1, &var_28)
int64_t* result_2 = result

if (result[1].d != 0 && *result != 0)
    sub_140599630(rsi + 0x38, 1)
    
    if (result_2[1].d != 0)
        int64_t* rcx_2 = *result_2
        void arg_8
        
        if (rcx_2 != 0)
            (*(*rcx_2 + 0x30))(rcx_2, &arg_8)
    
    int64_t rbp_1 = sx.q(*(rsi + 0x40))
    int32_t rax_4 = (rbp_1 + 1).d
    *(rsi + 0x40) = rax_4
    
    if (rax_4 s> *(rsi + 0x44))
        sub_1405a4f90(rsi + 0x38)
    
    int64_t* rcx_6 = (rbp_1 << 4) + *(rsi + 0x38)
    *rcx_6 = 0
    *rcx_6 = *result_2
    *result_2 = 0
    result = zx.q(result_2[1].d)
    rcx_6[1].d = result.d
    result_2[1].d = 0

if (0 == 0)
    result = result_1
label_140f3ca44:
    
    if (result != 0)
        result = sub_140a74f90(result)
else
    int64_t (* result_3)(int64_t* arg1) = result_1
    
    if (result_3 != 0)
        (*(*result_3 + 0x38))(result_3, 0)
        result = result_1
        
        if (result != 0)
            result = sub_140a84c80(result, 0, 0)
            result_1 = result
        
        int32_t var_30_1 = 0
        goto label_140f3ca44

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        result = (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            jump(*(*rbx + 8))

return result
