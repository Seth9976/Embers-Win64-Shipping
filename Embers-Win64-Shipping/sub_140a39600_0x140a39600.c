// 函数: sub_140a39600
// 地址: 0x140a39600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int64_t rdi_1 = sx.q(arg4) << 0xe
int64_t rbx_1 = *(arg1 + 0x30) - rdi_1

if (rbx_1 s>= 0x4000)
    rbx_1 = 0x4000

int64_t rbp = *(arg2 + (sx.q(arg3) << 3) + 0xf0)
int64_t* rcx = *arg6
int64_t* rax_4 = rcx

if (rcx != 0)
    rcx[9].d += 1
    rax_4 = rcx

void*** var_58 = nullptr
int64_t* var_40 = rax_4

if (rcx != 0)
    rcx[9].d += 1

void** const var_48 = &data_142e52200
int64_t (* var_68)(int64_t** arg1, int64_t arg2, int64_t* arg3) = sub_140a37e10

if (rcx != 0)
    rcx[9].d -= 1
    
    if (rcx[9].d == 1)
        sub_140a2f6e0(rcx)

int64_t* rcx_2 = *(arg1 + 0x38)
int64_t result = (*(*rcx_2 + 0x10))(rcx_2, rdi_1, rbx_1, zx.q(arg5), &var_68, rbp, rcx)

if (var_68 != 0)
    void** const* rcx_3 = &var_48
    
    if (var_58 != 0)
        rcx_3 = var_58
    
    result = (*rcx_3)[2](rcx_3)

__security_check_cookie(rax_1 ^ &var_a8)
return result
