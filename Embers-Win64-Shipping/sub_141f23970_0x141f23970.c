// 函数: sub_141f23970
// 地址: 0x141f23970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141ef3930(arg1, arg2)
(*(*arg2 + 0x1d8))(arg2, &data_1439a9478)
(*(*arg2 + 0x1d8))(arg2, &data_1439a94d8)

if ((arg2[5].b & 1) != 0 && sub_140d23dc0(arg1, 0x30) != 0)
    sub_142215b10(arg1 + 0x2a8, arg1)

int32_t rax_3
int512_t zmm1
rax_3, zmm1 = sub_140b4e7c0(arg2, &data_1439a9478)

if (rax_3 s< 0x18 && *(arg1 + 0x20c) s< 0)
    *(arg1 + 0x207) = 1

(*(*arg2 + 0x1d8))(arg2, &data_1439a9478)
(*(*arg2 + 0x130))(arg2, arg1 + 0x410)
int32_t arg_8

if ((arg2[5].b & 1) != 0 && arg2[8].d s< 0x14a)
    int64_t* rcx_7 = arg2[1]
    int32_t* rdx_2 = *rcx_7
    
    if (&rdx_2[1] u> rcx_7[1])
        int32_t* rdx_3 = &arg_8
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, rdx_3, zmm1)
        else
            (*(*arg2 + 0x150))(arg2, rdx_3, 4)
    else
        arg_8 = *rdx_2
        *rcx_7 += 4

void* r15 = arg1 + 0x438
int512_t zmm1_1 = sub_141f05590(arg2, r15, zmm1)

if ((arg2[5].b & 1) != 0 && *(arg1 + 0x440) s> 0)
    int32_t rcx_10 = 0
    int32_t i = 0
    int32_t rsi_1 = 0
    int128_t* r12_1 = nullptr
    int64_t* r14_1 = nullptr
    int128_t* var_38 = nullptr
    int32_t var_2c_1 = 0
    
    do
        void* r13_1 = *(r14_1 + *r15)
        
        if (*(r13_1 + 0x28) != 0)
            int64_t r15_1 = sx.q(rsi_1)
            rsi_1 = (r15_1 + 1).d
            
            if (rsi_1 s> rcx_10)
                sub_1405a4df0(&var_38)
                r12_1 = var_38
            
            int64_t rcx_12 = r15_1 * 3
            r15 = arg1 + 0x438
            *(r12_1 + (rcx_12 << 3)) = *(r13_1 + 0x30)
            *(r12_1 + (rcx_12 << 3) + 0x10) = *(r13_1 + 0x28)
            rcx_10 = var_2c_1
            *(r13_1 + 0x28) = 0
        
        i += 1
        r14_1 = &r14_1[1]
    while (i s< *(arg1 + 0x440))
    
    if (rsi_1 s> 0)
        EnterCriticalSection(&data_143a2e558)
        int64_t rcx_13 = data_143a2e580:8
        data_143a2e580.q = arg1
        
        if (rcx_13 != 0)
            sub_140a74f90(rcx_13)
        
        data_143a2e590:4.d = var_2c_1
        bool cond:2_1 = data_143a2e510 != data_143a2e53c
        data_143a2e580:8 = r12_1
        data_143a2e590.d = rsi_1
        
        if (not(cond:2_1))
            sub_140d186f0(&data_143e1d990, &data_143a2e500)
        
        var_38 = &data_143a2e580
        int32_t var_30
        var_30.q = &data_143a2e580:8
        zmm1_1 = sub_1419ea1b0(&data_143a2e508, &arg_8, &var_38, nullptr)
        LeaveCriticalSection(&data_143a2e558)
    else if (r12_1 != 0)
        zmm1_1 = sub_140a74f90(r12_1)

int64_t* rcx_15 = arg2[1]
int32_t* r8_2 = *rcx_15

if (&r8_2[1] u<= rcx_15[1])
    *(arg1 + 0x418) = *r8_2
    int64_t* rax_15 = arg2[1]
    *rax_15 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0x418, zmm1_1)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0x418, 4)

return sub_141f05480(arg2, arg1 + 0x428, zmm1_1) __tailcall
