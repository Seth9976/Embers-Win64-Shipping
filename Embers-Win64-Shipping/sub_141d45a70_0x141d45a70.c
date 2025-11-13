// 函数: sub_141d45a70
// 地址: 0x141d45a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = __crt_deferred_errno_cache::get(&data_143db7b00)
int16_t* const rbp = &data_142d40450
int16_t* const rdx

if (arg1[1].d == 0)
    rdx = &data_142d40450
else
    rdx = *arg1

if ((*(*rax + 0xd8))(rax, rdx) == 0)
    int16_t* const rdx_1
    
    if (arg1[1].d == 0)
        rdx_1 = &data_142d40450
    else
        rdx_1 = *arg1
    
    (*(*rax + 0xe0))(rax, rdx_1)

arg1[9].d += 1
int32_t r15 = arg1[9].d
int16_t* var_28
int512_t zmm1 = sub_140a2e390(&var_28, u"%d.frame", zx.q(r15))
int32_t var_20
int32_t rbx_2

if (var_20 == 0)
    rbx_2 = 0
else
    rbx_2 = var_20 - 1

int32_t rdi = arg1[1].d
int32_t rax_5

if (rdi == 0)
    rax_5 = rdi + 2

if (rdi != 0 || rbx_2 == 0xffffffff)
    rax_5 = 1

int64_t r14 = *arg1
int32_t rcx_3 = rax_5 + rbx_2
int16_t* var_38 = nullptr

if (rdi != 0 || rcx_3 != 0)
    sub_1405a4c70(&var_38, rdi + rcx_3, 0)
    memcpy(var_38, r14, rdi * 2)
else
    int32_t var_2c_1 = 0

sub_140a2cf70(&var_38, var_28, rbx_2)
int16_t* rcx_7 = var_28

if (rcx_7 != 0)
    zmm1 = sub_140a74f90(rcx_7)

sub_140a464c0()

if (rdi != 0)
    rbp = var_38

char const (* r9)[0x4] = data_14399ea08
int64_t* result = (*(r9 + 0x20))(&data_14399ea08, rbp, 0, r9)

if (result != 0)
    sub_141d45970(result, arg2, zmm1)
    (*(*result + 0x1b8))(result)
    EnterCriticalSection(&arg1[2])
    int64_t rbp_1 = sx.q(arg1[8].d)
    int32_t rax_7 = (rbp_1 + 1).d
    arg1[8].d = rax_7
    
    if (rax_7 s> *(arg1 + 0x44))
        sub_1405a4cf0(&arg1[7])
    
    *(arg1[7] + (rbp_1 << 2)) = r15
    
    if (arg1 != -0x10)
        LeaveCriticalSection(&arg1[2])
    
    result = (**result)(result, 1)

int16_t* rcx_14 = var_38

if (rcx_14 != 0)
    result = sub_140a74f90(rcx_14)

int64_t rcx_15 = arg2[3]

if (rcx_15 == 0)
    return result

return sub_140a74f90(rcx_15)
