// 函数: sub_140d3c7c0
// 地址: 0x140d3c7c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d3c660()
int32_t rsi = 0
bool z

if (0 == data_143e1adfc)
    data_143e1adfc = 0
    z = true
else
    data_143e1adfc
    z = false

bool rcx

if (not(z) && data_143de5480 != 0)
    rcx = GetCurrentThreadId() == data_143de5470

CRITICAL_SECTION* lpCriticalSection

if (z || (data_143de5480 != 0 && rcx == 0))
    lpCriticalSection = &data_143e1dad0
    EnterCriticalSection(&data_143e1dad0)
else
    lpCriticalSection = nullptr

int64_t* result

if (arg3 == 0)
    int32_t result_1
    sub_140ba6ab0(&data_143e1dc38, &result_1, arg1)
    result = sx.q(result_1)
    void* const rdx_4
    
    if (result.d == 0xffffffff)
        rdx_4 = nullptr
    else
        rdx_4 = result * 0x60 + data_143e1dc38
    
    void* r15_1 = rdx_4 + 8
    
    if (rdx_4 == 0)
        r15_1 = nullptr
    
    if (r15_1 != 0)
        int64_t var_a8 = 0
        int32_t* rcx_1 = rdx_4 + 0x3c
        int64_t var_a0_1 = 0
        
        if (rdx_4 == 0)
            rcx_1 = 0x34
        
        int64_t r14_1 = 0
        int32_t* rax_3 = rdx_4 + 0x10
        int32_t rdi_1 = 0
        
        if (rdx_4 == 0)
            rax_3 = 8
        
        int32_t rdx_6 = *rax_3 - *rcx_1
        
        if (rdx_6 s> 0)
            sub_1405c5570(&var_a8, rdx_6)
            rdi_1 = var_a0_1.d
            r14_1 = var_a8
        
        int32_t r9_1 = *(r15_1 + 0x28)
        void* r8_2 = r15_1 + 0x10
        int32_t var_98_1 = 0
        int32_t rcx_3 = 0
        int32_t var_94_1 = 1
        void* var_90_1 = r8_2
        int32_t var_88_1 = 0xffffffff
        int32_t var_84_1 = 0
        int32_t var_80_1 = 0
        
        if (r9_1 != 0)
            void* rax_4 = *(r8_2 + 0x10)
            
            if (rax_4 != 0)
                r8_2 = rax_4
            
            int32_t temp1_1
            int32_t temp2_1
            temp1_1:temp2_1 = sx.q(r9_1 - 1)
            int32_t rdx_9 = *r8_2
            int32_t var_84_3
            
            if (rdx_9 != 0)
            label_140d3c946:
                int32_t rax_11 = neg.d(rdx_9) & rdx_9
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_11)
                int32_t var_94_2 = rax_11
                int32_t rax_12
                
                if (rax_11 == 0)
                    rax_12 = 0x20
                else
                    rax_12 = 0x1f - temp0_2
                
                int32_t var_84_2 = rcx_3 - rax_12 + 0x1f
                
                if (rcx_3 - rax_12 + 0x1f s> r9_1)
                    var_84_3 = r9_1
            else
                while (true)
                    int64_t rdx_10 = sx.q(rsi)
                    rcx_3 += 0x20
                    rsi += 1
                    int32_t var_80_2 = rcx_3
                    var_98_1 = rsi
                    
                    if (rdx_10.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_9 = *(r8_2 + (rdx_10 << 2) + 4)
                    int32_t var_88_2 = 0xffffffff
                    
                    if (rdx_9 != 0)
                        goto label_140d3c946
                
                var_84_3 = r9_1
        
        int128_t var_38_1 = 0xffffffff
        int128_t var_78 = r15_1.o
        result = nullptr
        int64_t var_58_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
        int96_t var_68_1 = var_98_1.o:8.12
        
        if (0 s< r9_1)
            int32_t i_1
            int32_t i = i_1
            
            do
                int64_t rsi_1 = sx.q(rdi_1)
                int64_t r12_1 = *var_78.q
                rdi_1 = (rsi_1 + 1).d
                var_a0_1.d = rdi_1
                
                if (rdi_1 s> var_a0_1:4.d)
                    sub_1405a4d70(&var_a8)
                    rdi_1 = var_a0_1.d
                    r14_1 = var_a8
                
                *(r14_1 + (rsi_1 << 3)) = *(r12_1 + sx.q(i) * 0x10)
                var_68_1:8.d &= not.d(var_78:0xc.d)
                sub_14059bdd0(&var_78:8)
                result = var_68_1.q
                i = i_1
            while (i s< result[3].d)
        
        if (rdi_1 != 0)
            int32_t rax_20 = arg2[1].d
            int32_t rdx_13 = rax_20 + rdi_1
            
            if (rdx_13 s> *(arg2 + 0xc))
                sub_1405c5570(arg2, rdx_13)
                rax_20 = arg2[1].d
            
            result = memmove(*arg2 + (sx.q(rax_20) << 3), r14_1, rdi_1 << 3)
            arg2[1].d += rdi_1
        
        if (r14_1 != 0)
            result = sub_140a74f90(r14_1)
else
    result = sub_140d39370(&data_143e1dad0, arg1, arg2)

if (lpCriticalSection == 0)
    return result

return LeaveCriticalSection(lpCriticalSection)
