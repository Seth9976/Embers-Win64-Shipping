// 函数: sub_140a9f730
// 地址: 0x140a9f730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
int32_t* rbx_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14
bool arg_10

if (data_143dba24c s> *rbx_1)
    _Init_thread_header(&data_143dba24c)
    
    if (data_143dba24c == 0xffffffff)
        sub_140b58260(&arg_10, u"Global", 1)
        data_143dba244 = arg_10.q
        bool cond:2_1 = data_143dbac98 s<= *rbx_1
        data_143dba240.d = 0x7070007
        
        if (not(cond:2_1))
            _Init_thread_header(&data_143dbac98)
            
            if (data_143dbac98 == 0xffffffff)
                sub_140a91290(&data_143dba378)
                data_143dbac90 = &data_143dba378
                atexit(sub_142cbdd90)
                _Init_thread_footer(&data_143dbac98)
        
        int64_t* rcx_17 = data_143dbac90
        (**rcx_17)(rcx_17, &data_143dba240)
        atexit(sub_142cbda90)
        _Init_thread_footer(&data_143dba24c)

char r9 = data_143dba240
char temp0 = data_14399edb4
bool c = r9 u< temp0
char rax_2 = data_143dba241
char arg_18 = r9 != temp0 && not(c)
data_14399edb4 = r9
arg_10 = c
int32_t var_e4 = 1
int32_t var_d8 = 0xffffffff
int32_t rcx
rcx.b = rax_2 == 0
bool cond:1 = data_143dba34c == 0
data_143dba34c = rax_2
int32_t rcx_1
rcx_1.b = cond:1
void* rdi_1 = arg1 + 0x820
int32_t r11 = *(rdi_1 + 0x28)
void* r13 = rdi_1 + 0x10
int32_t r8 = 0
int32_t rcx_2 = 0
void* var_c0 = rdi_1
int32_t var_e8 = 0
void* var_e0 = r13
int64_t var_d4 = 0

if (r11 != 0)
    void* rax_3 = *(r13 + 0x10)
    void* r10_1 = r13
    
    if (rax_3 != 0)
        r10_1 = rax_3
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(r11 - 1)
    int32_t rdx_3 = *r10_1
    
    if (rdx_3 != 0)
    label_140a9f84a:
        int32_t rax_10 = ((rdx_3 - 1) & rdx_3) ^ rdx_3
        uint64_t rflags_1
        char temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rax_10)
        int32_t var_e4_1 = rax_10
        int32_t rax_11
        
        if (rax_10 == 0)
            rax_11 = 0x20
        else
            rax_11 = 0x1f - temp0_1
        
        var_d4.d = r8 - rax_11 + 0x1f
        
        if (r8 - rax_11 + 0x1f s> r11)
            var_d4.d = r11
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx_2)
            r8 += 0x20
            rcx_2 += 1
            var_d4:4.d = r8
            var_e8 = rcx_2
            
            if (rdx_4.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r10_1 + (rdx_4 << 2) + 4)
            int32_t var_d8_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_140a9f84a
        
        var_d4.d = r11

int32_t rdx_5 = *(rdi_1 + 0x28)
var_d4.d = rdx_5
int128_t var_60 = 0xffffffff
uint128_t var_70 = var_e8.o
int32_t r14 = 0xffffffff << (rdx_5 & 0x1f).b
int32_t r8_3 = rdx_5 s>> 5
int32_t r10_3 = rdx_5 & 0xffffffe0
int64_t var_90 = _mm_unpackhi_pd(0xffffffff, 0xffffffff).q
int32_t var_d8_2 = r14
uint128_t var_b0 = rdi_1.o
uint128_t var_a0 = var_70

if (rdx_5 != r11)
    void* rax_14 = *(r13 + 0x10)
    void* rbx_2 = r13
    
    if (rax_14 != 0)
        rbx_2 = rax_14
    
    int32_t temp3_1
    int32_t temp4_1
    temp3_1:temp4_1 = sx.q(r11 - 1)
    int32_t rdx_9 = *(rbx_2 + (sx.q(r8_3) << 2)) & r14
    
    if (rdx_9 != 0)
    label_140a9f925:
        int32_t rax_20 = ((rdx_9 - 1) & rdx_9) ^ rdx_9
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_20)
        int32_t rsi_1
        
        if (rax_20 == 0)
            rsi_1 = 0x20
        else
            rsi_1 = 0x1f - temp0_3
        
        var_d4.d = r10_3 - rsi_1 + 0x1f
        
        if (r10_3 - rsi_1 + 0x1f s> r11)
            var_d4.d = r11
    else
        while (true)
            int64_t rcx_6 = sx.q(r8_3)
            r10_3 += 0x20
            r8_3 += 1
            
            if (rcx_6.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                break
            
            rdx_9 = *(rbx_2 + (rcx_6 << 2) + 4)
            var_d8_2 = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_140a9f925
        
        var_d4.d = r11
    
    rdi_1 = var_c0

int32_t result

while (true)
    int64_t rcx_8 = sx.q(var_a0:0xc.d)
    
    if (rcx_8.d != (var_d8_2.q u>> 0x20).d || var_a0.q != r13)
        result.b = 0
    else
        result.b = 1
    
    int64_t* rdx_10 = var_b0.q
    
    if (result.b == 0 || rdx_10 != rdi_1)
        result.b = 1
    else
        result.b = 0
    
    if (result.b == 0)
        break
    
    bool cond:6_1 = arg_10 == 0
    uint128_t zmm0 = *(*rdx_10 + rcx_8 * 0x18)
    var_e8.o = zmm0
    char* r15_1 = _mm_bsrli_si128(zmm0, 8).q
    char rcx_10 = *r15_1
    char r14_1 = rcx_10
    
    if (not(cond:6_1))
        r14_1 = rcx_10
        
        if (r9 u<= rcx_10)
            r14_1 = r9
    
    if (arg_18 != 0)
        char r8_4 = rcx_10
        char rcx_11 = r15_1[3]
        
        if (r9 u>= rcx_10)
            r8_4 = r9
        
        r14_1 = r8_4
        
        if (rcx_11 u<= r8_4)
            r14_1 = rcx_11
    
    if (r14_1 != 0)
        int32_t var_88
        sub_140a9e570(arg1 + 0x8c0, &var_88)
        int64_t rax_23 = var_e8.q
        int64_t* var_80
        *var_80 = rax_23
        var_80[1].b = r14_1
        *(var_80 + 0xc) = 0xffffffff
        void var_b8
        sub_14095c550(arg1 + 0x8c0, &var_b8, (rax_23 u>> 0x20).d + sub_140b5ead0(rax_23.d), var_80, 
            var_88, nullptr)
    
    *r15_1 = r14_1
    
    if (rcx != rcx_1)
        r15_1[1] = data_143dba241
    
    var_a0:8.d &= not.d(var_b0:0xc.d)
    sub_14059bdd0(&var_b0:8)
    r9 = data_143dba240
    rdi_1 = var_c0

return result
