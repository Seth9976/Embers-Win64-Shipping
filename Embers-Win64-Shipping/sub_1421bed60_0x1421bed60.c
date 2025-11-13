// 函数: sub_1421bed60
// 地址: 0x1421bed60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x1d0)

if (rax != 0)
    if (*(rax + 8) == 0)
        void* var_88 = rax
        int64_t var_80_1 = *(arg1 + 0x1e0)
        
        if (sub_140a80f40() == 0)
            uint32_t rax_3
            
            if (data_143f138f4 == 0 && data_143de5480 != 0)
                rax_3.b = GetCurrentThreadId() == data_143de5470
            
            if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_3.b == 0))
                void var_68
                int64_t* rax_4 = sub_1421b1690(&var_68, nullptr, 0xff)
                *(*rax_4 + 0x10) = var_88.o
                void* rcx_4 = *rax_4
                int32_t r8_1 = rax_4[2].d
                int64_t* rdx_3 = rax_4[1]
                int64_t* rdi_1 = *(rcx_4 + 0x28)
                int64_t* arg_10 = rdi_1
                int32_t* rbx_1 = &rdi_1[9]
                
                if (rdi_1 != 0)
                    *rbx_1 += 1
                    rdi_1 = arg_10
                
                sub_1405e48c0(rcx_4, rdx_3, r8_1, 1)
                
                if (rdi_1 != 0)
                    int32_t rax_5 = *rbx_1
                    *rbx_1 -= 1
                    
                    if (rax_5 == 1)
                        sub_140a2f6e0(arg_10)
            else
                int128_t var_78 = var_88.o
                sub_1421aba30(&var_78)
        else
            sub_1421aba30(&var_88)
    
    void* r14_1 = *(*(arg1 + 0x1d0) + 0x80)
    
    if (data_143de5432 == 0 && r14_1 != 0)
        int64_t r12_1 = sx.q(*(arg1 + 0x1f0))
        
        if (r12_1 s> 0)
            int64_t rbp_1 = 0
            
            do
                int32_t rbx_2 = *(*(arg1 + 0x1e8) + (rbp_1 << 2))
                EnterCriticalSection(r14_1 + 0xd0)
                *(*(r14_1 + 0xb8) + (sx.q(*(r14_1 + 0xc8)) << 2)) = rbx_2
                *(r14_1 + 0xc8) += 1
                
                if (r14_1 != -0xd0)
                    LeaveCriticalSection(r14_1 + 0xd0)
                
                rbp_1 += 1
            while (rbp_1 s< r12_1)
        
        *(arg1 + 0x1f0) = 0
        
        if (*(arg1 + 0x1f4) s<= 0xffffffff)
            sub_1405dadb0(arg1 + 0x1e8, 0)

void* rdi_3 = arg1 + 0x1f8
void* rax_9 = *(rdi_3 + 0x10)
void* rbx_3 = rdi_3 + 0x18
uint32_t rdx_6 = (*rbx_3 + 0x1f) u>> 5

if (rax_9 != 0)
    rdi_3 = rax_9

if (rdx_6 u> 8)
    memset(rdi_3, 0, zx.q(rdx_6) << 2)
else if (rdx_6 != 0)
    __builtin_memset(rdi_3, 0, zx.q(rdx_6) << 2)

*rbx_3 = 0
int32_t rax_10 = *(arg1 + 0x1f4)
*(arg1 + 0x1f0) = 0

if (rax_10 s< 0 && rax_10 != 0)
    sub_1405dadb0(arg1 + 0x1e8, 0)

int32_t rax_11 = *(arg1 + 0x224)
*(arg1 + 0x220) = 0

if (rax_11 s< 0 && rax_11 != 0)
    sub_1405dadb0(arg1 + 0x218, 0)

int32_t rax_12 = *(arg1 + 0x234)
*(arg1 + 0x230) = 0

if (rax_12 s< 0 && rax_12 != 0)
    sub_1405dadb0(arg1 + 0x228, 0)

int64_t* rdi_4 = *(arg1 + 0x1e0)
*(arg1 + 0x280) = 0xffffffff
*(arg1 + 0x284) = 0
*(rdi_4 + 0x211) = 1
int64_t* result

if (sub_140a80f40() == 0)
    if (data_143f138f4 == 0)
        if (data_143de5480 == 0)
            goto label_1421bf01c
        
        uint32_t rax_17
        rax_17.b = GetCurrentThreadId() == data_143de5470
        
        if (rax_17.b != 0)
            goto label_1421bf01c
    
    void var_50
    void** rax_18 = sub_1421b1540(&var_50, nullptr, 0xff)
    *(*rax_18 + 0x10) = rdi_4
    void* rcx_20 = *rax_18
    int32_t r8_4 = rax_18[2].d
    int64_t* rdx_7 = rax_18[1]
    int64_t* rdi_5 = *(rcx_20 + 0x20)
    int64_t* arg_18 = rdi_5
    int32_t* rbx_4 = &rdi_5[9]
    
    if (rdi_5 != 0)
        *rbx_4 += 1
        rdi_5 = arg_18
    
    result = sub_1407c9450(rcx_20, rdx_7, r8_4, 1)
    
    if (rdi_5 != 0)
        int32_t r15_1 = *rbx_4
        *rbx_4 -= 1
        
        if (r15_1 == 1)
            return sub_140a2f6e0(arg_18)
else
label_1421bf01c:
    (*(rdi_4[0x3a] + 0x30))(&rdi_4[0x3a])
    result = (*(*rdi_4 + 0x30))(rdi_4)
    int64_t* rcx_17 = rdi_4[0x3f]
    
    if (rcx_17 != 0)
        jump(*(*rcx_17 + 0x30))

return result
