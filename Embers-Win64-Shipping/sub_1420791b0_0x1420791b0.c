// 函数: sub_1420791b0
// 地址: 0x1420791b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15e10(arg1)
*arg1 = &data_1432afeb8
void*** rax = j_sub_140a82f30(0x180)
void*** rdi = rax

if (rax == 0)
    rdi = nullptr
else
    rax[1].d = 1
    *(rax + 0xc) = 1
    *rdi = &data_142e665d8
    sub_140a61630(&rdi[2])

void*** var_50 = rdi
void* var_58 = &rdi[2]
sub_1408ff2f0(&var_58, &rdi[2])
arg1[5] = &rdi[2]
arg1[6] = rdi

if (rdi != 0)
    rdi[1].d += 1
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t rbx_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rbx_1 == 1)
            (*rdi)[1](rdi, zx.q(rbx_1))

int64_t var_28
int64_t* rax_4 = sub_140d21e10(arg1, &var_28, 0)
int16_t* rdx_3

if (rax_4[1].d == 0)
    rdx_3 = &data_142d40450
else
    rdx_3 = *rax_4

sub_140b58260(&arg1[7], rdx_3, 1)
int64_t rcx_6 = var_28

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

sub_140a8cee0(arg1[5], arg1)
void*** rdx_4
rdx_4.b = (arg1[1].d & 0x1400) == 0
sub_1407c87d0(arg1[5], rdx_4.b)
int64_t arg_8 = arg1[3]
int64_t var_48
sub_140b63b70(&arg_8, &var_48)
sub_140a8c5a0(arg1[5], &var_48)
int64_t rcx_11 = var_48

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

if (((arg1[1].d u>> 4).b & 1) == 0)
    sub_14208b720()
    EnterCriticalSection(&data_143f47d50)
    int64_t rbp_1 = sx.q(data_143f47d48.d)
    int32_t rax_8 = (rbp_1 + 1).d
    data_143f47d48.d = rax_8
    
    if (rax_8 s> data_143f47d48:4.d)
        sub_1405a4d70(&data_143f47d40)
    
    *(data_143f47d40 + (rbp_1 << 3)) = arg1
    LeaveCriticalSection(&data_143f47d50)
    int64_t var_38 = arg1[5]
    void* rax_11 = arg1[6]
    void* var_30_1 = rax_11
    
    if (rax_11 != 0)
        *(rax_11 + 8) += 1
    
    int64_t rbx_2 = arg1[7]
    sub_140aae6a0()
    sub_140abe080(&data_143db9ce0, rbx_2, &var_38)

return arg1
