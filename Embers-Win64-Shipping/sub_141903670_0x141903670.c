// 函数: sub_141903670
// 地址: 0x141903670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x198) == 0)
    return 

char rax = 0

if (0 == *(arg1 + 0x1ac))
    *(arg1 + 0x1ac) = 0
else
    rax = *(arg1 + 0x1ac)

if (rax == *(*(arg1 + 0x198) + 0x78))
    return 

sub_1419a21e0(0)

if (sub_140a80f40() != 0)
    int32_t rbx_1 = *(arg1 + 0x18c)
    int128_t var_48 = zx.o(0)
    sub_1418f8350(arg1, &var_48)
    *(arg1 + 0x18c) = rbx_1
    sub_1418f7610(arg1, &var_48)
    return sub_1419a21e0(0) __tailcall

if (data_143f138f4 == 0)
    uint32_t rax_3
    
    if (data_143de5480 != 0)
        rax_3.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143de5480 == 0 || rax_3.b != 0)
        int32_t rbx_2 = *(arg1 + 0x18c)
        int128_t var_38 = zx.o(0)
        sub_1418f8350(arg1, &var_38)
        *(arg1 + 0x18c) = rbx_2
        sub_1418f7610(arg1, &var_38)
        return sub_1419a21e0(0) __tailcall

void var_28
void** rax_5 = sub_1418f7f90(&var_28, nullptr, 0xff)
*(*rax_5 + 0x10) = arg1
void* rcx_8 = *rax_5
int32_t r8_3 = rax_5[2].d
int64_t* rdx_8 = rax_5[1]
int64_t* rbx_3 = *(rcx_8 + 0x20)
int64_t* arg_18 = rbx_3
int32_t* rdi_1 = &rbx_3[9]

if (rbx_3 != 0)
    *rdi_1 += 1
    rbx_3 = arg_18

sub_1405a5630(rcx_8, rdx_8, r8_3, 1)

if (rbx_3 != 0)
    int32_t rax_6 = *rdi_1
    *rdi_1 -= 1
    
    if (rax_6 == 1)
        sub_140a2f6e0(arg_18)

sub_1419a21e0(0)
