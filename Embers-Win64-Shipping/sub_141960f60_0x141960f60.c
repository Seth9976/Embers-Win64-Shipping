// 函数: sub_141960f60
// 地址: 0x141960f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
*arg1 = arg2
int64_t rbx = 0
*(arg1 + 8) = *arg3
*(arg1 + 0x18) = arg3[1]
*(arg1 + 0x28) = arg3[2]
*(arg1 + 0x38) = arg3[3]
*(arg1 + 0x48) = arg3[4]
*(arg1 + 0x58) = arg3[5]
arg1[0xd] = arg3[6].q
arg1[0xe] = 0
arg1[0xf] = 0
arg1[0x10] = 0
arg1[0x11] = 0
__builtin_memset(&arg1[0x12], 0, 0x20)
int64_t var_58
int64_t* rax_2 = sub_141968860(arg1, &var_58, arg3 + 8)

if (&arg1[0xe] != rax_2)
    int64_t rcx = arg1[0xe]
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    arg1[0xe] = *rax_2
    *rax_2 = 0
    arg1[0xf].d = rax_2[1].d
    *(arg1 + 0x7c) = *(rax_2 + 0xc)
    rax_2[1] = 0

int64_t rcx_1 = var_58

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t* rax_6 = sub_141968860(arg1, &var_58, arg3 + 0x18)

if (&arg1[0x10] != rax_6)
    int64_t rcx_3 = arg1[0x10]
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    arg1[0x10] = *rax_6
    *rax_6 = 0
    arg1[0x11].d = rax_6[1].d
    *(arg1 + 0x8c) = *(rax_6 + 0xc)
    rax_6[1] = 0

int64_t rcx_4 = var_58

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t* rax_10 = sub_141968860(arg1, &var_58, arg3 + 0x28)
void* rcx_6 = &arg1[0x12]

if (rcx_6 != rax_10)
    int64_t rax_11 = *rcx_6
    
    if (rax_11 != 0)
        sub_140a74f90(rax_11)
        rcx_6 = &arg1[0x12]
    
    *rcx_6 = *rax_10
    *rax_10 = 0
    *(rcx_6 + 8) = rax_10[1].d
    *(rcx_6 + 0xc) = *(rax_10 + 0xc)
    rax_10[1] = 0

int64_t rcx_8 = var_58

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int64_t* rax_15 = sub_141968860(arg1, &var_58, arg3 + 0x38)
void* rcx_10 = &arg1[0x14]

if (rcx_10 != rax_15)
    int64_t rax_16 = *rcx_10
    
    if (rax_16 != 0)
        sub_140a74f90(rax_16)
        rcx_10 = &arg1[0x14]
    
    *rcx_10 = *rax_15
    *rax_15 = 0
    *(rcx_10 + 8) = rax_15[1].d
    *(rcx_10 + 0xc) = *(rax_15 + 0xc)
    rax_15[1] = 0

int64_t rcx_12 = var_58

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

int64_t* r8_4 = arg1[0xe]
int64_t rax_20 = sx.q(arg1[0xf].d)
int64_t r9 = *(arg3 + 0x48)
var_58 = r8_4
int32_t var_50 = rax_20.d
*(arg1 + 0x10) = var_58.o

if (r9 == 0)
    void* rcx_13 = &r8_4[rax_20]
    r9 = 0x4f1a08f64cae0c3d
    int64_t r11_1 = 0
    uint64_t r10_4 = (rcx_13 - r8_4 + 7) u>> 3
    
    if (r8_4 u> rcx_13)
        r10_4 = 0
    
    if (r10_4 != 0)
        do
            void* rax_21 = *r8_4
            r8_4 = &r8_4[1]
            r11_1 += 1
            var_58 = (*(rax_21 + 0x18)).q
            r9 ^= (r9 << 6) + var_58 + (r9 u>> 2) - -0x9e3779b9
        while (r11_1 != r10_4)

arg1[0xa] = r9
int64_t r9_1 = arg1[0x10]
int64_t rax_25 = sx.q(arg1[0x11].d)
int64_t r8_5 = arg3[5].q
var_58 = r9_1
int32_t var_50_1 = rax_25.d
*(arg1 + 0x20) = var_58.o

if (r8_5 == 0)
    int64_t rcx_18 = r9_1 + (rax_25 << 3)
    r8_5 = 0x4f1a08f64cae0c3d
    uint64_t r10_8 = (rcx_18 - r9_1 + 7) u>> 3
    
    if (r9_1 u> rcx_18)
        r10_8 = 0
    
    if (r10_8 != 0)
        do
            void* rax_26 = *r9_1
            r9_1 += 8
            rbx += 1
            var_58 = (*(rax_26 + 0x18)).q
            r8_5 ^= (r8_5 << 6) + var_58 + (r8_5 u>> 2) - -0x9e3779b9
        while (rbx != r10_8)

arg1[0xb] = r8_5
var_58 = arg1[0x12]
int32_t var_50_2 = arg1[0x13].d
int64_t rax_32 = *(arg3 + 0x58)
*(arg1 + 0x30) = var_58.o

if (rax_32 == 0)
    rax_32 = sub_141967f10(&arg1[1], &arg1[6], 0x4f1a08f64cae0c3d)

arg1[0xc] = rax_32
int64_t rax_33 = arg3[6].q
var_58 = arg1[0x14]
int32_t var_50_3 = arg1[0x15].d
*(arg1 + 0x40) = var_58.o

if (rax_33 == 0)
    rax_33 = sub_141967f10(&arg1[1], &arg1[8], 0x4f1a08f64cae0c3d)

arg1[0xd] = rax_33
__security_check_cookie(rax_1 ^ &var_78)
return arg1
