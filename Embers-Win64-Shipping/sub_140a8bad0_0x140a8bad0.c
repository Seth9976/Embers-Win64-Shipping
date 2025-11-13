// 函数: sub_140a8bad0
// 地址: 0x140a8bad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int64_t* rbx = *(arg1 + 0x20)
int64_t var_78
sub_140a765b0(&var_78, arg3)
int64_t var_98
sub_140a73ec0(rbx, &var_98, &var_78, 0)
int64_t rbx_1 = var_78

if (rbx_1 != 0)
    int64_t* rcx_2 = data_143ddb3f0
    
    if (rcx_2 == 0)
        sub_140a750a0()
        rcx_2 = data_143ddb3f0
    
    (*(*rcx_2 + 0x30))(rcx_2, rbx_1)

int64_t r15 = var_98
int64_t* var_90
void* rsi
int64_t* rdi_1

if (r15 == 0)
    rdi_1 = var_90
    rsi.b = 0
else
    int64_t* rdx_3 = *(arg1 + 0x48)
    int64_t i = *arg2
    void* rax_4 = &rdx_3[sx.q(*(arg1 + 0x50)) * 3]
    
    if (rdx_3 == rax_4)
    label_140a8bb92:
        rdi_1 = var_90
        
        if (rdi_1 != 0)
            rdi_1[1].d += 1
            rdi_1 = var_90
            r15 = var_98
        
        int64_t r13_1 = sx.q(*(arg1 + 0x50))
        int32_t rax_5 = (r13_1 + 1).d
        *(arg1 + 0x50) = rax_5
        
        if (rax_5 s> *(arg1 + 0x54))
            sub_140a88b60(arg1 + 0x48)
        
        int64_t rax_6 = *(arg1 + 0x48)
        int64_t rcx_6 = r13_1 * 3
        *(rax_6 + (rcx_6 << 3)) = i
        *(rax_6 + (rcx_6 << 3) + 8) = r15
        *(rax_6 + (rcx_6 << 3) + 0x10) = rdi_1
        sub_140599090(arg1 + 8)
        rsi.b = 1
    else
        while (*rdx_3 != i)
            rdx_3 = &rdx_3[3]
            
            if (rdx_3 == rax_4)
                goto label_140a8bb92
        
        if (rdx_3 == 0)
            goto label_140a8bb92
        
        if (rdx_3[1] == r15)
            rdi_1 = var_90
            rsi.b = 1
        else
            uint128_t zmm1_1 = var_98.o
            uint128_t var_88 = zmm1_1
            rdi_1 = _mm_bsrli_si128(zmm1_1, 8).q
            
            if (rdi_1 != 0)
                rdi_1[1].d += 1
                rdi_1 = var_90
                zmm1_1 = var_88
            
            if (&var_88 != &rdx_3[1])
                uint128_t var_50_1 = zmm1_1
                var_88 = *(rdx_3 + 8)
                *(rdx_3 + 8) = zmm1_1
            
            void* rcx_8 = var_88:8.q
            
            if (rcx_8 == 0)
                sub_140599090(arg1 + 8)
                rsi.b = 1
            else
                int32_t rax_7 = *(rcx_8 + 8)
                *(rcx_8 + 8) -= 1
                
                if (rax_7 == 1)
                    int64_t* rbx_2 = var_88:8.q
                    (**rbx_2)(rbx_2)
                    int32_t rax_10 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (rax_10 == 1)
                        int64_t* rcx_10 = var_88:8.q
                        (*(*rcx_10 + 8))(rcx_10, 1)
                
                rdi_1 = var_90
                sub_140599090(arg1 + 8)
                rsi.b = 1

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**var_90)(var_90)
        int32_t r14_1 = *(var_90 + 0xc)
        *(var_90 + 0xc) -= 1
        
        if (r14_1 == 1)
            int64_t r8_2 = *var_90
            (*(r8_2 + 8))(var_90, zx.q(r14_1), r8_2)

__security_check_cookie(rax_1 ^ &var_b8)
return zx.q(rsi.b)
