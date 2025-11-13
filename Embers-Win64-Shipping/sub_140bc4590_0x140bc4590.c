// 函数: sub_140bc4590
// 地址: 0x140bc4590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = 0
uint64_t var_38 = 0
int32_t var_30 = 0
uint64_t rdi = 0
int32_t rbp = 0
EnterCriticalSection(arg1 + 0x60)
int64_t r12 = sx.q(*(arg1 + 0x58))
int32_t r13 = 0
int32_t temp0 = r12.d

if (temp0 != 0)
    if (temp0 s> 0)
        sub_1405c5570(&var_38, r12.d)
        rbp = var_30
        rdi = var_38
    
    memcpy(rdi + (sx.q(rbp) << 3), *(arg1 + 0x50), (r12 << 3).d)
    rbp += r12.d
    var_30 = rbp
    r13 = rbp

*(arg1 + 0x58) = 0

if (*(arg1 + 0x5c) s<= 0xffffffff)
    sub_1405c5570(arg1 + 0x50, 0)

if (arg1 != -0x60)
    LeaveCriticalSection(arg1 + 0x60)

int64_t rcx_5 = rdi + (sx.q(r13) << 3)
uint64_t r12_4 = (rcx_5 - rdi + 7) u>> 3

if (rdi u> rcx_5)
    r12_4 = 0

if (r12_4 != 0)
    do
        int32_t* rbp_1 = *rdi
        char arg_8
        void*** rax_3 = sub_140bc6d00(arg1, rbp_1, &arg_8)
        *(arg1 + 0x1f0) -= 1
        
        if (rax_3 != 0)
            sub_140bc88e0(rax_3)
        
        if (arg_8 != 0)
            sub_140bd13b0(rax_3)
        
        if (rbp_1 != 0)
            int64_t* r14_1 = *(rbp_1 + 0x20)
            
            if (r14_1 != 0)
                sub_140745b20(r14_1)
                j_sub_140a74f90(r14_1)
            
            j_sub_140a74f90(rbp_1)
        
        if (rax_3 != 0)
            sub_140bd1150(arg1)
        
        rdi += 8
        rsi += 1
    while (rsi != r12_4)
    
    rbp = var_30
    rdi = var_38

void*** rbx
rbx.b = rbp s> 0

if (rdi != 0)
    sub_140a74f90(rdi)

return zx.q(rbx.b)
