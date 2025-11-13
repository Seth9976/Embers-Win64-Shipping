// 函数: sub_140e53f80
// 地址: 0x140e53f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142ed7390
arg1[0x23] = &data_142ed7560
sub_140e8cfa0()
sub_140e8cec0()
int64_t* rcx = arg1[0x86]

if (rcx != 0)
    (**rcx)(rcx, 1)
    arg1[0x86] = 0

int64_t* rcx_1 = data_143db18d0

if (rcx_1 == 0)
    sub_140a53c40()
    rcx_1 = data_143db18d0

int64_t r8
r8.b = 1
int64_t* rax_3 = (*(*rcx_1 + 0xb0))(rcx_1, u"Slate.EnableGlobalInvalidation", r8)

if (rax_3 != 0)
    int64_t r8_1 = *rax_3
    int64_t* var_18 = nullptr
    int32_t var_10_1 = 0
    (*(r8_1 + 0xa8))(rax_3, &var_18, r8_1)
    int64_t* rax_5
    
    if (var_10_1 == 0)
        rax_5 = var_18
    label_140e54060:
        
        if (rax_5 != 0)
            sub_140a74f90(rax_5)
    else
        int64_t* rcx_3 = var_18
        
        if (rcx_3 != 0)
            (*(*rcx_3 + 0x38))(rcx_3, 0)
            rax_5 = var_18
            
            if (rax_5 != 0)
                rax_5 = sub_140a84c80(rax_5, 0, 0)
                var_18 = rax_5
            
            int32_t var_10_2 = 0
            goto label_140e54060

int64_t* rdi = arg1[0xc1]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp1_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi + 8))(rdi, 1)

arg1[0xbf].d = 0
int64_t rcx_8 = arg1[0xbe]

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

sub_140e53330(&arg1[0xb6])
sub_140596d80(&arg1[0xb4])
sub_140596d80(&arg1[0xb1])
DeleteCriticalSection(&arg1[0xab])
sub_140596eb0(&arg1[0xa8])
sub_140596eb0(&arg1[0xa5])
sub_140596eb0(&arg1[0xa2])
sub_140596eb0(&arg1[0x9f])
sub_140596eb0(&arg1[0x9c])
sub_140596eb0(&arg1[0x99])
int64_t rcx_19 = arg1[0x97]

if (rcx_19 != 0)
    sub_140a74f90(rcx_19)

int64_t* rdi_1 = arg1[0x94]

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp4_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

sub_140596eb0(&arg1[0x8e])
sub_140745b20(&arg1[0x8a])
sub_140745b20(&arg1[0x88])
sub_140745b20(&arg1[0x82])
sub_140745b20(&arg1[0x80])
sub_140745b20(&arg1[0x7e])
sub_140e52ed0(&arg1[0x79])
sub_140745b20(&arg1[0x76])
sub_140745b20(&arg1[0x74])
sub_140745b20(&arg1[0x72])
int64_t* rcx_32 = arg1[0x71]

if (rcx_32 != 0)
    int32_t temp3_1 = *(rcx_32 + 0xc)
    *(rcx_32 + 0xc) -= 1
    
    if (temp3_1 == 1)
        (*(*rcx_32 + 8))(rcx_32, 1)

sub_140745b20(&arg1[0x6e])
int64_t* rdi_2 = arg1[0x6a]

if (rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        (**rdi_2)(rdi_2)
        int32_t temp7_1 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*(*rdi_2 + 8))(rdi_2, 1)

int64_t* rcx_36 = arg1[0x68]

if (rcx_36 != 0)
    int32_t temp6_1 = *(rcx_36 + 0xc)
    *(rcx_36 + 0xc) -= 1
    
    if (temp6_1 == 1)
        (*(*rcx_36 + 8))(rcx_36, 1)

sub_140e52dc0(&arg1[0x65])
sub_140596eb0(&arg1[0x61])
int64_t* rcx_39 = arg1[0x5c]

if (rcx_39 != 0)
    int32_t temp8_1 = *(rcx_39 + 0xc)
    *(rcx_39 + 0xc) -= 1
    
    if (temp8_1 == 1)
        (*(*rcx_39 + 8))(rcx_39, 1)

sub_140d94cb0(&arg1[0x59])
sub_140596d80(&arg1[0x57])
sub_140e53d10(&arg1[0x3a])
sub_140596d80(&arg1[0x38])
sub_140596d80(&arg1[0x36])
int64_t* rcx_45 = arg1[0x35]

if (rcx_45 != 0)
    int32_t temp9_1 = *(rcx_45 + 0xc)
    *(rcx_45 + 0xc) -= 1
    
    if (temp9_1 == 1)
        (*(*rcx_45 + 8))(rcx_45, 1)

sub_140596d80(&arg1[0x32])
sub_140596d80(&arg1[0x30])
arg1[0x2d].d = 0
int64_t rcx_48 = arg1[0x2c]

if (rcx_48 != 0)
    sub_140a74f90(rcx_48)

sub_1407ece30(&arg1[0x24], 0)
int64_t rcx_50 = arg1[0x28]

if (rcx_50 != 0)
    sub_140a74f90(rcx_50)

int64_t rcx_51 = arg1[0x24]

if (rcx_51 != 0)
    sub_140a74f90(rcx_51)

arg1[0x23] = &data_142ebf368
return sub_140d958a0(arg1) __tailcall
