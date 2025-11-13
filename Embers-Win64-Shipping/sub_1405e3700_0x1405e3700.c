// 函数: sub_1405e3700
// 地址: 0x1405e3700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x28)

if (rbx == 0)
    return 

*(arg1 + 0x28) = 0
int32_t temp1_1 = *(rbx + 0x44)
*(rbx + 0x44) -= 1

if (temp1_1 == 1)
    if ((*(rbx + 0x4c) & 1) != 0)
        void* rax_1 = *(rbx + 0x28)
        sub_1405e3820(zx.q(*(rax_1 + 0x58)) * 0x50 + &data_143cd84b0, rax_1 + 0x70)
        *(rbx + 0x4c) &= 0xfffffffe
    
    *(rbx + 0x48) = 1
    sub_141997870(rbx + 0x38)

char rax_3 = sub_140a80f40()

if (rax_3 != 0)
    *(arg1 + 0x30) = 0
    return 

if (data_143f138f4 == rax_3)
    if (data_143de5480 == rax_3)
        *(arg1 + 0x30) = 0
        return 
    
    uint32_t rax_4
    rax_4.b = GetCurrentThreadId() == data_143de5470
    
    if (rax_4.b != 0)
        *(arg1 + 0x30) = 0
        return 

void var_28
void** rax_5 = sub_1405e1730(&var_28, nullptr, 0xff)
*(*rax_5 + 0x10) = arg1
void* rcx_6 = *rax_5
int32_t r8_1 = rax_5[2].d
int64_t* rdx_2 = rax_5[1]
int64_t* rbx_1 = *(rcx_6 + 0x20)
int64_t* arg_10 = rbx_1
int32_t* rdi_1 = &rbx_1[9]

if (rbx_1 != 0)
    *rdi_1 += 1
    rbx_1 = arg_10

sub_1405a5630(rcx_6, rdx_2, r8_1, 1)

if (rbx_1 == 0)
    return 

int32_t rax = *rdi_1
*rdi_1 -= 1

if (rax == 1)
    sub_140a2f6e0(arg_10)
