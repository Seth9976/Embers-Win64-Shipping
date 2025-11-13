// 函数: sub_141b9b550
// 地址: 0x141b9b550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_728
int64_t rax_1 = __security_cookie ^ &var_728
void* rbx = *(arg4 + 0x10)
int64_t* rdi = nullptr
char rax_3

if (rbx != 0)
    rax_3 = sub_140be1130(rbx, sub_141c00390())

int64_t r12_1

if (rbx == 0 || rax_3 == 0)
    void var_650
    int64_t* rax_17 = _vfprintf_p_l(&var_650, 
        Any UserWidget generated as a table row must implement the IUserListEntry interface", 
        SObjectTableRow")
    int64_t var_6c8 = *rax_17
    int64_t* rcx_16 = rax_17[1]
    
    if (rcx_16 != 0)
        rcx_16[1].d += 1
    
    int32_t var_6b8_1 = rax_17[2].d
    char var_6b0_1 = 1
    int64_t var_6a8 = 0
    int32_t var_6a0_1 = 0
    void var_488
    int64_t* rax_19 = sub_14068d9d0(&var_488)
    sub_14065da90(&rax_19[0x34], &var_6c8)
    rax_19[0x37].b = var_6b0_1
    sub_140692f90(&rax_19[0x38], &var_6a8)
    void*** rax_20 = j_sub_140a82f30(0x7a8)
    void*** r14_2 = rax_20
    
    if (rax_20 == 0)
        r14_2 = nullptr
    else
        rax_20[1].d = 1
        *(rax_20 + 0xc) = 1
        *r14_2 = &data_142d8b060
        
        if (r14_2 != -0x10)
            sub_140f66da0(&r14_2[2])
    
    void* var_688 = &r14_2[2]
    sub_14065fa30(&var_688, &r14_2[2])
    int64_t var_708_1 = 0x798
    void var_6f8
    void* var_678_1 = &var_6f8
    void* var_660
    int64_t* rax_21 =
        sub_140697520(&var_688, &var_660, rax_19, sub_140e23ed0(&r14_2[2], "STextBlock"))
    int64_t* r14_3 = rax_21[1]
    r12_1 = *rax_21
    bool cond:0_1 = r14_3 == 0
    
    if (r14_3 != 0)
        r14_3[1].d += 1
        cond:0_1 = r14_3 == 0
    
    if (cond:0_1)
        r14_3 = nullptr
    
    int64_t* var_658
    
    if (var_658 != 0)
        var_658[1].d -= 1
        
        if (var_658[1].d == 1)
            (**var_658)(var_658)
            int32_t temp6_1 = *(var_658 + 0xc)
            *(var_658 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*var_658 + 8))(var_658, 1)
    
    if (r14_2 != 0)
        r14_2[1].d -= 1
        
        if (r14_2[1].d == 1)
            (**r14_2)(r14_2)
            int32_t temp8_1 = *(r14_2 + 0xc)
            *(r14_2 + 0xc) -= 1
            
            if (temp8_1 == 1)
                (*r14_2)[1](r14_2, 1)
    
    sub_1406913d0(&var_488)
    sub_140745b20(&var_6a8)
    
    if (rcx_16 != 0)
        rcx_16[1].d -= 1
        
        if (rcx_16[1].d == 1)
            (**rcx_16)(rcx_16)
            int32_t rax_28 = *(rcx_16 + 0xc)
            *(rcx_16 + 0xc) -= 1
            
            if (rax_28 == 1)
                (*(*rcx_16 + 8))(rcx_16, 1)
    
    rdi = r14_3
    int64_t* var_648
    
    if (var_648 != 0)
        var_648[1].d -= 1
        
        if (var_648[1].d == 1)
            (**var_648)(var_648)
            int32_t r15_2 = *(var_648 + 0xc)
            *(var_648 + 0xc) -= 1
            
            if (r15_2 == 1)
                (*(*var_648 + 8))(var_648, zx.q(r15_2))
    
    goto label_141b9b9ac

int64_t* rbx_1 = *(arg1 + 0x10)
int64_t r14 = 0

if (rbx_1 != 0)
    int32_t rax_4 = rbx_1[1].d
    
    if (rax_4 != 0)
        rbx_1[1].d = rax_4 + 1
        rax_4.b = 1
    
    if (rax_4.b == 0)
        rbx_1 = nullptr
    
    if (rbx_1 != 0)
        int32_t rax_5 = rbx_1[1].d
        r14 = *(arg1 + 8)
        rbx_1[1].d = rax_5
        
        if (rax_5 == 0)
            (**rbx_1)(rbx_1)
            int32_t temp4_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

int64_t var_6d8

if (r14 == 0)
    var_6d8 = 0
else
    var_6d8 = r14 + 0x3a8

if (rbx_1 != 0)
    *(rbx_1 + 0xc) += 1

void var_694
sub_140d3a3a0(&var_694, arg4)
void* var_670 = &var_694
int64_t* var_668_1 = &var_6d8
void var_698
sub_141b709f0(&data_1439ec470, &var_698, &var_670, nullptr)

if (rbx_1 != 0)
    int32_t temp3_1 = *(rbx_1 + 0xc)
    *(rbx_1 + 0xc) -= 1
    
    if (temp3_1 == 1)
        (*(*rbx_1 + 8))(rbx_1, 1)

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp9_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp9_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

sub_140d3a3a0(arg1 + 0x3d0, arg5)
int64_t* rbx_2 = arg3[1]
int64_t rcx_8 = *arg3

if (rbx_2 != 0)
    rbx_2[1].d += 1

int64_t rax_12 = rcx_8 + 0x4f8

if (rcx_8 == 0)
    rax_12 = 0

*(arg1 + 0x3d8) = rax_12
int64_t* rcx_9 = *(arg1 + 0x3e0)

if (rbx_2 != rcx_9)
    if (rbx_2 != 0)
        *(rbx_2 + 0xc) += 1
        rcx_9 = *(arg1 + 0x3e0)
    
    if (rcx_9 != 0)
        int32_t temp12_1 = *(rcx_9 + 0xc)
        *(rcx_9 + 0xc) -= 1
        
        if (temp12_1 == 1)
            (*(*rcx_9 + 8))(rcx_9, 1)
    
    *(arg1 + 0x3e0) = rbx_2

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp11_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp11_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

sub_1407473e0(arg1 + 0x3b0, arg2 + 0x1b0)
sub_1407473e0(arg1 + 0x3c0, arg2 + 0x1c0)
int64_t* rax_16 = *(arg2 + 0x1a8)
r12_1 = *(arg2 + 0x1a0)

if (rax_16 != 0)
    rax_16[1].d += 1
    
    if (rax_16 != 0)
        rdi = rax_16
    label_141b9b9ac:
        
        if (rdi != 0)
            rdi[1].d += 1

void var_638
int64_t* rax_33 = sub_140e4fff0(&var_638)
int64_t var_6e8 = r12_1

if (rdi != 0)
    rdi[1].d += 1

if (&var_6e8 != &rax_33[0x34])
    var_6e8.o = *(rax_33 + 0x1a0)
    *(rax_33 + 0x1a0) = var_6e8.o

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp14_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp14_1 == 1)
            (*(*rdi + 8))(rdi, 1)

*(arg1 + 0x3a0) = arg4
sub_140de1b90(arg1 + 0x2b8, &rax_33[0x34])
*(arg1 + 0x2e) &= 0xfb

if (sub_140db3510(arg1 + 0x18) != 0)
    sub_140dc03a0(arg1 + 0x18, *(arg1 + 0x2e))

int64_t* rcx_42 = *(arg1 + 0x3a0)

if (rcx_42 != 0)
    sub_141bf4410(rcx_42)

int64_t* var_490

if (var_490 != 0)
    var_490[1].d -= 1
    
    if (var_490[1].d == 1)
        (**var_490)(var_490)
        int32_t temp17_1 = *(var_490 + 0xc)
        *(var_490 + 0xc) -= 1
        
        if (temp17_1 == 1)
            (*(*var_490 + 8))(var_490, 1)

int64_t result = sub_140ddea30(&var_638)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        result = (**rdi)(rdi)
        int32_t temp19_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp19_1 == 1)
            result = (*(*rdi + 8))(rdi, 1)
    
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        result = (**rdi)(rdi)
        int32_t temp20_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp20_1 == 1)
            result = (*(*rdi + 8))(rdi, 1)

__security_check_cookie(rax_1 ^ &var_728)
return result
