// 函数: sub_1418b4330
// 地址: 0x1418b4330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = sx.q(*(arg1 + 0x30))

if (rcx.d s< 0)
    return 

int32_t r9_1 = *(arg1 + 0x28)

if (rcx.d s>= r9_1)
    return 

int64_t* r8_1 = *(*(arg1 + 0x20) + rcx * 0x10)

if (r8_1 == 0)
    return 

int64_t* rbp_1 = nullptr

if (rcx.d s< 0 || rcx.d s>= r9_1)
    r8_1 = nullptr

if ((*(*r8_1 + 0x50))(r8_1).b != 1)
    return 

int64_t rax = sx.q(*(arg1 + 0x30))
int64_t* rbx_1

if (rax.d s>= 0 && rax.d s< *(arg1 + 0x28))
    rbx_1 = *(*(arg1 + 0x20) + rax * 0x10)

if (rax.d s< 0 || rax.d s>= *(arg1 + 0x28) || rbx_1 == 0 || *(arg1 + 0x50) == 0)
    return 

rax = *(arg1 + 0x58)

if (rax == 0 || *(rax + 8) s<= 0)
    return 

void var_20
pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_20)
int64_t* rcx_5 = *(arg1 + 0x58)
int64_t rdx_4 = 0
int64_t* rdi_1 = rcx_5

if (rcx_5 != 0)
    int32_t rax_2 = rcx_5[1].d
    
    if (rax_2 != 0)
        rcx_5[1].d = rax_2 + 1
        rax_2.b = 1
    
    if (rax_2.b == 0)
        rcx_5 = nullptr
        rdi_1 = nullptr

if (rdi_1 != 0)
    rdx_4 = *(arg1 + 0x50)

int64_t var_48 = rdx_4

if (rcx_5 != 0)
    *(rcx_5 + 0xc) += 1

(*(*rbx_1 + 0x30))(rbx_1, &var_48)

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp2_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

int64_t r14_1 = *(*(*rbx_1 + 0x68))(rbx_1, &var_48)

if (rcx_5 != 0)
    rcx_5[1].d -= 1
    
    if (rcx_5[1].d == 1)
        (**rcx_5)(rcx_5)
        int32_t temp3_1 = *(rcx_5 + 0xc)
        *(rcx_5 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rcx_5 + 8))(rcx_5, 1)

void var_38

if (r14_1 != 0)
    int64_t* rax_11 = (*(*rbx_1 + 0x68))(rbx_1, &var_38)
    var_48 = *rax_11
    int64_t var_40_2 = rax_11[1]
    rax_11[1] = 0
    *rax_11 = 0
    int64_t* rdi_3 = *(arg1 + 0x58)
    
    if (rdi_3 != 0)
        int32_t rax_12 = rdi_3[1].d
        
        if (rax_12 != 0)
            rdi_3[1].d = rax_12 + 1
            rax_12.b = 1
        
        if (rax_12.b == 0)
            rdi_3 = nullptr
        
        if (rdi_3 != 0)
            rbp_1 = *(arg1 + 0x50)
    
    arg2 = sub_140e23de0(rbp_1, &var_48)
    
    if (rdi_3 != 0)
        rdi_3[1].d -= 1
        
        if (rdi_3[1].d == 1)
            (**rdi_3)(rdi_3)
            int32_t temp6_1 = *(rdi_3 + 0xc)
            *(rdi_3 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rdi_3 + 8))(rdi_3, 1)
    
    int64_t* var_30
    
    if (var_30 != 0)
        var_30[1].d -= 1
        
        if (var_30[1].d == 1)
            (**var_30)(var_30)
            int32_t temp7_1 = *(var_30 + 0xc)
            *(var_30 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*var_30 + 8))(var_30, 1)

pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_38)

if ((*(*rbx_1 + 0x40))(rbx_1, "FPreLoadScreenManager::EarlyPlayFrameTick()") == 0)
    char i
    
    do
        arg2 = sub_1418b2570(arg1, arg2)
        i = (*(*rbx_1 + 0x40))(rbx_1)
    while (i == 0)

pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(&var_38)
sub_1418b76d0(arg1)
pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(&var_20)
