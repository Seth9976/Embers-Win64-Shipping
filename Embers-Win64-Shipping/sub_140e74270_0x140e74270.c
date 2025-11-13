// 函数: sub_140e74270
// 地址: 0x140e74270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r15 = 0
int32_t arg_8 = 0
int128_t var_d8
int64_t* var_b8
int64_t* rax_1
void* const rbp
int32_t rsi

if (0 s>= *(arg1 + 0x1a8))
    rax_1 = &var_d8
    var_d8 = zx.o(0)
    rsi = 2
    rbp = nullptr
else
    int64_t* rax = *(arg1 + 0x1a0)
    int64_t* rcx = rax[1]
    rbp = *rax
    void* const var_c0 = rbp
    var_b8 = rcx
    
    if (rcx != 0)
        rcx[1].d += 1
    
    rax_1 = &var_c0
    rsi = 1

int64_t* rdi = rax_1[1]
rax_1[1] = 0
*rax_1 = 0

if ((rsi.b & 2) != 0)
    int64_t* rbx_1 = var_d8:8.q
    rsi &= 0xfffffffd
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp3_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

if ((1 & rsi.b) != 0 && var_b8 != 0)
    var_b8[1].d -= 1
    
    if (var_b8[1].d == 1)
        (**var_b8)(var_b8)
        int32_t temp5_1 = *(var_b8 + 0xc)
        *(var_b8 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*var_b8 + 8))(var_b8, 1)

int64_t rbx_3 = *(rbp + 0x1d0)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp4_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rdi + 8))(rdi, 1)

if (rbx_3 != 0)
    int64_t* rbx_4 = data_143e20d18
    var_d8.q = data_143e1e008
    var_d8:8.q = data_143e1e010
    void* rax_10 = data_143e1e018
    void* var_c8_1 = rax_10
    
    if (rax_10 != 0)
        *(rax_10 + 8) += 1
    
    int64_t* rcx_7 = *(arg1 + 0x4e8)
    int32_t rax_12 = (**rcx_7)(rcx_7)
    int16_t* rax_14 = (*(*rbx_4 + 0x58))(rbx_4, &arg_8)
    void arg_18
    int64_t* rax_16 = (*(*(arg1 - 0x118) + 0x60))(arg1 - 0x118, &arg_18)
    void var_a8
    void arg_20
    sub_140e51450(&var_a8, rax_12, 0xa, (*(*(arg1 - 0x118) + 0x58))(arg1 - 0x118, &arg_20), rax_16, 
        arg1 + 8, &var_d8, (zx.o(0)).d, rax_14)
    
    if (sub_140e7d370(arg1 - 0x118, &var_a8) != 0)
        r15 = 1
    
    int64_t* var_60
    
    if (var_60 != 0)
        var_60[1].d -= 1
        
        if (var_60[1].d == 1)
            (**var_60)(var_60)
            int32_t temp7_1 = *(var_60 + 0xc)
            *(var_60 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*var_60 + 8))(var_60, 1)

return zx.q(r15)
