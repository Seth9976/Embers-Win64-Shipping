// 函数: sub_141b95450
// 地址: 0x141b95450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbp = nullptr
int32_t arg_8 = 0
arg1[9] = *arg2
void* rbx = arg2[1]
int64_t* rcx = arg1[0xa]

if (rbx != rcx)
    if (rbx != 0)
        *(rbx + 0xc) += 1
        rcx = arg1[0xa]
    
    if (rcx != 0)
        int32_t temp0_1 = *(rcx + 0xc)
        *(rcx + 0xc) -= 1
        
        if (temp0_1 == 1)
            (*(*rcx + 8))(rcx, 1)
    
    arg1[0xa] = rbx

(*(*arg1 + 0x268))(arg1)
int64_t* rcx_2 = arg1[6]
uint128_t var_38
void* rdx_1
int32_t rsi

if (rcx_2 == 0)
    uint128_t zmm0 = data_143e244b0.o
    var_38 = zmm0
    void* rax_3 = _mm_bsrli_si128(zmm0, 8).q
    
    if (rax_3 != 0)
        *(rax_3 + 8) += 1
    
    rdx_1 = &var_38
    rsi = 2
else
    arg_8.b = 0
    int32_t* var_40_1 = &arg_8
    void** (* var_48)(void** arg1, int64_t arg2, int64_t* arg3, int64_t* arg4) = sub_141b970e0
    void var_28
    sub_141befea0(rcx_2, &var_28, &var_48)
    rdx_1 = &var_28
    rsi = 1

int64_t* rbx_1 = arg1[0xa]

if (rbx_1 != 0)
    int32_t rax_4 = rbx_1[1].d
    
    if (rax_4 != 0)
        rbx_1[1].d = rax_4 + 1
        rax_4.b = 1
    
    if (rax_4.b == 0)
        rbx_1 = nullptr
    
    if (rbx_1 != 0)
        rbp = arg1[9]

int64_t result = sub_140f5d9a0(rbp, rdx_1)

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp2_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
            result = (*(*rbx_1 + 8))(rbx_1, 1)

if ((rsi.b & 2) != 0)
    int64_t* rbx_2 = var_38:8.q
    rsi &= 0xfffffffd
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            result = (**rbx_2)(rbx_2)
            int32_t temp6_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp6_1 == 1)
                result = (*(*rbx_2 + 8))(rbx_2, 1)

int64_t* var_20

if ((rsi.b & 1) != 0 && var_20 != 0)
    var_20[1].d -= 1
    
    if (var_20[1].d == 1)
        result = (**var_20)(var_20)
        int32_t temp8_1 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (temp8_1 == 1)
            result = (*(*var_20 + 8))(var_20, 1)

int64_t* rbx_4 = arg2[1]

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        result = (**rbx_4)(rbx_4)
        int32_t temp7_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (temp7_1 == 1)
            return (*(*rbx_4 + 8))(rbx_4, 1)

return result
