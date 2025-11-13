// 函数: sub_140a51100
// 地址: 0x140a51100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbx = arg4
char rsi = arg3
int64_t rbp = arg2
TEB* gsbase

if (data_143db48bc s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143db48bc)
    
    if (data_143db48bc == 0xffffffff)
        sub_140af2b60()
        char rax_15 = sub_140b21a10(&data_143dbb3f0, u"stdout")
        
        if (rax_15 != 0)
            rax_15 = 1
        else
            int64_t* rcx_24 = data_143ddb410
            
            if (rcx_24 != 0)
                rax_15 = (*(*rcx_24 + 0x50))(rcx_24)
            
            if (rcx_24 != 0 && rax_15 != 0)
                rax_15 = 1
            else
                rax_15 = 0
        
        data_143db48b8 = rax_15
        _Init_thread_footer(&data_143db48bc)

int32_t var_68
int64_t var_60

if (data_143db48b8 == 0 && rsi - 2 u<= 2)
    if (*(arg1 + 0x10) != 0)
        char rax_3 = rsi
        
        if (rsi == 3)
            rax_3 = 2
        
        rsi = rax_3
    
    int64_t* rcx = *(arg1 + 0x90)
    int16_t* r13_1 = nullptr
    int32_t rdi_1 = 0
    int16_t* var_58
    int64_t var_48
    
    if (rcx != 0)
        int64_t* rax_5 = (*(*rcx + 8))(rcx, &var_48)
        int16_t* rcx_1 = *rax_5
        int32_t rdx_1 = rax_5[1].d
        int32_t rdx_2 = neg.d(rdx_1)
        *rax_5 = 0
        int32_t r8 = rax_5[1].d
        var_58 = rcx_1
        int32_t rcx_2 = *(rax_5 + 0xc)
        int32_t rdx_5 = sbb.d(rdx_2, rdx_2, rdx_1 != 0) + 4 + r8
        int32_t var_4c_1 = rcx_2
        rax_5[1] = 0
        
        if (rdx_5 s> rcx_2)
            sub_1405947f0(&var_58, rdx_5)
        
        sub_140a20ba0(&var_58, &data_142e5e6f8, 3)
        int64_t rcx_5 = var_48
        r13_1 = var_58
        rdi_1 = r8
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
    
    var_60 = -0x4010000000000000
    var_68 = 0
    int64_t* rax_6 = sub_140b16600(&var_48, rsi, rbx, rbp, 0f)
    int32_t rbp_1
    int16_t* r12_1
    
    if (rdi_1 s> 1)
        int32_t rax_7 = rax_6[1].d
        int32_t r14_1 = rax_7 - 1
        
        if (rax_7 == 0)
            r14_1 = 0
        
        int32_t rax_8
        
        if (rdi_1 == 0)
            rax_8 = rdi_1 + 1
        
        if (rdi_1 != 0 || r14_1 == 0)
            rax_8 = 0
        
        var_58 = nullptr
        int32_t rcx_7 = r14_1 + rax_8
        
        if (rdi_1 != 0 || rcx_7 != 0)
            sub_1405a4c70(&var_58, rdi_1 + rcx_7, 0)
            memcpy(var_58, r13_1, rdi_1 * 2)
        else
            int32_t var_4c_2 = 0
        
        sub_140a20ba0(&var_58, *rax_6, r14_1)
        rbp_1 = rdi_1
        r12_1 = var_58
    else
        r12_1 = *rax_6
        *rax_6 = 0
        rbp_1 = rax_6[1].d
        rax_6[1] = 0
    
    int64_t rcx_11 = var_48
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)
    
    if (data_143de5426 != 0)
        void* lpCriticalSection
        int64_t* rdi_4
        
        if (rsi == 2)
            lpCriticalSection = arg1 + 0x38
            EnterCriticalSection(lpCriticalSection)
            int64_t rdi_2 = sx.q(*(arg1 + 0x30))
            int32_t rax_9 = (rdi_2 + 1).d
            *(arg1 + 0x30) = rax_9
            
            if (rax_9 s> *(arg1 + 0x34))
                sub_1405a4f90(arg1 + 0x28)
            
            rdi_4 = (rdi_2 << 4) + *(arg1 + 0x28)
            *rdi_4 = 0
            rdi_4[1].d = rbp_1
            
            if (rbp_1 != 0)
            label_140a51386:
                sub_1405a4c70(rdi_4, rbp_1, 0)
                memcpy(*rdi_4, r12_1, rbp_1 * 2)
            else
                *(rdi_4 + 0xc) = 0
            
        label_140a5139c:
            
            if (lpCriticalSection != 0)
                LeaveCriticalSection(lpCriticalSection)
        else if (rsi == 3)
            lpCriticalSection = arg1 + 0x38
            EnterCriticalSection(lpCriticalSection)
            int64_t rdi_5 = sx.q(*(arg1 + 0x20))
            int32_t rax_10 = (rdi_5 + 1).d
            *(arg1 + 0x20) = rax_10
            
            if (rax_10 s> *(arg1 + 0x24))
                sub_1405a4f90(arg1 + 0x18)
            
            rdi_4 = (rdi_5 << 4) + *(arg1 + 0x18)
            *rdi_4 = 0
            rdi_4[1].d = rbp_1
            
            if (rbp_1 != 0)
                goto label_140a51386
            
            *(rdi_4 + 0xc) = 0
            goto label_140a5139c
    
    int16_t* const rdx_14 = &data_142d40450
    
    if (rbp_1 != 0)
        rdx_14 = r12_1
    
    sub_1405a65a0(u"%ls", rdx_14)
    sub_1405a65a0(u"%ls", &data_142d576a0)
    
    if (r12_1 != 0)
        sub_140a74f90(r12_1)
    
    if (r13_1 != 0)
        sub_140a74f90(r13_1)
    
    rbp = arg2
    rbx = arg4

sub_140b19e60()

if (sub_140b1d490(&data_1439a8bd0, arg1) == 0)
    sub_140b19e60()
    (*(data_1439a8bd0 + 0x10))(&data_1439a8bd0, rbp, zx.q(rsi), rbx, var_68, var_60)

int64_t* rcx_21 = *(arg1 + 0x98)

if (rcx_21 != 0)
    (*(*rcx_21 + 0x10))(rcx_21, rbp, zx.q(rsi), rbx, var_68, var_60)

return fflush(__acrt_iob_func(1)) __tailcall
