// 函数: sub_140f48c10
// 地址: 0x140f48c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
(**arg1)()
int64_t* rbx = arg1[3]
int64_t* rax_1 = rbx

if (rbx != 0)
    int32_t rax_2 = rbx[1].d
    
    if (rax_2 == 0)
        rbx = nullptr
        rax_1 = nullptr
    else
        rbx[1].d = rax_2 + 1
        rax_1 = rbx

int64_t rcx

if (rax_1 != 0)
    rcx = arg1[2]

int64_t* rax_4
int32_t rbp
int64_t* rsi
int64_t* rdi_1

if (rax_1 == 0 || rcx == 0)
    uint128_t zmm0 = data_143e244b0.o
    void* rax_5 = _mm_bsrli_si128(zmm0, 8).q
    
    if (rax_5 != 0)
        *(rax_5 + 8) += 1
    
    rsi = zmm0:8.q
    rbp = 2
    rcx = zmm0.q
    rax_4 = rsi
    rdi_1 = zmm0:8.q
else
    rdi_1 = rbx
    
    if (rbx != 0)
        rbx[1].d += 1
    
    int128_t var_28
    rsi = var_28:8.q
    rbp = 1
    rax_4 = rbx

*arg2 = rcx
arg2[1] = rax_4

if (rax_4 != 0)
    rax_4[1].d += 1

if ((rbp.b & 2) != 0)
    rbp &= 0xfffffffd
    
    if (rsi != 0)
        rsi[1].d -= 1
        
        if (rsi[1].d == 1)
            (**rsi)(rsi)
            int32_t temp3_1 = *(rsi + 0xc)
            *(rsi + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rsi + 8))(rsi, 1)

if ((rbp.b & 1) != 0 && rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp5_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp4_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rbx + 8))(rbx, 1)

return arg2
