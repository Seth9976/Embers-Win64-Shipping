// 函数: sub_140d3ba80
// 地址: 0x140d3ba80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_218
int64_t rax_1 = __security_cookie ^ &var_218
int32_t r12_1 = arg5 | 0x10000000

if (data_14399ea98() == 0)
    r12_1 |= 0x8000000

int32_t var_44 = 0x10
int64_t* var_50 = nullptr
int32_t var_48 = 1
int64_t var_d0 = arg1
sub_140d3c660()
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

CRITICAL_SECTION* lpCriticalSection_1
CRITICAL_SECTION* lpCriticalSection

if (z || (data_143de5480 != 0 && rcx == 0))
    lpCriticalSection = &data_143e1dad0
    lpCriticalSection_1 = &data_143e1dad0
    EnterCriticalSection(&data_143e1dad0)
else
    lpCriticalSection = nullptr
    lpCriticalSection_1 = nullptr

if (arg3 != 0)
    sub_140d39610(&data_143e1dad0, arg1, &var_d0)

int64_t* rcx_13 = var_50
int64_t* rdx_1 = &var_d0
uint64_t rsi_1 = 0
uint64_t var_198 = 0

if (rcx_13 != 0)
    rdx_1 = rcx_13

int64_t* var_1f0 = rdx_1
void* result = &rdx_1[sx.q(var_48)]
uint64_t r8_2 = sx.q(var_48) << 3 u>> 3

if (rdx_1 u> result)
    r8_2 = 0

if (r8_2 != 0)
    int64_t* rdi_1 = &data_143e1dbe8
    int64_t* rbx = rdx_1
    int64_t* var_140_1 = &data_143e1dbe8
    
    while (true)
        int32_t result_1
        sub_1405ba560(rdi_1, &result_1, *rbx)
        result = sx.q(result_1)
        void* const rcx_4
        
        if (result.d == 0xffffffff)
            rcx_4 = nullptr
        else
            rcx_4 = (result << 5) + *rdi_1
        
        void* r14_1 = rcx_4 + 8
        
        if (rcx_4 == 0)
            r14_1 = nullptr
        
        if (r14_1 == 0)
        label_140d3bf71:
            rbx = &rbx[1]
            rsi_1 += 1
            var_1f0 = rbx
            var_198 = rsi_1
            
            if (rsi_1 == r8_2)
                rcx_13 = var_50
                lpCriticalSection = lpCriticalSection_1
                break
        else
            void* result_3 = *(r14_1 + 8)
            void* var_188_1 = r14_1
            void* result_4
            
            if (result_3 != 0)
                result_4 = result_3
            
            if (result_3 == 0 || *r14_1 != 0)
                result_4 = nullptr
            
            int32_t rcx_5 = 0
            int32_t r8_4 = 0
            int128_t* rax_16
            int32_t var_1e8
            void* var_1e0
            int32_t var_1d8
            int64_t var_1d4
            int32_t var_1c0
            void* var_1b8
            int32_t var_1b0
            int64_t var_1ac
            
            if (result_4 == 0)
                int32_t r11_1 = data_1439aadb8
                void* r9_1 = &data_1439aada0
                var_1b8 = &data_1439aada0
                var_1c0 = 0
                int32_t var_1bc_1 = 1
                var_1b0 = 0xffffffff
                var_1ac = 0
                
                if (r11_1 != 0)
                    void* rax_17 = data_1439aadb0
                    
                    if (rax_17 != 0)
                        r9_1 = rax_17
                    
                    int32_t temp0_3
                    int32_t temp1_1
                    temp0_3:temp1_1 = sx.q(r11_1 - 1)
                    int32_t rdx_9 = *r9_1
                    
                    if (rdx_9 != 0)
                    label_140d3bd9c:
                        int32_t rax_24 = neg.d(rdx_9) & rdx_9
                        uint64_t rflags_2
                        int32_t temp0_4
                        temp0_4, rflags_2 = _bit_scan_reverse(rax_24)
                        int32_t var_1bc_2 = rax_24
                        int32_t rax_25
                        
                        if (rax_24 == 0)
                            rax_25 = 0x20
                        else
                            rax_25 = 0x1f - temp0_4
                        
                        var_1ac.d = r8_4 - rax_25 + 0x1f
                        
                        if (r8_4 - rax_25 + 0x1f s> r11_1)
                            var_1ac.d = r11_1
                    else
                        while (true)
                            int64_t rdx_10 = sx.q(rcx_5)
                            r8_4 += 0x20
                            rcx_5 += 1
                            var_1ac:4.d = r8_4
                            var_1c0 = rcx_5
                            
                            if (rdx_10.d s>= (temp1_1 + (temp0_3 & 0x1f)) s>> 5)
                                break
                            
                            rdx_9 = *(r9_1 + (rdx_10 << 2) + 4)
                            var_1b0 = 0xffffffff
                            
                            if (rdx_9 != 0)
                                goto label_140d3bd9c
                        
                        var_1ac.d = r11_1
                
                var_1e8.q = &data_1439aad90
                var_1e0.o = var_1c0.o
                int64_t* var_d8_1 = &data_1439aad90
                int128_t var_100
                rax_16 = &var_100
                var_1d4:4.o = 0xffffffff
                int64_t temp0_5 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
                var_100 = var_1e8.o
                int128_t var_f0_1 = var_1d8.o
                int64_t var_e0_1 = temp0_5
            else
                rdi_1 = zx.q(*(result_4 + 0x28))
                void* r9 = result_4 + 0x10
                var_1e8 = 0
                int32_t var_1e4_1 = 1
                var_1e0 = r9
                var_1d8 = 0xffffffff
                var_1d4 = 0
                
                if (rdi_1.d != 0)
                    void* rax_6 = *(r9 + 0x10)
                    
                    if (rax_6 != 0)
                        r9 = rax_6
                    
                    int32_t temp2_1
                    int32_t temp3_1
                    temp2_1:temp3_1 = sx.q((rdi_1 - 1).d)
                    int32_t rdx_5 = *r9
                    
                    if (rdx_5 != 0)
                    label_140d3bcab:
                        int32_t rax_13 = neg.d(rdx_5) & rdx_5
                        uint64_t rflags_1
                        int32_t temp0_1
                        temp0_1, rflags_1 = _bit_scan_reverse(rax_13)
                        int32_t var_1e4_2 = rax_13
                        int32_t rax_14
                        
                        if (rax_13 == 0)
                            rax_14 = 0x20
                        else
                            rax_14 = 0x1f - temp0_1
                        
                        var_1d4.d = r8_4 - rax_14 + 0x1f
                        
                        if (r8_4 - rax_14 + 0x1f s> rdi_1.d)
                            var_1d4.d = rdi_1.d
                    else
                        while (true)
                            int64_t rdx_6 = sx.q(rcx_5)
                            r8_4 += 0x20
                            rcx_5 += 1
                            var_1d4:4.d = r8_4
                            var_1e8 = rcx_5
                            
                            if (rdx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                                break
                            
                            rdx_5 = *(r9 + (rdx_6 << 2) + 4)
                            var_1d8 = 0xffffffff
                            
                            if (rdx_5 != 0)
                                goto label_140d3bcab
                        
                        var_1d4.d = rdi_1.d
                
                var_1c0.q = result_4
                int128_t var_130
                rax_16 = &var_130
                void* result_5 = result_4
                var_1b8.o = var_1e8.o
                var_1ac:4.o = 0xffffffff
                int64_t temp0_2 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
                var_130 = var_1c0.o
                int128_t var_120_1 = var_1b0.o
                int64_t var_110_1 = temp0_2
            int128_t zmm1 = rax_16[1]
            int128_t var_180 = *rax_16
            int128_t var_170_1 = zmm1
            int128_t var_160_1 = rax_16[2]
            
            if (result_3 != 0)
                result = result_3
            
            if (result_3 == 0 || *r14_1 != 0)
                result = nullptr
            
            rsi_1.b = result != 0
            char var_150_1 = rsi_1.b
            
            if (*r14_1 != 0 || result_3 != 0)
                result.b = 0
            else
                result.b = 1
            
            rdi_1.b = 0
            char var_14e_1 = 0
            char result_2 = result.b
            
            while (true)
                int32_t r15_1 = var_170_1:0xc.d
                
                while (true)
                    if (rsi_1.b == 0)
                        result.b = result.b == 0
                    else
                        result.b = r15_1 s< *(var_170_1.q + 0x18)
                    
                    if (result.b == 0)
                        rbx = var_1f0
                        rsi_1 = var_198
                        rdi_1 = var_140_1
                        goto label_140d3bf71
                    
                    if (rsi_1.b == 0)
                        uint64_t rax_29 = zx.q(rdi_1.b)
                        char temp4_1 = rax_29.b
                        rax_29.b = neg.b(rax_29.b)
                        result = (zx.q((sbb.q(rax_29, rax_29, temp4_1 != 0)).d) & 8) + r14_1
                    else
                        result = (sx.q(r15_1) << 4) + *var_180.q
                    
                    void* r8_7 = *result
                    
                    if ((*(r8_7 + 8) & arg4) == 0)
                        int32_t rax_32 = *(r8_7 + 0xc)
                        
                        if (rax_32 s>= data_143e1d9b4)
                            result = nullptr
                        else
                            uint32_t rdx_11 = zx.d(rax_32.w)
                            
                            if (rax_32 s< 0)
                                rax_32 += 0xffff
                                rdx_11 -= 0x10000
                            
                            result = *(data_143e1d9a0 + (sx.q(rax_32 s>> 0x10) << 3))
                                + sx.q(rdx_11) * 0x18
                        
                        if ((*(result + 8) & r12_1) == 0)
                            int64_t rcx_11 = *(arg2 + 8)
                            void* var_148 = r8_7
                            (*arg2)(rcx_11, &var_148)
                    
                    if (rsi_1.b != 0)
                        var_170_1:8.d &= not.d(var_180:0xc.d)
                        sub_14059bdd0(&var_180:8)
                        result = zx.q(result_2)
                        rdi_1 = zx.q(var_14e_1)
                        rsi_1 = zx.q(var_150_1)
                        r14_1 = var_188_1
                        break
                    
                    if (rdi_1.b == 0 && *(r14_1 + 8) != 0)
                        result.b = 0
                        rdi_1.b = 1
                        result_2 = 0
                        var_14e_1 = 1
                        continue
                    
                    result.b = 1
                    result_2 = 1
                    rdi_1 = 1
                    var_14e_1 = 1

if (lpCriticalSection != 0)
    result = LeaveCriticalSection(lpCriticalSection)
    rcx_13 = var_50

if (rcx_13 != 0)
    result = sub_140a74f90(rcx_13)

__security_check_cookie(rax_1 ^ &var_218)
return result
