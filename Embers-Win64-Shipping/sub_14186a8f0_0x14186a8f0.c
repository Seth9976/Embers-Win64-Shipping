// 函数: sub_14186a8f0
// 地址: 0x14186a8f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int32_t var_98 = 0
int64_t rbx

if (arg2[5].b == 0 || arg2[2].b != 0)
    rbx.b = 0
else
    rbx.b = 1

void*** rax_2 = j_sub_140a82f30(0x40)
int64_t* var_88
void*** var_78
void** rbx_1
int32_t rdi_1

if (rbx.b == 0)
    if (rax_2 != 0)
        rax_2[1].d = 1
        *(rax_2 + 0xc) = 1
        *rax_2 = &data_142fe81e8
        sub_140596d10(&rax_2[2], arg2)
        rax_2[4].b = 1
        rax_2[7].b = 0
    
    var_88 = rax_2
    void* var_90 = &rax_2[2]
    rbx_1 = &var_90
    rdi_1 = 2
else
    if (rax_2 != 0)
        rax_2[1].d = 1
        *(rax_2 + 0xc) = 1
        *rax_2 = &data_142fe81e8
        rax_2[4].b = 0
        rax_2[5] = arg2[3]
        void* rax_4 = arg2[4]
        rax_2[6] = rax_4
        
        if (rax_4 != 0)
            *(rax_4 + 8) += 1
        
        rax_2[7].b = 1
    
    var_78 = rax_2
    void* var_80 = &rax_2[2]
    rbx_1 = &var_80
    rdi_1 = 1

void* rsi_1 = rbx_1[1]
void* rbp = *rbx_1

if (rsi_1 != 0)
    *(rsi_1 + 8) += 1

if ((rdi_1.b & 2) != 0)
    rdi_1 &= 0xfffffffd
    
    if (var_88 != 0)
        var_88[1].d -= 1
        
        if (var_88[1].d == 1)
            (**var_88)(var_88)
            int32_t temp3_1 = *(var_88 + 0xc)
            *(var_88 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*var_88 + 8))(var_88, 1)

if ((rdi_1.b & 1) != 0 && var_78 != 0)
    var_78[1].d -= 1
    
    if (var_78[1].d == 1)
        (**var_78)(var_78)
        int32_t temp4_1 = *(var_78 + 0xc)
        *(var_78 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*var_78)[1](var_78, 1)

int64_t rbx_4 = *arg1
int64_t rdi_2 = arg1[1]
int64_t* rax_9 = sub_140a82f30(0x28, 8)
rax_9[1] = rbx_4
rax_9[2] = rdi_2
rax_9[3] = rbp
rax_9[4] = rsi_1
*rax_9 = &data_142fe82e8
int64_t (* var_58)(int64_t* arg1)
int64_t (* rax_10)(int64_t* arg1) = var_58

if (rax_9 != -8)
    rax_10 = sub_14187b310

var_58 = rax_10
void* var_70
int32_t result = sub_14185baa0(&var_70, &var_58)
int64_t* var_68

if (var_68 != 0)
    result = var_68[1].d
    var_68[1].d -= 1
    
    if (result == 1)
        result = (**var_68)(var_68)
        int32_t rdi_3 = *(var_68 + 0xc)
        *(var_68 + 0xc) -= 1
        
        if (rdi_3 == 1)
            result = (*(*var_68 + 8))(var_68, zx.q(rdi_3))

if (var_58 != 0)
    void var_38
    int64_t* rcx_11 = &var_38
    
    if (rax_9 != 0)
        rcx_11 = rax_9
    
    result = (*(*rcx_11 + 0x10))(rcx_11)

__security_check_cookie(rax_1 ^ &var_b8)
return result
