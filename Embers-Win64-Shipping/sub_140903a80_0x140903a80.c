// 函数: sub_140903a80
// 地址: 0x140903a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x18) s> 0)
    return 

int64_t* rax_1 = sub_140908320()
void* rax_2 = rax_1[0x23]

if (rax_2 == 0)
    int64_t rdx_1 = *rax_1
    (*(rdx_1 + 0x390))(rax_1, rdx_1)
    rax_2 = rax_1[0x23]

int32_t i = *(rax_2 + 0x38)

if (i s<= 0)
    i = sub_140b70e10()

int64_t* rax_4 = sub_140908320()
void* rax_5 = rax_4[0x23]

if (rax_5 == 0)
    int64_t rdx_2 = *rax_4
    (*(rdx_2 + 0x390))(rax_4, rdx_2)
    rax_5 = rax_4[0x23]

int32_t r12_1 = *(rax_5 + 0x3c)
CRITICAL_SECTION* lpCriticalSection = arg1 + 0x30

if (r12_1 u< 0x20000)
    r12_1 = 0x20000

EnterCriticalSection(lpCriticalSection)

while (i s> 0)
    i -= 1
    void*** rax_6 = j_sub_140a82f30(0x38)
    int64_t* rdi_1 = rax_6
    
    if (rax_6 == 0)
        rdi_1 = nullptr
    else
        *rax_6 = &data_142e1b1b8
        rax_6[1] = &data_142e1b1e8
        rdi_1[2] = arg1 + 8
        rdi_1[3] = 0
        rdi_1[4].b = 0
        void*** rax_8 = sub_140a491d0(0)
        uint64_t r8_1 = zx.q(data_143cec9cc)
        rdi_1[6] = rax_8
        data_143cec9cc = (r8_1 + 1).d
        int16_t* var_38
        sub_140a2e390(&var_38, u"FImgMediaSchedulerThread %d", r8_1)
        int16_t* const rdx_3 = &data_142d40450
        int32_t var_30
        
        if (var_30 != 0)
            rdx_3 = var_38
        
        void*** rax_10 = sub_140a6e140(rdi_1, rdx_3, r12_1, 0, -1, 0)
        int16_t* rcx_5 = var_38
        rdi_1[5] = rax_10
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
    
    int64_t rbp_1 = sx.q(*(arg1 + 0x28))
    int32_t rax_11 = (rbp_1 + 1).d
    *(arg1 + 0x28) = rax_11
    
    if (rax_11 s> *(arg1 + 0x2c))
        sub_1405a4d70(arg1 + 0x20)
    
    *(*(arg1 + 0x20) + (rbp_1 << 3)) = rdi_1
    int64_t rbp_2 = sx.q(*(arg1 + 0x18))
    int32_t rax_13 = (rbp_2 + 1).d
    *(arg1 + 0x18) = rax_13
    
    if (rax_13 s> *(arg1 + 0x1c))
        sub_1405a4d70(arg1 + 0x10)
    
    *(*(arg1 + 0x10) + (rbp_2 << 3)) = rdi_1

if (lpCriticalSection != 0)
    LeaveCriticalSection(lpCriticalSection)
