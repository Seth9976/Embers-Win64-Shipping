// 函数: sub_1418a5ed0
// 地址: 0x1418a5ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int32_t r11 = *(arg2 + 0x28)
int32_t r9 = 0
void* var_d8 = arg2 + 0x10
int32_t var_e0 = 0
int32_t var_dc = 1
int32_t rcx = 0
int32_t var_d0 = 0xffffffff
int64_t var_cc = 0

if (r11 != 0)
    void* rax_2 = *(arg2 + 0x20)
    void* r8 = arg2 + 0x10
    
    if (rax_2 != 0)
        r8 = rax_2
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(r11 - 1)
    int32_t rdx_2 = *r8
    
    if (rdx_2 != 0)
    label_1418a5f89:
        int32_t rax_9 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rax_9)
        int32_t var_dc_1 = rax_9
        int32_t var_c0_1 = temp0_1
        int32_t rax_10
        
        if (rax_9 == 0)
            rax_10 = 0x20
        else
            rax_10 = 0x1f - temp0_1
        
        var_cc.d = rcx - rax_10 + 0x1f
        
        if (rcx - rax_10 + 0x1f s> r11)
            var_cc.d = r11
    else
        while (true)
            int64_t rdx_3 = sx.q(r9)
            rcx += 0x20
            r9 += 1
            var_cc:4.d = rcx
            var_e0 = r9
            
            if (rdx_3.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r8 + (rdx_3 << 2) + 4)
            int32_t var_d0_1 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_1418a5f89
        
        var_cc.d = r11

int32_t rax_12 = *(arg2 + 0x28)
char rcx_3 = rax_12.b & 0x1f
double var_100[0x2] = var_e0.o
int32_t r8_2 = rax_12 s>> 5
int32_t r9_2 = rax_12 & 0xffffffe0
int128_t var_f0 = 0xffffffff
int32_t r12 = 0xffffffff << rcx_3
int64_t var_98 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
void* var_108
var_108.d = r8_2
var_108:4.d = 1 << rcx_3
var_100[0] = arg2 + 0x10
var_100[1].d = r12
var_100[1]:4.d = rax_12
var_f0.d = r9_2
double var_b8[0x2] = arg2.o

if (rax_12 != r11)
    void* rax_13 = *(arg2 + 0x20)
    void* r10_1 = arg2 + 0x10
    
    if (rax_13 != 0)
        r10_1 = rax_13
    
    int32_t temp3_1
    int32_t temp4_1
    temp3_1:temp4_1 = sx.q(r11 - 1)
    int32_t rdx_8 = *(r10_1 + (sx.q(r8_2) << 2)) & r12
    
    if (rdx_8 != 0)
    label_1418a607e:
        int32_t rax_20 = neg.d(rdx_8) & rdx_8
        uint64_t rflags_2
        int32_t temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_20)
        var_108:4.d = rax_20
        int32_t var_bc_1 = temp0_3
        int32_t rbx_1
        
        if (rax_20 == 0)
            rbx_1 = 0x20
        else
            rbx_1 = 0x1f - temp0_3
        
        var_100[1]:4.d = r9_2 - rbx_1 + 0x1f
        
        if (r9_2 - rbx_1 + 0x1f s> r11)
            var_100[1]:4.d = r11
    else
        while (true)
            int64_t rcx_5 = sx.q(r8_2)
            r9_2 += 0x20
            r8_2 += 1
            var_f0.d = r9_2
            var_108.d = r8_2
            
            if (rcx_5.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                break
            
            rdx_8 = *(r10_1 + (rcx_5 << 2) + 4)
            var_100[1].d = 0xffffffff
            
            if (rdx_8 != 0)
                goto label_1418a607e
        
        var_100[1]:4.d = r11

void* var_68 = arg2
double var_50[0x2] = var_100
double var_60[0x2] = var_108.o
double var_90[0x2] = var_68.o
double rsi_1 = var_100[0]
int64_t var_70 = (_mm_unpackhi_pd(var_100, var_100[0])).q
double var_58[0x2]
double var_80[0x2] = var_58

while (true)
    int64_t result = sx.q(var_100[1]:4.d)
    double rdx_9 = var_b8[0]
    
    if (result.d == (rsi_1 u>> 0x20).d && var_100[0] == arg2 + 0x10 && rdx_9 == arg2)
        __security_check_cookie(rax_1 ^ &var_128)
        return result
    
    var_58[0].d = arg3
    char var_40_1 = 1
    var_68.o = *(*rdx_9 + result * 0x18)
    int64_t* rax_23 = j_sub_140a82f30(0x38)
    
    if (rax_23 != 0)
        *rax_23 = 0
        rax_23[6].b = 0xff
        sub_14189e9c0(&rax_23[1], &var_68)
        int64_t** temp0_5 = *(arg1 + 0xe0)
        *(arg1 + 0xe0) = rax_23
        *temp0_5
        *temp0_5 = rax_23
    
    uint64_t rdx_11 = zx.q(var_40_1)
    bool cond:3_1
    
    if (rdx_11.d u<= 5)
        switch (rdx_11)
            case 0
                if (rdx_11.b == 0)
                    char var_40_2 = 0xff
                    sub_14189e230(&var_68)
            case 2
                cond:3_1 = rdx_11.b != 2
            label_1418a618c:
                
                if (not(cond:3_1))
                    void* rcx_14 = var_68
                    char var_40_3 = 0xff
                    
                    if (rcx_14 != 0)
                        sub_140a74f90(rcx_14)
            case 3
                cond:3_1 = rdx_11.b != 3
                goto label_1418a618c
    var_100[1].d &= not.d(var_b8[1]:4.d)
    sub_14059bdd0(&var_b8[1])
