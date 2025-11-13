// 函数: sub_142043750
// 地址: 0x142043750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0xa8)
char rdx = 0
int64_t* rax = rbx
int32_t arg_8 = 0

if (rbx != 0)
    int32_t rax_1 = rbx[1].d
    
    if (rax_1 == 0)
        rbx = nullptr
        rax = nullptr
    else
        rbx[1].d = rax_1 + 1
        rax = rbx

void* rsi = nullptr

if (rax != 0)
    rsi = *(arg1 + 0xa0)

int128_t result = 0x3f800000
void var_28
int64_t* rax_3

if (rsi != 0)
    rax_3 = sub_140e152a0(rsi, &var_28)
    rdx = 1

int64_t rbp

if (rsi == 0 || *rax_3 == 0)
    rbp.b = 0
else
    rbp = 1

int64_t* var_20

if ((rdx & 1) != 0 && var_20 != 0)
    var_20[1].d -= 1
    
    if (var_20[1].d == 1)
        (**var_20)(var_20)
        int32_t temp3_1 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*var_20 + 8))(var_20, 1)

if (rbp.b != 0)
    int64_t* rcx_4 = *sub_140e152a0(rsi, &var_28)
    (*(*rcx_4 + 0xf8))(rcx_4)
    result = arg2
    
    if (var_20 != 0)
        var_20[1].d -= 1
        
        if (var_20[1].d == 1)
            (**var_20)(var_20)
            int32_t temp5_1 = *(var_20 + 0xc)
            *(var_20 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*var_20 + 8))(var_20, 1)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp4_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rbx + 8))(rbx, 1)

return result
