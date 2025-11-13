// 函数: sub_140aa9af0
// 地址: 0x140aa9af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
char* rax_2
int512_t zmm1
rax_2, zmm1 = sub_140a752e0()
int64_t* rbx = *(rax_2 + 0x30)
int64_t* r15 = *(rax_2 + 0x28)

if (rbx != 0)
    rbx[1].d += 1

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rax_5 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rax_5 == 1)
            (*(*rbx + 8))(rbx, 1)

int32_t rdx = *arg2
uint64_t r14
r14.b = 5

if (rdx == 0)
    r14 = zx.q(sub_140a7b740(r15, *(arg2 + 8), zx.q(*(arg1 + 8))))
else if (rdx == 1)
    r14 = zx.q(sub_140a7b780(r15, *(arg2 + 8), zx.q(*(arg1 + 8))))
else if (rdx == 2)
    zmm1.o = arg2[2]
    r14 = zx.q(sub_140a7b6e0(r15, zmm1, zx.q(*(arg1 + 8))))
else if (rdx == 3)
    zmm1.o = zx.o(*(arg2 + 8))
    r14 = zx.q(sub_140a7b710(r15, zmm1, zx.q(*(arg1 + 8))))
else if (rdx == 4)
    int64_t* var_d0 = *(arg2 + 0x10)
    int64_t* rax_8 = *(arg2 + 0x18)
    
    if (rax_8 != 0)
        rax_8[1].d += 1
    
    int32_t var_c0_1 = arg2[8]
    char var_a8 = 0
    int32_t var_a0_1 = 4
    sub_1405d9400()
    int64_t var_90_1 = data_143cd6fd8
    int64_t* rcx_6 = data_143cd6fe0
    
    if (rcx_6 != 0)
        rcx_6[1].d += 1
    
    int64_t* rcx_7 = var_d0
    int32_t var_80_1 = data_143cd6fe8
    char var_78_1 = 1
    char var_58_1 = 0
    int64_t* rax_12 = (*(*rcx_7 + 0x28))(rcx_7)
    int64_t r9 = *rax_12
    
    if ((*(r9 + 0x60))(rax_12, &var_d0, &var_a8, r9, arg4) != 0)
        int32_t rcx_9 = 1
        
        if (var_a8 == 1)
            rcx_9 = 0x64
        
        int64_t var_98
        
        if (var_a0_1 == 0)
            r14 = zx.q(sub_140a7b740(r15, zx.q(rcx_9) * var_98, zx.q(*(arg1 + 8))))
        else if (var_a0_1 == 1)
            r14 = zx.q(sub_140a7b780(r15, zx.q(rcx_9) * var_98, zx.q(*(arg1 + 8))))
        else
            uint128_t zmm1_1
            
            if (var_a0_1 == 2)
                uint64_t r8_2 = zx.q(*(arg1 + 8))
                zmm1_1.d = _mm_cvtepi32_ps(zx.o(rcx_9)).d f* var_98.d
                r14 = zx.q(sub_140a7b6e0(r15, zmm1_1, r8_2))
            else if (var_a0_1 == 3)
                uint64_t r8_1 = zx.q(*(arg1 + 8))
                zmm1_1.q = _mm_cvtepi32_pd(zx.q(rcx_9)).q f* var_98
                r14 = zx.q(sub_140a7b710(r15, zmm1_1, r8_1))
    
    char var_58_2 = 0
    
    if (var_78_1 != 0)
        char var_78_2 = 0
        
        if (rcx_6 != 0)
            rcx_6[1].d -= 1
            
            if (rcx_6[1].d == 1)
                (**rcx_6)(rcx_6)
                int32_t rax_17 = *(rcx_6 + 0xc)
                *(rcx_6 + 0xc) -= 1
                
                if (rax_17 == 1)
                    (*(*rcx_6 + 8))(rcx_6, 1)
    
    if (rax_8 != 0)
        rax_8[1].d -= 1
        
        if (rax_8[1].d == 1)
            (**rax_8)(rax_8)
            int32_t rdi_1 = *(rax_8 + 0xc)
            *(rax_8 + 0xc) -= 1
            
            if (rdi_1 == 1)
                (*(*rax_8 + 8))(rax_8, zx.q(rdi_1))

int64_t var_b8
int64_t* rax_25 = sub_140aacb40(&var_b8, arg1 + 0x18 + (zx.q(r14.b) << 4), arg3)
int32_t rdx_14 = rax_25[1].d
int32_t r8_10 = rdx_14 - 1

if (rdx_14 == 0)
    r8_10 = 0

int64_t result = sub_140a20ba0(arg4, *rax_25, r8_10)
int64_t rcx_24 = var_b8

if (rcx_24 != 0)
    result = sub_140a74f90(rcx_24)

__security_check_cookie(rax_1 ^ &var_f8)
return result
