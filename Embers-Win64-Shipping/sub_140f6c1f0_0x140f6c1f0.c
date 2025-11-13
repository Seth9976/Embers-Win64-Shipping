// 函数: sub_140f6c1f0
// 地址: 0x140f6c1f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbx = arg3[2]
int32_t arg_10 = 0

if (rbx[1].b == 0)
    arg5 = (zx.o(0)).d
else if (rbx[4] == 0)
    arg5 = *rbx
else
    int64_t* rcx = *(rbx + 8)
    
    if (rcx == 0)
        arg5 = *rbx
    else if ((*(*rcx + 0x28))(rcx) == 0)
        arg5 = *rbx
    else if (rbx[4] == 0)
        (*(*nullptr + 0x48))(0)
        *rbx = arg5
        arg5 = *rbx
    else
        int64_t* rcx_1 = *(rbx + 8)
        (*(*rcx_1 + 0x48))(rcx_1)
        *rbx = arg5

arg1[7].d = arg5
char* rbx_1 = arg3[3]
char arg_8 = 0
char rax_2

if (rbx_1[1] == 0)
    rax_2 = 0
else if (*(rbx_1 + 0x10) == 0)
    rax_2 = *rbx_1
else
    int64_t* rcx_2 = *(rbx_1 + 8)
    
    if (rcx_2 == 0)
        rax_2 = *rbx_1
    else if ((*(*rcx_2 + 0x28))(rcx_2) == 0)
        rax_2 = *rbx_1
    else if (*(rbx_1 + 0x10) == 0)
        *rbx_1 = (*(*nullptr + 0x48))(0)
        rax_2 = *rbx_1
    else
        int64_t* rcx_3 = *(rbx_1 + 8)
        rax_2 = (*(*rcx_3 + 0x48))(rcx_3)
        *rbx_1 = rax_2

void* rcx_4 = *arg1
*(arg1 + 0x3c) = rax_2
int32_t zmm6_1 = sub_140f166b0(rcx_4, arg4)
float zmm1[0x4] = arg1[7].d

if (*(arg1 + 0x3c) != 0)
    float zmm0[0x4] = arg1[6].d
    
    if (not(zmm0[0] < 1f))
        if (not(zmm1[0] < 1f))
            zmm0 = _mm_min_ss(zmm0[0], zmm1[0])
        
        zmm1 = zmm0

sub_140f183b0(*arg1, _mm_max_ss(zmm1[0], zmm6_1)[0])

if (arg3[6].d != 0)
    int64_t* rcx_6 = arg3[5]
    
    if (rcx_6 != 0 && (*(*rcx_6 + 0x28))(rcx_6) != 0)
        int64_t* rcx_7
        
        if (arg3[6].d == 0)
            rcx_7 = nullptr
        else
            rcx_7 = arg3[5]
        
        arg3[4].b = (*(*rcx_7 + 0x48))(rcx_7)

sub_140f18390(*arg1, arg3[4].b)
int128_t* rbx_2 = arg3[7]

if (rbx_2[2].d != 0)
    int64_t* rcx_9 = *(rbx_2 + 0x18)
    
    if (rcx_9 != 0 && (*(*rcx_9 + 0x28))(rcx_9) != 0)
        int64_t* rcx_10
        
        if (rbx_2[2].d == 0)
            rcx_10 = nullptr
        else
            rcx_10 = *(rbx_2 + 0x18)
        
        int128_t var_308
        (*(*rcx_10 + 0x48))(rcx_10, &var_308)
        *rbx_2 = var_308

int32_t zmm0_2 = sub_140f160d0(*arg1, rbx_2)
int32_t* rbx_3 = arg3[9]

if (rbx_3[4] != 0)
    int64_t* rcx_12 = *(rbx_3 + 8)
    
    if (rcx_12 != 0 && (*(*rcx_12 + 0x28))(rcx_12) != 0)
        int64_t* rcx_13
        
        if (rbx_3[4] == 0)
            rcx_13 = nullptr
        else
            rcx_13 = *(rbx_3 + 8)
        
        *rbx_3 = (*(*rcx_13 + 0x48))(rcx_13)

sub_140f15d50(*arg1, *rbx_3)
float (* rbx_4)[0x4] = arg3[8]

if (rbx_4[1][0] != 0)
    int64_t* rcx_15 = *(rbx_4 + 8)
    
    if (rcx_15 != 0 && (*(*rcx_15 + 0x28))(rcx_15) != 0)
        int64_t* rcx_16
        
        if (rbx_4[1][0] == 0)
            rcx_16 = nullptr
        else
            rcx_16 = *(rbx_4 + 8)
        
        (*(*rcx_16 + 0x48))(rcx_16)
        *rbx_4 = zmm0_2

sub_140f15f90(*arg1, (*rbx_4)[0])

if (sub_140f7b4e0(arg1, arg6) == 0)
    void** var_2c8
    sub_140f15670(*arg1, sub_140ddd070(&var_2c8, arg6))
    int64_t* rcx_21 = arg1[2]
    (*(*rcx_21 + 0x20))(rcx_21)

sub_1405d9400()
int64_t* rcx_22 = *arg3
int64_t* r15 = &data_143cd6fd8

if (rcx_22[3].b != 0)
    r15 = sub_140d44910(rcx_22)

char rax_28 = sub_140ab26b0(&arg1[8], r15)
char r12_1

if (rax_28 == 0)
    r12_1 = 0
    
    if (sub_140ab3cc0(&arg1[8], r15) == 0)
        r12_1 = 1
    
    void var_2f8
    int64_t* rax_30 = sub_140a97f80(&var_2f8, r15)
    
    if (&arg1[8] != rax_30)
        arg1[8] = *rax_30
        *rax_30 = 0
        sub_1405aeff0(&arg1[9], &rax_30[1])
    
    arg1[0xa].w = rax_30[2].w
    *(arg1 + 0x52) = *(rax_30 + 0x12)
    *(arg1 + 0x54) = *(rax_30 + 0x14)
    int64_t* var_2f0
    
    if (var_2f0 != 0)
        var_2f0[1].d -= 1
        
        if (var_2f0[1].d == 1)
            (**var_2f0)(var_2f0)
            int32_t rax_35 = *(var_2f0 + 0xc)
            *(var_2f0 + 0xc) -= 1
            
            if (rax_35 == 1)
                (*(*var_2f0 + 8))(var_2f0, 1)

char rax_38

if (rax_28 != 0 || r12_1 == 0)
    int64_t* rcx_31 = arg1[2]
    rax_38 = (*(*rcx_31 + 0x30))(rcx_31)

if ((rax_28 == 0 && r12_1 != 0) || rax_38 != 0)
    sub_140f90e70(arg1, sub_140ac6680(r15))

sub_1405d9400()
int64_t* rcx_34 = arg3[1]
int64_t* r14_2 = &data_143cd6fd8

if (rcx_34[3].b != 0)
    r14_2 = sub_140d44910(rcx_34)

if (sub_140ab26b0(&arg1[0xb], r14_2) == 0)
    if (sub_140ab3cc0(&arg1[0xb], r14_2) == 0)
        sub_140f90af0(arg1, r14_2)
    
    void var_2e0
    int64_t* rax_43 = sub_140a97f80(&var_2e0, r14_2)
    
    if (&arg1[0xb] != rax_43)
        arg1[0xb] = *rax_43
        *rax_43 = 0
        sub_1405aeff0(&arg1[0xc], &rax_43[1])
    
    arg1[0xd].w = rax_43[2].w
    *(arg1 + 0x6a) = *(rax_43 + 0x12)
    *(arg1 + 0x6c) = *(rax_43 + 0x14)
    int64_t* var_2d8
    
    if (var_2d8 != 0)
        var_2d8[1].d -= 1
        
        if (var_2d8[1].d == 1)
            (**var_2d8)(var_2d8)
            int32_t rbp_1 = *(var_2d8 + 0xc)
            *(var_2d8 + 0xc) -= 1
            
            if (rbp_1 == 1)
                (*(*var_2d8 + 8))(var_2d8, zx.q(rbp_1))

int64_t* rcx_44 = *arg1
(*(*rcx_44 + 8))(rcx_44)
sub_140f030e0(*arg1, arg2)
return arg2
