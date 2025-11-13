// 函数: sub_14094ca40
// 地址: 0x14094ca40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

FPM::~FPM(&arg1[0xe3])
int64_t* rdi = arg1[0xdf]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp2_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rdi + 8))(rdi, 1)

int64_t* rdi_1 = arg1[0xd7]

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp3_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

int32_t rax_5 = arg1[0xd5].d
int64_t* rcx_5 = arg1[0xd4]
int64_t* r8 = rcx_5

if (rax_5 == 0)
    r8 = nullptr

int64_t rax_6

if (r8 != 0)
    rax_6 = *r8
    rcx_5 = r8
label_14094cafa:
    (*(rax_6 + 0x38))(rcx_5, 0)
    int64_t rcx_6 = arg1[0xd4]
    
    if (rcx_6 != 0)
        arg1[0xd4] = sub_140a84c80(rcx_6, 0, 0)
    
    arg1[0xd5].d = 0
else if (rax_5 != 0 && rcx_5 != 0)
    rax_6 = *rcx_5
    goto label_14094cafa
int64_t rcx_7 = arg1[0xd4]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int64_t rcx_8 = arg1[0xcc]

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int32_t i_3 = arg1[0xc5].d
void* rcx_9 = arg1[0xc4]

if (i_3 != 0)
    int64_t* rdi_2 = rcx_9 + 0x20
    int32_t i
    
    do
        int64_t rcx_10 = *rdi_2
        
        if (rcx_10 != 0)
            sub_140a74f90(rcx_10)
        
        rdi_2 = &rdi_2[6]
        i = i_3
        i_3 -= 1
    while (i != 1)
    rcx_9 = arg1[0xc4]

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

arg1[0xb6].d = 0
int64_t rcx_11 = arg1[0xb5]

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

arg1[0xae].d = 0

if (*(arg1 + 0x574) != 0)
    sub_1405a5410(&arg1[0xad], 0)

arg1[0xb3].d = 0xffffffff
*(arg1 + 0x59c) = 0
sub_14059a8e0(&arg1[0xaf], 0)
int64_t rcx_14 = arg1[0xb1]

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

int64_t rcx_15 = arg1[0xad]

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

arg1[0xac].d = 0
int64_t rcx_16 = arg1[0xab]

if (rcx_16 != 0)
    sub_140a74f90(rcx_16)

arg1[0xa4].d = 0

if (*(arg1 + 0x524) != 0)
    sub_1405a5410(&arg1[0xa3], 0)

arg1[0xa9].d = 0xffffffff
*(arg1 + 0x54c) = 0
sub_14059a8e0(&arg1[0xa5], 0)
int64_t rcx_19 = arg1[0xa7]

if (rcx_19 != 0)
    sub_140a74f90(rcx_19)

int64_t rcx_20 = arg1[0xa3]

if (rcx_20 != 0)
    sub_140a74f90(rcx_20)

arg1[0xa1].d = 0
int64_t rcx_21 = arg1[0xa0]

if (rcx_21 != 0)
    sub_140a74f90(rcx_21)

sub_14095d460(&arg1[0x98], 0)
int64_t rcx_23 = arg1[0x9c]

if (rcx_23 != 0)
    sub_140a74f90(rcx_23)

int64_t rcx_24 = arg1[0x98]

if (rcx_24 != 0)
    sub_140a74f90(rcx_24)

arg1[0x97].d = 0
int64_t rcx_25 = arg1[0x96]

if (rcx_25 != 0)
    sub_140a74f90(rcx_25)

sub_14095cde0(&arg1[0x8e], 0)
int64_t rcx_27 = arg1[0x92]

if (rcx_27 != 0)
    sub_140a74f90(rcx_27)

int64_t rcx_28 = arg1[0x8e]

if (rcx_28 != 0)
    sub_140a74f90(rcx_28)

arg1[0x8d].d = 0
int64_t rcx_29 = arg1[0x8c]

if (rcx_29 != 0)
    sub_140a74f90(rcx_29)

sub_1407ece30(&arg1[0x84], 0)
int64_t rcx_31 = arg1[0x88]

if (rcx_31 != 0)
    sub_140a74f90(rcx_31)

int64_t rcx_32 = arg1[0x84]

if (rcx_32 != 0)
    sub_140a74f90(rcx_32)

arg1[0x82].d = 0
int64_t rcx_33 = arg1[0x81]

if (rcx_33 != 0)
    sub_140a74f90(rcx_33)

sub_14095cde0(&arg1[0x79], 0)
int64_t rcx_35 = arg1[0x7d]

if (rcx_35 != 0)
    sub_140a74f90(rcx_35)

int64_t rcx_36 = arg1[0x79]

if (rcx_36 != 0)
    sub_140a74f90(rcx_36)

arg1[0x78].d = 0
int64_t rcx_37 = arg1[0x77]

if (rcx_37 != 0)
    sub_140a74f90(rcx_37)

arg1[0x70].d = 0

if (*(arg1 + 0x384) != 0)
    sub_1405a5130(&arg1[0x6f], 0)

arg1[0x75].d = 0xffffffff
*(arg1 + 0x3ac) = 0
sub_14059a8e0(&arg1[0x71], 0)
int64_t rcx_40 = arg1[0x73]

if (rcx_40 != 0)
    sub_140a74f90(rcx_40)

int64_t rcx_41 = arg1[0x6f]

if (rcx_41 != 0)
    sub_140a74f90(rcx_41)

arg1[0x6e].d = 0
int64_t rcx_42 = arg1[0x6d]

if (rcx_42 != 0)
    sub_140a74f90(rcx_42)

sub_14094b720(&arg1[0x65])
int64_t rcx_44 = arg1[0x63]

if (rcx_44 != 0)
    sub_140a74f90(rcx_44)

int64_t rcx_45 = arg1[0x61]

if (rcx_45 != 0)
    sub_140a74f90(rcx_45)

int64_t rcx_46 = arg1[0x5f]

if (rcx_46 != 0)
    sub_140a74f90(rcx_46)

int64_t rcx_47 = arg1[0x5d]

if (rcx_47 != 0)
    sub_140a74f90(rcx_47)

int64_t rcx_48 = arg1[0x3f]

if (rcx_48 != 0)
    sub_140a74f90(rcx_48)

arg1[0x3e].d = 0
int64_t rcx_49 = arg1[0x3d]

if (rcx_49 != 0)
    sub_140a74f90(rcx_49)

arg1[0x36].d = 0

if (*(arg1 + 0x1b4) != 0)
    sub_140679b80(&arg1[0x35], 0)

arg1[0x3b].d = 0xffffffff
*(arg1 + 0x1dc) = 0
sub_14059a8e0(&arg1[0x37], 0)
int64_t rcx_52 = arg1[0x39]

if (rcx_52 != 0)
    sub_140a74f90(rcx_52)

int64_t rcx_53 = arg1[0x35]

if (rcx_53 != 0)
    sub_140a74f90(rcx_53)

int64_t rcx_54 = arg1[0x33]

if (rcx_54 != 0)
    sub_140a74f90(rcx_54)

int64_t* rdi_7 = arg1[0x2d]

if (rdi_7 != 0)
    rdi_7[1].d -= 1
    
    if (rdi_7[1].d == 1)
        (**rdi_7)(rdi_7)
        int32_t temp7_1 = *(rdi_7 + 0xc)
        *(rdi_7 + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*(*rdi_7 + 8))(rdi_7, 1)

int64_t* rdi_8 = arg1[0x2b]

if (rdi_8 != 0)
    rdi_8[1].d -= 1
    
    if (rdi_8[1].d == 1)
        (**rdi_8)(rdi_8)
        int32_t temp9_1 = *(rdi_8 + 0xc)
        *(rdi_8 + 0xc) -= 1
        
        if (temp9_1 == 1)
            (*(*rdi_8 + 8))(rdi_8, 1)

int64_t* rdi_9 = arg1[0x27]

if (rdi_9 != 0)
    rdi_9[1].d -= 1
    
    if (rdi_9[1].d == 1)
        (**rdi_9)(rdi_9)
        int32_t temp11_1 = *(rdi_9 + 0xc)
        *(rdi_9 + 0xc) -= 1
        
        if (temp11_1 == 1)
            (*(*rdi_9 + 8))(rdi_9, 1)

int64_t* rdi_10 = arg1[0x25]

if (rdi_10 != 0)
    rdi_10[1].d -= 1
    
    if (rdi_10[1].d == 1)
        (**rdi_10)(rdi_10)
        int32_t temp13_1 = *(rdi_10 + 0xc)
        *(rdi_10 + 0xc) -= 1
        
        if (temp13_1 == 1)
            (*(*rdi_10 + 8))(rdi_10, 1)

int64_t* rcx_63 = arg1[0x23]

if (rcx_63 != 0)
    int32_t temp12_1 = *(rcx_63 + 0xc)
    *(rcx_63 + 0xc) -= 1
    
    if (temp12_1 == 1)
        (*(*rcx_63 + 8))(rcx_63, 1)

int64_t* rcx_64 = arg1[0x21]

if (rcx_64 != 0)
    (**rcx_64)(rcx_64, 1)

int32_t i_2 = arg1[0x1f].d
void* rcx_65 = arg1[0x1e]

if (i_2 != 0)
    int64_t* rsi = rcx_65 + 8
    int32_t i_1
    
    do
        int64_t* rdi_11 = *rsi
        
        if (rdi_11 != 0)
            rdi_11[1].d -= 1
            
            if (rdi_11[1].d == 1)
                (**rdi_11)(rdi_11)
                int32_t temp16_1 = *(rdi_11 + 0xc)
                *(rdi_11 + 0xc) -= 1
                
                if (temp16_1 == 1)
                    (*(*rdi_11 + 8))(rdi_11, 1)
        
        rsi = &rsi[3]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
    rcx_65 = arg1[0x1e]

if (rcx_65 != 0)
    sub_140a74f90(rcx_65)

arg1[0x1d].d = 0
int64_t rcx_68 = arg1[0x1c]

if (rcx_68 != 0)
    sub_140a74f90(rcx_68)

sub_14095d2c0(&arg1[0x14], 0)
int64_t rcx_70 = arg1[0x18]

if (rcx_70 != 0)
    sub_140a74f90(rcx_70)

int64_t rcx_71 = arg1[0x14]

if (rcx_71 != 0)
    sub_140a74f90(rcx_71)

int64_t rcx_72 = arg1[0x12]

if (rcx_72 != 0)
    sub_140a74f90(rcx_72)

int64_t rcx_73 = arg1[8]

if (rcx_73 != 0)
    sub_140a74f90(rcx_73)

int64_t rcx_74 = arg1[6]

if (rcx_74 != 0)
    sub_140a74f90(rcx_74)

sub_140b0bbe0(&arg1[5])
return sub_140d163b0(arg1) __tailcall
