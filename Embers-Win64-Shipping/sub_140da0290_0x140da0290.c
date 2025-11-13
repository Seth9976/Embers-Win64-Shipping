// 函数: sub_140da0290
// 地址: 0x140da0290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int64_t* rbx = arg3[1]

if (rbx != 0)
    rbx[1].d += 1

void* rdi = *(arg1 + 0x10)
int32_t rdx = 0
int64_t rax_2 = sx.q(*(rdi + 0x130))
int128_t var_78
int64_t rbp
int64_t* rdi_2
int64_t r14

if (rax_2.d s<= 0)
label_140da0309:
    r14.b = 0
    rbp.b = 0
    char var_30 = 0
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp1_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx + 8))(rbx, 1)
    
    int64_t* var_38
    rdi_2 = var_38
else
    void* rdi_1 = rdi + 8
    int64_t rcx = 0
    void* rax_3 = *(rdi_1 + 0x120)
    
    if (rax_3 != 0)
        rdi_1 = rax_3
    
    int64_t rax_4 = 0
    
    while (*(rax_4 + rdi_1 + 0x38) != *arg3)
        rdx += 1
        rcx += 1
        rax_4 += 0x48
        
        if (rcx s>= rax_2)
            goto label_140da0309
    
    int64_t rcx_8 = sx.q(rdx) * 9
    uint128_t zmm1 = *(rdi_1 + (rcx_8 << 3) + 0x10)
    int64_t var_40_1 = *(rdi_1 + (rcx_8 << 3) + 0x38)
    var_78 = *(rdi_1 + (rcx_8 << 3))
    uint128_t var_68_1 = zmm1
    rdi_2 = *(rdi_1 + (rcx_8 << 3) + 0x40)
    uint64_t var_48_1 = *(rdi_1 + (rcx_8 << 3) + 0x30)
    int64_t* var_38_1 = rdi_2
    int128_t var_58_1 = *(rdi_1 + (rcx_8 << 3) + 0x20)
    
    if (rdi_2 != 0)
        rdi_2[1].d += 1
    
    r14.b = 1
    char var_30_1 = 1
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp5_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rbx + 8))(rbx, 1)
    
    rbp.b = 1

sub_140da8da0()
int128_t* rcx_3 = &var_78

if (rbp.b == 0)
    rcx_3 = &data_143e242d0

*arg2 = *rcx_3
arg2[1] = rcx_3[1]
arg2[2] = rcx_3[2]
uint128_t zmm1_1 = zx.o(rcx_3[3].q)
arg2[3].q = zmm1_1.q

if (r14.b != 0 && rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        int64_t r8_1 = *rdi_2
        (*r8_1)(rdi_2, zmm1_1, r8_1)
        int32_t temp4_1 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (temp4_1 == 1)
            int64_t r8_2 = *rdi_2
            (*(r8_2 + 8))(rdi_2, 1, r8_2)

__security_check_cookie(rax_1 ^ &var_98)
return arg2
