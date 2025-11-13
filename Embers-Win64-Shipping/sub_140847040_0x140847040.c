// 函数: sub_140847040
// 地址: 0x140847040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142ddb490
sub_140862460(arg1)

while (arg1[0x197].d != 0)
    void* rdi_1 = arg1[0x196 - 1][sx.q(arg1[0x197].d)]
    int64_t* rcx_1 = *(rdi_1 + 0x28)
    
    if (rcx_1 == 0)
        if (*(rdi_1 + 0x6bc) != 0)
            sub_1408622c0(rdi_1)
            sub_14084fd50(rdi_1)
        
        if (*(rdi_1 + 0x6e8) - 3 u> 1)
            sub_14084b160(rdi_1)
    else
        sub_140752310(rcx_1)

while (arg1[0x19d].d != 0)
    void* rdi_2 = arg1[0x19c - 1][sx.q(arg1[0x19d].d)]
    int64_t* rcx_6 = *(rdi_2 + 0x28)
    
    if (rcx_6 == 0)
        if (*(rdi_2 + 0x6bc) != 0)
            sub_1408622c0(rdi_2)
            sub_14084fd50(rdi_2)
        
        if (*(rdi_2 + 0x6e8) - 3 u> 1)
            sub_14084b160(rdi_2)
    else
        sub_140752310(rcx_6)

arg1[0x197].d = 0

if (*(arg1 + 0xcbc) != 0)
    sub_1405c5570(&arg1[0x196], 0)

arg1[0x19d].d = 0

if (*(arg1 + 0xcec) != 0)
    sub_1405c5570(&arg1[0x19c], 0)

sub_140865dd0(arg1[7])
sub_1408400b0(&arg1[0x8f])
sub_1408400b0(&arg1[0xfc])
int64_t rcx_15 = arg1[0x1cd]

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

int64_t* rcx_16 = arg1[0x1cc]

if (rcx_16 != 0)
    rcx_16[9].d -= 1
    
    if (rcx_16[9].d == 1)
        sub_140a2f6e0(rcx_16)

int64_t rcx_17 = arg1[0x1ca]

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

if (*(arg1 + 0xe2c) != 0)
    *(arg1 + 0xe2c) = 0

sub_14081ccd0(&arg1[0x1ae])
sub_140846110(&arg1[0x1ab])
int64_t rcx_20 = arg1[0x1a7]

if (rcx_20 != 0)
    sub_140a74f90(rcx_20)

sub_140846580(&arg1[0x1a0])
int64_t rcx_22 = arg1[0x19e]

if (rcx_22 != 0)
    sub_140a74f90(rcx_22)

int64_t rcx_23 = arg1[0x19c]

if (rcx_23 != 0)
    sub_140a74f90(rcx_23)

int64_t rcx_24 = arg1[0x19a]

if (rcx_24 != 0)
    sub_140a74f90(rcx_24)

int64_t rcx_25 = arg1[0x198]

if (rcx_25 != 0)
    sub_140a74f90(rcx_25)

int64_t rcx_26 = arg1[0x196]

if (rcx_26 != 0)
    sub_140a74f90(rcx_26)

sub_140846380(&arg1[0x18e])
sub_140846620(&arg1[0x18c])
sub_140846380(&arg1[0x18a])
sub_140846380(&arg1[0x188])
sub_140846be0(&arg1[0x16c])
int64_t rcx_32 = arg1[0x16a]

if (rcx_32 != 0)
    sub_140a74f90(rcx_32)

int64_t rcx_33 = arg1[0x168]

if (rcx_33 != 0)
    sub_140a74f90(rcx_33)

int64_t rcx_34 = arg1[0x166]

if (rcx_34 != 0)
    sub_140a74f90(rcx_34)

int64_t rcx_35 = arg1[0x164]

if (rcx_35 != 0)
    sub_140a74f90(rcx_35)

sub_140846e80(&arg1[0xf7])
sub_140846e80(&arg1[0x8a])
sub_1407e48f0(&arg1[0x70])
sub_1407e48f0(&arg1[0x56])
sub_1407e48f0(&arg1[0x3c])
sub_1407e48f0(&arg1[0x22])
sub_1407e48f0(&arg1[8])
int64_t* result = &data_142d44d70
*arg1 = &data_142d44d70
void* rcx_43 = data_143e1a338

if (rcx_43 != 0 && arg1[1].b != 0)
    result = sub_140bb6e00(rcx_43, arg1)

int64_t* rcx_44 = arg1[3]

if (rcx_44 != 0)
    int32_t rdi_3 = *(rcx_44 + 0xc)
    *(rcx_44 + 0xc) -= 1
    
    if (rdi_3 == 1 && rcx_44 != 0)
        return (*(*rcx_44 + 8))(rcx_44, zx.q(rdi_3))

return result
