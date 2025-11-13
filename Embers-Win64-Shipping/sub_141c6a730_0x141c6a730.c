// 函数: sub_141c6a730
// 地址: 0x141c6a730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int32_t arg_10 = 0
int64_t* var_d0 = nullptr
void* rax_1 = sub_1425a1a30()
void* rdx = *(arg2 + 0x10)
int64_t rax = sx.q(*(rax_1 + 0x38))

if (rax.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax << 3)) != rax_1 + 0x30)
    return 

int64_t r8 = *(arg2 + 0x38)
int64_t* var_c0
int64_t* var_b0
int64_t* var_a0
int64_t* rdx_3
int32_t rsi_1

if (r8 == 0)
    int64_t* rcx_4 = *(arg1 + 0x7e0)
    rsi_1 = 0xc
    int64_t rax_3 = *rcx_4
    int64_t* rax_4 = rcx_4[1]
    var_a0 = rax_4
    
    if (rax_4 != 0)
        *(rax_4 + 0xc) += 1
    
    int64_t var_c8 = 0
    sub_141c4d620(&var_c0, &var_a0)
    int64_t rax_5 = var_c8
    rdx_3 = &var_c8
    
    if (var_c0 != 0)
        rax_5 = rax_3
    
    var_c8 = rax_5
else
    rsi_1 = 3
    void var_88
    int64_t* rax_2 = sub_141c5eea0(arg1, &var_88, r8)
    int64_t var_b8 = 0
    sub_141c4d620(&var_b0, &rax_2[1])
    
    if (var_b0 != 0)
        var_b8 = *rax_2
        *rax_2 = 0
    
    rdx_3 = &var_b8

void* rax_6 = *rdx_3
*rdx_3 = 0
sub_1405aeff0(&var_d0, &rdx_3[1])

if ((rsi_1.b & 8) != 0)
    int64_t* rcx_7 = var_c0
    rsi_1 &= 0xfffffff7
    
    if (rcx_7 != 0)
        rcx_7[1].d -= 1
        
        if (rcx_7[1].d == 1)
            int64_t* rbx_3 = var_c0
            (**rbx_3)(rbx_3)
            rax = zx.q(*(rbx_3 + 0xc))
            *(rbx_3 + 0xc) -= 1
            
            if (rax.d == 1)
                int64_t* rcx_9 = var_c0
                (*(*rcx_9 + 8))(rcx_9, 1)

if ((rsi_1.b & 4) != 0)
    int64_t* rcx_10 = var_a0
    rsi_1 &= 0xfffffffb
    
    if (rcx_10 != 0)
        rax = zx.q(*(rcx_10 + 0xc))
        *(rcx_10 + 0xc) -= 1
        
        if (rax.d == 1)
            int64_t* rcx_11 = var_a0
            (*(*rcx_11 + 8))(rcx_11, 1)

if ((rsi_1.b & 2) != 0)
    int64_t* rcx_12 = var_b0
    rsi_1 &= 0xfffffffd
    
    if (rcx_12 != 0)
        rcx_12[1].d -= 1
        
        if (rcx_12[1].d == 1)
            int64_t* rbx_4 = var_b0
            (**rbx_4)(rbx_4)
            rax = zx.q(*(rbx_4 + 0xc))
            *(rbx_4 + 0xc) -= 1
            
            if (rax.d == 1)
                int64_t* rcx_14 = var_b0
                (*(*rcx_14 + 8))(rcx_14, 1)

int64_t* var_80

if ((rsi_1.b & 1) != 0 && var_80 != 0)
    rax = zx.q(*(var_80 + 0xc))
    *(var_80 + 0xc) -= 1
    
    if (rax.d == 1 && var_80 != 0)
        (*(*var_80 + 8))(var_80, 1)

void* r14_1 = rax_6
int64_t* rbx_5

if (r14_1 == 0)
    rbx_5 = var_d0
else
    uint128_t zmm0_1 = rax_6.o
    uint128_t var_78 = zmm0_1
    rbx_5 = _mm_bsrli_si128(zmm0_1, 8).q
    
    if (rbx_5 != 0)
        *(rbx_5 + 0xc) += 1
        rbx_5 = var_d0
        r14_1 = rax_6
    
    int128_t zmm1 = sub_141c6e750(*arg3, &var_78, arg4)
    int64_t* rsi_2 = arg3[1]
    int64_t rax_13 = *arg3
    int64_t* rcx_17 = rsi_2
    int64_t* var_90_1 = rcx_17
    
    if (rsi_2 != 0)
        *(rsi_2 + 0xc) += 1
        *(rsi_2 + 0xc) += 1
        rbx_5 = var_d0
        r14_1 = rax_6
        rcx_17 = var_90_1
    
    int64_t var_38_1 = rax_13
    int64_t* var_30_1 = rcx_17
    void** const var_48_1 = &data_14320ad80
    int64_t var_58_1 = 0
    void (* var_68)(int64_t* arg1) = j_sub_141c538f0
    void* var_40_1 = r14_1
    sub_141c720f0(r14_1, &var_68, zmm1)
    
    if (rsi_2 != 0)
        rax = zx.q(*(rsi_2 + 0xc))
        *(rsi_2 + 0xc) -= 1
        
        if (rax.d == 1)
            (*(*var_90_1 + 8))(var_90_1, 1)
        
        rbx_5 = var_d0

if (rbx_5 == 0)
    return 

rbx_5[1].d -= 1

if (rbx_5[1].d != 1)
    return 

int64_t* rbx_6 = var_d0
(**rbx_6)(rbx_6)
int32_t rdi_2 = *(rbx_6 + 0xc)
*(rbx_6 + 0xc) -= 1

if (rdi_2 == 1)
    int64_t* rcx_21 = var_d0
    (*(*rcx_21 + 8))(rcx_21, zx.q(rdi_2))
