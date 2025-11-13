// 函数: sub_14118c8f0
// 地址: 0x14118c8f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2f8
int64_t rax_1 = __security_cookie ^ &var_2f8
void* rcx = data_1439b7108
void*** var_2d8
int32_t* rax_3
int32_t rbx_1
int32_t r14_1
int32_t r15_1

if (rcx != 0 && data_1439b7110 != 0 && data_1439b7118 != 0)
    int64_t* rcx_1 = *(rcx + 0x10)
    rbx_1 = data_1439b5f70
    r15_1 = data_1439b5f74
    r14_1 = data_1439b5f78
    rax_3 = (*(*rcx_1 + 0x30))(rcx_1, &var_2d8)

if (rcx == 0 || data_1439b7110 == 0 || data_1439b7118 == 0 || *rax_3 != rbx_1 || rax_3[1] != r15_1
        || rax_3[2] != r14_1)
    void var_2c0
    sub_1419928d0(&var_2c0, arg2)
    int32_t var_158
    int64_t rbx_2 = sx.q(var_158)
    var_2d8 = sub_1411826f0(&var_2c0, arg3, 0)
    int64_t* var_2d0_1 = &data_1439b7108
    char var_2c8_1 = 1
    int32_t rax_5 = (rbx_2 + 1).d
    int64_t var_160
    int32_t var_154
    
    if (rax_5 s> var_154)
        sub_14119a720(&var_160, rbx_2.d)
    
    int64_t rax_6 = var_160
    int64_t rcx_5 = rbx_2 * 3
    *(rax_6 + (rcx_5 << 3)) = var_2d8.o
    *(rax_6 + (rcx_5 << 3) + 0x10) = var_2c8_1.q
    int64_t rbx_3 = sx.q(rax_5)
    var_2d8 = sub_1411826f0(&var_2c0, arg3, 1)
    int64_t* var_2d0_2 = &data_1439b7110
    char var_2c8_2 = 1
    int32_t rax_8 = (rbx_3 + 1).d
    
    if (rax_8 s> var_154)
        sub_14119a720(&var_160, rbx_3.d)
    
    int64_t rax_9 = var_160
    int64_t rcx_8 = rbx_3 * 3
    *(rax_9 + (rcx_8 << 3)) = var_2d8.o
    *(rax_9 + (rcx_8 << 3) + 0x10) = var_2c8_2.q
    int64_t rbx_4 = sx.q(rax_8)
    var_2d8 = sub_1411823a0(&var_2c0, arg3)
    int64_t* var_2d0_3 = &data_1439b7118
    char var_2c8_3 = 1
    int32_t rax_11 = (rbx_4 + 1).d
    int32_t var_158_3 = rax_11
    
    if (rax_11 s> var_154)
        sub_14119a720(&var_160, rbx_4.d)
    
    int64_t rax_12 = var_160
    int64_t rcx_11 = rbx_4 * 3
    *(rax_12 + (rcx_11 << 3)) = var_2d8.o
    *(rax_12 + (rcx_11 << 3) + 0x10) = var_2c8_3.q
    sub_14199ef00(&var_2c0)
    sub_1410eb9e0(&var_2c0)

__builtin_memset(arg1, 0, 0x18)
int64_t* rcx_14 = data_1439b7108
int64_t* rbx_5 = *arg1
*arg1 = rcx_14

if (rcx_14 != 0)
    (*(*rcx_14 + 0x30))()

if (rbx_5 != 0)
    (*(*rbx_5 + 0x38))(rbx_5)

int64_t* rcx_16 = data_1439b7110
int64_t* rbx_6 = arg1[1]
arg1[1] = rcx_16

if (rcx_16 != 0)
    (*(*rcx_16 + 0x30))()

if (rbx_6 != 0)
    (*(*rbx_6 + 0x38))(rbx_6)

int64_t* rcx_18 = data_1439b7118
int64_t* rbx_7 = arg1[2]
arg1[2] = rcx_18

if (rcx_18 != 0)
    int64_t rdx_8 = *rcx_18
    (*(rdx_8 + 0x30))(rcx_18, rdx_8)

if (rbx_7 != 0)
    int64_t rdx_9 = *rbx_7
    (*(rdx_9 + 0x38))(rbx_7, rdx_9)

__security_check_cookie(rax_1 ^ &var_2f8)
return arg1
