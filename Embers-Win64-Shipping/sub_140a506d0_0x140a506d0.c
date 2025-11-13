// 函数: sub_140a506d0
// 地址: 0x140a506d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_298
int64_t rax_1 = __security_cookie ^ &var_298
int64_t var_178
sub_140ae6a10(&var_178)
int16_t* var_268 = nullptr
int64_t var_260 = 0
sub_1405947f0(&var_268, 0xf)
int32_t r14 = var_260.d + 0xf
var_260.d = r14

if (r14 s> 0)
    sub_140594770(&var_268)
    r14 = var_260.d

int16_t* rdi = var_268
__builtin_wcscpy(rdi, u"ConsoleHistory")
int64_t var_200
sub_140b58260(&var_200, u"History", 1)
void* r15 = arg1 + 0x60
int32_t var_254 = 1
int32_t r10 = *(r15 + 0x28)
void* r13 = r15 + 0x10
void* var_1f8 = r15
int32_t rcx_4 = 0
int32_t var_258 = 0
int32_t r8 = 0
int32_t var_248 = 0xffffffff
int64_t var_244 = 0

if (r10 != 0)
    void* rax_2 = *(r13 + 0x10)
    void* r9_1 = r13
    
    if (rax_2 != 0)
        r9_1 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_3 = *r9_1
    
    if (rdx_3 != 0)
    label_140a5082c:
        int32_t rax_9 = ((rdx_3 - 1) & rdx_3) ^ rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
        int32_t var_254_1 = rax_9
        int32_t rax_10
        
        if (rax_9 == 0)
            rax_10 = 0x20
        else
            rax_10 = 0x1f - temp0_2
        
        var_244.d = r8 - rax_10 + 0x1f
        
        if (r8 - rax_10 + 0x1f s> r10)
            var_244.d = r10
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx_4)
            r8 += 0x20
            rcx_4 += 1
            var_244:4.d = r8
            var_258 = rcx_4
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
            var_248 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_140a5082c
        
        var_244.d = r10

int32_t rdx_5 = *(r15 + 0x28)
double zmm2[0x2] = var_248.o
var_244.d = rdx_5
double var_190[0x2] = zmm2
int128_t var_1a0 = var_258.o
int32_t rsi = 0xffffffff << (rdx_5 & 0x1f).b
int32_t r8_3 = rdx_5 s>> 5
int32_t r9_3 = rdx_5 & 0xffffffe0
int64_t var_1d0 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
int32_t var_248_1 = rsi
int128_t var_1f0 = r15.o
int128_t var_198
int128_t var_1e0 = var_198

if (rdx_5 != r10)
    void* rax_14 = *(r13 + 0x10)
    void* r11_1 = r13
    
    if (rax_14 != 0)
        r11_1 = rax_14
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r10 - 1)
    int32_t rdx_9 = *(r11_1 + (sx.q(r8_3) << 2)) & rsi
    
    if (rdx_9 != 0)
    label_140a50907:
        int32_t rax_20 = ((rdx_9 - 1) & rdx_9) ^ rdx_9
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_20)
        int32_t rbx_1
        
        if (rax_20 == 0)
            rbx_1 = 0x20
        else
            rbx_1 = 0x1f - temp0_4
        
        var_244.d = r9_3 - rbx_1 + 0x1f
        
        if (r9_3 - rbx_1 + 0x1f s> r10)
            var_244.d = r10
    else
        while (true)
            int64_t rcx_8 = sx.q(r8_3)
            r9_3 += 0x20
            r8_3 += 1
            
            if (rcx_8.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_9 = *(r11_1 + (rcx_8 << 2) + 4)
            var_248_1 = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_140a50907
        
        var_244.d = r10
    
    rdi = var_268

uint32_t r12_1 = (var_248_1.q u>> 0x20).d
int64_t var_220

while (true)
    int64_t rcx_10 = sx.q(var_1e0:0xc.d)
    int32_t rax_13
    
    if (rcx_10.d != r12_1 || var_1e0.q != r13)
        rax_13.b = 0
    else
        rax_13.b = 1
    
    int64_t* rdx_10 = var_1f0.q
    
    if (rax_13.b == 0 || rdx_10 != r15)
        rax_13.b = 1
    else
        rax_13.b = 0
    
    if (rax_13.b == 0)
        break
    
    int64_t rdx_11 = *rdx_10
    int64_t rcx_11 = rcx_10 * 5
    int64_t* rbx_2 = rdx_11 + (rcx_11 << 3)
    
    if (*(rdx_11 + (rcx_11 << 3) + 8) != 0)
        *rbx_2
    
    int16_t* const r8_4 = &data_142d40450
    
    if (r14 != 0)
        r8_4 = rdi
    
    int64_t var_1b8
    sub_140a2e390(&var_1b8, u"%s%s", r8_4)
    int64_t* var_208 = &var_1b8
    int32_t var_1c8
    sub_140a3f040(&var_178, &var_1c8)
    int64_t* var_1c0
    sub_140a3a010(&var_208, var_1c0)
    var_1c0[0x16].d = 0xffffffff
    int32_t rax_21 = var_1c0[1].d
    int16_t* rdx_14
    
    if (rax_21 == 0)
        rdx_14 = &data_142d40450
    else
        rdx_14 = *var_1c0
    
    int32_t rcx_15 = rax_21 - 1
    
    if (rax_21 == 0)
        rcx_15 = 0
    
    int32_t var_238
    sub_140a42a90(&var_178, &var_238, sub_1405969c0(rcx_15, rdx_14), var_1c0, var_1c8, nullptr)
    int64_t rcx_18 = var_1b8
    void* r15_2 = sx.q(var_238) * 0xb8 + var_178
    
    if (rcx_18 != 0)
        sub_140a74f90(rcx_18)
    
    int64_t* i = rbx_2[2]
    
    for (void* r14_3 = &i[sx.q(rbx_2[3].d) * 2]; i != r14_3; i = &i[2])
        sub_140596d10(&var_258, i)
        var_248_1.q = 0
        var_244 = 0
        sub_140aef990(&var_258)
        sub_14093d370(r15_2 + 0x10, &var_220)
        int64_t* var_218
        *var_218 = var_200
        var_218[1] = 0
        var_218[1] = var_258.q
        __builtin_memset(&var_258, 0, 0x20)
        var_218[2].d = r13.d
        *(var_218 + 0x14) = r13:4.d
        var_218[3] = 0
        var_218[3] = var_248_1.q
        var_218[4].d = var_244:4.d
        int32_t var_23c
        *(var_218 + 0x24) = var_23c
        var_218[5].d = 0xffffffff
        int64_t rbx_3 = *var_218
        void var_210
        sub_140a42510(r15_2 + 0x10, &var_210, (rbx_3 u>> 0x20).d + sub_140b5ead0(rbx_3.d), var_218, 
            var_220.d, nullptr)
        int64_t rcx_24 = var_248_1.q
        
        if (rcx_24 != 0)
            sub_140a74f90(rcx_24)
        
        int64_t rcx_25 = var_258.q
        
        if (rcx_25 != 0)
            sub_140a74f90(rcx_25)
    
    var_1e0:8.d &= not.d(var_1f0:0xc.d)
    sub_14059bdd0(&var_1f0:8)
    rdi = var_268
    r14 = var_260.d
    r15 = var_1f8

int16_t** rax_35 = sub_140b17c60(&var_220)
int16_t* rcx_28 = *rax_35
int32_t rdx_19 = rax_35[1].d
int32_t rdx_20 = neg.d(rdx_19)
*rax_35 = nullptr
int32_t r8_7 = rax_35[1].d
var_268 = rcx_28
int32_t rcx_29 = *(rax_35 + 0xc)
int32_t rdx_23 = sbb.d(rdx_20, rdx_20, rdx_19 != 0) + 0x13 + r8_7
var_260.d = r8_7
var_260:4.d = rcx_29
rax_35[1] = 0

if (rdx_23 s> rcx_29)
    sub_1405947f0(&var_268, rdx_23)

sub_140a20ba0(&var_268, u"ConsoleHistory.ini", 0x12)
int64_t rcx_32 = var_220
int16_t* var_230 = var_268
int32_t var_228 = var_260.d
int32_t var_224 = var_260:4.d

if (rcx_32 != 0)
    sub_140a74f90(rcx_32)

char var_128 = 1
var_268 = nullptr
int64_t var_260_1 = 0
sub_140b030b0(&var_178, &var_230, 1, &var_268)
int16_t* rcx_34 = var_268

if (rcx_34 != 0)
    sub_140a74f90(rcx_34)

int16_t* rcx_35 = var_230

if (rcx_35 != 0)
    sub_140a74f90(rcx_35)

if (rdi != 0)
    sub_140a74f90(rdi)

int64_t result = sub_140ae7280(&var_178)
__security_check_cookie(rax_1 ^ &var_298)
return result
