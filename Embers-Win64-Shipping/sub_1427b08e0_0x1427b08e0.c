// 函数: sub_1427b08e0
// 地址: 0x1427b08e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
int512_t zmm0
zmm0.o = zx.o(0)
int512_t zmm2
zmm2.o = zx.o(0)
int128_t var_138
__builtin_memset(&var_138, 0, 0x20)
int64_t* rax_3
int64_t rdx
rax_3, rdx = (*(*(arg1 - 0x80) + 0x280))(zmm0, arg3, zmm2)
arg3.o = *(arg2 + 0x20)
int128_t var_128
void var_d8
int64_t* rax_4
int64_t rdx_1
int512_t zmm1
rax_4, rdx_1, zmm1 = sub_140aa1120(&var_d8, rdx, nullptr, &var_128)
zmm1.o = *(arg2 + 0x1c)
void var_c0
int64_t* rax_5 = sub_140aa1120(&var_c0, rdx_1, nullptr, &var_138)
void var_100
char* var_e8
char** rax_7 = sub_140a96390(&var_e8, 
    _vfprintf_p_l(&var_100, UClickDragTool::OnClickRelease: released at ({0},{1})", UClickDragTool"))
int64_t var_98 = *rax_5
void* rcx_6 = rax_5[1]
int32_t var_a8 = 4
void* var_90 = rcx_6

if (rcx_6 != 0)
    *(rcx_6 + 8) += 1

int32_t var_88 = rax_5[2].d
int64_t var_68 = *rax_4
void* rax_10 = rax_4[1]
char var_80 = 1
int32_t var_78 = 4
void* var_60 = rax_10

if (rax_10 != 0)
    *(rax_10 + 8) += 1

int64_t i_1 = 2
int32_t var_58 = rax_4[2].d
char var_50 = 1
void* var_178 = nullptr
int32_t var_170 = 2
sub_1405a4b40(&var_178, 2, 0)
void var_a0
void* rdx_3 = &var_a0
int64_t* rcx_9 = var_178 + 8
int32_t i_2 = 2
int32_t i

do
    rcx_9[-1].d = *(rdx_3 - 8)
    *rcx_9 = *rdx_3
    *rcx_9 = *rdx_3
    *rcx_9 = *rdx_3
    *rcx_9 = *rdx_3
    rcx_9[4].b = 0
    
    if (*(rdx_3 + 0x20) != 0)
        rcx_9[1] = *(rdx_3 + 8)
        void* rax_18 = *(rdx_3 + 0x10)
        rcx_9[2] = rax_18
        
        if (rax_18 != 0)
            *(rax_18 + 8) += 1
        
        rcx_9[3].d = *(rdx_3 + 0x18)
        rcx_9[4].b = 1
    
    rcx_9 = &rcx_9[6]
    rdx_3 += 0x30
    i = i_2
    i_2 -= 1
while (i != 1)
char* var_148 = *rax_7
void* rax_21 = rax_7[1]
void* var_140 = rax_21

if (rax_21 != 0)
    *(rax_21 + 8) += 1

void var_118
int64_t* rax_22 = sub_140aac870(&var_118, &var_148, &var_178)
int64_t var_160 = *rax_22
int64_t* rcx_12 = rax_22[1]

if (rcx_12 != 0)
    rcx_12[1].d += 1

int32_t var_150 = rax_22[2].d
int64_t* var_110

if (var_110 != 0)
    var_110[1].d -= 1
    
    if (var_110[1].d == 1)
        (**var_110)(var_110)
        int32_t rax_26 = *(var_110 + 0xc)
        *(var_110 + 0xc) -= 1
        
        if (rax_26 == 1)
            (*(*var_110 + 8))(var_110, 1)

sub_140596f50(&var_178)
int64_t __saved_r12
int64_t* rsi = &__saved_r12

do
    i_1 -= 1
    rsi = &rsi[-6]
    
    if (*rsi != 0)
        *rsi = 0
        int64_t* rbx_2 = rsi[-2]
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t rax_30 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (rax_30 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
while (i_1 != 0)

int64_t* rbx_3 = rax_7[1]

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t rax_34 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (rax_34 == 1)
            (*(*rbx_3 + 8))(rbx_3, zx.q((i_1 + 1).d))

int64_t* rbx_4 = rax_5[1]

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        (**rbx_4)(rbx_4)
        int32_t rax_38 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (rax_38 == 1)
            (*(*rbx_4 + 8))(rbx_4, 1)

int64_t* rbx_5 = rax_4[1]

if (rbx_5 != 0)
    rbx_5[1].d -= 1
    
    if (rbx_5[1].d == 1)
        (**rbx_5)(rbx_5)
        int32_t rax_42 = *(rbx_5 + 0xc)
        *(rbx_5 + 0xc) -= 1
        
        if (rax_42 == 1)
            (*(*rbx_5 + 8))(rbx_5, 1)

int32_t result = (*(*rax_3 + 0x2d8))(rax_3, &var_160, 0)

if (rcx_12 != 0)
    result = rcx_12[1].d
    rcx_12[1].d -= 1
    
    if (result == 1)
        (**rcx_12)(rcx_12)
        result = *(rcx_12 + 0xc)
        *(rcx_12 + 0xc) -= 1
        
        if (result == 1)
            result = (*(*rcx_12 + 8))(rcx_12, 1)

int64_t* var_f8

if (var_f8 != 0)
    result = var_f8[1].d
    var_f8[1].d -= 1
    
    if (result == 1)
        (**var_f8)(var_f8)
        result = *(var_f8 + 0xc)
        *(var_f8 + 0xc) -= 1
        
        if (result == 1)
            result = (*(*var_f8 + 8))(var_f8, 1)

int64_t* rbx_8 = var_138:8.q

if (rbx_8 != 0)
    result = rbx_8[1].d
    rbx_8[1].d -= 1
    
    if (result == 1)
        (**rbx_8)(rbx_8)
        result = *(rbx_8 + 0xc)
        *(rbx_8 + 0xc) -= 1
        
        if (result == 1)
            result = (*(*rbx_8 + 8))(rbx_8, 1)

int64_t* rbx_9 = var_128:8.q

if (rbx_9 != 0)
    result = rbx_9[1].d
    rbx_9[1].d -= 1
    
    if (result == 1)
        result = (**rbx_9)(rbx_9)
        int32_t rdi_1 = *(rbx_9 + 0xc)
        *(rbx_9 + 0xc) -= 1
        
        if (rdi_1 == 1)
            result = (*(*rbx_9 + 8))(rbx_9, zx.q(rdi_1))

__security_check_cookie(rax_1 ^ &var_198)
return result
