// 函数: sub_140775dd0
// 地址: 0x140775dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0x400

if (arg3 s<= 1)
    arg3 = 1

if (arg3 s<= 0x400)
    rdi = arg3

*(arg1 + 0x2a0) = 0

if (*(arg1 + 0x2a4) s<= 0xffffffff)
    sub_140775b10(arg1 + 0x298, 0)

int32_t rax = *(arg1 + 0x2a0) + rdi
*(arg1 + 0x2a0) = rax

if (rax s> *(arg1 + 0x2a4))
    sub_140775270(arg1 + 0x298)

sub_141c387b0(*(arg1 + 0x298), rdi, 1, 1)

if (arg2 s> 0)
    rdi *= arg2

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rdi)
int32_t rsi_1 = (temp1 - temp0) s>> 1
int32_t* rax_5 = j_sub_140a82f30(0x20)
int32_t* rbx_1 = rax_5

if (rax_5 == 0)
    rbx_1 = nullptr
else
    *rax_5 = rdi
    
    if (rsi_1 s<= 1)
        rsi_1 = 1
    
    rax_5[1] = rsi_1
    __builtin_memset(&rax_5[2], 0, 0x14)

void* result = arg1 + 0x210
void arg_8

if (result != &arg_8)
    int32_t* rdi_1 = *result
    *result = rbx_1
    
    if (rdi_1 != 0)
        int64_t rcx_3 = *(rdi_1 + 8)
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        return j_sub_140a74f90(rdi_1)
else if (rbx_1 != 0)
    int64_t rcx_4 = *(rbx_1 + 8)
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    return j_sub_140a74f90(rbx_1)

return result
