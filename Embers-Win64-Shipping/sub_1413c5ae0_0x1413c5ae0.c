// 函数: sub_1413c5ae0
// 地址: 0x1413c5ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142f77098
arg1[0x31] = 0
arg1[3] = &data_142f77130

if (*(arg1 + 0x12c) s< 0)
    sub_1413e1860(&arg1[6], 0)
else
    void* rax_1 = arg1[0x24]
    void* rbx_1 = &arg1[6]
    int32_t i_5 = arg1[0x25].d
    
    if (rax_1 != 0)
        rbx_1 = rax_1
    
    if (i_5 != 0)
        int32_t i
        
        do
            *(rbx_1 + 0x48) = 0
            int64_t rcx = *(rbx_1 + 0x40)
            
            if (rcx != 0)
                sub_140a74f90(rcx)
            
            sub_1413c3ab0(rbx_1)
            rbx_1 += 0x50
            i = i_5
            i_5 -= 1
        while (i != 1)
    
    arg1[0x25].d = 0

int32_t i_1 = 0
void* rsi_1 = &arg1[0x57]

do
    j_sub_140a74f90(*rsi_1)
    i_1 += 1
    rsi_1 += 8
while (i_1 u< 2)

sub_1413deaa0(arg1[0x162])
sub_1413deaa0(arg1[0x1a8])
int64_t* rcx_6 = arg1[0x1a9]
arg1[0x1a8] = 0
sub_1413deaa0(rcx_6)
arg1[0x1a9] = 0
sub_141223c70(arg1)
sub_1413de9b0(arg1[0x188])
sub_1413de9b0(arg1[0x18b])
void*** rbx_2 = arg1[0x18c]

if (sub_140a80f40() == 0)
    if (data_143f138f4 == 0)
        if (data_143de5480 == 0)
            goto label_1413c5c00
        
        uint32_t rax_3
        rax_3.b = GetCurrentThreadId() == data_143de5470
        
        if (rax_3.b != 0)
            goto label_1413c5c00
        
        goto label_1413c5c4d
    
label_1413c5c4d:
    void var_58
    void** rax_4 = sub_1413daf40(&var_58, nullptr, 0xff)
    *(*rax_4 + 0x10) = rbx_2
    void* rcx_13 = *rax_4
    int32_t r8_1 = rax_4[2].d
    int64_t* rdx_2 = rax_4[1]
    int64_t* rbx_3 = *(rcx_13 + 0x20)
    int64_t* arg_10 = rbx_3
    int32_t* rsi_2 = &rbx_3[9]
    
    if (rbx_3 != 0)
        *rsi_2 += 1
        rbx_3 = arg_10
    
    sub_1405a5630(rcx_13, rdx_2, r8_1, 1)
    
    if (rbx_3 != 0)
        int32_t rax_5 = *rsi_2
        *rsi_2 -= 1
        
        if (rax_5 == 1)
            sub_140a2f6e0(arg_10)
else
label_1413c5c00:
    
    if (rbx_2 != 0)
        sub_141303cd0(rbx_2, 1)

arg1[0x252].d = 0
int64_t rcx_15 = arg1[0x251]

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

sub_1413c3c80(&arg1[0x249])
sub_1413c4960(&arg1[0x227])
sub_1413c4960(&arg1[0x20d])
sub_1413c4960(&arg1[0x1f3])
sub_1405d1550(&arg1[0x1f2])
sub_1407808b0(&arg1[0x1ee])
sub_140837d00(&arg1[0x1ea])
sub_1405ec8a0(&arg1[0x1ec])
sub_1405d1550(&arg1[0x1eb])
sub_14081c9d0(&arg1[0x1ea])
sub_1408081b0(&arg1[0x1e6])
sub_1405ec8a0(&arg1[0x1e8])
sub_1405d1550(&arg1[0x1e7])
sub_1405d1550(&arg1[0x1e6])
sub_1408081b0(&arg1[0x1e2])
sub_1405ec8a0(&arg1[0x1e4])
sub_1405d1550(&arg1[0x1e3])
sub_1405d1550(&arg1[0x1e2])
sub_1405ec8a0(&arg1[0x1e1])
sub_1405d1550(&arg1[0x1e0])
sub_1405ec8a0(&arg1[0x1df])
sub_1405d1550(&arg1[0x1de])
sub_1405ec8a0(&arg1[0x1dd])
sub_1405d1550(&arg1[0x1dc])
int64_t i_6 = 4
void* rbp = &arg1[0x1e0]
int64_t i_4 = 2
int64_t i_2

do
    rbp -= 0x60
    `vector destructor iterator'(rbp, 0x18, 2, sub_1413c4810)
    i_2 = i_6
    i_6 -= 1
while (i_2 != 1)
int64_t* rcx_41 = arg1[0x1a7]

if (rcx_41 != 0)
    (*(*rcx_41 + 0x38))(rcx_41)

sub_1413c45b0(&arg1[0x19d])
sub_1413ca320(&arg1[0x19c], arg1[0x19c])
int64_t* rsi_3 = arg1[0x199]

if (rsi_3 != 0)
    rsi_3[0x1a].d -= 1
    
    if (rsi_3[0x1a].d == 1)
        sub_1405d16e0(rsi_3, nullptr)
        sub_14081d930(&rsi_3[1], nullptr)
        sub_1405d16e0(&rsi_3[2], nullptr)
        sub_141096260(&rsi_3[3], 0)
        sub_141096040(&rsi_3[0xd], 0)

int64_t* rsi_4 = arg1[0x196]

if (rsi_4 != 0)
    rsi_4[0x1a].d -= 1
    
    if (rsi_4[0x1a].d == 1)
        sub_1405d16e0(rsi_4, nullptr)
        sub_14081d930(&rsi_4[1], nullptr)
        sub_1405d16e0(&rsi_4[2], nullptr)
        sub_141096260(&rsi_4[3], 0)
        sub_141096040(&rsi_4[0xd], 0)

int64_t* rcx_54 = arg1[0x195]

if (rcx_54 != 0)
    (*(*rcx_54 + 0x38))(rcx_54)

int64_t* rcx_55 = arg1[0x194]

if (rcx_55 != 0)
    (*(*rcx_55 + 0x38))(rcx_55)

int64_t* rcx_56 = arg1[0x193]

if (rcx_56 != 0)
    (*(*rcx_56 + 0x38))(rcx_56)

int64_t rcx_57 = arg1[0x191]

if (rcx_57 != 0)
    sub_140a74f90(rcx_57)

int64_t rcx_58 = arg1[0x18f]

if (rcx_58 != 0)
    sub_140a74f90(rcx_58)

sub_1405d1550(&arg1[0x18e])
int64_t* rcx_60 = arg1[0x185]

if (rcx_60 != 0)
    (*(*rcx_60 + 0x38))(rcx_60)

int64_t* rcx_61 = arg1[0x184]

if (rcx_61 != 0)
    (*(*rcx_61 + 0x38))(rcx_61)

sub_1405d1550(&arg1[0x183])
sub_1405d1550(&arg1[0x182])
int64_t* rcx_64 = arg1[0x17c]

if (rcx_64 != 0)
    (*(*rcx_64 + 0x38))(rcx_64)

int64_t* rcx_65 = arg1[0x17b]

if (rcx_65 != 0)
    (*(*rcx_65 + 0x38))(rcx_65)

int64_t* rcx_66 = arg1[0x17a]

if (rcx_66 != 0)
    (*(*rcx_66 + 0x38))(rcx_66)

int64_t* rcx_67 = arg1[0x179]

if (rcx_67 != 0)
    (*(*rcx_67 + 0x38))(rcx_67)

int64_t* rcx_68 = arg1[0x178]

if (rcx_68 != 0)
    (*(*rcx_68 + 0x38))(rcx_68)

int64_t* rcx_69 = arg1[0x177]

if (rcx_69 != 0)
    (*(*rcx_69 + 0x38))(rcx_69)

int64_t* rcx_70 = arg1[0x176]

if (rcx_70 != 0)
    (*(*rcx_70 + 0x38))(rcx_70)

int64_t* rcx_71 = arg1[0x175]

if (rcx_71 != 0)
    (*(*rcx_71 + 0x38))(rcx_71)

int64_t* rcx_72 = arg1[0x174]

if (rcx_72 != 0)
    (*(*rcx_72 + 0x38))(rcx_72)

arg1[0x171].d = 0
int64_t rcx_73 = arg1[0x170]

if (rcx_73 != 0)
    sub_140a74f90(rcx_73)

sub_1413c35a0(&arg1[0x168])
int64_t i_3 = 2
void* r14 = &arg1[0x165]

do
    int64_t* rcx_75 = *(r14 - 8)
    r14 -= 8
    i_3 -= 1
    
    if (rcx_75 != 0)
        (*(*rcx_75 + 0x38))(rcx_75)
while (i_3 != 0)

sub_1413c4c10(&arg1[0x9a])
int64_t* rcx_77 = arg1[0x97]

if (rcx_77 != 0)
    rcx_77[1].d -= 1
    
    if (rcx_77[1].d == 1)
        (**rcx_77)(rcx_77, zx.q((i_3 + 1).d))

int64_t rcx_78 = arg1[0x94]

if (rcx_78 != 0)
    sub_140a74f90(rcx_78)

int64_t* rcx_79 = arg1[0x92]

if (rcx_79 != 0)
    (*(*rcx_79 + 0x38))(rcx_79)

sub_141300130(&arg1[0x85])
int64_t* rsi_5 = arg1[0x83]

if (rsi_5 != 0)
    sub_141412eb0(rsi_5)
    j_sub_140a74f90(rsi_5)

sub_1405ae180(&arg1[0x79])
int64_t rcx_84 = arg1[0x75]

if (rcx_84 != 0)
    sub_140a74f90(rcx_84)

int64_t rcx_85 = arg1[0x71]

if (rcx_85 != 0)
    sub_140a74f90(rcx_85)

int64_t rcx_86 = arg1[0x6d]

if (rcx_86 != 0)
    sub_140a74f90(rcx_86)

int64_t rcx_87 = arg1[0x69]

if (rcx_87 != 0)
    sub_140a74f90(rcx_87)

void* rsi_6 = &arg1[0x67]

do
    int64_t rcx_88 = *(rsi_6 - 0x10)
    rsi_6 -= 0x10
    i_4 -= 1
    
    if (rcx_88 != 0)
        sub_140a74f90(rcx_88)
while (i_4 != 0)

arg1[0x62].d = 0
int64_t rcx_89 = arg1[0x61]

if (rcx_89 != 0)
    sub_140a74f90(rcx_89)

sub_1413e1ba0(&arg1[0x59], 0)
int64_t rcx_91 = arg1[0x5d]

if (rcx_91 != 0)
    sub_140a74f90(rcx_91)

int64_t rcx_92 = arg1[0x59]

if (rcx_92 != 0)
    sub_140a74f90(rcx_92)

arg1[0x56].d = 0
int64_t rcx_93 = arg1[0x55]

if (rcx_93 != 0)
    sub_140a74f90(rcx_93)

sub_1413c3920(&arg1[0x4d])
arg1[0x4c].d = 0
int64_t rcx_95 = arg1[0x4b]

if (rcx_95 != 0)
    sub_140a74f90(rcx_95)

arg1[0x44].d = 0

if (*(arg1 + 0x224) != 0)
    sub_140638cc0(&arg1[0x43], 0)

arg1[0x49].d = 0xffffffff
*(arg1 + 0x24c) = 0
sub_14059a8e0(&arg1[0x45], 0)
int64_t rcx_98 = arg1[0x47]

if (rcx_98 != 0)
    sub_140a74f90(rcx_98)

int64_t rcx_99 = arg1[0x43]

if (rcx_99 != 0)
    sub_140a74f90(rcx_99)

int64_t rcx_100 = arg1[0x2f]

if (rcx_100 != 0)
    sub_140a74f90(rcx_100)

arg1[0x27] = &data_142f77058
sub_14081c9d0(&arg1[0x2e])
int64_t* rcx_102 = arg1[0x2b]

if (rcx_102 != 0)
    (*(*rcx_102 + 0x38))(rcx_102)

sub_1419948a0(&arg1[0x27])
sub_1405d1550(&arg1[0x26])
sub_1413c3040(&arg1[6])
sub_1419948a0(&arg1[3])
*arg1 = &data_142f76de8
return &data_142f76de8
