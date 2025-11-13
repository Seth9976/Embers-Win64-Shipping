// 函数: sub_140817de0
// 地址: 0x140817de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14 = arg1 + 0x1a0
int32_t var_74 = 1
int32_t r10 = *(r14 + 0x28)
void* r13 = r14 + 0x10
int32_t rcx = 0
void* arg_8 = r14
int32_t var_78 = 0
int32_t r8 = 0
void* var_70 = r13
int64_t var_64 = 0
int32_t var_68 = 0xffffffff

if (r10 != 0)
    void* rax_1 = *(r13 + 0x10)
    void* r9_1 = r13
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_2 = *r9_1
    
    if (rdx_2 != 0)
    label_140817e95:
        int32_t rax_8 = ((rdx_2 - 1) & rdx_2) ^ rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_74_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_64.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r10)
            var_64.d = r10
    else
        while (true)
            int64_t rdx_3 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_64:4.d = r8
            var_78 = rcx
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
            var_68 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_140817e95
        
        var_64.d = r10

int32_t r15 = *(r14 + 0x28)
int32_t r8_3 = r15 s>> 5
int128_t var_48 = var_78.o
int32_t r9_3 = r15 & 0xffffffe0
int128_t var_38 = 0xffffffff
int64_t var_58 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
var_78.o = r14.o
var_68.o = var_48
int32_t result

if (r15 != r10)
    void* rax_12 = *(r13 + 0x10)
    void* r11_1 = r13
    
    if (rax_12 != 0)
        r11_1 = rax_12
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r10 - 1)
    int32_t rdx_7 = *(r11_1 + (sx.q(r8_3) << 2)) & 0xffffffff << (r15 & 0x1f).b
    
    if (rdx_7 != 0)
    label_140817f60:
        result = ((rdx_7 - 1) & rdx_7) ^ rdx_7
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(result)
        int32_t r12_1
        
        if (result == 0)
            r12_1 = 0x20
        else
            r12_1 = 0x1f - temp0_4
        
        r15 = r9_3 - r12_1 + 0x1f
        
        if (r15 s<= r10)
            goto label_140817f81
    else
        while (true)
            int64_t rcx_4 = sx.q(r8_3)
            r9_3 += 0x20
            r8_3 += 1
            
            if (rcx_4.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_7 = *(r11_1 + (rcx_4 << 2) + 4)
            
            if (rdx_7 != 0)
                goto label_140817f60
    
    r15 = r10
    goto label_140817f81

while (true)
    int32_t var_5c
    int64_t rdx_8 = sx.q(var_5c)
    
    if (rdx_8.d != r15 || var_68.q != r13)
        result.b = 0
    else
        result.b = 1
    
    int64_t* rcx_6 = var_78.q
    
    if (result.b == 0 || rcx_6 != r14)
        result.b = 1
    else
        result.b = 0
    
    if (result.b == 0)
        return result
    
    void* r14_2 = *(*rcx_6 + rdx_8 * 0x10)
    
    if (r14_2 != 0)
        void* const rax_23
        
        if (arg2 == 0)
            rax_23 = nullptr
        else
            void* rax_20 = sub_142459c10()
            
            if (rax_20 == 0)
                rax_23 = nullptr
            else
                int64_t rax_21 = sx.q(*(rax_20 + 0x38))
                
                if (rax_21.d s> *(arg2 + 0x38)
                        || *(*(arg2 + 0x30) + (rax_21 << 3)) != rax_20 + 0x30)
                    rax_23 = nullptr
                else
                    rax_23 = arg2
        
        void* rdx_10 = *(r14_2 + 0x10)
        int64_t rax_24 = sx.q(*(rax_23 + 0x38))
        
        if (rax_24.d s<= *(rdx_10 + 0x38) && *(*(rdx_10 + 0x30) + (rax_24 << 3)) == rax_23 + 0x30)
            int64_t rsi_1 = sx.q(*(arg3 + 0x28))
            int32_t rax_26 = (rsi_1 + 1).d
            *(arg3 + 0x28) = rax_26
            
            if (rax_26 s> *(arg3 + 0x2c))
                sub_14083a490(arg3, rsi_1.d)
            
            void* rax_27 = *(arg3 + 0x20)
            void* rcx_11 = arg3
            
            if (rax_27 != 0)
                rcx_11 = rax_27
            
            *(rcx_11 + (rsi_1 << 3)) = r14_2
    
    var_64:4.d &= not.d(var_70:4.d)
    sub_14059bdd0(&var_70)
label_140817f81:
    r14 = arg_8
