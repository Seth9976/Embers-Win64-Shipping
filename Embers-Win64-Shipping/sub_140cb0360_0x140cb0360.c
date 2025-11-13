// 函数: sub_140cb0360
// 地址: 0x140cb0360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

CRITICAL_SECTION* lpCriticalSection_1 = arg1 + 0x1f8
uint32_t r15_1
r15_1.b = not.b((*(arg1 + 0xcc) u>> 7).b)
CRITICAL_SECTION* lpCriticalSection_2 = lpCriticalSection_1
r15_1.b &= 1

if (r15_1.b != 0)
    EnterCriticalSection(lpCriticalSection_1)

int64_t r12 = 0
int64_t var_88

if (data_143de5480 != 0)
    uint32_t rax_1
    rax_1.b = GetCurrentThreadId() == data_143de5470
    
    if (rax_1.b == 0)
        int32_t* rcx_1 = data_143e1adf0
        bool z_1
        
        if (0 == *rcx_1)
            *rcx_1 = 0
            z_1 = true
        else
            *rcx_1
            z_1 = false
        
        if (z_1)
            int64_t* rax_3 = sub_140d21830(arg1, &var_88, 0, 0)
            int16_t* const r9_1
            
            if (rax_3[1].d == 0)
                r9_1 = &data_142d40450
            else
                r9_1 = *rax_3
            
            sub_140af98a0("Unknown", 0xa08, 
                AssembleReferenceTokenStream for %s called on a non-game thread while G", r9_1)
            int64_t rcx_3 = var_88
            
            if (rcx_3 != 0)
                sub_140a74f90(rcx_3)
            
            sub_140afbb40()

uint64_t result = zx.q(*(arg1 + 0xcc) u>> 0x16)

if ((result.b & 1) == 0)
    if (arg2 != 0)
    label_140cb0452:
        *(arg1 + 0x1f0) = 0
        
        if (*(arg1 + 0x1f4) != 0)
            sub_1405dadb0(arg1 + 0x1e8, 0)
        
        *(arg1 + 0xcc) &= 0xffbfffff
        goto label_140cb046d
    
label_140cb046d:
    int64_t* i_1 = *(arg1 + 0x50)
    int64_t var_68 = 0
    int64_t var_60_1 = 0
    void* var_58 = arg1
    int32_t var_48_1 = 0xffffffff
    int16_t var_44_1 = 0x100
    char var_42_1 = 0
    sub_1406328d0(&var_58)
    int64_t* i_2
    
    for (int64_t* i = i_1; i != 0; i = i_2)
        (*(*i + 0x120))(i, arg1, 0, &var_68, lpCriticalSection_2)
        i_2 = i[4]
        sub_1406328d0(&var_58)
    
    void* r14_1 = *(arg1 + 0x40)
    
    if (r14_1 == 0)
        sub_140d1e940(arg1)
    else
        void* lpCriticalSection = r14_1 + 0x1f8
        uint8_t rax_7 = not.b((*(r14_1 + 0xcc) u>> 7).b) & 1
        
        if (rax_7 != 0)
            EnterCriticalSection(lpCriticalSection)
        
        sub_140cb0360(r14_1, 0)
        
        if (*(r14_1 + 0x1f0) != 0)
            int32_t rdx_2 = *(r14_1 + 0x1f0)
            CRITICAL_SECTION** r15_2 = arg1 + 0x1e8
            int32_t arg_18
            int32_t r8_1
            
            if (rdx_2 != 0)
                r8_1 = rdx_2 - 1
                arg_18 = r8_1
            
            if (rdx_2 == 0 || *(*(r14_1 + 0x1e8) + (sx.q(r8_1) << 2)) != 0xe00)
                r8_1 = rdx_2
                arg_18 = rdx_2
            
            int32_t rbx_1 = 0
            int32_t rdx_4 = r15_2[1].d + r8_1
            CRITICAL_SECTION* lpCriticalSection_3 = nullptr
            int32_t var_70_1 = 0
            lpCriticalSection_1 = nullptr
            int32_t var_6c_1 = 0
            int32_t r13_1 = 0
            
            if (rdx_4 s> 0)
                sub_1405dadb0(&lpCriticalSection_3, rdx_4)
                r8_1 = arg_18
                r13_1 = var_6c_1
                rbx_1 = var_70_1
                lpCriticalSection_1 = lpCriticalSection_3
            
            var_88 = sx.q(r8_1)
            
            if (r8_1 s> 0)
                do
                    int64_t rax_10 = *(r14_1 + 0x1e8)
                    int64_t r15_3 = sx.q(rbx_1)
                    arg_18.q = rax_10
                    rbx_1 = (r15_3 + 1).d
                    var_70_1 = rbx_1
                    
                    if (rbx_1 s> r13_1)
                        sub_1405a4cf0(&lpCriticalSection_3)
                        rax_10 = arg_18.q
                        r13_1 = var_6c_1
                        rbx_1 = var_70_1
                        lpCriticalSection_1 = lpCriticalSection_3
                    
                    int32_t rax_11 = *(rax_10 + (r12 << 2))
                    r12 += 1
                    *(lpCriticalSection_1 + (r15_3 << 2)) = rax_11
                while (r12 s< var_88)
                
                r15_2 = arg1 + 0x1e8
            
            int64_t r14_2 = sx.q(r15_2[1].d)
            
            if (r14_2.d != 0)
                int32_t rdx_6 = rbx_1 + r14_2.d
                
                if (rdx_6 s> r13_1)
                    sub_1405dadb0(&lpCriticalSection_3, rdx_6)
                    r13_1 = var_6c_1
                    rbx_1 = var_70_1
                    lpCriticalSection_1 = lpCriticalSection_3
                
                memcpy(lpCriticalSection_1 + (sx.q(rbx_1) << 2), *r15_2, (r14_2 << 2).d)
                rbx_1 += r14_2.d
            
            if (r15_2 != &lpCriticalSection_3)
                CRITICAL_SECTION* rcx_15 = *r15_2
                
                if (rcx_15 != 0)
                    sub_140a74f90(rcx_15)
                
                *r15_2 = lpCriticalSection_1
                r15_2[1].d = rbx_1
                *(r15_2 + 0xc) = r13_1
            else if (lpCriticalSection_1 != 0)
                sub_140a74f90(lpCriticalSection_1)
        
        if (rax_7 != 0)
            LeaveCriticalSection(lpCriticalSection)
    
    int64_t rbx_2 = *(arg1 + 0x18)
    lpCriticalSection_1.b = (rbx_2 u>> 0x20).d != 0
    lpCriticalSection_1.b |= sub_140b5b8a0(rbx_2.d, 0xcf) == 0
    int32_t rax_14 = *(arg1 + 0xc)
    void* const rax_20
    
    if (rax_14 s>= data_143e1d9b4)
        rax_20 = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_14)
        uint32_t rdx_9 = zx.d(temp0_1)
        int32_t rax_16 = temp1_1 + rdx_9
        rax_20 =
            *(data_143e1d9a0 + (sx.q(rax_16 s>> 0x10) << 3)) + sx.q(zx.d(rax_16.w) - rdx_9) * 0x18
    
    void* rax_23
    int64_t rax_24
    void* rdx_11
    
    if (((*(rax_20 + 8) u>> 0x19).b & 1) != 0)
        rax_23 = sub_140bdf670()
        rdx_11 = *(arg1 + 0x10)
        rax_24 = sx.q(*(rax_23 + 0x38))
    
    char r9_3
    
    if (((*(rax_20 + 8) u>> 0x19).b & 1) != 0 &&
            (rax_24.d s> *(rdx_11 + 0x38) || *(*(rdx_11 + 0x30) + (rax_24 << 3)) != rax_23 + 0x30))
        r9_3 = 0
    else
        r9_3 = 1
    
    int64_t rdx_12 = *(arg1 + 0xc0)
    
    if (rdx_12 == sub_140594850)
        rdx_12 = 0
    
    result = sub_140cba740(arg1 + 0x1e8, rdx_12, lpCriticalSection_1.b, r9_3)
    
    if (*(arg1 + 0x1f0) != 0)
        TEB* gsbase
        
        if (data_143e1b3b8
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143e1b3b8)
            
            if (data_143e1b3b8 == 0xffffffff)
                sub_140b58170(&data_143e1b3b0, "EndOfStreamToken", 1)
                _Init_thread_footer(&data_143e1b3b8)
        
        int64_t rsi = sx.q(*(arg1 + 0x1f0))
        int32_t rax_28 = (rsi + 1).d
        *(arg1 + 0x1f0) = rax_28
        
        if (rax_28 s> *(arg1 + 0x1f4))
            sub_1405a4cf0(arg1 + 0x1e8)
        
        result = *(arg1 + 0x1e8)
        *(result + (rsi << 2)) = 0xe00
        int32_t rdx_14 = *(arg1 + 0x1f0)
        
        if (*(arg1 + 0x1f4) != rdx_14)
            result = sub_1405dadb0(arg1 + 0x1e8, rdx_14)
        
        *(arg1 + 0xcc) |= 0x400000
    
    int64_t rcx_30 = var_68
    
    if (rcx_30 != 0)
        result = sub_140a74f90(rcx_30)
    
    lpCriticalSection_1 = lpCriticalSection_2
else if (arg2 != 0)
    goto label_140cb0452

if (r15_1.b == 0)
    return result

return LeaveCriticalSection(lpCriticalSection_1)
