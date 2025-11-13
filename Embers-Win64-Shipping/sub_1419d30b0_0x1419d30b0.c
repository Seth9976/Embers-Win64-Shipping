// 函数: sub_1419d30b0
// 地址: 0x1419d30b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r15 = arg1
int32_t arg_10 = 0
EnterCriticalSection(arg1 + 0x110)

if (arg2 == 0)
    int16_t* const r14_1 = &data_142d40450
    int16_t* const rcx_1
    
    if (arg4[1].d == arg2)
        rcx_1 = &data_142d40450
    else
        rcx_1 = *arg4
    
    int32_t rax_1 = sub_140a54510(rcx_1, u"Embers")
    
    if (rax_1 == 0 && arg3 == *(r15 + 0xc0) && *(r15 + 0xdd) == rax_1.b)
        sub_1419c9f40(r15, 0)
        int16_t* const r15_1 = &data_142d40450
        bool cond:1_1 = data_143de5848 != 0
        int32_t rdx = 0
        uint64_t var_e8 = 0
        int32_t rcx_3 = 0
        
        if (cond:1_1)
            r15_1 = data_143de5840
        
        int64_t var_e0_1 = 0
        int64_t rdi_1 = -1
        int16_t* var_c8 = nullptr
        int64_t var_c0_1 = 0
        
        if (r15_1 != 0 && *r15_1 != 0)
            int64_t rsi_1 = -1
            
            do
                rsi_1 += 1
            while (r15_1[rsi_1] != 0)
            
            if (rsi_1.d + 1 s> 0)
                sub_1405947f0(&var_c8, rsi_1.d + 1)
                rcx_3 = var_c0_1:4.d
                rdx = var_c0_1.d
            
            int32_t rax_2 = rsi_1.d + 1 + rdx
            var_c0_1.d = rax_2
            
            if (rax_2 s> rcx_3)
                sub_140594770(&var_c8)
            
            UnDecorator::getReferenceType(var_c8, r15_1, (rsi_1.d + 1) * 2)
        
        char rsi_3 = 1
        int16_t* var_d8
        
        if (sub_140af5b90(data_143ddb400, data_1439c9720, data_1439c9728, &var_e8, &var_c8) != 0)
            r14_1.b = 0
        else
            bool cond:3_1 = data_143de5838 != 0
            var_d8 = nullptr
            
            if (cond:3_1)
                r14_1 = data_143de5830
            
            int32_t rdx_4 = 0
            int32_t rcx_8 = 0
            int64_t var_d0_1 = 0
            
            if (r14_1 != 0 && *r14_1 != 0)
                int64_t rsi_4 = -1
                
                do
                    rsi_4 += 1
                while (r14_1[rsi_4] != 0)
                
                if (rsi_4.d + 1 s> 0)
                    sub_1405947f0(&var_d8, rsi_4.d + 1)
                    rcx_8 = var_d0_1:4.d
                    rdx_4 = var_d0_1.d
                
                int32_t rax_4 = rdx_4 + rsi_4.d + 1
                var_d0_1.d = rax_4
                
                if (rax_4 s> rcx_8)
                    sub_140594770(&var_d8)
                
                UnDecorator::getReferenceType(var_d8, r14_1, (rsi_4.d + 1) * 2)
            
            rsi_3 = 3
            
            if (sub_140af5b90(data_143ddb400, data_1439c9720, data_1439c9728, &var_e8, &var_d8)
                    != 0)
                r14_1.b = 0
            else
                int32_t rax_6 = var_e0_1.d
                int32_t rax_7
                
                if (rax_6 == 0)
                    rax_7 = 0
                else
                    rax_7 = rax_6 - 1
                
                if (rax_7 != 0)
                    r14_1.b = 0
                else
                    r14_1.b = 1
        
        if ((rsi_3 & 2) != 0)
            int16_t* rcx_13 = var_d8
            
            if (rcx_13 != 0)
                sub_140a74f90(rcx_13)
        
        int16_t* rcx_14 = var_c8
        
        if (rcx_14 != 0)
            sub_140a74f90(rcx_14)
        
        if (r14_1.b != 0 && var_e8 != u"Embers")
            int32_t rdi_2
            
            if ((*u"Embers")[0] == 0)
                rdi_2 = 0
            else
                do
                    rdi_1 += 1
                while ((*u"Embers")[rdi_1] != 0)
                
                rdi_2 = rdi_1.d + 1
            
            int32_t rcx_15 = var_e0_1:4.d
            int32_t rdx_8 = 0
            var_e0_1.d = 0
            
            if (rcx_15 != rdi_2)
                sub_1405947f0(&var_e8, rdi_2)
                rcx_15 = var_e0_1:4.d
                rdx_8 = var_e0_1.d
            
            int32_t rax_8 = rdx_8 + rdi_2
            var_e0_1.d = rax_8
            
            if (rax_8 s> rcx_15)
                sub_140594770(&var_e8)
            
            if (rdi_2 != 0)
                memcpy(var_e8, u"Embers", rdi_2 * 2)
        
        r15 = arg1
        sub_1419d35b0(r15, &var_e8, arg3)
        uint64_t rcx_20 = var_e8
        
        if (rcx_20 != 0)
            sub_140a74f90(rcx_20)

if (*(r15 + 0x140) != 0)
    sub_1419c3e90(r15 + 0x30, r15 + 0x138)
    sub_1419cdb90(r15 + 0x138, 0)

void* rdi_3 = *(r15 + 0x30)
int64_t result_1 = 0
int64_t result = sx.q(*(r15 + 0x38))
void* r9_3 = result * 0x58 + rdi_3

if (rdi_3 != r9_3)
    void* r12_1 = rdi_3 + 0x20
    
    do
        int32_t r10_1 = *(r12_1 + 8)
        int32_t rcx_23 = 0
        int32_t var_b4_1 = 1
        int32_t r8_9 = 0
        int32_t var_b8_1 = 0
        void* var_b0_1 = r12_1 - 0x10
        r15.b = 1
        int32_t var_a8_1 = 0xffffffff
        int64_t var_a4_1 = 0
        
        if (r10_1 != 0)
            void* rax_9 = *r12_1
            void* r9_4 = r12_1 - 0x10
            
            if (rax_9 != 0)
                r9_4 = rax_9
            
            int32_t temp1_1
            int32_t temp2_1
            temp1_1:temp2_1 = sx.q(r10_1 - 1)
            int32_t rdx_14 = *r9_4
            
            if (rdx_14 != 0)
            label_1419d347b:
                int32_t rax_16 = neg.d(rdx_14) & rdx_14
                uint64_t rflags_1
                int32_t temp0_1
                temp0_1, rflags_1 = _bit_scan_reverse(rax_16)
                int32_t var_b4_2 = rax_16
                arg_10 = temp0_1
                int32_t rax_17
                
                if (rax_16 == 0)
                    rax_17 = 0x20
                else
                    rax_17 = 0x1f - temp0_1
                
                var_a4_1.d = r8_9 - rax_17 + 0x1f
                
                if (r8_9 - rax_17 + 0x1f s> r10_1)
                    var_a4_1.d = r10_1
            else
                while (true)
                    int64_t rdx_15 = sx.q(rcx_23)
                    r8_9 += 0x20
                    rcx_23 += 1
                    var_a4_1:4.d = r8_9
                    var_b8_1 = rcx_23
                    
                    if (rdx_15.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_14 = *(r9_4 + (rdx_15 << 2) + 4)
                    int32_t var_a8_2 = 0xffffffff
                    
                    if (rdx_14 != 0)
                        goto label_1419d347b
                
                var_a4_1.d = r10_1
        
        int128_t var_50_1 = 0xffffffff
        int128_t var_60_1
        var_60_1:8.d = 0xffffffff << (r10_1.b & 0x1f)
        var_60_1:0xc.d = r10_1
        int64_t temp0_2 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        int128_t var_90 = rdi_3.o
        int128_t var_80_1 = var_b8_1.o
        int64_t var_70_1 = temp0_2
        
        while (true)
            int64_t rax_19 = sx.q(var_80_1:0xc.d)
            int64_t rdx_17 = var_90.q
            
            if (rax_19.d == (var_60_1:8.q u>> 0x20).d && var_80_1.q == r12_1 - 0x10
                    && rdx_17 == rdi_3)
                break
            
            r15.b &= sub_1419caf50(rax_19 * 0x1c + *rdx_17)
            var_80_1:8.d &= not.d(var_90:0xc.d)
            sub_14059bdd0(&var_90:8)
        
        result = result_1 + 1
        
        if (r15.b == 0)
            result = result_1
        
        rdi_3 += 0x58
        r12_1 += 0x58
        result_1 = result
    while (rdi_3 != r9_3)
    
    r15 = arg1

*(r15 + 0xf0) = result_1

if (arg1 == -0x110)
    return result

return LeaveCriticalSection(arg1 + 0x110)
