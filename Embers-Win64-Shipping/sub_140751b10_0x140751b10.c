// 函数: sub_140751b10
// 地址: 0x140751b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
void* rax_2
int64_t rax_3
void* rdx

if (arg3 != 0)
    rax_2 = sub_141b3a9e0()
    rdx = *(arg3 + 0x10)
    rax_3 = sx.q(*(rax_2 + 0x38))

if (arg3 == 0 || rax_3.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_3 << 3)) != rax_2 + 0x30)
    arg2[0x10].b &= 0xfe
    arg2[0x10].b |= 2
else
    void var_138
    void** var_108
    void*** rax_6 = sub_140743960(&var_108, sub_140745220(&var_138, arg1 + 0x68), arg3 + 0xe0)
    arg2[0x10].b &= 0xfc
    int64_t* rax_7 = sub_140a82f30(0xd8, 8)
    arg2[0x10].b |= 1
    int64_t* rbx_1 = arg2
    bool cond:0_1 = (arg2[0x10].b & 2) != 0
    *arg2 = rax_7
    
    if (not(cond:0_1))
        rbx_1 = rax_7
    
    *rbx_1 = &data_142d4b9d8
    rbx_1[1].b = rax_6[1].b
    *rbx_1 = &data_142d4ba68
    rbx_1[2].b = rax_6[2].b
    *(rbx_1 + 0x14) = *(rax_6 + 0x14)
    *rbx_1 = &data_142d9aae0
    sub_140745220(&rbx_1[4], &rax_6[4])
    void* rcx_4 = &rbx_1[0x13]
    *rbx_1 = &data_142d9ad30
    rbx_1[9] = &data_142d9acb8
    rbx_1[0xa] = 0
    rbx_1[0xa] = rax_6[0xa]
    rax_6[0xa] = 0
    rbx_1[0xb].d = rax_6[0xb].d
    *(rbx_1 + 0x5c) = *(rax_6 + 0x5c)
    rax_6[0xb] = 0
    rbx_1[0xc].d = rax_6[0xc].d
    *(rbx_1 + 0x64) = *(rax_6 + 0x64)
    rbx_1[0xd] = 0
    rbx_1[0xd] = rax_6[0xd]
    rax_6[0xd] = 0
    rbx_1[0xe].d = rax_6[0xe].d
    *(rbx_1 + 0x74) = *(rax_6 + 0x74)
    rax_6[0xe] = 0
    __builtin_memset(&rbx_1[0xf], 0, 0x20)
    *(rcx_4 + 0x10) = 0
    *(rcx_4 + 0x18) = 0
    *(rcx_4 + 0x1c) = 0x80
    void* rax_19 = *(rcx_4 + 0x10)
    
    if (rax_19 != 0)
        rcx_4 = rax_19
    
    *rcx_4 = 0
    *(rcx_4 + 8) = 0
    rbx_1[0x17].d = 0xffffffff
    *(rbx_1 + 0xbc) = 0
    rbx_1[0x19] = 0
    rbx_1[0x1a].d = 0
    void** var_c0
    sub_140746700(&var_c0)
    int64_t var_d0
    
    if (var_d0 != 0)
        sub_140a74f90(var_d0)

__security_check_cookie(rax_1 ^ &var_158)
return arg2
