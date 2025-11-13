// 函数: sub_140e55a10
// 地址: 0x140e55a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_208
int64_t rax_1 = __security_cookie ^ &var_208
void* rbx = arg2
int64_t* i_1
__builtin_memset(&i_1, 0, 0x1c)
int64_t* i = nullptr
int32_t rdi = 0
int32_t r12 = 0
uint64_t var_1c8
float zmm0[0x4] = sub_140e486f0(arg2 + 0x130, &var_1c8)
uint64_t rdx_1 = var_1c8
int64_t r14 = 0
int32_t var_1c0
int64_t rcx_1 = rdx_1 + (sx.q(var_1c0) << 2)
uint64_t r13_3 = (rcx_1 - rdx_1 + 3) u>> 2

if (rdx_1 u> rcx_1)
    r13_3 = 0

uint64_t r15 = rdx_1
char var_1a8
int64_t var_1a0

if (r13_3 != 0)
    do
        sub_140e65360(rbx, &var_1a8, *r15, 0, zmm0, 0)
        
        if (sub_140db3500(&var_1a8) != 0)
            int64_t rbx_1 = sx.q(rdi)
            rdi = (rbx_1 + 1).d
            int64_t var_1d0_1
            var_1d0_1.d = rdi
            
            if (rdi s> r12)
                sub_140bb7dd0(&i_1)
                r12 = var_1d0_1:4.d
                rdi = var_1d0_1.d
                i = i_1
            
            sub_140e52c00(rbx_1 * 0x160 + i, &var_1a8)
        
        void var_58
        sub_140596d80(&var_58)
        int64_t* var_60
        
        if (var_60 != 0)
            var_60[1].d -= 1
            
            if (var_60[1].d == 1)
                (**var_60)(var_60)
                int32_t temp1_1 = *(var_60 + 0xc)
                *(var_60 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*var_60 + 8))(var_60, 1)
        
        zmm0 = sub_140d94d20(&var_1a0)
        rbx = arg2
        r15 += 4
        r14 += 1
    while (r14 != r13_3)
    
    rdx_1 = var_1c8

if (rdx_1 != 0)
    sub_140a74f90(rdx_1)

for (void* rdi_2 = sx.q(rdi) * 0x160 + i; i != rdi_2; i = &i[0x2c])
    var_1a8 = 1
    int32_t var_1e0_1 = 0
    var_1a0 = 0
    int64_t* var_198_1 = nullptr
    char var_188_1 = 0
    int64_t var_180
    __builtin_memset(&var_180, 0, 0x30)
    int64_t* var_128
    __builtin_memset(&var_128, 0, 0x30)
    int32_t var_f4 = (var_f4 & 0xffffff01) | 1
    int64_t* var_148_1 = zx.o(0).q
    int64_t* var_138_1 = zx.o(0)[0].q
    int32_t var_f8_1 = 0x20702
    MRECmpImpl::FPushFile(*arg1, i, &var_1a8, nullptr, nullptr, var_1e0_1)
    int128_t var_108
    int64_t* rbx_3 = var_108:8.q
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)(rbx_3)
            int32_t temp6_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rbx_3 + 8))(rbx_3, 1)
    
    int128_t var_118
    int64_t* rbx_4 = var_118:8.q
    
    if (rbx_4 != 0)
        rbx_4[1].d -= 1
        
        if (rbx_4[1].d == 1)
            (**rbx_4)(rbx_4)
            int32_t temp8_1 = *(rbx_4 + 0xc)
            *(rbx_4 + 0xc) -= 1
            
            if (temp8_1 == 1)
                (*(*rbx_4 + 8))(rbx_4, 1)
    
    int64_t* rcx_17 = var_128
    
    if (rcx_17 != 0)
        int32_t temp7_1 = *(rcx_17 + 0xc)
        *(rcx_17 + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*(*rcx_17 + 8))(rcx_17, 1)
    
    if (var_138_1 != 0)
        int32_t temp9_1 = *(var_138_1 + 0xc)
        *(var_138_1 + 0xc) -= 1
        
        if (temp9_1 == 1)
            (*(*var_138_1 + 8))(var_138_1, 1)
    
    if (var_148_1 != 0)
        int32_t temp10_1 = *(var_148_1 + 0xc)
        *(var_148_1 + 0xc) -= 1
        
        if (temp10_1 == 1)
            (*(*var_148_1 + 8))(var_148_1, 1)
    
    int64_t* var_158
    
    if (var_158 != 0)
        int32_t temp11_1 = *(var_158 + 0xc)
        *(var_158 + 0xc) -= 1
        
        if (temp11_1 == 1)
            (*(*var_158 + 8))(var_158, 1)
    
    int64_t* var_168
    
    if (var_168 != 0)
        int32_t temp12_1 = *(var_168 + 0xc)
        *(var_168 + 0xc) -= 1
        
        if (temp12_1 == 1)
            (*(*var_168 + 8))(var_168, 1)
    
    int64_t* var_178
    
    if (var_178 != 0)
        int32_t temp13_1 = *(var_178 + 0xc)
        *(var_178 + 0xc) -= 1
        
        if (temp13_1 == 1)
            (*(*var_178 + 8))(var_178, 1)
    
    if (var_198_1 != 0)
        var_198_1[1].d -= 1
        
        if (var_198_1[1].d == 1)
            (**var_198_1)(var_198_1)
            int32_t temp15_1 = *(var_198_1 + 0xc)
            *(var_198_1 + 0xc) -= 1
            
            if (temp15_1 == 1)
                (*(*var_198_1 + 8))(var_198_1, 1)

sub_140e53010(&i_1)
int64_t* rcx_26 = *(arg2 + 0x20)
int64_t* rbx_7 = *(arg2 + 0x28)

if (rbx_7 != 0)
    rbx_7[1].d += 1

int64_t result = (*(*rcx_26 + 0x28))(rcx_26, 1)

if (rbx_7 != 0)
    rbx_7[1].d -= 1
    
    if (rbx_7[1].d == 1)
        result = (**rbx_7)(rbx_7)
        int32_t temp4_1 = *(rbx_7 + 0xc)
        *(rbx_7 + 0xc) -= 1
        
        if (temp4_1 == 1)
            result = (*(*rbx_7 + 8))(rbx_7, 1)

__security_check_cookie(rax_1 ^ &var_208)
return result
