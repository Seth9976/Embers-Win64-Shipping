// 函数: sub_141bc5f10
// 地址: 0x141bc5f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
*(arg1 + 0x3ee) = 1
int64_t* rbx = *(arg1 + 0x10)
int64_t rdi = 0

if (rbx != 0)
    int32_t rax_2 = rbx[1].d
    
    if (rax_2 != 0)
        rbx[1].d = rax_2 + 1
        rax_2.b = 1
    
    if (rax_2.b == 0)
        rbx = nullptr
    
    if (rbx != 0)
        int32_t rax_3 = rbx[1].d
        rdi = *(arg1 + 8)
        rbx[1].d = rax_3
        
        if (rax_3 == 0)
            (**rbx)(rbx)
            int32_t temp3_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx + 8))(rbx, 1)
        
        rbx[1].d += 1

int64_t var_108 = data_143e1e008
int64_t var_100 = data_143e1e010
int64_t* rax_8 = data_143e1e018

if (rax_8 != 0)
    rax_8[1].d += 1

int32_t var_34
int32_t var_34_1 = var_34 & 0xffffff00
char var_e8 = 1
int64_t var_e0 = 0
int64_t var_d8 = 0
char var_c8 = 0
int64_t var_c0
__builtin_memset(&var_c0, 0, 0x40)
int128_t var_78
__builtin_memset(&var_78, 0, 0x40)
int32_t var_38 = 0x20702
int64_t var_80 = rdi

if (rbx != 0)
    *(rbx + 0xc) += 1
    var_78.q = rbx

int64_t var_60
sub_140627710(&var_60, &var_108)

if (rax_8 != 0)
    rax_8[1].d -= 1
    
    if (rax_8[1].d == 1)
        (**rax_8)(rax_8)
        int32_t temp2_1 = *(rax_8 + 0xc)
        *(rax_8 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rax_8 + 8))(rax_8, 1)

sub_140596b00(arg2, &var_e8)
sub_140597700(&var_e8)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp5_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*rbx + 8))(rbx, 1)
    
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp6_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp6_1 == 1)
            int64_t r8_2 = *rbx
            (*(r8_2 + 8))(rbx, 1, r8_2)

__security_check_cookie(rax_1 ^ &var_128)
return arg2
