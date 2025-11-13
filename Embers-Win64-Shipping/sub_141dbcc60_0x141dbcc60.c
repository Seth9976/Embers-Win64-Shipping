// 函数: sub_141dbcc60
// 地址: 0x141dbcc60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2d8
int64_t rax_1 = __security_cookie ^ &var_2d8
void* var_1f8 = nullptr
int32_t var_1ec = 0x18
int32_t result_1 = 0
void* rax_2 = sub_142577430()
void* rdi

if (rax_2 == 0)
    rdi = nullptr
else
    void* rax_3 = sub_142459c10()
    
    if (rax_3 == 0)
        rdi = nullptr
    else
        int64_t rax_4 = sx.q(*(rax_3 + 0x38))
        
        if (rax_4.d s> *(rax_2 + 0x38) || *(*(rax_2 + 0x30) + (rax_4 << 3)) != rax_3 + 0x30)
            rdi = nullptr
        else
            rdi = rax_2

void var_2b8
void* r8 = &var_2b8

if (rdi != sub_142459c10())
    sub_1419f71f0(arg1, rax_2, r8)
else
    sub_1419f6fe0(arg1, rax_2, r8)

void* rdx_8 = var_1f8
void* r14 = &var_2b8
int64_t result = sx.q(result_1)
void* r9 = nullptr
void* var_40 = nullptr
int32_t rcx_2 = 3
int32_t var_38 = 0

if (rdx_8 != 0)
    r14 = rdx_8

int32_t var_34 = 3
void* r15 = r14 + (result << 3)

if (r14 != r15)
    do
        int64_t* rsi_1 = *r14
        int32_t result_2 = 0
        int32_t result_3 = 0
        void var_1e8
        
        if (rcx_2 s< 0 && rcx_2 != 0)
            sub_141dd6010(&var_1e8, 0)
            rcx_2 = var_34
            result_2 = result_3
            r9 = var_40
        
        int32_t rbx_1 = rsi_1[0x54].d
        
        if (rbx_1 != 0)
            int32_t rax_7 = result_2 + rbx_1
            
            if (rax_7 s> rcx_2)
                sub_141dd6010(&var_1e8, rax_7)
                result_2 = result_3
                r9 = var_40
            
            void* rcx_5 = &var_1e8
            
            if (r9 != 0)
                rcx_5 = r9
            
            memcpy(rcx_5 + sx.q(result_2) * 0x8c, rsi_1[0x53], rbx_1 * 0x8c)
            rcx_2 = var_34
            result_2 = result_3 + rbx_1
            r9 = var_40
            int32_t result_4 = result_2
        
        result = sx.q(result_2)
        void* rbx_2 = &var_1e8
        
        if (r9 != 0)
            rbx_2 = r9
        
        void* rdi_2 = result * 0x8c + rbx_2
        
        if (rbx_2 != rdi_2)
            do
                result = sub_141f11260(rsi_1, rbx_2, 1, 0)
                rbx_2 += 0x8c
            while (rbx_2 != rdi_2)
            
            rcx_2 = var_34
            r9 = var_40
        
        r14 += 8
    while (r14 != r15)
    
    if (r9 != 0)
        result = sub_140a74f90(r9)
    
    rdx_8 = var_1f8

if (rdx_8 != 0)
    result = sub_140a74f90(rdx_8)

__security_check_cookie(rax_1 ^ &var_2d8)
return result
