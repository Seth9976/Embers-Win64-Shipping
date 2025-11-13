// 函数: sub_140bdc2b0
// 地址: 0x140bdc2b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
int64_t result

if (*(arg1 + 0x138) == *(arg1 + 0x164))
labelid_31:
    result = 0
else
    int32_t rax_2 = sub_140b5ead0(arg2.d) + arg_10:4.d
    void* r8 = arg1 + 0x168
    void* rcx_1 = *(r8 + 8)
    
    if (rcx_1 != 0)
        r8 = rcx_1
    
    int32_t rax_4 = *(r8 + (((sx.q(*(arg1 + 0x178)) - 1) & sx.q(rax_2)) << 2))
    
    if (rax_4 == 0xffffffff)
    label_140bdc327:
        result = 0
    else
        int64_t r8_1 = *(arg1 + 0x130)
        int64_t rdx_3
        
        while (true)
            rdx_3 = sx.q(rax_4)
            int64_t rcx_2 = rdx_3 * 3
            
            if (*(r8_1 + (rcx_2 << 3)) == arg2)
                break
            
            rax_4 = *(r8_1 + (rcx_2 << 3) + 0x10)
            
            if (rax_4 == 0xffffffff)
                goto label_140bdc327_2
        
        if (rax_4 == 0xffffffff)
        label_140bdc327_1:
            result = 0
        else
            void* rsi_1 = r8_1 + rdx_3 * 0x18
            
            if (rsi_1 == 0)
            label_140bdc327_2:
                result = 0
            else
                result = *(rsi_1 + 8)

if (result != 0 || arg3 != 1)
    return result

int64_t r15 = *(arg1 + 0x40)

if (r15 == 0 && *(arg1 + 0x1e0) s<= r15.d)
    return result

int32_t rdi
rdi.b = 0
AcquireSRWLockShared(arg1 + 0x1d0)

if (*(arg1 + 0x188) != *(arg1 + 0x1b4))
    int32_t rax_9 = sub_140b5ead0(arg2.d) + arg_10:4.d
    void* r8_2 = arg1 + 0x1b8
    void* rcx_5 = *(r8_2 + 8)
    
    if (rcx_5 != 0)
        r8_2 = rcx_5
    
    int32_t i = *(r8_2 + (((sx.q(*(arg1 + 0x1c8)) - 1) & sx.q(rax_9)) << 2))
    
    if (i != 0xffffffff)
        int64_t r8_3 = *(arg1 + 0x180)
        
        do
            int64_t i_2 = sx.q(i)
            int64_t rcx_6 = i_2 * 3
            
            if (*(r8_3 + (rcx_6 << 3)) == arg2)
                if (i != 0xffffffff)
                    void* rax_12 = r8_3 + i_2 * 0x18
                    
                    if (rax_12 != 0 && rax_12 != -8)
                        result = *(rax_12 + 8)
                        rdi.b = 1
                
                break
            
            i = *(r8_3 + (rcx_6 << 3) + 0x10)
        while (i != 0xffffffff)

ReleaseSRWLockShared(arg1 + 0x1d0)

if (rdi.b == 0)
    int64_t* i_1 = *(arg1 + 0x1d8)
    
    for (void* rbp_3 = &i_1[sx.q(*(arg1 + 0x1e0)) * 2]; i_1 != rbp_3; i_1 = &i_1[2])
        int64_t rcx_8 = *i_1
        
        if (rcx_8 == 0)
            result = 0
        else
            int64_t result_1 = sub_140bdc2b0(rcx_8, arg2, 1)
            result = result_1
            
            if (result_1 != 0)
                break
    
    if (r15 != 0 && result == 0)
        result = sub_140bdc2b0(r15, arg2, zx.q((result + 1).d))
    
    AcquireSRWLockExclusive(arg1 + 0x1d0)
    int32_t var_38
    sub_140598750(arg1 + 0x180, &var_38)
    int64_t* var_30
    *var_30 = arg2
    var_30[1] = result
    var_30[2].d = 0xffffffff
    sub_1405b8140(arg1 + 0x180, &arg_10, (arg2 u>> 0x20).d + sub_140b5ead0(arg2.d), var_30, var_38, 
        nullptr)
    ReleaseSRWLockExclusive(arg1 + 0x1d0)

return result
