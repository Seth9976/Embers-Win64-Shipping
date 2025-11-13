// 函数: sub_1406cfbb0
// 地址: 0x1406cfbb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int64_t* var_d8 = arg1
void* rdx = nullptr
void* var_48 = nullptr
int64_t rbx = -1

if (arg2 == 0)
    int64_t var_40_1 = 0
    int32_t var_38_1 = 0
else
    int64_t rax_2 = -1
    
    do
        rax_2 += 1
    while (arg2[rax_2] != 0)
    
    int32_t var_38 = rax_2.d
    int32_t rbp_1 = (rax_2 + 1).d
    
    if (rbp_1 u> 0x80 && rbp_1 != 0)
        void* rax_3 = sub_140a84c80(0, sx.q(rbp_1), 0)
        rdx = rax_3
        var_48 = rax_3
    
    void var_c8
    void* rcx = &var_c8
    
    if (rdx != 0)
        rcx = rdx
    
    sub_14060abb0(rcx, rbp_1, arg2, rbp_1, 0x3f)
    rdx = rcx

do
    rbx += 1
while (arg2[rbx] != 0)

sub_1406cfcc0(arg1, rdx, sx.q(rbx.d))

if (var_48 != 0)
    sub_140a74f90(var_48)

__security_check_cookie(rax_1 ^ &var_108)
return arg1
