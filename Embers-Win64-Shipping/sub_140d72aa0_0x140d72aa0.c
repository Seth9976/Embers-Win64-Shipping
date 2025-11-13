// 函数: sub_140d72aa0
// 地址: 0x140d72aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_848
int64_t rax_1 = __security_cookie ^ &var_848
void* rdi = arg1[0x30]
*arg1 = &data_142ebff90
arg1[0x10] = &data_142ec00c0

if (rdi != 0)
    int64_t* rcx = *(rdi + 0x20)
    int64_t* var_828 = nullptr
    enum WIN32_ERROR rax_3 = (**rcx)(rcx, &data_1434cb300, &var_828)
    int64_t* rcx_1
    
    if (rax_3 s>= NO_ERROR)
        rcx_1 = var_828
    
    void var_818
    
    if (rax_3 s>= NO_ERROR && rcx_1 != 0)
    label_140d72b35:
        void* rax_4 = *(rdi + 0x38)
        
        if (rax_4 != 0)
            int32_t rdx_1 = *(rax_4 + 0x14)
            
            if (rdx_1 != 0xffffffff)
                enum WIN32_ERROR rax_6 = (*(*rcx_1 + 0x20))(rcx_1, rdx_1)
                
                if (rax_6 s< NO_ERROR)
                    sub_140b6cae0(&var_818, 0x400, rax_6)
                
                rcx_1 = var_828
            
            int32_t rdx_2 = *(*(rdi + 0x38) + 0x10)
            
            if (rdx_2 != 0xffffffff)
                enum WIN32_ERROR rax_9 = (*(*rcx_1 + 0x20))(rcx_1, rdx_2)
                
                if (rax_9 s< NO_ERROR)
                    sub_140b6cae0(&var_818, 0x400, rax_9)
    else
        sub_140b6cae0(&var_818, 0x400, rax_3)
        rcx_1 = var_828
        
        if (rcx_1 != 0)
            goto label_140d72b35
    
    int64_t* rcx_5 = *(rdi + 0x38)
    
    if (rcx_5 != 0)
        (*(*rcx_5 + 0x10))(rcx_5)
        *(rdi + 0x38) = 0
    
    int64_t* rcx_6 = *(rdi + 0x20)
    enum WIN32_ERROR rax_12 = (*(*rcx_6 + 0x20))(rcx_6)
    
    if (rax_12 s< NO_ERROR)
        sub_140b6cae0(&var_818, 0x400, rax_12)
    
    int64_t* rcx_8 = *(rdi + 0x20)
    
    if (rcx_8 != 0)
        (*(*rcx_8 + 0x10))(rcx_8)
        *(rdi + 0x20) = 0
    
    ImmDestroyContext(*(rdi + 0x40))
    int64_t* rcx_10 = var_828
    
    if (rcx_10 != 0)
        (*(*rcx_10 + 0x10))(rcx_10)

CoUninitialize()
OleUninitialize()
int32_t i_2 = arg1[0x3b].d
void* rax_15 = arg1[0x3a]

if (i_2 != 0)
    char* rax_16 = rax_15 + 4
    int32_t i
    
    do
        if (*rax_16 != 0)
            *rax_16 = 0
        
        rax_16 = &rax_16[8]
        i = i_2
        i_2 -= 1
    while (i != 1)
    rax_15 = arg1[0x3a]

if (rax_15 != 0)
    sub_140a74f90(rax_15)

int64_t* rdi_1 = arg1[0x34]

if (rdi_1 != 0)
    sub_140d72dd0(rdi_1)
    j_sub_140a74f90(rdi_1)

int64_t* rdi_2 = arg1[0x33]

if (rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        (**rdi_2)(rdi_2)
        int32_t temp3_1 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rdi_2 + 8))(rdi_2, 1)

int64_t* rdi_3 = arg1[0x31]

if (rdi_3 != 0)
    rdi_3[1].d -= 1
    
    if (rdi_3[1].d == 1)
        (**rdi_3)(rdi_3)
        int32_t temp4_1 = *(rdi_3 + 0xc)
        *(rdi_3 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rdi_3 + 8))(rdi_3, 1)

sub_140d72800(&arg1[0x25])
arg1[0x21] = &data_142d3ff10
int64_t* rcx_19 = data_143db18d0

if (rcx_19 == 0)
    sub_140a53c40()
    rcx_19 = data_143db18d0

int64_t r8_6
r8_6.b = 1
(*(*rcx_19 + 0xa8))(rcx_19, arg1[0x22], r8_6)
sub_140596d80(&arg1[0x1d])
int64_t* rdi_4 = arg1[0x1c]

if (rdi_4 != 0)
    rdi_4[1].d -= 1
    
    if (rdi_4[1].d == 1)
        (**rdi_4)(rdi_4)
        int32_t temp6_1 = *(rdi_4 + 0xc)
        *(rdi_4 + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*rdi_4 + 8))(rdi_4, 1)

sub_140596d80(&arg1[0x19])
int64_t rcx_24 = arg1[0x17]

if (rcx_24 != 0)
    sub_140a74f90(rcx_24)

int32_t i_3 = arg1[0x16].d
void* rcx_25 = arg1[0x15]

if (i_3 != 0)
    int64_t* rdi_5 = rcx_25 + 0x10
    int32_t i_1
    
    do
        sub_140a3c0a0(rdi_5)
        rdi_5 = &rdi_5[9]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    rcx_25 = arg1[0x15]

if (rcx_25 != 0)
    sub_140a74f90(rcx_25)

sub_140d72790(&arg1[0x13])
arg1[0x10] = &data_142ebfdb8
int64_t result = sub_140d732a0(arg1)
__security_check_cookie(rax_1 ^ &var_848)
return result
