// 函数: sub_141b95ab0
// 地址: 0x141b95ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x30)
int32_t var_90 = 0
int64_t* r12
int64_t* r14
int32_t r15
void** (* var_a0)(void** arg1, int64_t arg2, int64_t* arg3, int64_t* arg4)

if (rcx != 0)
    char var_b8 = 0
    int64_t* var_98_1 = &var_b8
    var_a0 = sub_141b970e0
    void var_78
    sub_141befea0(rcx, &var_78, &var_a0)
    r14 = var_98_1
    r12 = &var_78
    r15 = 2
else
    r14 = data_143e244b8
    var_a0 = data_143e244b0
    int64_t* var_98 = r14
    
    if (r14 != 0)
        r14[1].d += 1
    
    r12 = &var_a0
    r15 = 1
int128_t zmm0 = *(arg1 + 0x40)
void* rcx_1 = *arg2
uint32_t rsi = zx.d(*(arg1 + 0x51))
uint32_t rdi = zx.d(*(arg1 + 0x50))
int64_t var_50 = 0
int32_t var_48 = 0
int128_t var_b0 = zmm0
char var_58 = 1
int128_t var_68 = zmm0
void*** rax_2 = sub_140f2ab30(rcx_1, 0xffffffff)
rax_2[7].b = 1
*(rax_2 + 0x28) = var_b0
sub_140692f90(&rax_2[8], &var_50)
sub_140745b20(&var_50)
rax_2[4].d = rdi
*(rax_2 + 0x24) = rsi
int64_t* rdi_1 = rax_2[3]

if (rdi_1 != 0)
    rdi_1[1].d += 1

sub_140e0dfc0(rax_2)
int64_t* rbx_1 = r12[1]
var_b0.q = *r12
var_b0:8.q = rbx_1

if (rbx_1 != 0)
    rbx_1[1].d += 1

if (&var_b0 != &rax_2[2])
    int128_t zmm1_1 = var_b0
    var_b0 = *(rax_2 + 0x10)
    rbx_1 = var_b0:8.q
    *(rax_2 + 0x10) = zmm1_1

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp2_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

sub_140de7bf0(rax_2)

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp3_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

void* result = arg1
*(result + 0x38) = rax_2

if ((r15.b & 2) != 0)
    r15 &= 0xfffffffd
    int64_t* var_70
    
    if (var_70 != 0)
        var_70[1].d -= 1
        
        if (var_70[1].d == 1)
            result = (**var_70)(var_70)
            int32_t temp7_1 = *(var_70 + 0xc)
            *(var_70 + 0xc) -= 1
            
            if (temp7_1 == 1)
                result = (*(*var_70 + 8))(var_70, 1)

if ((r15.b & 1) != 0 && r14 != 0)
    r14[1].d -= 1
    
    if (r14[1].d == 1)
        result = (**r14)(r14)
        int32_t temp9_1 = *(r14 + 0xc)
        *(r14 + 0xc) -= 1
        
        if (temp9_1 == 1)
            result = (*(*r14 + 8))(r14, 1)

int64_t* rbx_4 = arg2[1]

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        result = (**rbx_4)(rbx_4)
        int32_t temp8_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (temp8_1 == 1)
            return (*(*rbx_4 + 8))(rbx_4, 1)

return result
