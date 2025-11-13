// 函数: sub_14063fab0
// 地址: 0x14063fab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = sub_141802500()

if (result == 0 || *(result + 0x44) == 0)
    result.b = 0
    return result

int64_t var_28 = 0
int32_t var_20 = 0
sub_1405947f0(&var_28, 0x15)
int32_t rax = var_20 + 0x15
var_20 = rax

if (rax s> 0)
    sub_140594770(&var_28)

sub_1405a7220(var_28, 0x15, "http://api.ipify.org", 0x15, 0x3f)
int64_t* var_18
(*(*result + 0x40))(result, &var_18)
int64_t var_48 = 0
int32_t var_40 = 0
sub_1405947f0(&var_48, 4)
int32_t rax_2 = var_40 + 4
var_40 = rax_2

if (rax_2 s> 0)
    sub_140594770(&var_48)

sub_1405a7220(var_48, 4, "GET", 4, 0x3f)
int64_t* rcx_7 = var_18
(*(*rcx_7 + 0x48))(rcx_7, &var_48)
int64_t rcx_8 = var_48

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int64_t* rcx_9 = var_18
(*(*rcx_9 + 0x50))(rcx_9, &var_28)
int64_t (* var_38)(int64_t* arg1, void* arg2, int64_t* arg3, char arg4) = nullptr
int32_t var_30 = 0
sub_1405947f0(&var_38, 0x15)
int32_t rax_5 = var_30 + 0x15
var_30 = rax_5

if (rax_5 s> 0)
    sub_140594770(&var_38)

sub_1405a7220(var_38, 0x15, "VictoryBPLibrary/1.0", 0x15, 0x3f)
var_48 = 0
int32_t var_40_1 = 0
sub_1405947f0(&var_48, 0xb)
int32_t rax_6 = var_40_1 + 0xb
var_40_1 = rax_6

if (rax_6 s> 0)
    sub_140594770(&var_48)

sub_1405a7220(var_48, 0xb, "User-Agent", 0xb, 0x3f)
int64_t* rcx_16 = var_18
(*(*rcx_16 + 0x78))(rcx_16, &var_48, &var_38)
int64_t rcx_17 = var_48

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

int64_t (* rcx_18)(int64_t* arg1, void* arg2, int64_t* arg3, char arg4) = var_38

if (rcx_18 != 0)
    sub_140a74f90(rcx_18)

var_48 = 0
int32_t var_40_2 = 0
sub_1405947f0(&var_48, 0xa)
int32_t rax_8 = var_40_2 + 0xa
var_40_2 = rax_8

if (rax_8 s> 0)
    sub_140594770(&var_48)

sub_1405a7220(var_48, 0xa, "text/html", 0xa, 0x3f)
var_38 = nullptr
int32_t var_30_1 = 0
sub_1405947f0(&var_38, 0xd)
int32_t rax_9 = var_30_1 + 0xd
var_30_1 = rax_9

if (rax_9 s> 0)
    sub_140594770(&var_38)

sub_1405a7220(var_38, 0xd, "Content-Type", 0xd, 0x3f)
int64_t* rcx_25 = var_18
(*(*rcx_25 + 0x78))(rcx_25, &var_38, &var_48)
int64_t (* rcx_26)(int64_t* arg1, void* arg2, int64_t* arg3, char arg4) = var_38

if (rcx_26 != 0)
    sub_140a74f90(rcx_26)

int64_t rcx_27 = var_48

if (rcx_27 != 0)
    sub_140a74f90(rcx_27)

int64_t* rcx_28 = var_18
var_38 = sub_140631450
var_30_1 = 0
int64_t* rax_12 = (*(*rcx_28 + 0x90))(rcx_28)
void*** rax_13 = sub_140a84c80(0, 0x30, 0)
void*** rbx_1 = rax_13

if (rax_13 != 0)
    *rbx_1 = &data_142d6d160
    sub_140d3a3a0(&rbx_1[1], arg1)
    *(rbx_1 + 0x10) = var_38.o
    rbx_1[5] = sub_140a387b0()
    *rbx_1 = &data_142d6d1b8

if (&var_38 == rax_12)
    goto label_14063fdce

if (rbx_1 == 0)
    if (rax_12[1].d != 0)
        int64_t* rcx_38 = *rax_12
        
        if (rcx_38 != 0)
            (*(*rcx_38 + 0x38))(rcx_38, 0)
            int64_t rcx_39 = *rax_12
            
            if (rcx_39 != 0)
                *rax_12 = sub_140a84c80(rcx_39, 0, 0)
            
            rax_12[1].d = 0
    
    goto label_14063fdee

(*rbx_1)[8](rbx_1, rax_12)
label_14063fdce:

if (rbx_1 != 0)
    (*rbx_1)[7](rbx_1, 0)
    rbx_1 = sub_140a84c80(rbx_1, 0, 0)
label_14063fdee:
    
    if (rbx_1 != 0)
        sub_140a74f90(rbx_1)

int64_t* rcx_34 = var_18
int64_t* rdi
rdi.b = (*(*rcx_34 + 0x88))(rcx_34) != 0
int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        (**var_10)(var_10)
        int32_t temp1_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp1_1 == 1)
            int64_t r8_2 = *var_10
            (*(r8_2 + 8))(var_10, 1, r8_2)

int64_t rcx_37 = var_28

if (rcx_37 != 0)
    sub_140a74f90(rcx_37)

return zx.q(rdi.b)
