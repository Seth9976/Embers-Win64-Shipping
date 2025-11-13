// 函数: sub_14212fe40
// 地址: 0x14212fe40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 8)

if (rcx == 0)
    return 

*(arg1 + 8) = 0
sub_14212fcb0(rcx)

if (sub_140a80f40() != 0)
    *(arg1 + 0x10) = 0
    return 

if (data_143f138f4 == 0)
    if (data_143de5480 == 0)
        *(arg1 + 0x10) = 0
        return 
    
    uint32_t rax_2
    rax_2.b = GetCurrentThreadId() == data_143de5470
    
    if (rax_2.b != 0)
        *(arg1 + 0x10) = 0
        return 

void var_28
void** rax_3 = sub_142122810(&var_28, nullptr, 0xff)
*(*rax_3 + 0x10) = arg1
void* rcx_3 = *rax_3
int32_t r8_1 = rax_3[2].d
int64_t* rdx_1 = rax_3[1]
int64_t* rbx_1 = *(rcx_3 + 0x20)
int64_t* arg_10 = rbx_1
int32_t* rdi_1 = &rbx_1[9]

if (rbx_1 != 0)
    *rdi_1 += 1
    rbx_1 = arg_10

sub_1405a5630(rcx_3, rdx_1, r8_1, 1)

if (rbx_1 == 0)
    return 

int32_t rax = *rdi_1
*rdi_1 -= 1

if (rax == 1)
    sub_140a2f6e0(arg_10)
