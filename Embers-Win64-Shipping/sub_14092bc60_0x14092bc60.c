// 函数: sub_14092bc60
// 地址: 0x14092bc60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int64_t rcx = 0
void* rbx = *(arg1 + 0x320)
int64_t var_a0
__builtin_memset(&var_a0, 0, 0x12)
int32_t var_8c
__builtin_memset(&var_8c, 0, 0x30)
int32_t var_5c = 0x80
int32_t var_58 = 0xffffffff
int32_t var_54 = 0
int64_t var_48 = 0

if (rbx != 0)
    int64_t rdi_1 = sx.q(*(rbx + 0x10))
    int32_t rax_2 = (rdi_1 + 1).d
    *(rbx + 0x10) = rax_2
    
    if (rax_2 s> *(rbx + 0x14))
        sub_14092f900(rbx + 8)
    
    int64_t rcx_2 = rdi_1 * 0xb8
    void*** rbx_1
    
    if (rcx_2 == neg.q(*(rbx + 8)))
        rbx_1 = nullptr
    else
        rbx_1 = sub_1409198b0(rcx_2 + *(rbx + 8))
    
    int64_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    rbx_1[0x16].d = int.d((float.d(performanceCount) f* data_143d796f8
        + 16777216.0 f- *(arg1 + 0x330)) * 1000.0)
    int64_t var_c0 = arg2
    int32_t r8
    int32_t var_b8_1 = r8
    int32_t var_b4_1 = 0
    char var_b0_1 = 0
    sub_14092da80(arg1, &var_c0, rbx_1)
    rcx = var_48

int32_t var_40 = 0
void** const var_a8 = &data_142e20cf0

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t var_88
int64_t result = sub_140925830(&var_88, 0)
int64_t var_68

if (var_68 != 0)
    result = sub_140a74f90(var_68)

int64_t rcx_8 = var_88

if (rcx_8 != 0)
    result = sub_140a74f90(rcx_8)

__security_check_cookie(rax_1 ^ &var_e8)
return result
