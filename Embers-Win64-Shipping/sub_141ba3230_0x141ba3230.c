// 函数: sub_141ba3230
// 地址: 0x141ba3230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_288
int64_t rax_1 = __security_cookie ^ &var_288
sub_140d947e0(arg2)
int64_t* r14 = arg1[0x69]
int64_t rax_2 = *arg1
arg1[0x7b].w = 0
*(arg1 + 0x3da) = 0
arg1[0x69] = 0
uint128_t var_250
(*(rax_2 + 0x560))(arg1, &var_250)
*(arg1 + 0x350) = var_250
int64_t var_1c0
arg1[0x69] = var_1c0
void var_1c8
void* rax_4 = &var_1c8
char var_58

if (var_58 == 0)
    rax_4 = &arg1[0x68]

int128_t var_240
*(arg1 + 0x360) = var_240
uint128_t var_230
*(arg1 + 0x370) = var_230
int128_t var_220
*(arg1 + 0x380) = var_220
uint128_t var_210
*(arg1 + 0x390) = var_210
int128_t var_200
*(arg1 + 0x3a0) = var_200
uint128_t var_1f0
*(arg1 + 0x3b0) = var_1f0
int128_t var_1e0
*(arg1 + 0x3c0) = var_1e0
int64_t var_1d0
arg1[0x7a] = var_1d0
arg1[0x68] = arg1[0x67]
arg1[0x67] = *rax_4
void var_1b8
sub_140d965b0(arg2, &var_1b8)
int64_t* rcx_4 = arg1[0x69]

if (rcx_4 != 0)
    (*(*rcx_4 + 0x8d8))(rcx_4)

if (sub_140db3500(arg2) != 0)
    void* i_1 = *(arg2 + 0x128)
    void* i = &arg2[8]
    
    if (i_1 != 0)
        i = i_1
    
    for (void* rbp_1 = i + sx.q(*(arg2 + 0x130)) * 0x48; i != rbp_1; i += 0x48)
        char* rbx_2 = *(i + 0x38) + 0x190
        
        if (*(rbx_2 + 0x10) != 0)
            int64_t* rcx_7 = *(rbx_2 + 8)
            
            if (rcx_7 != 0 && (*(*rcx_7 + 0x28))(rcx_7) != 0)
                int64_t* rcx_8
                
                if (*(rbx_2 + 0x10) == 0)
                    rcx_8 = nullptr
                else
                    rcx_8 = *(rbx_2 + 8)
                
                *rbx_2 = (*(*rcx_8 + 0x48))(rcx_8)
        
        if (*rbx_2 != 0)
            int64_t* rcx_9 = *(i + 0x38)
            
            if ((*(*rcx_9 + 0x1b0))(rcx_9) != 0)
                arg1[0x7b].b = 1
            
            int64_t* rcx_10 = *(i + 0x38)
            
            if ((*(*rcx_10 + 0x198))(rcx_10) != 0)
                *(arg1 + 0x3d9) = 1
        
        char* rbx_4 = *(i + 0x38) + 0x1a8
        
        if (*(rbx_4 + 0x10) != 0)
            int64_t* rcx_11 = *(rbx_4 + 8)
            
            if (rcx_11 != 0 && (*(*rcx_11 + 0x28))(rcx_11) != 0)
                int64_t* rcx_12
                
                if (*(rbx_4 + 0x10) == 0)
                    rcx_12 = nullptr
                else
                    rcx_12 = *(rbx_4 + 8)
                
                char var_268
                (*(*rcx_12 + 0x48))(rcx_12, &var_268)
                *rbx_4 = var_268
        
        if ((*rbx_4 & 8) != 0)
            *(arg1 + 0x3da) = 1

int64_t rax_21 = arg1[0x69]

if (rax_21 != r14)
    if (r14 != 0)
        (*(*r14 + 0x8d8))(r14)
        rax_21 = arg1[0x69]
    
    int64_t var_260 = rax_21
    int64_t* var_258_1 = r14
    sub_1405a9f90(&arg1[0x3e], &var_260)

void var_68
sub_140596d80(&var_68)
int64_t* var_70

if (var_70 != 0)
    var_70[1].d -= 1
    
    if (var_70[1].d == 1)
        int64_t rdx_4 = *var_70
        (*rdx_4)(var_70, rdx_4)
        int32_t temp1_1 = *(var_70 + 0xc)
        *(var_70 + 0xc) -= 1
        
        if (temp1_1 == 1)
            int64_t r8_1 = *var_70
            (*(r8_1 + 8))(var_70, 1, r8_1)

void var_1b0
sub_140d94d20(&var_1b0)
__security_check_cookie(rax_1 ^ &var_288)
return arg2
