// 函数: sub_140cba580
// 地址: 0x140cba580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm8
int128_t var_48 = zmm8
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
BOOL result = *(arg1 + 0x308)
int128_t zmm9
zmm9.q = float.d(performanceCount)
int32_t rbp = 0
int128_t performanceCount_2 = arg2
zmm9.q = zmm9.q f* data_143d796f8
bool cond:0 = result == 0

if (result == 0)
label_140cba70f:
    result.b = cond:0
else
    while (true)
        void* rbx_1 = *(arg1 + 0x300)
        int64_t rdi_2 = sx.q(*(arg1 + 0x308)) << 6
        performanceCount = performanceCount_2.q
        int64_t* rcx_2 = rbx_1 - 0x20 + rdi_2
        int64_t* rax = *(rdi_2 + rbx_1 - 0x30)
        
        if (rax != 0)
            rcx_2 = rax
        
        if ((*(rdi_2 + rbx_1 - 0x40))((*(*rcx_2 + 8))(rcx_2), &performanceCount) != 0)
            int64_t rax_4 = sx.q(*(arg1 + 0x308))
            int64_t rdx_2 = *(arg1 + 0x300)
            int64_t rcx_5 = rax_4 << 6
            int32_t rdi_3 = (rax_4 - 1).d
            
            if (*(rcx_5 + rdx_2 - 0x40) != 0)
                int64_t* rax_5 = *(rcx_5 + rdx_2 - 0x30)
                int64_t* rcx_6 = rcx_5 + rdx_2 - 0x20
                
                if (rax_5 != 0)
                    rcx_6 = rax_5
                
                (*(*rcx_6 + 0x10))(rcx_6)
            
            int32_t rax_8 = *(arg1 + 0x308)
            int32_t rcx_8 = rax_8 - rdi_3
            
            if (rcx_8 != 1)
                int64_t rax_7 = *(arg1 + 0x300)
                memmove((sx.q(rdi_3) << 6) + rax_7, rax_7 + (rax_4 << 6), (rcx_8 - 1) << 6)
                rax_8 = *(arg1 + 0x308)
            
            *(arg1 + 0x308) = rax_8 - 1
            sub_1407c3fe0(arg1 + 0x300)
        
        if (not(arg2.q f<= 0.0))
            rbp += 1
            
            if (rbp == rbp s/ 5 * 5)
                int64_t performanceCount_1
                QueryPerformanceCounter(&performanceCount_1)
                performanceCount_2.q =
                    arg2.q f- (float.d(performanceCount_1) f* data_143d796f8 f- zmm9.q)
                
                if (performanceCount_2.q f<= 0.0)
                    result.b = 0
                    break
        
        if (*(arg1 + 0x308) == 0)
            cond:0 = true
            goto label_140cba70f

return result
