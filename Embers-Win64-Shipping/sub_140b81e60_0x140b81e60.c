// 函数: sub_140b81e60
// 地址: 0x140b81e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg3
arg3.b = 1
int64_t var_18
int64_t* rax = sub_140b18720(&var_18, arg2, arg3.b)

if (rbx != rax)
    int64_t rcx_1 = *rbx
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    *rbx = *rax
    *rax = 0
    rbx[1].d = rax[1].d
    *(rbx + 0xc) = *(rax + 0xc)
    rax[1] = 0

int64_t rcx_3 = var_18

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

sub_140597df0(&rbx[2], &arg1[0xa])
sub_140597df0(&rbx[4], &arg1[6])
*(rbx + 0x31) = arg1[0x10] s> 0
int64_t* rax_4 = sub_140b18970(&var_18, arg2)
int32_t r8 = rax_4[1].d
int16_t* rdx_3

if (r8 == 0)
    rdx_3 = &data_142d40450
else
    rdx_3 = *rax_4

int32_t rcx_7 = r8 - 1

if (r8 == 0)
    rcx_7 = 0

int32_t rax_5 = sub_1405969c0(rcx_7, rdx_3)
int64_t rcx_8 = var_18
int64_t* rdi
rdi.b = arg1[0x1a] == rax_5

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

rbx[6].b = rdi.b
rax_5.b = *arg1 s< 3
*(rbx + 0x32) = rax_5.b
void* result = &arg1[0x16]

if (&rbx[7] != result)
    int64_t rdi_1 = sx.q(*(result + 8))
    int64_t rsi_1 = *result
    int32_t r8_1 = *(rbx + 0x44)
    rbx[8].d = rdi_1.d
    
    if (rdi_1.d != 0 || r8_1 != 0)
        sub_1405c4a00(&rbx[7], rdi_1.d, r8_1)
        return memcpy(rbx[7], rsi_1, (rdi_1 << 3).d)
    
    *(rbx + 0x44) = 0

return result
