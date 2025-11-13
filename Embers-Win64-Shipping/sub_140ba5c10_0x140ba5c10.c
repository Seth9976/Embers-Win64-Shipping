// 函数: sub_140ba5c10
// 地址: 0x140ba5c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14 = arg1
EnterCriticalSection(arg1 + 0x58)
CRITICAL_SECTION* lpCriticalSection_1 = r14 + 0xe8
EnterCriticalSection(lpCriticalSection_1)
CRITICAL_SECTION* lpCriticalSection = r14 + 0x180
EnterCriticalSection(lpCriticalSection)
int64_t r12 = 0
int64_t* r8 = r14 + 0x2c8
int64_t* r13 = *r8
int64_t arg_10 = 0
uint64_t rcx_4 = sx.q(r8[1].d) << 3 u>> 3

if (r13 u> &r13[r8[1]])
    rcx_4 = 0

if (rcx_4 != 0)
    int64_t rcx_11
    
    do
        void* r15_1 = *r13
        int64_t* r14_1 = *(r15_1 + 0x28)
        
        if (r14_1 != 0 && r14_1[1].d != 0)
            int64_t* rcx_5 = *r14_1
            
            if (rcx_5 != 0 && (*(*rcx_5 + 0x28))(rcx_5) != 0)
                int64_t* rcx_6
                
                if (r14_1[1].d == 0)
                    rcx_6 = nullptr
                else
                    rcx_6 = *r14_1
                
                (*(*rcx_6 + 0x50))(rcx_6, r15_1 + 4, 0, 2)
        
        int64_t* r14_2 = *(r15_1 + 0x28)
        
        if (r14_2 != 0)
            sub_140745b20(r14_2)
            j_sub_140a74f90(r14_2)
        
        j_sub_140a74f90(r15_1)
        r13 = &r13[1]
        rcx_11 = arg_10 + 1
        arg_10 = rcx_11
    while (rcx_11 != rcx_4)
    r14 = arg1

r8[1].d = 0

if (*(r8 + 0xc) != 0)
    sub_1405c5570(r8, 0)

int32_t var_b4 = 1
int32_t r11 = *(r14 + 0x300)
void* var_b0 = r14 + 0x2e8
int32_t rcx_13 = 0
int32_t var_b8 = 0
int32_t r8_1 = 0
int32_t var_a8 = 0xffffffff
int64_t var_a4 = 0

if (r11 != 0)
    void* rax_5 = *(r14 + 0x2f8)
    void* r9_1 = r14 + 0x2e8
    
    if (rax_5 != 0)
        r9_1 = rax_5
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_6 = *r9_1
    
    if (rdx_6 != 0)
    label_140ba5dc8:
        int32_t rax_12 = neg.d(rdx_6) & rdx_6
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_12)
        int32_t var_b4_1 = rax_12
        int32_t rax_13
        
        if (rax_12 == 0)
            rax_13 = 0x20
        else
            rax_13 = 0x1f - temp0_2
        
        var_a4.d = r8_1 - rax_13 + 0x1f
        
        if (r8_1 - rax_13 + 0x1f s> r11)
            var_a4.d = r11
    else
        while (true)
            int64_t rdx_7 = sx.q(rcx_13)
            r8_1 += 0x20
            rcx_13 += 1
            var_a4:4.d = r8_1
            var_b8 = rcx_13
            
            if (rdx_7.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_6 = *(r9_1 + (rdx_7 << 2) + 4)
            int32_t var_a8_1 = 0xffffffff
            
            if (rdx_6 != 0)
                goto label_140ba5dc8
        
        var_a4.d = r11

int32_t rdx_8 = *(r14 + 0x300)
var_a4.d = rdx_8
int32_t r9_2 = 0xffffffff << (rdx_8.b & 0x1f)
void* arg_8
arg_8.d = r9_2
int32_t var_a8_2 = r9_2
int128_t var_68 = var_b8.o
int32_t r9_4 = rdx_8 & 0xffffffe0
int32_t r8_4 = rdx_8 s>> 5
int128_t var_58 = 0xffffffff
int64_t var_78 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_98 = (r14 + 0x2d8).o
int128_t var_88 = var_68

if (rdx_8 != r11)
    void* rax_15 = *(r14 + 0x2f8)
    void* r10_1 = r14 + 0x2e8
    
    if (rax_15 != 0)
        r10_1 = rax_15
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_12 = *(r10_1 + (sx.q(r8_4) << 2)) & arg_8.d
    
    if (rdx_12 != 0)
    label_140ba5ea2:
        int32_t rax_22 = neg.d(rdx_12) & rdx_12
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_22)
        int32_t rax_23
        
        if (rax_22 == 0)
            rax_23 = 0x20
        else
            rax_23 = 0x1f - temp0_4
        
        var_a4.d = r9_4 - rax_23 + 0x1f
        
        if (r9_4 - rax_23 + 0x1f s> r11)
            var_a4.d = r11
    else
        while (true)
            int64_t rcx_18 = sx.q(r8_4)
            r9_4 += 0x20
            r8_4 += 1
            
            if (rcx_18.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_12 = *(r10_1 + (rcx_18 << 2) + 4)
            var_a8_2 = 0xffffffff
            
            if (rdx_12 != 0)
                goto label_140ba5ea2
        
        var_a4.d = r11

while (true)
    int64_t rax_25 = sx.q(var_88:0xc.d)
    int64_t* rcx_20 = var_98.q
    
    if (rax_25.d == (var_a8_2.q u>> 0x20).d && var_88.q == r14 + 0x2e8 && rcx_20 == r14 + 0x2d8)
        int32_t r11_1 = *(r14 + 0x300)
        int32_t var_b4_2 = 1
        int32_t rcx_24 = 0
        int32_t var_b8_1 = 0
        int32_t r8_5 = 0
        void* var_b0_1 = r14 + 0x2e8
        int32_t var_a8_3 = 0xffffffff
        int64_t var_a4_1 = 0
        
        if (r11_1 != 0)
            void* rax_29 = *(r14 + 0x2f8)
            void* r9_6 = r14 + 0x2e8
            
            if (rax_29 != 0)
                r9_6 = rax_29
            
            int32_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q(r11_1 - 1)
            int32_t rdx_15 = *r9_6
            
            if (rdx_15 != 0)
            label_140ba5f88:
                int32_t rax_36 = neg.d(rdx_15) & rdx_15
                uint64_t rflags_3
                int32_t temp0_5
                temp0_5, rflags_3 = _bit_scan_reverse(rax_36)
                int32_t var_b4_3 = rax_36
                int32_t rax_37
                
                if (rax_36 == 0)
                    rax_37 = 0x20
                else
                    rax_37 = 0x1f - temp0_5
                
                var_a4_1.d = r8_5 - rax_37 + 0x1f
                
                if (r8_5 - rax_37 + 0x1f s> r11_1)
                    var_a4_1.d = r11_1
            else
                while (true)
                    int64_t rdx_16 = sx.q(rcx_24)
                    r8_5 += 0x20
                    rcx_24 += 1
                    var_a4_1:4.d = r8_5
                    var_b8_1 = rcx_24
                    
                    if (rdx_16.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_15 = *(r9_6 + (rdx_16 << 2) + 4)
                    int32_t var_a8_4 = 0xffffffff
                    
                    if (rdx_15 != 0)
                        goto label_140ba5f88
                
                var_a4_1.d = r11_1
        
        int32_t rdx_17 = *(r14 + 0x300)
        var_a4_1.d = rdx_17
        int32_t r9_7 = 0xffffffff << (rdx_17.b & 0x1f)
        arg_8.d = r9_7
        int32_t var_a8_5 = r9_7
        int128_t var_68_1 = var_b8_1.o
        int32_t r9_9 = rdx_17 & 0xffffffe0
        int32_t r8_8 = rdx_17 s>> 5
        int128_t var_58_1 = 0xffffffff
        int64_t var_78_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        var_98 = (r14 + 0x2d8).o
        int128_t var_88_1 = var_68_1
        
        if (rdx_17 != r11_1)
            void* rax_39 = *(r14 + 0x2f8)
            void* r10_2 = r14 + 0x2e8
            
            if (rax_39 != 0)
                r10_2 = rax_39
            
            int32_t temp6_1
            int32_t temp7_1
            temp6_1:temp7_1 = sx.q(r11_1 - 1)
            int32_t rdx_21 = *(r10_2 + (sx.q(r8_8) << 2)) & arg_8.d
            
            if (rdx_21 != 0)
            label_140ba6062:
                int32_t rax_46 = neg.d(rdx_21) & rdx_21
                uint64_t rflags_4
                int32_t temp0_7
                temp0_7, rflags_4 = _bit_scan_reverse(rax_46)
                int32_t rax_47
                
                if (rax_46 == 0)
                    rax_47 = 0x20
                else
                    rax_47 = 0x1f - temp0_7
                
                var_a4_1.d = r9_9 - rax_47 + 0x1f
                
                if (r9_9 - rax_47 + 0x1f s> r11_1)
                    var_a4_1.d = r11_1
            else
                while (true)
                    int64_t rcx_29 = sx.q(r8_8)
                    r9_9 += 0x20
                    r8_8 += 1
                    
                    if (rcx_29.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_21 = *(r10_2 + (rcx_29 << 2) + 4)
                    var_a8_5 = 0xffffffff
                    
                    if (rdx_21 != 0)
                        goto label_140ba6062
                
                var_a4_1.d = r11_1
        
        while (true)
            int64_t rcx_31 = sx.q(var_88_1:0xc.d)
            int64_t* rax_49 = var_98.q
            
            if (rcx_31.d == (var_a8_5.q u>> 0x20).d && var_88_1.q == r14 + 0x2e8
                    && rax_49 == r14 + 0x2d8)
                *(r14 + 0x2e0) = 0
                
                if (*(r14 + 0x2e4) != 0)
                    sub_1405a5410(r14 + 0x2d8, 0)
                
                *(r14 + 0x308) = 0xffffffff
                *(r14 + 0x30c) = 0
                sub_14059a8e0(r14 + 0x2e8, 0)
                void* result = zx.q(*(r14 + 0x320))
                
                if (result.d s> 0)
                    uint64_t i_1 = zx.q(result.d)
                    uint64_t i
                    
                    do
                        void* result_1 = *(r14 + 0x318)
                        result = r14 + 0x310
                        int64_t rdx_24 = (sx.q(*(r14 + 0x320)) - 1) & r12
                        
                        if (result_1 != 0)
                            result = result_1
                        
                        r12 += 1
                        *(result + (rdx_24 << 2)) = 0xffffffff
                        i = i_1
                        i_1 -= 1
                    while (i != 1)
                
                if (lpCriticalSection != 0)
                    result = LeaveCriticalSection(lpCriticalSection)
                
                if (lpCriticalSection_1 != 0)
                    result = LeaveCriticalSection(lpCriticalSection_1)
                
                if (arg1 == -0x58)
                    return result
                
                return LeaveCriticalSection(arg1 + 0x58)
            
            int64_t* rcx_33 = *(*rax_49 + rcx_31 * 0x10)
            
            if (rcx_33 != 0)
                (**rcx_33)(rcx_33, 1)
            
            var_88_1:8.d &= not.d(var_98:0xc.d)
            sub_14059bdd0(&var_98:8)
    
    sub_140b9bfa0(*(*rcx_20 + rax_25 * 0x10))
    var_88:8.d &= not.d(var_98:0xc.d)
    sub_14059bdd0(&var_98:8)
