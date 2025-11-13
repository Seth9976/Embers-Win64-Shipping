// 函数: sub_14091d3a0
// 地址: 0x14091d3a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x38)
int64_t* rdi = nullptr

if (rbx == 0)
    return 

int32_t rax = 0
bool z_1

if (0 == rbx[1].d)
    rbx[1].d = 0
    z_1 = true
else
    rax = rbx[1].d
    z_1 = false

if (z_1)
    return 

while (true)
    bool z_2
    
    if (rax == rbx[1].d)
        rbx[1].d = rax + 1
        z_2 = true
    else
        rbx[1].d
        z_2 = false
    
    if (z_2)
        break
    
    rax = 0
    bool z_3
    
    if (0 == rbx[1].d)
        rbx[1].d = 0
        z_3 = true
    else
        rax = rbx[1].d
        z_3 = false
    
    if (z_3)
        return 

if (rbx == 0)
    return 

void* r14_1 = *(arg1 + 0x30)

if (r14_1 != 0)
    int32_t rax_1 = *(arg1 + 0x20)
    int16_t* rdx_1
    
    if (rax_1 == 0)
        rdx_1 = &data_142d40450
    else
        rdx_1 = *(arg1 + 0x18)
    
    int32_t rcx_1 = rax_1 - 1
    
    if (rax_1 == 0)
        rcx_1 = 0
    
    int64_t* rax_3 = sub_1409184d0(r14_1 + 0x38, sub_1405969c0(rcx_1, rdx_1), arg1)
    int64_t r15_1 = sx.q(rax_3[1].d)
    int32_t rcx_3 = (r15_1 + 1).d
    rax_3[1].d = rcx_3
    
    if (rcx_3 s> *(rax_3 + 0xc))
        sub_1405c4f50(rax_3)
    
    void*** r12_3 = r15_1 * 0x30 + *rax_3
    *r12_3 = &data_142e20698
    __builtin_memset(&r12_3[1], 0, 0x11)
    r12_3[4] = 0
    r12_3[5] = 0
    void** var_b8
    void*** rax_4 = sub_14092b6c0(&var_b8, arg1, arg1 + 0x40, arg1 + 0x40)
    int64_t r14_3 = sx.q(r12_3[5].d)
    int32_t rcx_6 = (r14_3 + 1).d
    r12_3[5].d = rcx_6
    
    if (rcx_6 s> *(r12_3 + 0x2c))
        sub_1405c4fe0(&r12_3[4])
    
    sub_14091a0a0(&r12_3[4][r14_3 * 8], rax_4)
    void var_88
    sub_14091a750(&var_88)
    int64_t var_a0
    
    if (var_a0 != 0)
        sub_140a74f90(var_a0)
    
    int64_t var_b0
    
    if (var_b0 != 0)
        sub_140a74f90(var_b0)
    
    int64_t* rax_5 = j_sub_140a82f30(0x40)
    int64_t* r14_4 = rax_5
    
    if (rax_5 == 0)
        r14_4 = nullptr
    else
        rax_5[1].d = 1
        *(rax_5 + 0xc) = 1
        *r14_4 = &data_142e21830
        r14_4[2] = &data_142e20698
        sub_140596d10(&r14_4[3], &r12_3[1])
        r14_4[5].b = r12_3[3].b
        r14_4[6] = 0
        sub_140917270(&r14_4[6], r12_3[4], r12_3[5].d, 0, 0)
    
    void* var_c8 = &r14_4[2]
    void* rdx_9
    rdx_9.b = 1
    void var_78
    char* rax_6 = sub_14093c750(&var_78, rdx_9.b)
    
    if (*(arg1 + 0x78) != 0)
        int64_t* rcx_18 = *(arg1 + 0x70)
        
        if (rcx_18 != 0)
            int64_t rdx_10 = *rcx_18
            
            if ((*(rdx_10 + 0x28))(rcx_18, rdx_10) != 0)
                if (*(arg1 + 0x78) != 0)
                    rdi = *(arg1 + 0x70)
                
                (*(*rdi + 0x50))(rdi, rax_6, &var_c8)
    
    int64_t* var_48
    
    if (var_48 != 0)
        var_48[1].d -= 1
        
        if (var_48[1].d == 1)
            (**var_48)(var_48)
            int32_t rax_11 = *(var_48 + 0xc)
            *(var_48 + 0xc) -= 1
            
            if (rax_11 == 1)
                (*(*var_48 + 8))(var_48, 1)
    
    int64_t var_60
    
    if (var_60 != 0)
        sub_140a74f90(var_60)
    
    int64_t var_70
    
    if (var_70 != 0)
        sub_140a74f90(var_70)
    
    if (r14_4 != 0)
        r14_4[1].d -= 1
        
        if (r14_4[1].d == 1)
            (**r14_4)(r14_4)
            int32_t temp2_1 = *(r14_4 + 0xc)
            *(r14_4 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*r14_4 + 8))(r14_4, 1)

rbx[1].d -= 1

if (rbx[1].d != 1)
    return 

(**rbx)(rbx)
int32_t rbp_1 = *(rbx + 0xc)
*(rbx + 0xc) -= 1

if (rbp_1 == 1)
    (*(*rbx + 8))(rbx, zx.q(rbp_1))
