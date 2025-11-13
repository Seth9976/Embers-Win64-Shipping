// 函数: sub_1425edf40
// 地址: 0x1425edf40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = arg2[4].d
*(arg1 + 0xd0) = rcx
*(arg1 + 0xd4) = *(arg2 + 0x24)
*(arg1 + 0xd8) = arg2[5].d
*(arg1 + 0xdc) = *(arg2 + 0x2c)
int32_t rdx = 0
*(arg1 + 0xe0) = arg2[6].d
*(arg1 + 0xc8) = 0

if (rcx s> *(arg1 + 0xcc))
    sub_1405947f0(arg1 + 0xc0, rcx)
    rdx = *(arg1 + 0xc8)

int32_t rcx_3 = *(arg1 + 0xd0) + rdx
*(arg1 + 0xc8) = rcx_3

if (rcx_3 s> *(arg1 + 0xcc))
    sub_140594770(arg1 + 0xc0)

int32_t i = 0

if (*(arg1 + 0xd0) s> 0)
    int64_t r8_1 = 0
    int64_t r9_1 = 0
    
    do
        r9_1 += 4
        i += 1
        r8_1 += 2
        *(r8_1 + *(arg1 + 0xc0) - 2) = (int.d(*(arg2[2] + r9_1 - 4) * 32767f)).w
    while (i s< *(arg1 + 0xd0))

void var_c8
int32_t* result = sub_1425ed8b0(arg1, &var_c8, *(arg1 + 0xc0), *(arg1 + 0xd0) * 2, *arg2, arg2[1])
int64_t* i_2

if (i_2 == 0)
    return result

int64_t* rcx_7 = *(arg1 + 0x88)

if ((*(*rcx_7 + 0xc0))(rcx_7, 0, i_2, 0) s>= 0)
    sub_1425eed60(arg1, &var_c8)
    
    for (int64_t* i_1 = i_2; i_1 != 0; i_1 = i_2)
        if ((*(*i_1 + 0x168))() s< 0)
            if (i_2 != 0)
                (*(*i_2 + 0x10))(i_2)
            
            break
        
        int64_t var_70 = 0
        int32_t var_68_1 = 0
        int32_t var_98 = 0
        int64_t var_b0
        (*(*i_2 + 0x118))(i_2, &var_b0)
        int64_t var_90_1 = var_b0
        int64_t var_a8
        (*(*i_2 + 0x128))(i_2, &var_a8)
        int64_t var_88_1 = var_a8
        int32_t arg_8 = 0
        (*(*i_2 + 0x138))(i_2, &arg_8)
        
        if (arg_8 s> 0)
            arg_8.q = 0
            (*(*i_2 + 0x140))(i_2, 0, &arg_8)
            int64_t* rcx_13 = arg_8.q
            int64_t var_b8 = 0
            int32_t arg_18 = 0
            uint32_t count_1 = 0
            (*(*rcx_13 + 0x18))(rcx_13, &var_b8, &arg_18, &count_1)
            int64_t rbx_1 = sx.q(var_68_1)
            uint32_t count = count_1
            int64_t rsi_1 = var_b8
            int32_t rax_19 = rbx_1.d + count
            var_68_1 = rax_19
            
            if (rax_19 s> 0)
                sub_1405daba0(&var_70)
            
            memcpy(rbx_1 + var_70, rsi_1, count)
            int64_t* rcx_17 = arg_8.q
            (*(*rcx_17 + 0x20))(rcx_17)
            int64_t* rcx_18 = arg_8.q
            
            if (rcx_18 != 0)
                (*(*rcx_18 + 0x10))(rcx_18)
        
        EnterCriticalSection(arg1 + 8)
        int64_t rsi_2 = 0
        int64_t* rdi_1 = *(arg1 + 0x30)
        uint64_t r14_2 = sx.q(*(arg1 + 0x38)) << 3 u>> 3
        
        if (rdi_1 u> &rdi_1[sx.q(*(arg1 + 0x38))])
            r14_2 = 0
        
        if (r14_2 != 0)
            do
                int64_t* rcx_20 = *rdi_1
                (**rcx_20)(rcx_20, &var_98)
                rsi_2 += 1
                rdi_1 = &rdi_1[1]
            while (rsi_2 != r14_2)
        
        if (arg1 != -8)
            LeaveCriticalSection(arg1 + 8)
        
        int64_t rcx_22 = var_70
        
        if (rcx_22 != 0)
            sub_140a74f90(rcx_22)
        
        if (i_2 != 0)
            (*(*i_2 + 0x10))(i_2)
        
        sub_1425eed60(arg1, &var_c8)

return (*(*i_2 + 0x10))(i_2)
