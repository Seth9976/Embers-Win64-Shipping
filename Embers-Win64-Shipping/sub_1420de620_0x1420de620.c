// 函数: sub_1420de620
// 地址: 0x1420de620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int64_t rbp = 0
int64_t* r14 = *(arg1 + 0x98)
void* rdx = nullptr
int32_t result_1 = 0
void* var_48 = nullptr
int64_t r15 = 0
uint64_t r12_1 = sx.q(*(arg1 + 0xa0)) << 3 u>> 3

if (r14 u> &r14[sx.q(*(arg1 + 0xa0))])
    r12_1 = 0

void var_50

if (r12_1 != 0)
    do
        void* rdi_1 = *r14
        
        if ((*(rdi_1 + 0xba) & 2) == 0)
            int64_t var_78
            sub_140d30800(rdi_1 + 0x38, &var_78)
            int64_t var_60
            int64_t* rax_4 = sub_140baf760(&var_60, &var_78)
            int16_t* rdx_3
            
            if (rax_4[1].d == 0)
                rdx_3 = &data_142d40450
            else
                rdx_3 = *rax_4
            
            void var_68
            *(rdi_1 + 0x138) = *sub_140b58260(&var_68, rdx_3, 1)
            int64_t rcx_4 = var_60
            
            if (rcx_4 != 0)
                sub_140a74f90(rcx_4)
            
            int64_t rcx_5 = var_78
            
            if (rcx_5 != 0)
                sub_140a74f90(rcx_5)
            
            *(rdi_1 + 0xba) |= 2
            rdx = var_48
        
        if (*(rdi_1 + 0x138) == arg2)
            int64_t result_3 = sx.q(result_1)
            int32_t result_2 = (result_3 + 1).d
            result_1 = result_2
            
            if (result_2 s> 1)
                sub_140915c70(&var_50, result_3.d)
                rdx = var_48
            
            void* rcx_7 = &var_50
            
            if (rdx != 0)
                rcx_7 = rdx
            
            *(rcx_7 + (result_3 << 3)) = rdi_1
            rdx = var_48
        
        r14 = &r14[1]
        r15 += 1
    while (r15 != r12_1)

int64_t result = sx.q(result_1)
void* rbx_1 = &var_50

if (rdx != 0)
    rbx_1 = rdx

int64_t rdi_2 = result << 3
void* rsi_1 = rbx_1 + rdi_2
uint64_t rdi_3 = rdi_2 u>> 3

if (rbx_1 u> rsi_1)
    rdi_3 = 0

if (rdi_3 != 0)
    if (arg3 != 0)
        do
            result = sub_1405a9f90(*rbx_1 + 0x108, 0)
            rbp += 1
            rbx_1 += 8
        while (rbp != rdi_3)
        
        rdx = var_48
    else if (rbx_1 != rsi_1)
        do
            result = sub_1405a9f90(*rbx_1 + 0x118, 0)
            rbx_1 += 8
        while (rbx_1 != rsi_1)
        
        rdx = var_48

if (rdx != 0)
    result = sub_140a74f90(rdx)

__security_check_cookie(rax_1 ^ &var_98)
return result
