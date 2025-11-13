// 函数: sub_141ba1000
// 地址: 0x141ba1000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_141b717f0(&data_1439ec4c0, arg2) != 0)
    return 0

int64_t rdi = sx.q(data_1439ec4e8)
int32_t rax_2 = (rdi + 1).d
bool cond:0 = rax_2 s<= data_1439ec4ec
data_1439ec4e8 = rax_2

if (not(cond:0))
    sub_14083a490(&data_1439ec4c0, rdi.d)

void* rax_3 = data_1439ec4e0
void* rcx = &data_1439ec4c0
char arg_10 = 0

if (rax_3 != 0)
    rcx = rax_3

char* var_10 = &arg_10
void** (* var_18)(void** arg1, int64_t arg2, int64_t* arg3, int64_t* arg4) = sub_141b971c0
*(rcx + (rdi << 3)) = arg2
void* result = sub_141b6ccc0(&arg1[0x29], arg2, &var_18)

if (arg1[0x27] != 0)
    int64_t r8_1 = *arg1
    (*(r8_1 + 0x2c0))(arg1, result, r8_1)

int32_t rcx_4 = data_1439ec4e8

if (0 != 0)
    void* rax_4 = data_1439ec4e0
    void* r9_1 = &data_1439ec4c0
    
    if (rax_4 != 0)
        r9_1 = rax_4
    
    memmove(r9_1 + (sx.q(rcx_4 - 1) << 3), r9_1 + (sx.q(rcx_4) << 3), 0 << 3)
    rcx_4 = data_1439ec4e8

data_1439ec4e8 = rcx_4 - 1
sub_141bdc8d0(&data_1439ec4c0)
return result
