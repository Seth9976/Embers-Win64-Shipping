// 函数: sub_140f33d50
// 地址: 0x140f33d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_958
int64_t rax_1 = __security_cookie ^ &var_958
int128_t var_850
sub_140de1590(arg1 + 0x550, sub_140d91e10(&var_850, (zx.o(0)).d, 0.150000006f, 0))
sub_140d952d0(&var_850)
*(arg1 + 0x528) = *(arg1 + 0x1a8)
*(arg1 + 0x529) = *(arg1 + 0x1a9)
sub_1407473e0(arg1 + 0x530, arg1 + 0x1b0)
int64_t* rbx = *(arg1 + 0x10)
char* (* var_918)(void* arg1, char* arg2) = sub_140f4aa40
int32_t var_910 = 0
int64_t rsi = 0

if (rbx != 0)
    int32_t rax_5 = rbx[1].d
    
    if (rax_5 != 0)
        rbx[1].d = rax_5 + 1
        rax_5.b = 1
    
    if (rax_5.b == 0)
        rbx = nullptr
    
    if (rbx != 0)
        int32_t rax_6 = rbx[1].d
        rsi = *(arg1 + 8)
        rbx[1].d = rax_6
        
        if (rax_6 == 0)
            (**rbx)(rbx)
            int32_t temp3_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx + 8))(rbx, 1)

int16_t var_908 = 0x119
int64_t* var_900 = nullptr
int32_t var_8f8 = 0

if (rbx != 0)
    rbx[1].d += 1

void*** rax_9 = sub_1405978f0(0x38, &var_900)

if (rax_9 != 0)
    *rax_9 = &data_142ed8c88
    rax_9[1] = rsi
    rax_9[2] = rbx
    
    if (rbx != 0)
        *(rbx + 0xc) += 1
    
    *(rax_9 + 0x18) = var_918.o
    rax_9[6] = sub_140a387b0()

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx + 8))(rbx, 1)
    
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp4_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rbx + 8))(rbx, 1)

*(arg1 + 0x1a8) = var_908.b
*(arg1 + 0x1a9) = var_908:1.b
sub_1407473e0(arg1 + 0x1b0, &var_900)
sub_140745b20(&var_900)
int64_t* rbx_1 = data_143e243c8
void var_7f0
int128_t* rax_18 = (*(*rbx_1 + 0x30))(rbx_1, 
    *sub_140b58170(&var_7f0, "ErrorReporting.ForegroundColor", 1), 0, &data_1439ae6b8)
int64_t* rbx_2 = data_143e243c8
char var_840 = 0
int64_t rdi_2 = *rbx_2
char var_828 = 1
var_850 = *rax_18
int64_t var_820 = 0
int128_t var_838 = zx.o(0)
int32_t var_818 = 0
int128_t var_878
__builtin_memcpy(&var_878, "\x00\x00\x40\x40\x00\x00\x00\x00\x00\x00\x40\x40\x00\x00\x00\x00\x01", 
    0x11)
int64_t var_860 = 0
int32_t var_858 = 0
var_918 = sub_140f47190
int32_t var_910_1 = 0
void var_7e8
int64_t rax_20 = (*(rdi_2 + 0x48))(rbx_2, *sub_140b58170(&var_7e8, "ErrorReporting.Box", 1), 0)
char var_890 = 1
int64_t var_898 = rax_20
int64_t var_888 = 0
int32_t var_880 = 0
void var_498
int64_t* rax_21 = sub_14068d9d0(&var_498)
sub_140693390(&rax_21[0x4c], &var_850)
rax_21[0x51].b = var_828
sub_140692f90(&rax_21[0x52], &var_820)
sub_140d962e0(&rax_21[0x3b], arg2 + 0x1f8)
rax_21[0x45].b = *(arg2 + 0x248)
sub_140692f90(&rax_21[0x46], arg2 + 0x250)
rax_21[0x6f].b = *(arg2 + 0x260)
*(rax_21 + 0x379) = *(arg2 + 0x261)
sub_140692f90(&rax_21[0x70], arg2 + 0x268)
void*** rax_25 = j_sub_140a82f30(0x7a8)
void*** rbx_3 = rax_25

if (rax_25 == 0)
    rbx_3 = nullptr
else
    rax_25[1].d = 1
    *(rax_25 + 0xc) = 1
    *rbx_3 = &data_142d8b060
    
    if (rbx_3 != -0x10)
        sub_140f66da0(&rbx_3[2])

void* var_8d0 = &rbx_3[2]
sub_14065fa30(&var_8d0, &rbx_3[2])
int64_t var_938 = 0x798
void var_928
void* var_8c0 = &var_928
int128_t zmm1_1 = sub_140e23ed0(&rbx_3[2], "STextBlock")

if (rbx_3 != 0)
    rbx_3[1].d += 1

int128_t var_8a8

if (arg1 + 0x540 == &var_8a8)
label_140f3414a:
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)(rbx_3)
            int32_t temp6_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*rbx_3)[1](rbx_3, 1)
else
    *(arg1 + 0x540) = &rbx_3[2]
    void*** rdi_4 = *(arg1 + 0x548)
    
    if (rbx_3 == rdi_4)
        goto label_140f3414a
    
    *(arg1 + 0x548) = rbx_3
    
    if (rdi_4 != 0)
        rdi_4[1].d -= 1
        
        if (rdi_4[1].d == 1)
            (**rdi_4)(rdi_4)
            int32_t temp8_1 = *(rdi_4 + 0xc)
            *(rdi_4 + 0xc) -= 1
            
            if (temp8_1 == 1)
                (*rdi_4)[1](rdi_4, 1)

void** rax_30 = sub_140697520(&var_8d0, &var_908, rax_21, zmm1_1)
void* var_8b8 = *rax_30
void* rcx_31 = rax_30[1]
void* var_8b0 = rcx_31

if (rcx_31 != 0)
    *(rcx_31 + 8) += 1

void var_7e0
int64_t* rax_31
int128_t zmm6
rax_31, zmm6 = sub_14068c640(&var_7e0)
sub_140693390(&rax_31[0x55], arg2 + 0x1b8)
rax_31[0x5a].b = *(arg2 + 0x1e0)
sub_140692f90(&rax_31[0x5b], arg2 + 0x1e8)
rax_31[0x44] = rax_20
rax_31[0x45].b = 1
sub_140692f90(&rax_31[0x46], &var_888)
var_8a8 = var_918.o
int64_t* rax_32 = sub_140e8f010(&var_918, arg1, &var_8a8)
char var_8e8 = 1
int64_t var_8e0 = 0
int32_t var_8d8 = 0
sub_140692f90(&var_8e0, rax_32)
int32_t var_8f0
rax_31[0x48].d = var_8f0
int32_t var_8ec
*(rax_31 + 0x244) = var_8ec
rax_31[0x49].b = var_8e8
sub_1407473e0(&rax_31[0x4a], &var_8e0)
int128_t zmm1_3 = sub_140745b20(&var_8e0)
char* (* rax_35)(void* arg1, char* arg2)

if (var_910_1 == 0)
    rax_35 = var_918
label_140f342b0:
    
    if (rax_35 != 0)
        zmm1_3 = sub_140a74f90(rax_35)
else
    char* (* rcx_41)(void* arg1, char* arg2) = var_918
    
    if (rcx_41 != 0)
        (*(*rcx_41 + 0x38))(rcx_41, 0)
        rax_35 = var_918
        
        if (rax_35 != 0)
            rax_35 = sub_140a84c80(rax_35, 0, 0)
            var_918 = rax_35
        
        int32_t var_910_2 = 0
        goto label_140f342b0
rax_31[0x36].d = 2
*(rax_31 + 0x1b4) = 2
*(rax_31 + 0x1b8) = zmm6
rax_31[0x39].b = 1
sub_140692f90(&rax_31[0x3a], &var_860)
sub_140f33710(arg1, sub_1406936e0(rax_31, &var_8b8, zmm1_3))
sub_14068fed0(&var_7e0)
int64_t* rbx_4 = var_900

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        (**rbx_4)(rbx_4)
        int32_t temp11_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (temp11_1 == 1)
            (*(*rbx_4 + 8))(rbx_4, 1)

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t temp13_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp13_1 == 1)
            (*rbx_3)[1](rbx_3, 1)

sub_1406913d0(&var_498)
sub_140745b20(&var_888)
sub_140745b20(&var_860)
sub_140745b20(&var_820)
int64_t* rbx_6 = var_838:8.q

if (rbx_6 != 0)
    rbx_6[1].d -= 1
    
    if (rbx_6[1].d == 1)
        (**rbx_6)(rbx_6)
        int32_t temp14_1 = *(rbx_6 + 0xc)
        *(rbx_6 + 0xc) -= 1
        
        if (temp14_1 == 1)
            (*(*rbx_6 + 8))(rbx_6, 1)

int64_t result = (**(arg1 + 0x4b8))(arg1 + 0x4b8, arg2 + 0x1a0)
__security_check_cookie(rax_1 ^ &var_958)
return result
