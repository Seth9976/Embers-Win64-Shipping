// 函数: sub_140a7d580
// 地址: 0x140a7d580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
int32_t rsi = 0
int32_t var_1b8 = 0
void* rdx = *arg2
int16_t* rdx_1

if (*(rdx + 0x30) == 0)
    rdx_1 = &data_142d40450
else
    rdx_1 = *(rdx + 0x28)

void var_e8
sub_1408f2b40(&var_e8, rdx_1)
char* var_60
sub_142a4dcd0(var_60, &var_1b8)
int64_t var_68

if (var_68 != 0)
    int64_t* rcx_2 = data_143ddb3f0
    
    if (rcx_2 == 0)
        sub_140a750a0()
        rcx_2 = data_143ddb3f0
    
    (*(*rcx_2 + 0x30))(rcx_2, var_68)

void* rdx_4 = *arg2
int64_t* var_1c8
sub_140a7c350(&var_1c8, rdx_4 + 0x68, rdx_4 + 0xa8, rdx_4 + 0x88)
int32_t i_3
int64_t* r15
int32_t i_4

if (arg1 + 0x280 == &var_1c8)
    i_3 = i_4
    r15 = var_1c8
else
    int32_t i_2 = *(arg1 + 0x288)
    int64_t* rbx_1 = *(arg1 + 0x280)
    
    if (i_2 != 0)
        int32_t i
        
        do
            int64_t rdi_1 = *rbx_1
            
            if (rdi_1 != 0)
                int64_t* rcx_4 = data_143ddb3f0
                
                if (rcx_4 == 0)
                    sub_140a750a0()
                    rcx_4 = data_143ddb3f0
                
                (*(*rcx_4 + 0x30))(rcx_4, rdi_1)
            
            rbx_1 = &rbx_1[2]
            i = i_2
            i_2 -= 1
        while (i != 1)
        rbx_1 = *(arg1 + 0x280)
    
    if (rbx_1 != 0)
        int64_t* rcx_5 = data_143ddb3f0
        
        if (rcx_5 == 0)
            sub_140a750a0()
            rcx_5 = data_143ddb3f0
        
        (*(*rcx_5 + 0x30))(rcx_5, rbx_1)
    
    r15 = nullptr
    *(arg1 + 0x280) = var_1c8
    i_3 = 0
    *(arg1 + 0x288) = i_4
    int32_t var_1bc
    *(arg1 + 0x28c) = var_1bc
    var_1c8 = nullptr
    int32_t var_1c0 = 0
int64_t* rdi_2 = r15

if (i_3 != 0)
    int32_t i_1
    
    do
        int64_t rbx_2 = *rdi_2
        
        if (rbx_2 != 0)
            int64_t* rcx_6 = data_143ddb3f0
            
            if (rcx_6 == 0)
                sub_140a750a0()
                rcx_6 = data_143ddb3f0
            
            (*(*rcx_6 + 0x30))(rcx_6, rbx_2)
        
        rdi_2 = &rdi_2[2]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

if (r15 != 0)
    int64_t* rcx_7 = data_143ddb3f0
    
    if (rcx_7 == 0)
        sub_140a750a0()
        rcx_7 = data_143ddb3f0
    
    (*(*rcx_7 + 0x30))(rcx_7, r15)

EnterCriticalSection(arg1 + 0x228)
int32_t var_1b0 = 0
int32_t r10 = *(arg1 + 0x200)
int32_t var_1ac = 1
void* var_1a8 = arg1 + 0x1e8
int32_t rcx_9 = 0
int32_t var_1a0 = 0xffffffff
int32_t var_19c = 0
int32_t var_198 = 0

if (r10 != 0)
    void* rax_10 = *(arg1 + 0x1f8)
    void* r8_1 = arg1 + 0x1e8
    
    if (rax_10 != 0)
        r8_1 = rax_10
    
    int32_t temp3_1
    int32_t temp4_1
    temp3_1:temp4_1 = sx.q(r10 - 1)
    int32_t rdx_12 = *r8_1
    int32_t var_19c_2
    
    if (rdx_12 != 0)
    label_140a7d7f7:
        int32_t rax_17 = ((rdx_12 - 1) & rdx_12) ^ rdx_12
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rax_17)
        int32_t var_1ac_1 = rax_17
        int32_t var_150_1 = temp0_1
        int32_t rax_18
        
        if (rax_17 == 0)
            rax_18 = 0x20
        else
            rax_18 = 0x1f - temp0_1
        
        int32_t var_19c_1 = rcx_9 - rax_18 + 0x1f
        
        if (rcx_9 - rax_18 + 0x1f s> r10)
            var_19c_2 = r10
    else
        while (true)
            int64_t rdx_13 = sx.q(rsi)
            rcx_9 += 0x20
            rsi += 1
            int32_t var_198_1 = rcx_9
            var_1b0 = rsi
            
            if (rdx_13.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                break
            
            rdx_12 = *(r8_1 + (rdx_13 << 2) + 4)
            int32_t var_1a0_1 = 0xffffffff
            
            if (rdx_12 != 0)
                goto label_140a7d7f7
        
        var_19c_2 = r10

int32_t rsi_1 = *(arg1 + 0x200)
int128_t var_170 = var_1b0.o
int32_t r8_3 = rsi_1 s>> 5
int32_t r9_2 = rsi_1 & 0xffffffe0
void* var_178
var_178.d = r8_3
int128_t var_160 = 0xffffffff
int64_t var_118 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t zmm1 = var_170
var_170:0xc.d = rsi_1
var_160.d = r9_2
int128_t var_138 = (arg1 + 0x1d8).o
int128_t var_128 = zmm1

if (rsi_1 != r10)
    void* rax_20 = *(arg1 + 0x1f8)
    void* r10_1 = arg1 + 0x1e8
    
    if (rax_20 != 0)
        r10_1 = rax_20
    
    int32_t temp5_1
    int32_t temp6_1
    temp5_1:temp6_1 = sx.q(r10 - 1)
    int32_t rdx_18 = *(r10_1 + (sx.q(r8_3) << 2)) & 0xffffffff << (rsi_1.b & 0x1f)
    
    if (rdx_18 != 0)
    label_140a7d8d5:
        int32_t rax_27 = ((rdx_18 - 1) & rdx_18) ^ rdx_18
        uint64_t rflags_2
        int32_t temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_27)
        int32_t var_14c_1 = temp0_3
        int32_t r14
        
        if (rax_27 == 0)
            r14 = 0x20
        else
            r14 = 0x1f - temp0_3
        
        rsi_1 = r9_2 - r14 + 0x1f
        var_170:0xc.d = rsi_1
        
        if (rsi_1 s> r10)
            rsi_1 = r10
            var_170:0xc.d = r10
    else
        while (true)
            int64_t rcx_14 = sx.q(r8_3)
            r9_2 += 0x20
            r8_3 += 1
            var_160.d = r9_2
            var_178.d = r8_3
            
            if (rcx_14.d s>= (temp6_1 + (temp5_1 & 0x1f)) s>> 5)
                break
            
            rdx_18 = *(r10_1 + (rcx_14 << 2) + 4)
            
            if (rdx_18 != 0)
                goto label_140a7d8d5
        
        rsi_1 = r10
        var_170:0xc.d = r10

while (true)
    int64_t result = sx.q(var_128:0xc.d)
    int64_t* rdx_19 = var_138.q
    
    if (result.d == rsi_1 && var_128.q == arg1 + 0x1e8 && rdx_19 == arg1 + 0x1d8)
        if (arg1 != -0x228)
            result = LeaveCriticalSection(arg1 + 0x228)
        
        int64_t* rbx_7 = arg2[1]
        
        if (rbx_7 != 0)
            result = zx.q(rbx_7[1].d)
            rbx_7[1].d -= 1
            
            if (result.d == 1)
                result = (**rbx_7)(rbx_7)
                int32_t rdi_5 = *(rbx_7 + 0xc)
                *(rbx_7 + 0xc) -= 1
                
                if (rdi_5 == 1)
                    result = (*(*rbx_7 + 8))(rbx_7, zx.q(rdi_5))
        
        __security_check_cookie(rax_1 ^ &var_1e8)
        return result
    
    int64_t* rax_28 = *(*rdx_19 + result * 0x28 + 0x10)
    int64_t* rcx_17 = *rax_28
    int64_t var_110
    sub_140597da0(&rax_28[1], (*(*rcx_17 + 8))(rcx_17, &var_110))
    int64_t rdi_4 = var_110
    
    if (rdi_4 != 0)
        int64_t* rcx_19 = data_143ddb3f0
        
        if (rcx_19 == 0)
            sub_140a750a0()
            rcx_19 = data_143ddb3f0
        
        (*(*rcx_19 + 0x30))(rcx_19, rdi_4)
    
    int32_t var_180_1 = *(arg1 + 0x288)
    int128_t var_f8 = (*(arg1 + 0x280)).o
    sub_140a69950(&var_f8, &rax_28[1])
    var_128:8.d &= not.d(var_138:0xc.d)
    sub_14059bdd0(&var_138:8)
