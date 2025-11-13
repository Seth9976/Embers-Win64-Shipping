// 函数: sub_141d124f0
// 地址: 0x141d124f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r9 = arg2
int64_t i_1
void* i_4
void* var_80
int64_t (* var_70)(int64_t* arg1, int32_t* arg2)
int64_t performanceCount

if (data_143f36244 == 0 || arg2 != 0)
    i_1 = 0xffff
    int16_t rcx_16
    
    if (arg3 == 0xffff)
        rcx_16 = *(arg1 + 0xb0)
    else
        rcx_16 = arg3 + 1
    
    if (arg3 == 0xffff)
        arg3 = 0
    
    if (arg3 u< rcx_16)
        void* i_7 = zx.q(arg3) * 0x98
        uint64_t i_5 = zx.q(rcx_16 - arg3)
        i_4 = i_7
        uint64_t i_6 = i_5
        uint64_t i
        
        do
            int64_t r12_3 = *(arg1 + 0x158)
            i_1 = zx.q(data_143a21048)
            int64_t rdi_8 = sx.q(*(*(i_7 + *(arg1 + 0xa8) + 8) + 0x18c)) * 2
            
            if (r9 != 0)
                i_1 = 0
            
            int32_t r14_4 = *(r12_3 + (rdi_8 << 3) + 8) - i_1.d
            
            if (r14_4 s<= 0)
                r14_4 = 0
            
            performanceCount.d = r14_4
            
            if (r14_4 != 0)
                int64_t rbx_5 = 0
                int64_t r13_3 = sx.q(r14_4)
                
                if (r14_4 s> 0)
                    var_70 = sub_141cfc7d0
                    void** var_68_3 = &var_80
                    
                    do
                        int64_t rax_17 = *(arg1 + 0x158)
                        var_80 = arg1
                        int64_t rax_18 = *(*(rax_17 + (rdi_8 << 3)) + (rbx_5 << 3))
                        uint64_t r8_10 = rax_18 & 0xffffffffffff
                        void* rdx_11 = (rax_18 u>> 0x30) * 0x98 + *(arg1 + 0xa8)
                        sub_141cf4a50(rdx_11 + 0x80, arg1 + 0xe0, r8_10, r8_10, 0, 
                            *(rdx_11 + 0x18), *(rdx_11 + 0x20), *(rdx_11 + 0x24), &var_70)
                        rbx_5 += 1
                    while (rbx_5 s< r13_3)
                    
                    r12_3 = *(arg1 + 0x158)
                    r14_4 = performanceCount.d
                
                int32_t rax_23 = *(r12_3 + (rdi_8 << 3) + 8)
                
                if (rax_23 != r14_4)
                    int64_t rcx_20 = *(r12_3 + (rdi_8 << 3))
                    memmove(rcx_20, rcx_20 + (r13_3 << 3), (rax_23 - r14_4) << 3)
                    rax_23 = *(r12_3 + (rdi_8 << 3) + 8)
                
                i_7 = i_4
                i_5 = i_6
                i_1 = zx.q(rax_23 - r14_4)
                r9 = arg2
                *(r12_3 + (rdi_8 << 3) + 8) = i_1.d
            
            i_7 += 0x98
            i = i_5
            i_5 -= 1
            i_4 = i_7
            i_6 = i_5
        while (i != 1)
else
    int64_t count = sx.q(*(arg1 + 0x160))
    int16_t r12_1 = *(arg1 + 0xb0)
    int32_t rbx_1 = count.d
    int32_t var_78_1 = rbx_1
    void* r13_1 = nullptr
    int16_t var_98_1 = r12_1
    var_80 = nullptr
    int32_t var_74_1 = 0
    
    if (count.d s> 0)
        sub_140679a80(&var_80)
        r13_1 = var_80
        rbx_1 = var_78_1
    
    memset(r13_1, 0, count)
    i_1 = sx.q(data_143a2103c << 0x14)
    int64_t i_3 = i_1
    
    while (*(arg1 + 0x40) s> i_1)
        if (rbx_1 s> 0)
            i_1 = 0
            __builtin_memset(r13_1, 0, sx.q(rbx_1))
        
        performanceCount.b = 1
        
        if (0 u>= r12_1)
            break
        
        int64_t r14_1 = 0
        uint64_t j_2 = zx.q(r12_1)
        uint64_t j
        
        do
            i_1 = *(arg1 + 0xa8)
            int64_t rbx_2 = sx.q(*(*(r14_1 + i_1 + 8) + 0x18c))
            
            if (*(rbx_2 + r13_1) != 1)
                *(rbx_2 + r13_1) = 1
                int64_t rbx_3 = rbx_2 * 2
                i_1 = *(arg1 + 0x158)
                
                if (*(i_1 + (rbx_3 << 3) + 8) != 0)
                    int64_t* rax_2 = *(i_1 + (rbx_3 << 3))
                    int64_t* var_68_1 = &i_4
                    var_70 = sub_141cfc7d0
                    performanceCount.b = 0
                    int64_t rcx_4 = *rax_2
                    uint64_t r8_2 = rcx_4 & 0xffffffffffff
                    i_4 = arg1
                    void* rdi_3 = (rcx_4 u>> 0x30) * 0x98 + *(arg1 + 0xa8)
                    sub_141cf4a50(rdi_3 + 0x80, arg1 + 0xe0, r8_2, r8_2, 0, *(rdi_3 + 0x18), 
                        *(rdi_3 + 0x20), *(rdi_3 + 0x24), &var_70)
                    int64_t rdi_4 = *(arg1 + 0x158)
                    int32_t rax_6 = *(rdi_4 + (rbx_3 << 3) + 8)
                    
                    if (rax_6 != 1)
                        int64_t rcx_7 = *(rdi_4 + (rbx_3 << 3))
                        memmove(rcx_7, rcx_7 + 8, (rax_6 - 1) << 3)
                        rax_6 = *(rdi_4 + (rbx_3 << 3) + 8)
                    
                    i_1 = zx.q(rax_6 - 1)
                    *(rdi_4 + (rbx_3 << 3) + 8) = i_1.d
            
            r14_1 += 0x98
            j = j_2
            j_2 -= 1
        while (j != 1)
        r12_1 = var_98_1
        
        if (performanceCount.b != 0)
            break
        
        i_1 = i_3
        rbx_1 = var_78_1
    
    if (not(data_143f36248 f== 0f))
        i_1 = QueryPerformanceCounter(&performanceCount)
        int128_t zmm6
        zmm6.q = float.d(performanceCount)
        zmm6.q = zmm6.q f* data_143d796f8
        zmm6.q = zmm6.q f+ 16777216.0
        
        if (0 u< r12_1)
            i_4 = zx.q(r12_1)
            int64_t r13_2 = 0
            int64_t var_90_1 = 0
            void* i_2
            
            do
                int32_t r14_2 = 0
                i_1 = *(arg1 + 0x158)
                int64_t rdi_6 = sx.q(*(*(*(arg1 + 0xa8) + r13_2 + 8) + 0x18c)) * 2
                int32_t rcx_10 = *(i_1 + (rdi_6 << 3) + 8)
                
                if (rcx_10 != 0)
                    int32_t j_1 = 0
                    
                    if (rcx_10 s> 0)
                        var_70 = sub_141cfca80
                        void* var_60
                        void** var_68_2 = &var_60
                        int64_t* r12_2 = nullptr
                        
                        do
                            int64_t rax_9 = *(i_1 + (rdi_6 << 3))
                            int64_t var_58_1 = zmm6.q
                            var_60 = arg1
                            int64_t rcx_11 = *(r12_2 + rax_9)
                            performanceCount.b = 1
                            uint64_t r8_6 = rcx_11 & 0xffffffffffff
                            void* rdx_5 = (rcx_11 u>> 0x30) * 0x98 + *(arg1 + 0xa8)
                            int64_t* var_50_1 = &performanceCount
                            i_1 = sub_141cf4a50(rdx_5 + 0x80, arg1 + 0xe0, r8_6, r8_6, 0, 
                                *(rdx_5 + 0x18), *(rdx_5 + 0x20), *(rdx_5 + 0x24), &var_70)
                            
                            if (performanceCount.b == 0)
                                break
                            
                            i_1 = *(arg1 + 0x158)
                            r14_2 += 1
                            j_1 += 1
                            r12_2 = &r12_2[1]
                        while (j_1 s< *(i_1 + (rdi_6 << 3) + 8))
                        
                        r13_2 = var_90_1
                        
                        if (r14_2 != 0)
                            int64_t rbx_4 = *(arg1 + 0x158)
                            int32_t rax_13 = *(rbx_4 + (rdi_6 << 3) + 8)
                            
                            if (rax_13 != r14_2)
                                int64_t rcx_14 = *(rbx_4 + (rdi_6 << 3))
                                memmove(rcx_14, rcx_14 + (sx.q(r14_2) << 3), (rax_13 - r14_2) << 3)
                                rax_13 = *(rbx_4 + (rdi_6 << 3) + 8)
                            
                            i_1 = zx.q(rax_13 - r14_2)
                            *(rbx_4 + (rdi_6 << 3) + 8) = i_1.d
                
                r13_2 += 0x98
                i_2 = i_4
                i_4 -= 1
                var_90_1 = r13_2
            while (i_2 != 1)
            r13_1 = var_80
    
    if (r13_1 != 0)
        return sub_140a74f90(r13_1)
return i_1
