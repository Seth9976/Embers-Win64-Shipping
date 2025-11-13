// 函数: sub_140b81950
// 地址: 0x140b81950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2a8
int64_t rax_1 = __security_cookie ^ &var_2a8
int32_t var_284 = 1
*arg2 = 0
arg2[1] = 0
int32_t rbx = *(arg1 + 0x30)
int32_t rcx = 0
int32_t var_288 = 0
int32_t* var_280 = arg1 + 0x18
int32_t r8 = 0
int32_t var_278 = 0xffffffff
int64_t var_274 = 0

if (rbx != 0)
    int32_t* rax_2 = *(arg1 + 0x28)
    int32_t* r9_1 = arg1 + 0x18
    
    if (rax_2 != 0)
        r9_1 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbx - 1)
    int32_t rdx_2 = *r9_1
    
    if (rdx_2 != 0)
    label_140b81a1e:
        int32_t rax_8 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_284_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_274.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> rbx)
            var_274.d = rbx
    else
        while (true)
            int64_t rax_5 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_274:4.d = r8
            var_288 = rcx
            
            if (rax_5.d s>= ((temp0_1 & 0x1f) + temp1_1) s>> 5)
                break
            
            rdx_2 = r9_1[rax_5 + 1]
            var_278 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_140b81a1e
        
        var_274.d = rbx

int32_t rdx_3 = *(arg1 + 0x30)
double zmm2[0x2] = var_278.o
var_274.d = rdx_3
int32_t rsi = 0xffffffff << (rdx_3.b & 0x1f)
int128_t var_238 = var_288.o
int32_t r8_3 = rdx_3 s>> 5
int32_t rcx_5 = rdx_3 & 0xffffffe0
int32_t var_278_1 = rsi
double var_228[0x2] = zmm2
int64_t var_248 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
int128_t var_268 = (arg1 + 8).o
int128_t var_258 = var_238

if (rdx_3 != rbx)
    int32_t* rax_11 = *(arg1 + 0x28)
    int32_t* r9_2 = arg1 + 0x18
    
    if (rax_11 != 0)
        r9_2 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rbx - 1)
    int32_t rdx_7 = r9_2[sx.q(r8_3)] & rsi
    
    if (rdx_7 != 0)
    label_140b81af3:
        int32_t rax_18 = neg.d(rdx_7) & rdx_7
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t r11_1
        
        if (rax_18 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_4
        
        var_274.d = rcx_5 - r11_1 + 0x1f
        
        if (rcx_5 - r11_1 + 0x1f s> rbx)
            var_274.d = rbx
    else
        while (true)
            int64_t rax_15 = sx.q(r8_3)
            rcx_5 += 0x20
            r8_3 += 1
            
            if (rax_15.d s>= ((temp2_1 & 0x1f) + temp3_1) s>> 5)
                break
            
            rdx_7 = r9_2[rax_15 + 1]
            var_278_1 = 0xffffffff
            
            if (rdx_7 != 0)
                goto label_140b81af3
        
        var_274.d = rbx

while (true)
    int64_t rax_20 = sx.q(var_258:0xc.d)
    int64_t* rdx_9 = var_268.q
    
    if (rax_20.d == (var_278_1.q u>> 0x20).d && var_258.q == arg1 + 0x18 && rdx_9 == arg1 + 8)
        __security_check_cookie(rax_1 ^ &var_2a8)
        return arg2
    
    int64_t var_218
    __builtin_memset(&var_218, 0, 0x20)
    void* rsi_1 = *rdx_9 + rax_20 * 0x28
    void var_1f0
    sub_140b77b60(&var_1f0)
    void* rdx_10 = *(rsi_1 + 0x10)
    
    if (&var_218 != rdx_10 + 8)
        int32_t rbx_1 = *(rdx_10 + 0x10)
        int64_t r14_1 = *(rdx_10 + 8)
        int64_t var_210_1
        int32_t r8_4 = var_210_1:4.d
        var_210_1.d = rbx_1
        
        if (rbx_1 != 0 || r8_4 != 0)
            sub_1405a4c70(&var_218, rbx_1, r8_4)
            memcpy(var_218, r14_1, rbx_1 * 2)
            rdx_10 = *(rsi_1 + 0x10)
        else
            var_210_1:4.d = 0
    
    int64_t* rax_23 = sub_140b1a780(&var_288, rdx_10 + 0x18)
    int64_t var_208
    
    if (&var_208 != rax_23)
        int64_t rcx_12 = var_208
        
        if (rcx_12 != 0)
            sub_140a74f90(rcx_12)
        
        var_208 = *rax_23
        *rax_23 = 0
        int64_t var_200_1
        var_200_1.d = rax_23[1].d
        var_200_1:4.d = *(rax_23 + 0xc)
        rax_23[1] = 0
    
    int64_t rcx_13 = var_288.q
    
    if (rcx_13 != 0)
        sub_140a74f90(rcx_13)
    
    void* rdx_14 = *(rsi_1 + 0x10)
    char rax_27 = *(rdx_14 + 0x1e4)
    sub_140b795c0(&var_1f0, rdx_14 + 0x28)
    int64_t rbx_3 = sx.q(arg2[1].d)
    int32_t rax_29 = (rbx_3 + 1).d
    int32_t rcx_15
    rcx_15.b = *(*(rsi_1 + 0x10) + 0x1e0) u> 1
    arg2[1].d = rax_29
    
    if (rax_29 s> *(arg2 + 0xc))
        sub_140b8a530(arg2)
    
    int64_t* rbx_5 = rbx_3 * 0x1e0 + *arg2
    sub_140596d10(rbx_5, &var_218)
    sub_140596d10(&rbx_5[2], &var_208)
    rbx_5[4].b = rax_27
    *(rbx_5 + 0x24) = rcx_15
    sub_140b77700(&rbx_5[5], &var_1f0)
    sub_140b78990(&var_1f0)
    int64_t rcx_21 = var_208
    
    if (rcx_21 != 0)
        sub_140a74f90(rcx_21)
    
    int64_t rcx_22 = var_218
    
    if (rcx_22 != 0)
        sub_140a74f90(rcx_22)
    
    var_258:8.d &= not.d(var_268:0xc.d)
    sub_14059bdd0(&var_268:8)
