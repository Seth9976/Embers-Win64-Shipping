// 函数: sub_141db2e10
// 地址: 0x141db2e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
int64_t r15 = 0
void* var_48 = nullptr
int32_t* rdx = arg1 + 0x1b0
int32_t var_40 = 0
int32_t var_3c = 0x18
int32_t rcx = 0
int32_t r11 = rdx[6]
int32_t var_188 = 0
int32_t var_184 = 1
void* r10 = nullptr
int32_t* var_180 = rdx
int32_t r8 = 0
int32_t var_178 = 0xffffffff
int64_t var_174 = 0

if (r11 != 0)
    int32_t* rax_2 = *(rdx + 0x10)
    int32_t* r9_1 = rdx
    
    if (rax_2 != 0)
        r9_1 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_3 = *r9_1
    
    if (rdx_3 != 0)
    label_141db2ef9:
        int32_t rax_9 = ((rdx_3 - 1) & rdx_3) ^ rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
        int32_t var_184_1 = rax_9
        int32_t rax_10
        
        if (rax_9 == 0)
            rax_10 = 0x20
        else
            rax_10 = 0x1f - temp0_2
        
        var_174.d = r8 - rax_10 + 0x1f
        
        if (r8 - rax_10 + 0x1f s> r11)
            var_174.d = r11
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_174:4.d = r8
            var_188 = rcx
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = r9_1[rdx_4 + 1]
            int32_t var_178_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_141db2ef9
        
        var_174.d = r11
    
    rdx = var_180

int32_t r12_1 = *(arg1 + 0x1c8)
int32_t r8_3 = r12_1 s>> 5
int128_t var_128 = var_188.o
int32_t r9_3 = r12_1 & 0xffffffe0
int128_t var_118 = 0xffffffff
int64_t var_138 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_158 = (arg1 + 0x1a0).o
int128_t var_148 = var_128
int32_t rax_13

if (r12_1 != r11)
    int32_t* rax_14 = *(rdx + 0x10)
    int32_t* rsi_1 = rdx
    
    if (rax_14 != 0)
        rsi_1 = rax_14
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_8 = rsi_1[sx.q(r8_3)] & 0xffffffff << (r12_1 & 0x1f).b
    
    if (rdx_8 != 0)
    label_141db2fcf:
        rax_13 = ((rdx_8 - 1) & rdx_8) ^ rdx_8
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_13)
        int32_t r13_1
        
        if (rax_13 == 0)
            r13_1 = 0x20
        else
            r13_1 = 0x1f - temp0_4
        
        r12_1 = r9_3 - r13_1 + 0x1f
        
        if (r12_1 s> r11)
            r12_1 = r11
    else
        while (true)
            int64_t rcx_4 = sx.q(r8_3)
            r9_3 += 0x20
            r8_3 += 1
            
            if (rcx_4.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_8 = rsi_1[rcx_4 + 1]
            
            if (rdx_8 != 0)
                goto label_141db2fcf
        
        r12_1 = r11

void var_108

while (true)
    int64_t rdx_9 = sx.q(var_148:0xc.d)
    
    if (rdx_9.d != r12_1 || var_148.q != var_180)
        rax_13.b = 0
    else
        rax_13.b = 1
    
    int64_t* rcx_6 = var_158.q
    
    if (rax_13.b == 0 || rcx_6 != arg1 + 0x1a0)
        rax_13.b = 1
    else
        rax_13.b = 0
    
    if (rax_13.b == 0)
        break
    
    void* rsi_2 = *(*rcx_6 + rdx_9 * 0x10)
    
    if (rsi_2 != 0)
        int64_t r14_1 = sx.q(*(arg3 + 0xc8))
        int32_t rax_22 = (r14_1 + 1).d
        *(arg3 + 0xc8) = rax_22
        
        if (rax_22 s> *(arg3 + 0xcc))
            sub_141a14450(arg3, r14_1.d)
        
        void* rax_23 = *(arg3 + 0xc0)
        void* rcx_9 = arg3
        
        if (rax_23 != 0)
            rcx_9 = rax_23
        
        *(rcx_9 + (r14_1 << 3)) = rsi_2
        void* rax_24 = sub_142493230()
        void* rdx_11 = *(rsi_2 + 0x10)
        int64_t rax_25 = sx.q(*(rax_24 + 0x38))
        
        if (rax_25.d s<= *(rdx_11 + 0x38) && *(*(rdx_11 + 0x30) + (rax_25 << 3)) == rax_24 + 0x30)
            int64_t r14_2 = *(rsi_2 + 0x1f8)
            
            if (r14_2 != 0)
                int64_t rsi_3 = sx.q(var_40)
                int32_t rax_27 = (rsi_3 + 1).d
                var_40 = rax_27
                
                if (rax_27 s> var_3c)
                    sub_140775380(&var_108, rsi_3.d)
                
                void* rcx_12 = &var_108
                
                if (var_48 != 0)
                    rcx_12 = var_48
                
                *(rcx_12 + (rsi_3 << 3)) = r14_2
    
    var_148:8.d &= not.d(var_158:0xc.d)
    sub_14059bdd0(&var_158:8)
    r10 = var_48

void* rsi_4 = &var_108

if (r10 != 0)
    rsi_4 = r10

int64_t r14_3 = sx.q(var_40) << 3
void* result = rsi_4 + r14_3
uint64_t r14_4 = r14_3 u>> 3

if (rsi_4 u> result)
    r14_4 = 0

if (r14_4 != 0)
    do
        result = sub_141db2e10(*rsi_4, arg2, arg3)
        r15 += 1
        rsi_4 += 8
    while (r15 != r14_4)
    
    r10 = var_48

if (r10 != 0)
    result = sub_140a74f90(r10)

__security_check_cookie(rax_1 ^ &var_1a8)
return result
