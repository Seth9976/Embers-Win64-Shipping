// 函数: sub_141b94f50
// 地址: 0x141b94f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = nullptr
int32_t arg_8 = 0
*(arg1 + 0x50) = *arg2
int64_t* rsi = arg2[1]
int64_t* rbx = *(arg1 + 0x58)

if (rsi != rbx)
    if (rsi != 0)
        *(rsi + 0xc) += 1
        rbx = *(arg1 + 0x58)
    
    if (rbx != 0)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)
    
    *(arg1 + 0x58) = rsi
    rbx = rsi

int64_t* rcx_1 = nullptr

if (rbx != 0)
    int32_t rax_2 = rbx[1].d
    
    if (rax_2 != 0)
        rbx[1].d = rax_2 + 1
        rax_2.b = 1
    
    if (rax_2.b == 0)
        rbx = nullptr
    
    if (rbx != 0)
        rcx_1 = *(arg1 + 0x50)

sub_140f5e570(rcx_1, zx.d(*(arg1 + 0x48)))

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t* rbx_1 = *(arg1 + 0x58)
int64_t* rcx_4 = nullptr

if (rbx_1 != 0)
    int32_t rax_5 = rbx_1[1].d
    
    if (rax_5 != 0)
        rbx_1[1].d = rax_5 + 1
        rax_5.b = 1
    
    if (rax_5.b == 0)
        rbx_1 = nullptr
    
    if (rbx_1 != 0)
        rcx_4 = *(arg1 + 0x50)

sub_140f61770(rcx_4, zx.d(*(arg1 + 0x49)))

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp4_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rcx_7 = *(arg1 + 0x30)
uint128_t var_48
void* rcx_8
int32_t rsi_1

if (rcx_7 == 0)
    uint128_t zmm0_1 = data_143e244b0.o
    var_48 = zmm0_1
    void* rax_8 = _mm_bsrli_si128(zmm0_1, 8).q
    
    if (rax_8 != 0)
        *(rax_8 + 8) += 1
    
    rcx_8 = &var_48
    rsi_1 = 2
else
    arg_8.b = 0
    var_48:8.q = &arg_8
    var_48.q = sub_141b970e0
    void var_28
    sub_141befea0(rcx_7, &var_28, &var_48)
    rcx_8 = &var_28
    rsi_1 = 1

int64_t var_38 = *rcx_8
void* rax_10 = *(rcx_8 + 8)
void* var_30 = rax_10

if (rax_10 != 0)
    *(rax_10 + 8) += 1

int64_t* rbx_2 = *(arg1 + 0x58)

if (rbx_2 != 0)
    int32_t rax_11 = rbx_2[1].d
    
    if (rax_11 != 0)
        rbx_2[1].d = rax_11 + 1
        rax_11.b = 1
    
    if (rax_11.b == 0)
        rbx_2 = nullptr
    
    if (rbx_2 != 0)
        rbp = *(arg1 + 0x50)

void* result = sub_140f5d950(rbp, &var_38)

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        result = (**rbx_2)(rbx_2)
        int32_t temp6_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp6_1 == 1)
            result = (*(*rbx_2 + 8))(rbx_2, 1)

if ((rsi_1.b & 2) != 0)
    int64_t* rbx_3 = var_48:8.q
    rsi_1 &= 0xfffffffd
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            result = (**rbx_3)(rbx_3)
            int32_t temp10_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp10_1 == 1)
                result = (*(*rbx_3 + 8))(rbx_3, 1)

int64_t* var_20

if ((rsi_1.b & 1) != 0 && var_20 != 0)
    var_20[1].d -= 1
    
    if (var_20[1].d == 1)
        result = (**var_20)(var_20)
        int32_t temp12_1 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (temp12_1 == 1)
            result = (*(*var_20 + 8))(var_20, 1)

int64_t* rbx_5 = arg2[1]

if (rbx_5 != 0)
    rbx_5[1].d -= 1
    
    if (rbx_5[1].d == 1)
        result = (**rbx_5)(rbx_5)
        int32_t temp11_1 = *(rbx_5 + 0xc)
        *(rbx_5 + 0xc) -= 1
        
        if (temp11_1 == 1)
            return (*(*rbx_5 + 8))(rbx_5, 1)

return result
