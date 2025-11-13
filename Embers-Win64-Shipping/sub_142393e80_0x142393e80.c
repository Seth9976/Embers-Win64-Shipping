// 函数: sub_142393e80
// 地址: 0x142393e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
void* r12 = arg1
EnterCriticalSection(arg1 + 0x580)
int64_t rsi = 0
int64_t* r8 = r12 + 0x340
void* rcx_1 = nullptr
int64_t* r14 = *r8
int32_t rdx = 0x20
void* var_48 = nullptr
int32_t r15 = 0
int32_t var_40 = 0
int64_t rbp = 0
int32_t var_3c = 0x20
uint64_t r13_1 = sx.q(r8[1].d) << 3 u>> 3

if (r14 u> &r14[r8[1]])
    r13_1 = 0

void var_148

if (r13_1 != 0)
    do
        int64_t* rdi_1 = *r14
        
        if (rdi_1 != 0)
            int64_t r12_1 = *rdi_1
            var_40 = r15 + 1
            
            if (r15 + 1 s> rdx)
                sub_1407c3a50(&var_148, r15)
                rcx_1 = var_48
            
            void* rdx_2 = &var_148
            
            if (rcx_1 != 0)
                rdx_2 = rcx_1
            
            *(rdx_2 + (sx.q(r15) << 3)) = r12_1
            sub_142395540(rdi_1, nullptr)
            rdx = var_3c
            rcx_1 = var_48
            r15 = var_40
        
        r14 = &r14[1]
        rbp += 1
    while (rbp != r13_1)
    
    r12 = arg1

r8[1].d = 0

if (*(r8 + 0xc) != 0)
    sub_1405c5570(r8, 0)
    rcx_1 = var_48
    r15 = var_40

void* rdi_2 = &var_148

if (rcx_1 != 0)
    rdi_2 = rcx_1

int64_t rbp_1 = sx.q(r15) << 3
int64_t* result = rdi_2 + rbp_1
uint64_t rbp_2 = rbp_1 u>> 3

if (rdi_2 u> result)
    rbp_2 = 0

if (rbp_2 != 0)
    do
        result = sub_142384c80(r12, *rdi_2)
        rsi += 1
        rdi_2 += 8
    while (rsi != rbp_2)
    
    rcx_1 = var_48

if (rcx_1 != 0)
    result = sub_140a74f90(rcx_1)

if (arg1 != -0x580)
    result = LeaveCriticalSection(arg1 + 0x580)

__security_check_cookie(rax_1 ^ &var_178)
return result
