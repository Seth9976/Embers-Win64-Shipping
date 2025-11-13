// 函数: sub_142338a70
// 地址: 0x142338a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
(*(*arg2 + 0x1c0))(arg2)
uint32_t r14

if (arg3 == 0)
    r14 = data_1439c7a08
else
    r14 = zx.d(*(arg3 + 0x118))

void*** rax_3 = j_sub_140a82f30(0x120)
int64_t* rdi = nullptr
void*** rbx = rax_3

if (rax_3 == 0)
    rbx = nullptr
else
    rax_3[1].d = 1
    *(rax_3 + 0xc) = 1
    int32_t var_118_1 = arg4.d
    *rbx = &data_143329c10
    sub_1423fa990(&rbx[2], *(arg1 + 0x28), 0, arg3, r14, 0, var_118_1)

uint128_t zmm0 = (&rbx[2]).o
uint128_t var_108 = zmm0
void*** rbx_1 = _mm_bsrli_si128(zmm0, 8).q

if (rbx_1 != 0)
    rbx_1[1].d += 1
    rbx_1 = rbx

if (arg1 + 8 != &var_108)
    *(arg1 + 8) = var_108.q
    var_108.q = 0
    sub_1405aeff0(arg1 + 0x10, &var_108:8)
    rbx_1 = rbx

void* rcx_3 = var_108:8.q

if (rcx_3 != 0)
    int32_t rax_5 = *(rcx_3 + 8)
    *(rcx_3 + 8) -= 1
    
    if (rax_5 == 1)
        int64_t* rbx_2 = var_108:8.q
        (**rbx_2)(rbx_2)
        int32_t rax_7 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (rax_7 == 1)
            int64_t* rcx_5 = var_108:8.q
            (*(*rcx_5 + 8))(rcx_5, 1)
    
    rbx_1 = rbx

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t r14_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (r14_1 == 1)
            (*rbx_1)[1](rbx_1, zx.q(r14_1))

void* result = *(arg1 + 8)
*(result + 0x78) = 2

if (*(arg1 + 8) != 0)
    void* rcx_8 = data_143f5b298
    
    if (rcx_8 == 0)
        rbx_1.b = 0
    else if (sub_1423e6860(rcx_8, nullptr) == 0)
        rbx_1.b = 0
    else
        void* rcx_9 = data_143f5b298
        
        if (rcx_9 == 0)
            rbx_1.b = 0
        else
            int64_t* rcx_10 = *(rcx_9 + 0xaf8)
            
            if (rcx_10 == 0)
                rbx_1.b = 0
            else
                int64_t* rax_14 = (*(*rcx_10 + 0xc0))(rcx_10)
                rdi = rax_14
                
                if (rax_14 == 0)
                    rbx_1.b = 0
                else
                    rbx_1.b = 1
    
    result = *(arg1 + 8)
    *(result + 0x95) = rbx_1.b
    
    if (rbx_1.b != 0)
        result = *(arg1 + 0x30)
        
        if (result != 0 && *(arg1 + 0x3c) != 0 && rdi != 0)
            void* rax_15 = *(result + 0x10)
            void* var_e8 = rax_15
            
            if (rax_15 != 0)
                *(rax_15 + 8) += 1
            
            void var_d8
            (*(*rdi + 0x70))(rdi, &var_d8, &var_e8)
            int32_t rdx_5 = *(arg1 + 0x38)
            int64_t rax_17 = *rdi
            
            if (rdx_5 != 0xffffffff)
                (*(rax_17 + 0x48))(rdi, rdx_5, &var_d8)
            else
                *(arg1 + 0x38) = (*(rax_17 + 8))(rdi, &var_d8)
            
            int64_t* var_50
            
            if (var_50 != 0)
                (*(*var_50 + 0x10))(var_50, 1)
            
            void var_60
            sub_1405d1550(&var_60)
            void var_68
            result = sub_1405d1550(&var_68)
    
    if (*(arg1 + 0x38) != 0xffffffff && (rbx_1.b == 0 || *(arg1 + 0x3c) == 0) && rdi != 0)
        result = (*(*rdi + 0x10))(rdi)
        *(arg1 + 0x38) = 0xffffffff
    
    *(arg1 + 0x3c) = 0

__security_check_cookie(rax_1 ^ &var_148)
return result
