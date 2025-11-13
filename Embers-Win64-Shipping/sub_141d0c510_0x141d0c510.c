// 函数: sub_141d0c510
// 地址: 0x141d0c510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
int64_t rsi = arg3

if (arg3 == 0x7fffffffffffffff)
    rsi = *(arg1 + 0x28) - arg2
    arg_18 = rsi

int32_t rcx
rcx.b = *(arg1 + 0x150) == 0

if ((rcx.b & sub_140b5b8a0(*(arg1 + 0x14c), 0)) != 0)
    if ((*(arg1 + 0x78) & 1) == 0)
        void*** rax_8 = j_sub_140a82f30(0xc0)
        
        if (rax_8 == 0)
            return nullptr
        
        return sub_141cf81b0(rax_8, *(arg1 + 0x10), *(arg1 + 8), *(arg1 + 0x18), arg5, 
            *(arg1 + 0x20) + arg2, rsi, arg4, arg6, 0, 0)
    
    void*** rax_1 = j_sub_140a82f30(0xe0)
    
    if (rax_1 == 0)
        return nullptr
    
    int64_t rsi_2 = *(arg1 + 0x20)
    int64_t rbp_1 = *(arg1 + 0x18)
    void* rbx_1 = *(arg1 + 8)
    int64_t rdi_1 = rsi_2 + arg2
    int64_t r14_1 = *(arg1 + 0x10)
    int64_t r15_1 = arg_18
    int32_t var_90
    var_90.q = arg6
    sub_141cf82b0(rax_1, rbx_1, rbp_1, arg5, rdi_1, r15_1, arg4, var_90, 0, 0)
    *rax_1 = &data_14321d300
    rax_1[0x17] = rdi_1
    rax_1[0xd] = &data_14321d318
    rax_1[0x18] = r15_1
    int128_t zmm0_1 = *(arg1 + 0x160)
    int64_t rax_4 = arg2 & 0xfffffffffffffff0
    int64_t rcx_7 = ((arg2 + 0xf + r15_1) & 0xfffffffffffffff0) - rax_4
    int64_t r9_1 = rax_4 + rsi_2
    rax_1[0x12] = rcx_7
    rax_1[0x11] = r9_1
    *(rax_1 + 0xc8) = zmm0_1
    char rax_6 = sub_141d0bd60(data_143f36250, &rax_1[0xd], r14_1, rbx_1, rbp_1, r9_1, rcx_7, arg4)
    
    if (rax_6 != 0)
        return rax_1
    
    *(rax_1 + 0xb4) = rax_6
    sub_140a536a0(rax_1)
    return rax_1

void* lpCriticalSection = arg1 + 0x120
uint64_t rdi
rdi.b = 0
EnterCriticalSection(lpCriticalSection)
uint64_t rcx_14 = zx.q(*(arg1 + 0x70))
int32_t i_4 = (divs.dp.q(sx.o(arg2), rcx_14)).d
int32_t i_2 = i_4
int32_t i_3 = i_4
int32_t temp0_1 = (divs.dp.q(sx.o(arg2 - 1 + rsi), rcx_14)).d
void*** rax_16 = j_sub_140a82f30(0xf0)
void*** var_58_1 = rax_16
void*** r14_2 = rax_16

if (rax_16 == 0)
    r14_2 = nullptr
    var_58_1 = nullptr
else
    *r14_2 = &data_142e5d058
    r14_2[4] = 0
    r14_2[6] = 0
    char r8_3 = 0
    r14_2[0xc].d = 0
    *(r14_2 + 0x64) = 0
    *(r14_2 + 0x65) = arg6 != 0
    
    if (arg5 != 0)
        sub_140a3c510(&r14_2[4], arg5)
        r8_3 = *(r14_2 + 0x64)
    
    int64_t rax_18 = -1
    
    if (r8_3 == 0)
        rax_18 = arg6
    
    r14_2[2] = rax_18
    r14_2[0xe] = arg2
    void* rcx_17 = &r14_2[0x15]
    *r14_2 = &data_14321d328
    r14_2[0xd] = arg1
    r14_2[0xf] = rsi
    r14_2[0x10] = 0
    r14_2[0x11].d = 0
    *(r14_2 + 0x8c) = arg4
    r14_2[0x12].w = 1
    *(r14_2 + 0x92) = 0
    r14_2[0x13] = 0
    r14_2[0x14] = 0
    *(rcx_17 + 0x10) = 0
    *(rcx_17 + 0x18) = 0
    *(rcx_17 + 0x1c) = 0x80
    void* rax_20 = *(rcx_17 + 0x10)
    
    if (rax_20 != 0)
        rcx_17 = rax_20
    
    *rcx_17 = 0
    *(rcx_17 + 8) = 0
    r14_2[0x19].d = 0xffffffff
    *(r14_2 + 0xcc) = 0
    r14_2[0x1b] = 0
    r14_2[0x1c].d = 0

int64_t i = sx.q(i_2)
void*** var_50 = r14_2
int64_t i_1 = i

if (i s<= sx.q(temp0_1))
    int64_t r12_4 = i << 4
    
    do
        int64_t rax_24 = *(arg1 + 0xd0)
        
        if (*(rax_24 + (i << 3)) == 0)
            void* const rax_22 = j_sub_140a82f30(0x38)
            
            if (rax_22 == 0)
                rax_22 = nullptr
            else
                __builtin_memset(rax_22, 0, 0x30)
                *(rax_22 + 0x30) = 0xffffffff
                *(rax_22 + 0x34) = 0
                *(rax_22 + 0x36) = 0
            
            *(*(arg1 + 0xd0) + (i << 3)) = rax_22
            *(*(*(arg1 + 0xd0) + (i << 3)) + 0x30) = i_2
            rax_24 = *(arg1 + 0xd0)
        
        void* rbp_2 = *(rax_24 + (i << 3))
        *(rbp_2 + 0x2c) += 1
        
        if (*(rbp_2 + 0x34) == 0)
            uint64_t rax_25 = sub_141d03270(arg1, i_3)
            *(rax_25 + 0x34) = 1
            void* rcx_21 = *(arg1 + 0x60)
            void* rax_26
            
            if ((rcx_21.b & 1) == 0)
                rax_26 = rcx_21
            else
                int64_t rcx_22 = rcx_21 s>> 1
                rax_26 = arg1 + 0x60 + rcx_22
                rcx_21 = rcx_22 + 0x60 + arg1
            
            int32_t rax_28 = *(rax_26 + r12_4 + 8) - *(rcx_21 + r12_4)
            *(rax_25 + 0x20) = rax_28
            *(rax_25 + 0x24) = rax_28
            
            if ((*(arg1 + 0x78) & 1) != 0)
                *(rax_25 + 0x20) = (rax_28 + 0xf) & 0xfffffff0
            
            *(arg1 + 0x148) += 1
            void*** rax_31 = j_sub_140a82f30(0xc0)
            void*** rax_33
            
            if (rax_31 == 0)
                rax_33 = nullptr
            else
                void* rdx_10 = *(arg1 + 0x60)
                
                if ((rdx_10.b & 1) != 0)
                    rdx_10 = (rdx_10 s>> 1) + arg1 + 0x60
                
                rax_33 = sub_141cf81b0(rax_31, *(arg1 + 0x10), *(arg1 + 8), *(arg1 + 0x18), 
                    arg1 + 0xe0, *(rdx_10 + r12_4) + *(arg1 + 0x158), sx.q(*(rax_25 + 0x20)), arg4, 
                    0, 1, rax_25)
            
            i = i_1
            *rax_25 = rax_33
            rdi.b = 1
        
        rdi = zx.q(rdi.b)
        
        if (*(rbp_2 + 0x10) == 0)
            rdi = 1
        
        i_2 = i_3 + 1
        i += 1
        i_3 = i_2
        r12_4 += 0x10
        i_1 = i
    while (i s<= sx.q(temp0_1))
    
    r14_2 = var_58_1
    lpCriticalSection = arg1 + 0x120

int64_t rdx_16 = sub_140946410(arg1 + 0x80, &arg_18, &var_50, nullptr)

if (rdi.b == 0)
    sub_141d0e380(r14_2, rdx_16)

if (lpCriticalSection != 0)
    LeaveCriticalSection(lpCriticalSection)

return r14_2
