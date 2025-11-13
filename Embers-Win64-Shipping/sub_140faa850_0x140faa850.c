// 函数: sub_140faa850
// 地址: 0x140faa850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int64_t* rbx = data_143e2b7d8
void* var_100 = nullptr
int64_t var_f8 = 0

if (rbx != 0)
    int32_t rax_2 = rbx[1].d
    
    if (rax_2 != 0)
        rbx[1].d = rax_2 + 1
        rax_2.b = 1
    
    if (rax_2.b == 0)
        rbx = nullptr

void* r15 = nullptr

if (rbx != 0)
    r15 = data_143e2b7d0

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp3_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int32_t i = 0
int32_t i_2 = 0

if (*(r15 + 0x18) s> 0)
    int64_t* r12_1 = nullptr
    
    do
        int64_t* rax_5 = j_sub_140a82f30(0x28)
        int64_t* rsi_1 = rax_5
        
        if (rax_5 == 0)
            rsi_1 = nullptr
        else
            int64_t rdx = *(r15 + 0x10)
            void* rcx_2 = *(r12_1 + rdx)
            int64_t var_a8 = *(rcx_2 + 0x10)
            int64_t* rax_7 = *(rcx_2 + 0x18)
            
            if (rax_7 != 0)
                rax_7[1].d += 1
                rdx = *(r15 + 0x10)
            
            int32_t var_98_1 = *(rcx_2 + 0x20)
            int64_t* rax_9 = *(r12_1 + rdx)
            int64_t* rbx_1 = rax_9[1]
            int64_t rdi = *rax_9
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
            
            *rsi_1 = 0
            rsi_1[1] = 0
            sub_140a96170(&rsi_1[2])
            int64_t var_c8 = rdi
            int64_t* rdi_1 = rbx_1
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
            
            if (&var_c8 != rsi_1)
                int128_t zmm1_1 = var_c8.o
                int128_t var_50_1 = zmm1_1
                var_c8.o = *rsi_1
                rdi_1 = rbx_1
                *rsi_1 = zmm1_1
            
            if (rdi_1 != 0)
                rdi_1[1].d -= 1
                
                if (rdi_1[1].d == 1)
                    (**rdi_1)(rdi_1)
                    int32_t temp10_1 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (temp10_1 == 1)
                        (*(*rdi_1 + 8))(rdi_1, 1)
            
            sub_14065da90(&rsi_1[2], &var_a8)
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp11_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp11_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
            
            if (rax_7 != 0)
                rax_7[1].d -= 1
                
                if (rax_7[1].d == 1)
                    (**rax_7)(rax_7)
                    int32_t rax_16 = *(rax_7 + 0xc)
                    *(rax_7 + 0xc) -= 1
                    
                    if (rax_16 == 1)
                        (*(*rax_7 + 8))(rax_7, 1)
            
            i = i_2
        
        void*** rax_18 = j_sub_140a82f30(0x18)
        
        if (rax_18 == 0)
            rax_18 = nullptr
        else
            rax_18[1].d = 1
            *(rax_18 + 0xc) = 1
            *rax_18 = &data_142ef1708
            rax_18[2] = rsi_1
        
        int64_t rbx_3 = sx.q(var_f8.d)
        int32_t rax_19 = (rbx_3 + 1).d
        var_f8.d = rax_19
        
        if (rax_19 s> var_f8:4.d)
            sub_1405a4f90(&var_100)
        
        int64_t** rcx_15 = (rbx_3 << 4) + var_100
        i += 1
        r12_1 = &r12_1[2]
        i_2 = i
        *rcx_15 = rsi_1
        rcx_15[1] = rax_18
        int64_t var_d8_2 = 0
        int64_t var_e0_2 = 0
    while (i s< *(r15 + 0x18))

void var_68
_vfprintf_p_l(&var_68, u" Copy", u"ColorThemesViewer")
int64_t* rbx_4 = data_143e2b7d8
int64_t* r15_1 = nullptr

if (rbx_4 != 0)
    int32_t rax_22 = rbx_4[1].d
    
    if (rax_22 == 0)
        rbx_4 = nullptr
    else
        rbx_4[1].d = rax_22 + 1
        r15_1 = data_143e2b7d0

int64_t* rax_24 = sub_140ac6680(&var_68)
int32_t rsi_2 = r15_1[1].d
int32_t rdi_2 = rax_24[1].d
int64_t var_f0

if (rsi_2 s> 1)
    int32_t r14_1 = rdi_2 - 1
    
    if (rdi_2 == 0)
        r14_1 = 0
    
    int32_t rax_25
    
    if (rsi_2 == 0)
        rax_25 = 1
    
    if (rsi_2 != 0 || r14_1 == 0)
        rax_25 = 0
    
    int64_t rdi_3 = *r15_1
    int32_t rcx_20 = rax_25 + r14_1
    int64_t var_110 = 0
    int32_t var_104
    
    if (rsi_2 != 0 || rcx_20 != 0)
        sub_1405a4c70(&var_110, rsi_2 + rcx_20, 0)
        memcpy(var_110, rdi_3, rsi_2 * 2)
    else
        var_104 = 0
    
    sub_140a20ba0(&var_110, *rax_24, r14_1)
    var_f0 = var_110
    int32_t var_e8_1 = rsi_2
    int32_t var_e4_2 = var_104
    int32_t var_108_1
    var_108_1.q = 0
    var_110 = 0
else
    int64_t rsi_3 = *rax_24
    var_f0 = 0
    int32_t var_e8 = rdi_2
    
    if (rdi_2 != 0)
        sub_1405a4c70(&var_f0, rdi_2, 0)
        memcpy(var_f0, rsi_3, rdi_2 * 2)
    else
        int32_t var_e4_1 = 0

void var_78
sub_140fbc770(&var_78, &var_f0, &var_100)
int64_t* var_70

if (var_70 != 0)
    var_70[1].d -= 1
    
    if (var_70[1].d == 1)
        (**var_70)(var_70)
        int32_t temp5_1 = *(var_70 + 0xc)
        *(var_70 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*var_70 + 8))(var_70, 1)

int64_t rcx_27 = var_f0

if (rcx_27 != 0)
    sub_140a74f90(rcx_27)

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        (**rbx_4)(rbx_4)
        int32_t temp8_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (temp8_1 == 1)
            (*(*rbx_4 + 8))(rbx_4, 1)

int64_t* rcx_30 = *(arg1 + 0x390)
(*(*rcx_30 + 0x240))(rcx_30)
sub_140fc26e0()
int64_t* rcx_32 = *(arg1 + 0x3f0) + 0x4b8
int64_t var_b8 = 0
int64_t var_b0 = 0
(*(*rcx_32 + 8))(rcx_32, &var_b8)
int64_t rcx_33 = var_b8

if (rcx_33 != 0)
    sub_140a74f90(rcx_33)

int64_t* rcx_34 = *(arg1 + 0x3a0)
int64_t var_88 = *(arg1 + 0x3b0)
void* rax_36 = *(arg1 + 0x3b8)
void* var_80 = rax_36

if (rax_36 != 0)
    *(rax_36 + 8) += 1

(*(*rcx_34 + 0x240))(rcx_34, &var_88)
char* result = arg2
*result = 1
*(result + 8) = 0
*(result + 0x10) = 0
result[0x20] = 0
__builtin_memset(&result[0x28], 0, 0x88)
*(result + 0xb4) &= 0xffffff00
*(result + 0xb0) = 0x20702
int64_t* var_60

if (var_60 != 0)
    var_60[1].d -= 1
    
    if (var_60[1].d == 1)
        (**var_60)(var_60)
        int32_t r13_1 = *(var_60 + 0xc)
        *(var_60 + 0xc) -= 1
        
        if (r13_1 == 1)
            (*(*var_60 + 8))(var_60, zx.q(r13_1))

int32_t i_3 = var_f8.d

if (i_3 != 0)
    int64_t* rdi_6 = var_100 + 8
    int32_t i_1
    
    do
        int64_t* rbx_7 = *rdi_6
        
        if (rbx_7 != 0)
            rbx_7[1].d -= 1
            
            if (rbx_7[1].d == 1)
                (**rbx_7)(rbx_7)
                int32_t temp14_1 = *(rbx_7 + 0xc)
                *(rbx_7 + 0xc) -= 1
                
                if (temp14_1 == 1)
                    (*(*rbx_7 + 8))(rbx_7, 1)
        
        rdi_6 = &rdi_6[2]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    result = arg2

void* rcx_39 = var_100

if (rcx_39 != 0)
    sub_140a74f90(rcx_39)

__security_check_cookie(rax_1 ^ &var_138)
return result
