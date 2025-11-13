// 函数: sub_142391fe0
// 地址: 0x142391fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
CRITICAL_SECTION* lpCriticalSection = arg1 + 0x580
void* r12 = arg1
CRITICAL_SECTION* lpCriticalSection_1 = lpCriticalSection
void* r14 = arg2
EnterCriticalSection(lpCriticalSection)
int64_t r15 = 0
int32_t var_4c = 0xc
int64_t var_58 = 0
int32_t var_50 = 0
void* var_c8 = nullptr
int32_t var_c0 = 0
int32_t var_bc = 0x18
void* rax_2 = sub_142577430()
void* const rsi_1

if (rax_2 == 0)
    rsi_1 = nullptr
else
    void* rax_3 = sub_142459c10()
    
    if (rax_3 == 0)
        rsi_1 = nullptr
    else
        int64_t rax_4 = sx.q(*(rax_3 + 0x38))
        
        if (rax_4.d s> *(rax_2 + 0x38))
            rsi_1 = nullptr
        else
            rsi_1 = rax_2
            
            if (*(*(rax_2 + 0x30) + (rax_4 << 3)) != rax_3 + 0x30)
                rsi_1 = nullptr

void var_188
void* r8 = &var_188

if (rsi_1 != sub_142459c10())
    sub_1419f71f0(r14, rax_2, r8)
else
    sub_1419f6fe0(r14, rax_2, r8)

int64_t rcx_3 = sx.q(var_c0)

if (rcx_3.d != 0)
    void* r8_1 = var_c8
    void* rax_7 = &var_188
    int32_t rsi_2 = 0
    int32_t rdi = 0
    
    if (r8_1 != 0)
        rax_7 = r8_1
    
    int64_t rbx_1 = 0
    int64_t r13
    r13.b = *rax_7 != 0
    
    do
        int64_t r9_1 = sx.q(rsi_2)
        rbx_1 += 1
        rsi_2 += 1
        
        if (rbx_1 s< rcx_3)
            void* rcx_4 = &var_188
            
            if (r8_1 != 0)
                rcx_4 = r8_1
            
            do
                int32_t rax_8
                rax_8.b = *(rcx_4 + (rbx_1 << 3)) != 0
                
                if (zx.d(r13.b) != rax_8)
                    break
                
                rsi_2 += 1
                rbx_1 += 1
            while (rbx_1 s< rcx_3)
        
        int32_t r12_2 = rsi_2 - r9_1.d
        
        if (r13.b != 0)
            if (rdi != r9_1.d)
                void* rcx_5 = &var_188
                
                if (r8_1 != 0)
                    rcx_5 = r8_1
                
                memmove(rcx_5 + (sx.q(rdi) << 3), rcx_5 + (r9_1 << 3), r12_2 << 3)
                r8_1 = var_c8
            
            rdi += r12_2
        
        r13.b ^= 1
    while (rbx_1 s< rcx_3)
    
    r14 = arg2
    r12 = arg1
    var_c0 = rdi
    lpCriticalSection = lpCriticalSection_1

int64_t rax_10 = sub_141dc9840(r14)
int64_t* r13_1 = *(r12 + 0x340)
int64_t var_198 = rax_10
int64_t* var_1b0_1 = r13_1
void* rcx_10 = &r13_1[sx.q(*(r12 + 0x348))]
void* rcx_11 = var_c8
void var_b8

if (r13_1 != rcx_10)
    void* rdx_4 = rcx_10
    
    do
        int64_t* rsi_3 = *r13_1
        
        if (rsi_3 != 0 && (rax_10 == 0 || *rsi_3 == rax_10))
            void* r14_2 = &var_188
            int64_t r12_3 = 0
            
            if (rcx_11 != 0)
                r14_2 = rcx_11
            
            int64_t rdx_5 = sx.q(var_c0) << 3
            uint64_t rdx_6 = rdx_5 u>> 3
            
            if (r14_2 u> rdx_5 + r14_2)
                rdx_6 = 0
            
            if (rdx_6 != 0)
                do
                    int64_t rbx_2 = *r14_2
                    int64_t var_1b8 = rbx_2
                    sub_14239a450(&rsi_3[4])
                    void* rcx_13 = rsi_3[3]
                    
                    if (rsi_3[6] == 0)
                        sub_1423b40c0(rcx_13, rbx_2, &var_b8)
                    else
                        sub_1423b4300(rcx_13, rbx_2)
                    
                    sub_140838b90(&rsi_3[9], &var_1b8, 1)
                    sub_140838b90(&rsi_3[0xb], &var_1b8, 1)
                    r14_2 += 8
                    r12_3 += 1
                while (r12_3 != rdx_6)
                
                rcx_11 = var_c8
                r15 = 0
                r13_1 = var_1b0_1
            
            rdx_4 = rcx_10
            rax_10 = var_198
        
        r13_1 = &r13_1[1]
        var_1b0_1 = r13_1
    while (r13_1 != rdx_4)
    
    lpCriticalSection = lpCriticalSection_1
    r12 = arg1

void* rsi_4 = &var_188

if (rcx_11 != 0)
    rsi_4 = rcx_11

int64_t r14_3 = sx.q(var_c0) << 3
uint64_t r14_4 = r14_3 u>> 3

if (rsi_4 u> r14_3 + rsi_4)
    r14_4 = 0

if (r14_4 != 0)
    do
        void* rbx_3 = *rsi_4
        sub_142395410(r12 + 0x210, rbx_3, &var_b8)
        *(rbx_3 + 0x208) &= 0xf7
        rsi_4 += 8
        r15 += 1
    while (r15 != r14_4)

int64_t result = sub_142398030(arg1, &var_b8)

if (var_c8 != 0)
    result = sub_140a74f90(var_c8)

if (var_58 != 0)
    result = sub_140a74f90(var_58)

if (lpCriticalSection != 0)
    result = LeaveCriticalSection(lpCriticalSection)

__security_check_cookie(rax_1 ^ &var_1d8)
return result
