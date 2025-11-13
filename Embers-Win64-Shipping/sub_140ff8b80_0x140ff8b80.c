// 函数: sub_140ff8b80
// 地址: 0x140ff8b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t* var_48 = __security_cookie ^ &var_148
void* rdi = arg3
int64_t* rcx

if (arg4 != 0)
    rcx = *arg4

int64_t* var_100
int64_t* rbx
char rsi
int64_t* r12

if (arg4 == 0 || rcx == 0)
    rsi = 0
    rbx = nullptr
    var_100 = nullptr
    r12 = nullptr
else
    int64_t* rax_1 = (*(*rcx + 0x48))(rcx)
    rsi = 0
    rbx = rax_1
    var_100 = nullptr
    r12 = nullptr
    
    if (rax_1 != 0)
        int32_t rdx = *(arg4 + 0xc)
        *(arg1 + 0x43b8) = rdx
        int64_t* rax_3 = sub_140fe85c0(rax_1, rdx)
        var_100 = rax_3
        r12 = rax_3
        sub_140fdf350(arg1 - 0x18, rbx, 0)

char var_108 = 0

if (*(arg1 + 0x27a8) != r12)
    int64_t* rdi_1 = *(arg1 + 0x27b0)
    *(arg1 + 0x27b0) = rbx
    
    if (rbx != 0)
        (*(*rbx + 8))(rbx)
    
    if (rdi_1 != 0)
        (*(*rdi_1 + 0x10))(rdi_1)
    
    int64_t* rdi_2 = *(arg1 + 0x27a8)
    *(arg1 + 0x27a8) = r12
    
    if (r12 != 0)
        (*(*r12 + 8))(r12)
    
    if (rdi_2 != 0)
        (*(*rdi_2 + 0x10))(rdi_2)
    
    rdi = arg3
    var_108 = 1

int32_t r12_1 = 1

if (rbx != 0)
    int32_t rax_9 = *(arg4 + 0xc) & 0xf
    
    if (rbx[1].d != 0)
        goto label_140ff8caf
    
    if (rax_9 == 2)
        rbx[1].d = 1
    label_140ff8caf:
        
        if (rax_9 == 2)
            rbx[2].b = 1
            *(rbx + 0xc) = *(arg1 + 0x40e8)

int32_t i = 0
int32_t* result = rdi + 0xc
void* r15_1 = arg1 + 0x26d0
int32_t* result_1 = result
int32_t var_f8
int64_t* var_88
char rdx_4

do
    int64_t* rbx_1 = nullptr
    
    if (i u< arg2)
        int64_t* rcx_8 = *(result - 0xc)
        
        if (rcx_8 != 0)
            int32_t rdi_3 = result[-1]
            var_f8 = *result
            void* rax_12 = (*(*rcx_8 + 0x48))(rcx_8)
            
            if (rax_12 != 0)
                if (*(rax_12 + 0x58) != 0)
                    rdi_3 = rdi_3 * *(rax_12 + 0x5c) + var_f8
                
                if (rdi_3 u< *(rax_12 + 0x50))
                    rbx_1 = *(*(rax_12 + 0x48) + (sx.q(rdi_3) << 3))
                
                int32_t rax_14 = *(arg1 + 0x40e8)
                
                if (*(rax_12 + 8) == 0)
                    *(rax_12 + 8) = 1
                
                *(rax_12 + 0x10) = 1
                *(rax_12 + 0xc) = rax_14
            
            sub_140fdf350(arg1 - 0x18, rax_12, 0)
            result = result_1
    
    int64_t* rdi_5 = *r15_1
    *(&var_88 - arg1 + r15_1 - 0x26d0) = rbx_1
    
    if (rdi_5 == rbx_1)
        rdx_4 = var_108
    else
        *r15_1 = rbx_1
        
        if (rbx_1 != 0)
            (*(*rbx_1 + 8))(rbx_1)
        
        if (rdi_5 != 0)
            (*(*rdi_5 + 0x10))(rdi_5)
        
        result = result_1
        rdx_4 = 1
        var_108 = 1
    
    result = &result[6]
    i += 1
    r15_1 += 8
    result_1 = result
while (i u< 8)

uint64_t i_2 = zx.q(arg2)

if (*(arg1 + 0x40dc) != i_2.d)
    *(arg1 + 0x40dc) = i_2.d
    int32_t rax_17 = 0
    
    if (i_2.d != 0)
        uint64_t i_1
        
        do
            rax_17 |= r12_1
            r12_1 *= 2
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    *(arg1 + 0x279c) = rax_17
    result = sub_140fdedb0(arg1 - 0x18, 1)
    *(arg1 + 0x27a0) = 0
else if (rdx_4 != 0)
    result = sub_140fdedb0(arg1 - 0x18, 1)
    *(arg1 + 0x27a0) = 0

int64_t* rbx_2 = var_88
uint128_t zmm1
uint128_t zmm2

if (rbx_2 == 0)
    int64_t* rcx_22 = var_100
    
    if (rcx_22 != 0)
        int64_t rax_29 = *rcx_22
        var_100 = nullptr
        (*(rax_29 + 0x38))(rcx_22, &var_100)
        int64_t* rcx_23 = var_100
        (*(*rcx_23 + 0x50))(rcx_23, &var_88)
        zmm2.d = float.s(zx.q(var_88:4.d))
        zmm1.d = float.s(zx.q(var_88.d))
        result = sub_140ffa240(arg1, zx.o(0), zx.o(0), (zx.o(0)).d, zmm1.d, zmm2.d, 0x3f800000)
        int64_t* rcx_25 = var_100
        
        if (rcx_25 != 0)
            result = (*(*rcx_25 + 0x10))(rcx_25)
else
    void var_d0
    (*(*rbx_2 + 0x40))(rbx_2, &var_d0)
    var_f8.q = 0
    (*(*rbx_2 + 0x38))(rbx_2, &var_f8)
    int64_t var_e0_1 = 0
    int32_t var_cc
    int32_t rdx_8
    int32_t rbx_3
    
    if (var_cc s< 4)
        rdx_8 = 0
        rbx_3 = 0
    else
        char var_c8
        
        if (var_cc s<= 7)
            int64_t* rcx_18 = var_f8.q
            (*(*rcx_18 + 0x50))(rcx_18, &var_88)
            rbx_3 = var_88.d
            rdx_8 = var_88:4.d
            
            if (var_cc - 4 u<= 1)
                rsi = var_c8
        else if (var_cc != 8)
            rdx_8 = 0
            rbx_3 = 0
        else
            int64_t* rcx_17 = var_f8.q
            int32_t var_b8
            (*(*rcx_17 + 0x50))(rcx_17, &var_b8)
            int32_t var_b4
            rdx_8 = var_b4
            rbx_3 = var_b8
            rsi = var_c8
    
    uint32_t rbx_4 = rbx_3 u>> rsi
    int64_t* rcx_20 = var_f8.q
    var_e0_1.d = rbx_4
    var_e0_1:4.d = rdx_8 u>> rsi
    
    if (rcx_20 != 0)
        (*(*rcx_20 + 0x10))(rcx_20)
    
    zmm2.d = float.s(var_e0_1 u>> 0x20)
    zmm1.d = float.s(zx.q(rbx_4))
    result = sub_140ffa240(arg1, zx.o(0), zx.o(0), (zx.o(0)).d, zmm1.d, zmm2.d, 0x3f800000)
__security_check_cookie(var_48 ^ &var_148)
return result
