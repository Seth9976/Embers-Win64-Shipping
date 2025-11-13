// 函数: sub_141972650
// 地址: 0x141972650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = sub_141975e10(arg1)
EnterCriticalSection(&data_143f02140)
int32_t arg_18
sub_1419711d0(&data_143f02168, &arg_18, arg2)
int64_t rdx_1 = sx.q(arg_18)
void* const rax_2

if (rdx_1.d == 0xffffffff)
    rax_2 = nullptr
else
    rax_2 = rdx_1 * 0x78 + data_143f02168

int64_t* rbx = rax_2 + 0x68

if (rax_2 == 0)
    rbx = nullptr

if (rbx != 0)
    void* rbx_1 = *rbx
    int64_t rax_3 = data_143de5458
    
    if (*(rbx_1 + 0x28) != rax_3)
        *(rbx_1 + 0x20) += 1
        *(rbx_1 + 0x28) = rax_3
    
    LeaveCriticalSection(&data_143f02140)
    return rbx_1

LeaveCriticalSection(&data_143f02140)
int64_t rbx_2 = data_143f02010
int64_t rcx

if (data_143de5480 == 0)
    rcx = 0
else
    rcx.b = GetCurrentThreadId() != data_143de5470

int32_t rdx_2 = *(rbx_2 + (rcx << 2))

if (rdx_2 s> 0 && data_143f021b8 != data_143de5458)
    sub_14198a1e0(&data_143f02140, rdx_2)

void*** rax_7 = j_sub_140a82f30(0x30)
void*** rdi = rax_7

if (rax_7 == 0)
    rdi = nullptr
else
    __builtin_memset(&rax_7[1], 0, 0x28)
    *rdi = &data_143001f20

if (rax == 0)
    int64_t* rcx_7 = data_143f0f180
    void var_60
    (*(*rcx_7 + 0x708))(rcx_7, &var_60, arg2)
    sub_141962b90(&rdi[3], &var_60)
    sub_141962470(&var_60)
else
    void var_40
    void** rax_8 = sub_141969370(&var_40, nullptr, 0xff)
    sub_141960f60(*rax_8 + 0x10, rdi, arg2)
    void* rcx_4 = *rax_8
    int32_t r8_2 = rax_8[2].d
    int64_t* rdx_4 = rax_8[1]
    int64_t* rbx_4 = *(rcx_4 + 0xc8)
    int64_t* var_68 = rbx_4
    
    if (rbx_4 != 0)
        rbx_4[9].d += 1
    
    sub_141987180(rcx_4, rdx_4, r8_2, 1)
    
    if (&rdi[1] != &var_68)
        int64_t* rcx_5 = rdi[1]
        rdi[1] = rbx_4
        
        if (rcx_5 != 0)
            rcx_5[9].d -= 1
            
            if (rcx_5[9].d == 1)
                sub_140a2f6e0(rcx_5)
    else if (rbx_4 != 0)
        rbx_4[9].d -= 1
        
        if (rbx_4[9].d == 1)
            sub_140a2f6e0(var_68)
    
    if (rdi[1] != 0)
        sub_14195b8b0(arg1 + 0x58, &rdi[1])

void*** var_58 = rdi
EnterCriticalSection(&data_143f02140)
int32_t* var_50 = arg2
void**** var_48 = &var_58
void arg_20
sub_14195c660(&data_143f02168, &arg_20, &var_50, nullptr)
void*** rax_12 = var_58
int64_t rcx_10 = data_143de5458

if (rax_12[5] != rcx_10)
    rax_12[4] += 1
    rax_12[5] = rcx_10

LeaveCriticalSection(&data_143f02140)
return rdi
