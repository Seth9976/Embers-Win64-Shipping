// 函数: sub_141f758a0
// 地址: 0x141f758a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143f0f21f == 0)
    return 

uint64_t rcx = zx.q(data_143f0f1a0)

if (((*(&data_143f025fc + sx.q(rcx.d) * 0x14) u>> 0x13).b & 1) == 0
        || not(test_bit(data_143f13cd8, rcx)) || arg1[0x4d] == 0)
    return 

if (arg1[0x61] == 0)
    void*** rax_3 = j_sub_140a82f30(0x1d0)
    void*** rbx_1 = rax_3
    
    if (rax_3 == 0)
        rbx_1 = rax_3
    else
        memset(rax_3, 0, 0x1d0)
        rbx_1[1].d = 0xffffffff
        *(rbx_1 + 0xc) = 4
        *rbx_1 = &data_14327bb08
        rbx_1[2] = &data_14327bb48
        rbx_1[3].b = 0
        __builtin_memset(&rbx_1[5], 0, 0x1c)
        __builtin_memset(&rbx_1[9], 0, 0x1c)
        __builtin_memset(&rbx_1[0xd], 0, 0x1c)
        __builtin_memset(&rbx_1[0x11], 0, 0x1c)
        __builtin_memset(&rbx_1[0x15], 0, 0x1c)
        __builtin_memset(&rbx_1[0x19], 0, 0x1c)
        __builtin_memset(&rbx_1[0x1d], 0, 0x1c)
        __builtin_memset(&rbx_1[0x21], 0, 0x1c)
        __builtin_memset(&rbx_1[0x25], 0, 0x1c)
        __builtin_memset(&rbx_1[0x29], 0, 0x1c)
        __builtin_memset(&rbx_1[0x2d], 0, 0x1c)
        __builtin_memset(&rbx_1[0x31], 0, 0x1c)
        __builtin_memset(&rbx_1[0x35], 0, 0x1c)
        rbx_1[0x39].d = 0
    
    int64_t* rbp_1 = arg1[0x61]
    arg1[0x61] = rbx_1
    
    if (rbx_1 != 0)
        sub_1422b8cc0(rbx_1)
    
    if (rbp_1 != 0)
        sub_1422ce7f0(rbp_1)
    
    sub_141997e80(arg1[0x61])
    sub_141ee8490(arg1)

char rax_4 = sub_140a80f40()

if (rax_4 != 0)
    return sub_1422b9e40(arg1[0x61], arg1[0x4d]) __tailcall

if (data_143f138f4 == rax_4)
    if (data_143de5480 == rax_4)
        return sub_1422b9e40(arg1[0x61], arg1[0x4d]) __tailcall
    
    uint32_t rax_5
    rax_5.b = GetCurrentThreadId() == data_143de5470
    
    if (rax_5.b != 0)
        return sub_1422b9e40(arg1[0x61], arg1[0x4d]) __tailcall

void var_38
void** rax_7 = sub_141f5ace0(&var_38, nullptr, 0xff)
*(*rax_7 + 0x10) = arg1
void* rcx_10 = *rax_7
int32_t r8_2 = rax_7[2].d
int64_t* rdx_4 = rax_7[1]
int64_t* rbx_2 = *(rcx_10 + 0x20)
int64_t* arg_18 = rbx_2
int32_t* rdi_1 = &rbx_2[9]

if (rbx_2 != 0)
    *rdi_1 += 1
    rbx_2 = arg_18

sub_1405a5630(rcx_10, rdx_4, r8_2, 1)

if (rbx_2 == 0)
    return 

int32_t rsi_1 = *rdi_1
*rdi_1 -= 1

if (rsi_1 == 1)
    sub_140a2f6e0(arg_18)
