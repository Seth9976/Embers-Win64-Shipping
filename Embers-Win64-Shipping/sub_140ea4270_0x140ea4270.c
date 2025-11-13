// 函数: sub_140ea4270
// 地址: 0x140ea4270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0xe8)
void*** rdi = rax

if (rax == 0)
    rdi = nullptr
else
    __builtin_memset(&rax[1], 0, 0x20)
    void* rcx = &rdi[5]
    *rdi = &data_142edb430
    *(rcx + 0x1c) = 0x80
    void* rax_1 = *(rcx + 0x10)
    
    if (rax_1 != 0)
        rcx = rax_1
    
    __builtin_memset(rcx, 0, 0x1c)
    void* rcx_1 = &rdi[0xf]
    rdi[9].d = 0xffffffff
    *(rdi + 0x4c) = 0
    rdi[0xb] = 0
    rdi[0xc].d = 0
    rdi[0xd] = 0
    rdi[0xe] = 0
    *(rcx_1 + 0x1c) = 0x80
    void* rax_2 = *(rcx_1 + 0x10)
    
    if (rax_2 != 0)
        rcx_1 = rax_2
    
    __builtin_memset(rcx_1, 0, 0x1c)
    rdi[0x13].d = 0xffffffff
    *(rdi + 0x9c) = 0
    rdi[0x15] = 0
    rdi[0x16].d = 0
    __builtin_memset(&rdi[0x17], 0, 0x2c)

void*** rax_3 = j_sub_140a82f30(0x18)
void*** rbx = rax_3

if (rax_3 == 0)
    rbx = nullptr
else
    rax_3[1].d = 1
    *(rax_3 + 0xc) = 1
    *rbx = &data_142d42ea8
    rbx[2] = rdi

void**** r14 = &rdi[1]

if (rdi == 0)
    r14 = nullptr

if (r14 != 0)
    void* rax_4
    
    if (*r14 != 0)
        rax_4 = r14[1]
    
    if (*r14 == 0 || rax_4 == 0 || *(rax_4 + 8) s<= 0)
        if (rbx != 0)
            rbx[1].d += 1
        
        *r14 = rdi
        int64_t* rcx_2 = r14[1]
        
        if (rbx != rcx_2)
            if (rbx != 0)
                *(rbx + 0xc) += 1
                rcx_2 = r14[1]
            
            if (rcx_2 != 0)
                int32_t temp6_1 = *(rcx_2 + 0xc)
                *(rcx_2 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*rcx_2 + 8))(rcx_2, 1)
            
            r14[1] = rbx
        
        if (rbx != 0)
            rbx[1].d -= 1
            
            if (rbx[1].d == 1)
                (**rbx)(rbx)
                int32_t temp5_1 = *(rbx + 0xc)
                *(rbx + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*rbx)[1](rbx, 1)

int128_t var_48

if (arg1 + 0x4c0 == &var_48)
label_140ea446e:
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp1_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*rbx)[1](rbx, 1)
else
    *(arg1 + 0x4c0) = rdi
    void*** rdi_1 = *(arg1 + 0x4c8)
    
    if (rbx == rdi_1)
        goto label_140ea446e
    
    *(arg1 + 0x4c8) = rbx
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp3_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*rdi_1)[1](rdi_1, 1)

void* rax_11 = sub_140ebd5f0()
int32_t var_50 = 0
int32_t var_60 = 0
uint64_t (* var_68)(void* arg1) = sub_140eadcb0
int128_t zmm0 = var_68.o
int64_t (* rcx_8)(void* arg1) = *(rax_11 + 0x48)
int64_t (* var_58)(void* arg1) = sub_140eb9680
int128_t zmm1 = var_58.o
var_58 = rcx_8
void* rcx_9 = *(rax_11 + 0x50)
var_68.o = zmm0
var_48 = zmm1
var_50.q = rcx_9

if (rcx_9 != 0)
    *(rcx_9 + 8) += 1

int64_t* rdi_2 = *(arg1 + 0x4c0)
void var_38
int64_t* rax_12 = sub_140e8f130(&var_38, arg1, &var_68)
void var_28
sub_140e72240(rdi_2, &var_58, sub_140e8edc0(&var_28, arg1, &var_48), rax_12, 0)
int32_t var_50_1 = 0
var_58 = sub_140eadd30
int128_t zmm0_1 = var_58.o
var_68 = sub_140eb96e0
int32_t var_60_1 = 0
int128_t zmm1_1 = var_68.o
var_58 = *(rax_11 + 0x58)
void* rax_15 = *(rax_11 + 0x60)
var_48 = zmm0_1
var_68.o = zmm1_1
var_50_1.q = rax_15

if (rax_15 != 0)
    *(rax_15 + 8) += 1

int64_t* rdi_3 = *(arg1 + 0x4c0)
int64_t* rax_16 = sub_140e8f130(&var_28, arg1, &var_48)
return sub_140e72240(rdi_3, &var_58, sub_140e8edc0(&var_38, arg1, &var_68), rax_16, 0)
