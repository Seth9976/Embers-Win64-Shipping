// 函数: sub_142793e80
// 地址: 0x142793e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
char rbp = 0
int32_t var_88 = 0
sub_141ee9830(arg1)
int64_t rax_2 = arg1[0x15]
void* rax_3

if (rax_2 == 0)
    rax_3 = sub_141ee69e0(arg1)

char rax_5

if (rax_2 != 0 || rax_3 != 0)
    void* rax_4 = arg1[0x15]
    
    if (rax_4 == 0)
        rax_4 = sub_141ee69e0(arg1)
    
    rax_5 = sub_14243ade0(rax_4)

int64_t rdi

if ((rax_2 == 0 && rax_3 == 0) || rax_5 == 0)
    rdi.b = 0
else
    rdi.b = 1

int64_t* r14 = arg1[0x14]
int64_t rax_6 = sub_142591550()
int64_t r8 = *r14
void* result = (*(r8 + 0x610))(r14, rax_6, r8)
void* result_2 = result

if (rdi.b != 0 && result != 0)
    int64_t r8_1 = *arg1
    (*(r8_1 + 0x3c0))(arg1, result, r8_1)
    void* rax_7 = arg1[0x17]
    
    if (rax_7 != 0)
        *arg1[0x26] = *(rax_7 + 0x28)
        *(arg1[0x26] + 8) = *(arg1[0x17] + 0x30)
        *(arg1[0x26] + 0x14) = *(arg1[0x17] + 0x3c)
        *(arg1[0x26] + 0x18) = *(arg1[0x17] + 0x40)
    
    var_88.q = arg1
    void*** rax_12 = j_sub_140a82f30(0x600)
    uint64_t (* var_68)(int64_t* arg1, int64_t* arg2)
    void*** var_58
    void** const var_48
    
    if (rax_12 != 0)
        var_58 = nullptr
        var_48 = &data_142e345d8
        void* result_3 = result_2
        var_68 = j_sub_142789710
        rbp = 1
        int128_t var_40_1 = var_88.o
        rax_12 = sub_141d2e210(rax_12, arg1, &var_68)
    
    arg1[0x25] = rax_12
    
    if ((rbp & 1) != 0 && var_68 != 0)
        void** const* rcx_10 = &var_48
        
        if (var_58 != 0)
            rcx_10 = var_58
        
        (*rcx_10)[2](rcx_10)
    
    void* rdi_1 = arg1[0x18]
    void* rbp_1
    int64_t* rdi_2
    
    if (rdi_1 == 0)
        var_88.o = zx.o(0)
        rdi_2 = r14
        rbp_1 = var_88.q
    else
        rbp_1 = *(rdi_1 + 0x288)
        rdi_2 = *(rdi_1 + 0x290)
        
        if (rdi_2 != 0)
            rdi_2[1].d += 1
    
    j_sub_14222ba80(rbp_1, result_2, arg1[0x25])
    int64_t r8_4
    result, r8_4 = sub_142232f80(rbp_1)
    void* result_1 = result
    void* const rbp_2
    
    if (result == 0)
        rbp_2 = nullptr
    else
        void* rax_15
        rax_15, r8_4 = sub_142776620()
        void* rcx_13 = *(result_1 + 0x10)
        result = rax_15 + 0x30
        int64_t rdx_7 = sx.q(*(result + 8))
        
        if (rdx_7.d s> *(rcx_13 + 0x38) || *(*(rcx_13 + 0x30) + (rdx_7 << 3)) != result)
            rbp_2 = nullptr
        else
            rbp_2 = *(result_1 + 0x2a0)
    
    if (rbp_2 != 0)
        if (*(arg1 + 0xd1) != 0)
            sub_142775fe0(rbp_2, result_2, arg1)
        
        r8_4.b = 1
        var_88.q = 0
        result = (*(*result_2 + 0x6a8))(result_2, 0, r8_4)
        
        if (result != 0 && (*(result + 0xc) & 4) != 0)
            result = sub_142775fe0(rbp_2, result_2, result_2)
    
    if (rdi_2 != 0)
        rdi_2[1].d -= 1
        
        if (rdi_2[1].d == 1)
            result = (**rdi_2)(rdi_2)
            int32_t temp1_1 = *(rdi_2 + 0xc)
            *(rdi_2 + 0xc) -= 1
            
            if (temp1_1 == 1)
                result = (*(*rdi_2 + 8))(rdi_2, 1)

__security_check_cookie(rax_1 ^ &var_a8)
return result
