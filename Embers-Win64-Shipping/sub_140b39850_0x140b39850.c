// 函数: sub_140b39850
// 地址: 0x140b39850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int64_t performanceCount[0x2]
QueryPerformanceCounter(&performanceCount)
sub_140b43850(arg1)
sub_140b3d080(*(arg1 + 0xe8))
int32_t var_4c = 0x80
int64_t var_78
__builtin_memset(&var_78, 0, 0x2c)
int32_t var_44 = 0
int64_t var_38 = 0
int32_t var_30 = 0
int32_t var_48 = 0xffffffff
sub_140b36410(arg1 + 0xb0, &var_78)
sub_140b39220(*(arg1 + 0xe8), &var_78)
int64_t* rbx = *(arg1 + 0xe8)

if (rbx != 0)
    sub_140b306a0(rbx)
    j_sub_140a74f90(rbx)

*(arg1 + 0xe8) = 0
sub_140b4ab50(&data_143de7120, 2)
int64_t* i = &data_143de7178:4

do
    *(i - 4) = 0
    
    if (*i != 0)
        sub_1405c5570(i - 0xc, 0)
    
    i = &i[2]
while (i s< &data_143de7198:4)

data_143de7190 = 0
*(arg1 + 0x13c) += 1
int64_t r14
r14.b = 0
int32_t rax_2 = *(arg1 + 0x130)
int32_t rcx_8 = *(arg1 + 0x13c)
int64_t rdi = sx.q(rax_2 - 1)

if (rax_2 - 1 s>= 0)
    int64_t rbx_2 = rdi << 4
    int64_t temp1_1
    
    do
        int64_t rax_4 = *(arg1 + 0x128)
        
        if (*(rbx_2 + rax_4 + 8) == 0)
            r14.b = 1
        else
            int64_t* rcx_9 = *(rbx_2 + rax_4)
            
            if (rcx_9 == 0)
                r14.b = 1
            else if ((*(*rcx_9 + 0x50))(rcx_9, arg1 + 0x20) == 0)
                r14.b = 1
        
        rbx_2 -= 0x10
        temp1_1 = rdi
        rdi -= 1
    while (temp1_1 - 1 s>= 0)
    rcx_8 = *(arg1 + 0x13c)

*(arg1 + 0x13c) = rcx_8 - 1

if (r14.b != 0)
    sub_140599630(arg1 + 0x128, 0)

QueryPerformanceCounter(&performanceCount)
data_143de817a = 0
int32_t var_30_1 = 0

if (var_38 != 0)
    sub_140a74f90(var_38)

int64_t result = sub_1405e1b50(&var_78, 0)
int64_t var_58

if (var_58 != 0)
    result = sub_140a74f90(var_58)

int64_t rcx_15 = var_78

if (rcx_15 != 0)
    result = sub_140a74f90(rcx_15)

__security_check_cookie(rax_1 ^ &var_a8)
return result
