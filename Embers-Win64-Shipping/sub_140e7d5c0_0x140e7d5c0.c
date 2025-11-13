// 函数: sub_140e7d5c0
// 地址: 0x140e7d5c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_498
int64_t rax_1 = __security_cookie ^ &var_498
int32_t var_458 = 0
void* var_468
int64_t* var_460

if (arg3 == 0)
    sub_140e683e0(arg1, &var_468, *(arg2 + 0xc))
    *(var_468 + 0x34) = 2
    
    if (var_460 != 0)
        var_460[1].d -= 1
        
        if (var_460[1].d == 1)
            (**var_460)(var_460)
            int32_t temp2_1 = *(var_460 + 0xc)
            *(var_460 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*var_460 + 8))(var_460, 1)
    
    sub_140e683e0(arg1, &var_468, *(arg2 + 0xc))
    int128_t zmm0_1 = sub_140e8d440(var_468, &arg1[0x3a], 1)
    
    if (var_460 != 0)
        var_460[1].d -= 1
        
        if (var_460[1].d == 1)
            (**var_460)(var_460)
            int32_t temp3_1 = *(var_460 + 0xc)
            *(var_460 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*var_460 + 8))(var_460, 1)
    
    (*(*arg1 + 0x50))(arg1)
    sub_140e89370(arg1, zmm0_1)
    goto label_140e7d6c7

int64_t* rcx_8 = data_143e20d18
char* rax_11
int32_t rdi_1

if ((*(*rcx_8 + 0x60))(rcx_8) == 0)
    void var_2f0
    rax_11 = sub_140d947e0(&var_2f0)
    rdi_1 = 4
else
label_140e7d6c7:
    int32_t rbx_3 = *(arg2 + 0xc)
    int64_t rdi = *arg1
    int64_t* rax_10 = sub_140e67030(arg1, &var_468)
    void var_190
    rax_11 = (*(rdi + 0xf8))(arg1, &var_190, arg2[3], rax_10, 0, rbx_3)
    rdi_1 = 3

void var_450
sub_140e50940(&var_450, rax_11)
int64_t var_310 = *(rax_11 + 0x140)
int64_t* rax_13 = *(rax_11 + 0x148)
__builtin_memset(&rax_11[0x140], 0, 0x20)
int64_t var_300 = 0
var_300 = *(rax_11 + 0x150)
int32_t var_2f8 = *(rax_11 + 0x158)
int32_t var_2f4 = *(rax_11 + 0x15c)

if ((rdi_1.b & 4) != 0)
    rdi_1 &= 0xfffffffb
    void var_1a0
    sub_140596d80(&var_1a0)
    int64_t* var_1a8
    
    if (var_1a8 != 0)
        var_1a8[1].d -= 1
        
        if (var_1a8[1].d == 1)
            (**var_1a8)(var_1a8)
            int32_t temp6_1 = *(var_1a8 + 0xc)
            *(var_1a8 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*var_1a8 + 8))(var_1a8, 1)
    
    void var_2e8
    sub_140d94d20(&var_2e8)

if ((rdi_1.b & 2) != 0)
    rdi_1 &= 0xfffffffd
    void var_40
    sub_140596d80(&var_40)
    int64_t* var_48
    
    if (var_48 != 0)
        var_48[1].d -= 1
        
        if (var_48[1].d == 1)
            (**var_48)(var_48)
            int32_t temp8_1 = *(var_48 + 0xc)
            *(var_48 + 0xc) -= 1
            
            if (temp8_1 == 1)
                (*(*var_48 + 8))(var_48, 1)
    
    void var_188
    sub_140d94d20(&var_188)

if ((rdi_1.b & 1) != 0)
    int32_t i_1 = var_460.d
    
    if (i_1 != 0)
        void* rdi_3 = var_468 + 8
        int32_t i
        
        do
            int64_t* rbx_7 = *rdi_3
            
            if (rbx_7 != 0)
                rbx_7[1].d -= 1
                
                if (rbx_7[1].d == 1)
                    (**rbx_7)(rbx_7)
                    int32_t temp12_1 = *(rbx_7 + 0xc)
                    *(rbx_7 + 0xc) -= 1
                    
                    if (temp12_1 == 1)
                        (*(*rbx_7 + 8))(rbx_7, 1)
            
            rdi_3 += 0x10
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    void* rcx_23 = var_468
    
    if (rcx_23 != 0)
        sub_140a74f90(rcx_23)

char rax_23 = sub_140e870e0(arg1, &var_450, arg2, arg3)
sub_140596d80(&var_300)

if (rax_13 != 0)
    rax_13[1].d -= 1
    
    if (rax_13[1].d == 1)
        (**rax_13)(rax_13)
        int32_t temp9_1 = *(rax_13 + 0xc)
        *(rax_13 + 0xc) -= 1
        
        if (temp9_1 == 1)
            (*(*rax_13 + 8))(rax_13, 1)

void var_448
sub_140d94d20(&var_448)
__security_check_cookie(rax_1 ^ &var_498)
return zx.q(rax_23)
