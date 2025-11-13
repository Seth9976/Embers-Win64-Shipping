// 函数: sub_142c87c50
// 地址: 0x142c87c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r13 = *arg1
void* const rax
void* rdi
void* const r9
int64_t r14

if (arg2 == 0)
    rdi = arg1[0x3e]
    rax = 0x4b20
    arg1[0x3f]
    r9 = 0x478
    r14 = 0x4ba0
else
    rdi = arg1[0x2d]
    rax = 0x4b60
    arg1[0x2e]
    r9 = 0x460
    r14 = 0x4bb0

void* r12 = r9 + arg1
data_143ccb8a0(*r12)
*r12 = 0
void* const rbp = &data_1434cce10
void* const rax_2 = &data_1434cce10

if (rdi != 0)
    rax_2 = rdi

int64_t* rsi_1 = rax + r13

if (*rsi_1 != 0)
    char* rax_3
    
    if (*(r14 + r13 + 0xe) != 0)
        rax_3 = strchr(arg4, 0x3f)
    
    int64_t rax_5
    
    if (*(r14 + r13 + 0xe) == 0 || rax_3 == 0)
        rax_5 = data_143ccb8b0(arg4)
    else
        rax_5, arg5 = sub_142c563e0("%.*s", rax_3 - arg4, arg5)
    
    if (rax_5 == 0)
        return 0x1b
    
    void var_48
    int64_t arg_8
    int32_t rax_6
    int512_t zmm2
    rax_6, zmm2 = sub_142c8af30(r13, rax_2, arg5, arg3, rax_5, rsi_1, &arg_8, &var_48)
    data_143ccb8a0(rax_5)
    
    if (rax_6 != 0)
        return zx.q(rax_6)
    
    if (arg2 != 0)
        rbp = "Proxy-"
    
    int64_t rax_8 = sub_142c563e0("%sAuthorization: Digest %s\r\n", rbp, zmm2)
    int64_t rcx_5 = arg_8
    *r12 = rax_8
    data_143ccb8a0(rcx_5)
    
    if (*r12 == 0)
        return 0x1b
    
    *(r14 + r13 + 0xc) = 1
else
    *(r14 + r13 + 0xc) = 0

return 0
