// 函数: sub_141db3190
// 地址: 0x141db3190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
int64_t r15 = 0
int32_t var_34 = 0x18
void* rsi = arg1 + 0x1a0
void* var_40 = nullptr
int32_t var_38 = 0
int32_t r11 = *(rsi + 0x28)
void* rdx = rsi + 0x10
void* var_178 = rsi
int32_t rcx = 0
int32_t var_170 = 0
int32_t var_16c = 1
void* var_168 = rdx
void* r10 = nullptr
int32_t var_160 = 0xffffffff
int32_t r8 = 0
int64_t var_15c = 0

if (r11 != 0)
    void* rax_2 = *(rdx + 0x10)
    void* r9_1 = rdx
    
    if (rax_2 != 0)
        r9_1 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_3 = *r9_1
    
    if (rdx_3 != 0)
    label_141db3279:
        int32_t rax_9 = ((rdx_3 - 1) & rdx_3) ^ rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
        int32_t var_16c_1 = rax_9
        int32_t rax_10
        
        if (rax_9 == 0)
            rax_10 = 0x20
        else
            rax_10 = 0x1f - temp0_2
        
        var_15c.d = r8 - rax_10 + 0x1f
        
        if (r8 - rax_10 + 0x1f s> r11)
            var_15c.d = r11
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_15c:4.d = r8
            var_170 = rcx
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
            int32_t var_160_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_141db3279
        
        var_15c.d = r11
    
    rdx = var_168

int32_t r12 = *(rsi + 0x28)
int32_t r8_3 = r12 s>> 5
int128_t var_120 = var_170.o
int32_t r9_3 = r12 & 0xffffffe0
int128_t var_110 = 0xffffffff
int64_t var_130 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_150 = rsi.o
int128_t var_140 = var_120
int32_t rax_13

if (r12 != r11)
    void* rax_14 = *(rdx + 0x10)
    void* rsi_1 = rdx
    
    if (rax_14 != 0)
        rsi_1 = rax_14
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_8 = *(rsi_1 + (sx.q(r8_3) << 2)) & 0xffffffff << (r12 & 0x1f).b
    
    if (rdx_8 != 0)
    label_141db334f:
        rax_13 = ((rdx_8 - 1) & rdx_8) ^ rdx_8
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_13)
        int32_t r13_1
        
        if (rax_13 == 0)
            r13_1 = 0x20
        else
            r13_1 = 0x1f - temp0_4
        
        r12 = r9_3 - r13_1 + 0x1f
        
        if (r12 s> r11)
            r12 = r11
    else
        while (true)
            int64_t rcx_4 = sx.q(r8_3)
            r9_3 += 0x20
            r8_3 += 1
            
            if (rcx_4.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_8 = *(rsi_1 + (rcx_4 << 2) + 4)
            
            if (rdx_8 != 0)
                goto label_141db334f
        
        r12 = r11
    
    rsi = var_178

void var_100

while (true)
    int64_t rdx_9 = sx.q(var_140:0xc.d)
    
    if (rdx_9.d != r12 || var_140.q != var_168)
        rax_13.b = 0
    else
        rax_13.b = 1
    
    int64_t* rcx_6 = var_150.q
    
    if (rax_13.b == 0 || rcx_6 != rsi)
        rax_13.b = 1
    else
        rax_13.b = 0
    
    if (rax_13.b == 0)
        break
    
    void* rsi_2 = *(*rcx_6 + rdx_9 * 0x10)
    
    if (rsi_2 != 0)
        void* const rax_25
        
        if (arg2 == 0)
            rax_25 = nullptr
        else
            void* rax_22 = sub_142459c10()
            
            if (rax_22 == 0)
                rax_25 = nullptr
            else
                int64_t rax_23 = sx.q(*(rax_22 + 0x38))
                
                if (rax_23.d s> *(arg2 + 0x38))
                    rax_25 = nullptr
                else
                    rax_25 = arg2
                    
                    if (*(*(arg2 + 0x30) + (rax_23 << 3)) != rax_22 + 0x30)
                        rax_25 = nullptr
        
        void* rdx_11 = *(rsi_2 + 0x10)
        int64_t rax_26 = sx.q(*(rax_25 + 0x38))
        
        if (rax_26.d s<= *(rdx_11 + 0x38) && *(*(rdx_11 + 0x30) + (rax_26 << 3)) == rax_25 + 0x30)
            int64_t r14_1 = sx.q(*(arg3 + 0xc8))
            int32_t rax_28 = (r14_1 + 1).d
            *(arg3 + 0xc8) = rax_28
            
            if (rax_28 s> *(arg3 + 0xcc))
                sub_141a14450(arg3, r14_1.d)
            
            void* rax_29 = *(arg3 + 0xc0)
            void* rcx_11 = arg3
            
            if (rax_29 != 0)
                rcx_11 = rax_29
            
            *(rcx_11 + (r14_1 << 3)) = rsi_2
        
        void* rax_30 = sub_142493230()
        void* rdx_13 = *(rsi_2 + 0x10)
        int64_t rax_31 = sx.q(*(rax_30 + 0x38))
        
        if (rax_31.d s<= *(rdx_13 + 0x38) && *(*(rdx_13 + 0x30) + (rax_31 << 3)) == rax_30 + 0x30)
            int64_t r14_2 = *(rsi_2 + 0x1f8)
            
            if (r14_2 != 0)
                int64_t rsi_3 = sx.q(var_38)
                int32_t rax_33 = (rsi_3 + 1).d
                var_38 = rax_33
                
                if (rax_33 s> var_34)
                    sub_140775380(&var_100, rsi_3.d)
                
                void* rcx_14 = &var_100
                
                if (var_40 != 0)
                    rcx_14 = var_40
                
                *(rcx_14 + (rsi_3 << 3)) = r14_2
    
    var_140:8.d &= not.d(var_150:0xc.d)
    sub_14059bdd0(&var_150:8)
    r10 = var_40
    rsi = var_178

void* rsi_4 = &var_100

if (r10 != 0)
    rsi_4 = r10

int64_t r14_3 = sx.q(var_38) << 3
void* result = rsi_4 + r14_3
uint64_t r14_4 = r14_3 u>> 3

if (rsi_4 u> result)
    r14_4 = 0

if (r14_4 != 0)
    do
        result = sub_141db3190(*rsi_4, arg2, arg3)
        r15 += 1
        rsi_4 += 8
    while (r15 != r14_4)
    
    r10 = var_40

if (r10 != 0)
    result = sub_140a74f90(r10)

__security_check_cookie(rax_1 ^ &var_198)
return result
