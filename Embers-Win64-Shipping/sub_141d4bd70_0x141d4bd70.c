// 函数: sub_141d4bd70
// 地址: 0x141d4bd70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143226e58
arg1[1] = &data_143226e80
arg1[2] = &data_143226e90

if (arg1[0x26] != 0)
    EnterCriticalSection(&arg1[0x1a])
    int64_t* rcx_1 = arg1[0x26]
    (**rcx_1)(rcx_1)
    int64_t* var_10 = nullptr
    int64_t var_18
    
    if (&arg1[0x26] != &var_18)
        arg1[0x26] = 0
        var_18 = 0
        sub_1405aeff0(&arg1[0x27], &var_10)
        int64_t* rcx_3 = var_10
        
        if (rcx_3 != 0)
            rcx_3[1].d -= 1
            
            if (rcx_3[1].d == 1)
                int64_t* rdi_1 = var_10
                (**rdi_1)(rdi_1)
                int32_t rax_4 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (rax_4 == 1)
                    int64_t* rcx_5 = var_10
                    (*(*rcx_5 + 8))(rcx_5, 1)
    
    if (arg1 != -0xd0)
        LeaveCriticalSection(&arg1[0x1a])

int64_t* rbx_2 = arg1[0x19]

if (rbx_2 != 0)
    DeleteCriticalSection(&rbx_2[0x2a])
    rbx_2[0x27].d = 0
    int64_t rcx_8 = rbx_2[0x26]
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)
    
    sub_141d4c780(&rbx_2[0x1e], 0)
    int64_t rcx_10 = rbx_2[0x22]
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)
    
    int64_t rcx_11 = rbx_2[0x1e]
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)
    
    rbx_2[0x1d].d = 0
    int64_t rcx_12 = rbx_2[0x1c]
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)
    
    sub_141d4c780(&rbx_2[0x14], 0)
    int64_t rcx_14 = rbx_2[0x18]
    
    if (rcx_14 != 0)
        sub_140a74f90(rcx_14)
    
    int64_t rcx_15 = rbx_2[0x14]
    
    if (rcx_15 != 0)
        sub_140a74f90(rcx_15)
    
    rbx_2[0x13].d = 0
    int64_t rcx_16 = rbx_2[0x12]
    
    if (rcx_16 != 0)
        sub_140a74f90(rcx_16)
    
    sub_141d4c780(&rbx_2[0xa], 0)
    int64_t rcx_18 = rbx_2[0xe]
    
    if (rcx_18 != 0)
        sub_140a74f90(rcx_18)
    
    int64_t rcx_19 = rbx_2[0xa]
    
    if (rcx_19 != 0)
        sub_140a74f90(rcx_19)
    
    rbx_2[9].d = 0
    int64_t rcx_20 = rbx_2[8]
    
    if (rcx_20 != 0)
        sub_140a74f90(rcx_20)
    
    sub_141d4c780(rbx_2, 0)
    int64_t rcx_22 = rbx_2[4]
    
    if (rcx_22 != 0)
        sub_140a74f90(rcx_22)
    
    int64_t rcx_23 = *rbx_2
    
    if (rcx_23 != 0)
        sub_140a74f90(rcx_23)
    
    j_sub_140a74f90(rbx_2)

arg1[0x19] = 0

while (arg1[0x2b] != 0)
    int64_t* rcx_25 = arg1[0x2b]
    arg1[0x2b] = *rcx_25
    j_sub_140a74f90(rcx_25)

int64_t* rbx_3 = arg1[0x27]

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t rax_9 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (rax_9 == 1)
            (*(*rbx_3 + 8))(rbx_3, 1)

sub_140596eb0(&arg1[0x22])
int64_t rcx_29 = arg1[0x1f]

if (rcx_29 != 0)
    sub_140a74f90(rcx_29)

DeleteCriticalSection(&arg1[0x1a])
sub_1408ffb10(&arg1[0x16])
sub_1408ffb10(&arg1[0x14])
sub_1408ffb10(&arg1[0x12])
sub_1408ffb10(&arg1[0x10])
sub_1408ffb10(&arg1[0xe])

if (arg1[0xd].b != 0)
    arg1[0xd].b = 0

int64_t* rcx_36 = arg1[4]

if (rcx_36 != 0)
    int32_t rbp_1 = *(rcx_36 + 0xc)
    *(rcx_36 + 0xc) -= 1
    
    if (rbp_1 == 1 && rcx_36 != 0)
        (*(*rcx_36 + 8))(rcx_36, zx.q(rbp_1))

arg1[2] = &data_142d40888
arg1[1] = &data_142d40888
*arg1 = &data_142e1aed0
return &data_142e1aed0
