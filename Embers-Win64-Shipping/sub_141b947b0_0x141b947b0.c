// 函数: sub_141b947b0
// 地址: 0x141b947b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x30)
int32_t var_90 = 0
int64_t* r12
int64_t* r14
int32_t r15
void** (* var_b0)(void** arg1, int64_t arg2, int64_t* arg3, int64_t* arg4)

if (rcx != 0)
    char var_b8 = 0
    int64_t* var_a8_1 = &var_b8
    var_b0 = sub_141b970e0
    void var_80
    sub_141befea0(rcx, &var_80, &var_b0)
    r14 = var_a8_1
    r12 = &var_80
    r15 = 2
else
    r14 = data_143e244b8
    var_b0 = data_143e244b0
    int64_t* var_a8 = r14
    
    if (r14 != 0)
        r14[1].d += 1
    
    r12 = &var_b0
    r15 = 1
int128_t zmm6 = *(arg1 + 0x38)
int32_t r9 = *(arg1 + 0x5c)
int32_t r8_2 = *(arg1 + 0x4c)
int64_t* rcx_1 = *arg2
uint32_t rsi = zx.d(*(arg1 + 0x49))
uint32_t rdi = zx.d(*(arg1 + 0x48))
int64_t var_58 = 0
int32_t var_50 = 0
int128_t var_70 = zmm6
char var_60 = 1
void* rax_2 = sub_140f2a840(rcx_1, *(arg1 + 0x54), r8_2, r9)
*(rax_2 + 0x38) = 1
*(rax_2 + 0x28) = zmm6
sub_140692f90(rax_2 + 0x40, &var_58)
sub_140745b20(&var_58)
*(rax_2 + 0x20) = rdi
*(rax_2 + 0x24) = rsi
void* rax_4 = sub_141b98a30(sub_141bdcfa0(rax_2, *(arg1 + 0x50)), *(arg1 + 0x58))
*(rax_4 + 0x74) = *(arg1 + 0x60)
int64_t* rdi_1 = *(rax_4 + 0x18)

if (rdi_1 != 0)
    rdi_1[1].d += 1

sub_140e0dfc0(rax_4)
int64_t* rbx_2 = r12[1]
int64_t var_a0 = *r12

if (rbx_2 != 0)
    rbx_2[1].d += 1

if (&var_a0 != rax_4 + 0x10)
    var_a0.o = *(rax_4 + 0x10)
    *(rax_4 + 0x10) = var_a0.o

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp2_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

int64_t result = sub_140de7bf0(rax_4)

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        result = (**rdi_1)(rdi_1)
        int32_t temp3_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            result = (*(*rdi_1 + 8))(rdi_1, 1)

*(arg1 + 0x68) = rax_4

if ((r15.b & 2) != 0)
    r15 &= 0xfffffffd
    int64_t* var_78
    
    if (var_78 != 0)
        var_78[1].d -= 1
        
        if (var_78[1].d == 1)
            result = (**var_78)(var_78)
            int32_t temp7_1 = *(var_78 + 0xc)
            *(var_78 + 0xc) -= 1
            
            if (temp7_1 == 1)
                result = (*(*var_78 + 8))(var_78, 1)

if ((r15.b & 1) != 0 && r14 != 0)
    r14[1].d -= 1
    
    if (r14[1].d == 1)
        result = (**r14)(r14)
        int32_t temp9_1 = *(r14 + 0xc)
        *(r14 + 0xc) -= 1
        
        if (temp9_1 == 1)
            result = (*(*r14 + 8))(r14, 1)

int64_t* rbx_5 = arg2[1]

if (rbx_5 != 0)
    rbx_5[1].d -= 1
    
    if (rbx_5[1].d == 1)
        result = (**rbx_5)(rbx_5)
        int32_t temp8_1 = *(rbx_5 + 0xc)
        *(rbx_5 + 0xc) -= 1
        
        if (temp8_1 == 1)
            return (*(*rbx_5 + 8))(rbx_5, 1)

return result
