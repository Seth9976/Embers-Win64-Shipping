// 函数: sub_1407e5630
// 地址: 0x1407e5630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
void* rax = arg1[1]
void* arg_18
int64_t* rdx
int32_t rbx

if (rax == 0)
    arg_8.q = 0
    rdx = &arg_8
    rbx = 2
else
    void* rax_1 = *(rax + 0x10)
    arg_18 = rax_1
    
    if (rax_1 != 0)
        *(rax_1 + 8) += 1
    
    rdx = &arg_18
    rbx = 1

sub_1405d1600(*arg1 + 0xd0, rdx)

if ((rbx.b & 2) != 0)
    rbx &= 0xfffffffd
    sub_1405d1550(&arg_8)

if ((rbx.b & 1) != 0)
    rbx &= 0xfffffffe
    sub_1405d1550(&arg_18)

void* rax_2 = arg1[1]
void* var_28
int64_t arg_20
int64_t* rdx_1
char rdi

if (rax_2 == 0)
    arg_20 = 0
    rdx_1 = &arg_20
    rdi = 8
else
    void* rax_3 = *(rax_2 + 0x18)
    var_28 = rax_3
    
    if (rax_3 != 0)
        *(rax_3 + 8) += 1
    
    rdx_1 = &var_28
    rdi = 4

char rdi_1 = rdi | rbx.b
sub_1405d1600(*arg1 + 0xc8, rdx_1)

if ((rdi_1 & 8) != 0)
    sub_1405d1550(&arg_20)

if ((rdi_1 & 4) != 0)
    sub_1405d1550(&var_28)

void* result = *arg1
*(result + 0xd8) = arg1[2]
return result
