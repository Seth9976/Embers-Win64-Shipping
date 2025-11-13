// 函数: sub_140aef4f0
// 地址: 0x140aef4f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void**** result_1 = arg2
void**** result = arg2
int32_t arg_8 = 0
int32_t i_1 = 0
int64_t* rsi = nullptr
int32_t r15 = 0
int32_t i_2 = 0
int64_t* var_48 = nullptr
int32_t var_3c = 0
int32_t rax = *(arg1 + 0x10)

if (rax s> 0)
    sub_1405c5570(&var_48, rax)
    rax = *(arg1 + 0x10)
    r15 = var_3c
    i_1 = i_2
    rsi = var_48

int64_t rdi = sx.q(rax - 1)

if (rax - 1 s>= 0)
    int64_t temp1_1
    
    do
        int64_t* rcx_1 = *(*(arg1 + 8) + (rdi << 3))
        
        if (rcx_1 != 0)
            int64_t* rax_4 = (*(*rcx_1 + 8))(rcx_1, &arg_8, arg3)
            int64_t i_3 = sx.q(i_1)
            i_1 = (i_3 + 1).d
            
            if (i_1 s> r15)
                sub_1405a4d70(&var_48)
                r15 = var_3c
                rsi = var_48
            
            rsi[i_3] = *rax_4
            *rax_4 = 0
            int64_t* rcx_3 = arg_8.q
            
            if (rcx_3 != 0)
                (*(*rcx_3 + 0x38))(rcx_3, 1)
        
        temp1_1 = rdi
        rdi -= 1
    while (temp1_1 - 1 s>= 0)
    result = result_1

void*** rax_7
void***** rcx_4
int32_t rdi_1

if (i_1 s<= 0)
    rcx_4 = &result_1
    rdi_1 = 2
    rax_7 = nullptr
else
    rax_7 = j_sub_140a82f30(0x18)
    
    if (rax_7 == 0)
        rax_7 = nullptr
        rcx_4 = &arg_8
        rdi_1 = 1
    else
        rdi_1 = 1
        *rax_7 = &data_142e3e5d0
        rcx_4 = &arg_8
        rax_7[1] = rsi
        rsi = nullptr
        rax_7[2].d = i_1
        i_1 = 0
        *(rax_7 + 0x14) = r15

*rcx_4 = nullptr
*result = rax_7

if ((rdi_1.b & 2) != 0)
    void**** result_2 = result_1
    rdi_1 &= 0xfffffffd
    
    if (result_2 != 0)
        (*result_2)[7](result_2, 1)

if ((rdi_1.b & 1) != 0)
    int64_t* rcx_5 = arg_8.q
    
    if (rcx_5 != 0)
        (*(*rcx_5 + 0x38))(rcx_5, 1)

int64_t* rdi_2 = rsi

if (i_1 != 0)
    int32_t i
    
    do
        int64_t* rcx_6 = *rdi_2
        
        if (rcx_6 != 0)
            (*(*rcx_6 + 0x38))(rcx_6, 1)
        
        rdi_2 = &rdi_2[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

if (rsi != 0)
    sub_140a74f90(rsi)

return result
