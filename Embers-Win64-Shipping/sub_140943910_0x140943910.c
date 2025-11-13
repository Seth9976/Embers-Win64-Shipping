// 函数: sub_140943910
// 地址: 0x140943910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[4] != 0)
    sub_140944100(arg1)

void var_38
*(arg1 + 0x50) = *sub_140b214c0(&var_38)
sub_14093eda0(&arg1[0xc], 0)
int64_t* rax_1 = j_sub_140a82f30(0x38)
int64_t* rdi = rax_1
int32_t arg_8

if (rax_1 == 0)
    rdi = nullptr
else
    __builtin_memset(rax_1, 0, 0x28)
    int64_t* rax_3 = sub_140fc6160(sub_140b58260(&arg_8, u"WINDOWS", 1))
    int64_t r8 = *rax_3
    (*(r8 + 0x90))(rax_3, &rdi[5], r8)

int32_t rdx_1 = arg1[1].d
arg1[4] = rdi
char rax_4 = sub_140941230(rdi, rdx_1)
int64_t* rcx_6 = arg1[4]
char result = 1

if (rax_4 == 0)
    result = 0

if (rcx_6 != 0 && result != 0)
    int64_t rax_5 = *rcx_6
    int64_t* rcx_7 = rcx_6[2]
    int32_t rdi_1 = arg2[2].d
    int64_t rdx_2 = *arg2
    arg_8 = 0
    
    if ((*(*rcx_7 + 0x50))(rcx_7, rdx_2, zx.q(rdi_1), &arg_8, rax_5) == 0 || arg_8 != rdi_1)
        return 0
    
    arg1[7].d = *(arg1 + 0x14)
    arg1[5].d = 2
    arg1[9].d = 0
    
    if (*(arg1 + 0x4c) s<= 0xffffffff)
        sub_1405c5510(&arg1[8], 0)
    
    uint32_t count = arg2[2].d
    int64_t rsi_1 = sx.q(arg1[9].d)
    int64_t r14_1 = *arg2
    int32_t rax_8 = rsi_1.d + count
    arg1[9].d = rax_8
    
    if (rax_8 s> *(arg1 + 0x4c))
        sub_1405daba0(&arg1[8])
    
    memcpy(rsi_1 + arg1[8], r14_1, count)
    int64_t r9_1 = *arg1
    *(arg1 + 0x3c) = arg1[3].d
    (*(r9_1 + 0x28))(arg1, &arg_8, arg3, r9_1)
    int64_t r9_2 = *arg1
    (*(r9_2 + 0x48))(arg1, &arg_8, arg4, r9_2)

return result
