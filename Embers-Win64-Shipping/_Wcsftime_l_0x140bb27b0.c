// 函数: _Wcsftime_l
// 地址: 0x140bb27b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_78 = nullptr
void* rsi = arg1
int32_t var_70 = 0
int64_t* var_50 = nullptr
int64_t* rdi = nullptr
int32_t var_48 = 0
int32_t r14 = 0
EnterCriticalSection(arg1 + 0x40)

if (&var_78 != rsi + 0x68)
    var_78.o = *(rsi + 0x68)
    rdi = var_78
    r14 = var_70
    *(rsi + 0x68) = var_78.o

if (&var_50 != rsi + 0x78)
    uint128_t zmm0 = *(rsi + 0x78)
    *(rsi + 0x78) = var_50.o
    var_50.o = zmm0

if (arg1 != -0x40)
    LeaveCriticalSection(arg1 + 0x40)

int64_t r12 = 0
void* rcx_2 = &rdi[sx.q(r14)]
uint64_t r15_3 = (rcx_2 - rdi + 7) u>> 3

if (rdi u> rcx_2)
    r15_3 = 0

int64_t* r13 = rdi
uint64_t var_68
CRITICAL_SECTION* rbx

if (r15_3 != 0)
    rbx = rsi + 0x98
    CRITICAL_SECTION* var_30_1 = rbx
    
    do
        int64_t rax_3 = *r13
        int32_t var_58
        sub_1405ba560(rbx, &var_58, rax_3)
        struct _RTL_CRITICAL_SECTION_DEBUG* DebugInfo = rbx->DebugInfo
        int64_t rdx_1 = sx.q(var_58)
        int32_t r14_1 = (&DebugInfo->ProcessLocksList)[rdx_1 * 2].Flink.d
        var_68 = (&DebugInfo->CriticalSection)[rdx_1 * 4]
        sub_1405c3390(rbx, rdx_1.d)
        int32_t rdi_1 = var_68.d
        void* rbx_1 = data_143e1a348
        bool rax_4 = sub_140b5b8a0(rdi_1, 0)
        int32_t rsi_1 = var_68:4.d
        void* rdi_3
        
        if ((rax_4 == 0 | rsi_1 != 0) == 0 || r14_1 == 0 || *(rbx_1 + 0x1c0) == *(rbx_1 + 0x1ec))
        labelid_33:
            rdi_3 = nullptr
        else
            int32_t rax_6 = sub_140b5ead0(rdi_1)
            void* r8_2 = rbx_1 + 0x1f0
            void* rcx_9 = *(r8_2 + 8)
            
            if (rcx_9 != 0)
                r8_2 = rcx_9
            
            int32_t rax_9 = *(r8_2 + (((sx.q(*(rbx_1 + 0x200)) - 1) & sx.q(rax_6 + rsi_1)) << 2))
            
            if (rax_9 == 0xffffffff)
            labelid_33:
                rdi_3 = nullptr
            else
                int64_t r9_1 = *(rbx_1 + 0x1b8)
                int64_t r8_3
                
                while (true)
                    r8_3 = sx.q(rax_9)
                    int64_t rdx_6 = r8_3 * 3
                    
                    if (*(r9_1 + (rdx_6 << 3)) == var_68)
                        break
                    
                    rax_9 = *(r9_1 + (rdx_6 << 3) + 0x10)
                    
                    if (rax_9 == 0xffffffff)
                        goto label_140bb297d_2
                
                if (rax_9 == 0xffffffff)
                label_140bb297d:
                    rdi_3 = nullptr
                else
                    void* rdi_2 = r9_1 + r8_3 * 0x18
                    
                    if (rdi_2 == 0)
                    label_140bb297d_1:
                        rdi_3 = nullptr
                    else
                        rdi_3 = *(rdi_2 + 8)
                        
                        if (rdi_3 == 0 || *(rdi_3 + 0x23c) != r14_1)
                        label_140bb297d_2:
                            rdi_3 = nullptr
        
        int64_t rsi_2 = sx.q(*(rdi_3 + 0x298))
        int32_t rax_11 = (rsi_2 + 1).d
        *(rdi_3 + 0x298) = rax_11
        
        if (rax_11 s> *(rdi_3 + 0x29c))
            sub_1405a4d70(rdi_3 + 0x290)
        
        *(*(rdi_3 + 0x290) + (rsi_2 << 3)) = rax_3
        int32_t var_54
        sub_140ba6bd0(rdi_3 + 0x2a0, &var_54, rax_3)
        int64_t rax_13 = sx.q(var_54)
        void* const rbx_3
        
        if (rax_13.d == 0xffffffff)
            rbx_3 = nullptr
        else
            rbx_3 = rax_13 * 0x38 + *(rdi_3 + 0x2a0)
        
        int64_t rbx_4 = *(rbx_3 + 0x10)
        sub_140b9d980(rdi_3)
        rsi = arg1
        r13 = &r13[1]
        r12 += 1
        *(rsi + 0x138) += rbx_4
        rbx = var_30_1
    while (r12 != r15_3)

int64_t* r15_4 = var_50
int64_t r12_1 = sx.q(var_48)
int64_t* rdi_4 = r15_4
void* r14_2 = r15_4 + r12_1 * 0xc
int32_t i

if (r15_4 != r14_2)
    do
        int32_t rax_14 = rdi_4[1].d
        int64_t rcx_15 = data_143e1a348
        var_68 = *rdi_4
        int32_t var_60_1 = rax_14
        sub_140bb38c0(rcx_15, &var_68)
        
        if (*(rsi + 0xf0) != *(rsi + 0x11c))
            int64_t rbx_5 = *rdi_4
            int32_t rax_16 = sub_140b5ead0(rbx_5.d)
            void* r10_1 = rsi + 0x120
            int64_t r11_2 = sx.q(*(rsi + 0x130)) - 1
            void* rax_17 = *(rsi + 0x128)
            
            if (rax_17 != 0)
                r10_1 = rax_17
            
            i = *(r10_1 + ((sx.q(rax_16 + (rbx_5 u>> 0x20).d) & r11_2) << 2))
            
            if (i != 0xffffffff)
                int64_t r8_6 = *(rsi + 0xe8)
                
                do
                    int64_t i_1 = sx.q(i)
                    int64_t rax_20 = i_1 * 5
                    
                    if (*(r8_6 + (rax_20 << 2) + 8) == rdi_4[1].d)
                        if (*(rsi + 0xf0) != *(rsi + 0x11c))
                            int64_t rax_22 = i_1 * 5
                            int64_t rax_24 = sx.q(*(r8_6 + (rax_22 << 2) + 0x10)) & r11_2
                            void* rcx_18 = r10_1 + (rax_24 << 2)
                            int32_t j = *(r10_1 + (rax_24 << 2))
                            
                            while (j != 0xffffffff)
                                if (j == i)
                                    *rcx_18 = *(r8_6 + (rax_22 << 2) + 0xc)
                                    break
                                
                                int64_t j_1 = sx.q(j)
                                j = *(r8_6 + ((j_1 * 5 + 3) << 2))
                                rcx_18 = r8_6 + ((j_1 * 5 + 3) << 2)
                        
                        sub_1405c3870(rsi + 0xe8, i, 1)
                        break
                    
                    i = *(r8_6 + (rax_20 << 2) + 0xc)
                while (i != 0xffffffff)
        
        rdi_4 += 0xc
    while (rdi_4 != r14_2)

if (var_70 != 0)
    i.b = var_70 s>= data_1439a9650
    sub_140b9d6a0(arg1, i)
    rbx.b = 1
else if (r12_1.d != 0)
    rbx.b = 1
else
    rbx.b = 0

if (r15_4 != 0)
    sub_140a74f90(r15_4)

int64_t* rcx_24 = var_78

if (rcx_24 != 0)
    sub_140a74f90(rcx_24)

return zx.q(rbx.b)
