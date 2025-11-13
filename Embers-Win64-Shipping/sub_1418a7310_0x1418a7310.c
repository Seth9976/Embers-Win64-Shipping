// 函数: sub_1418a7310
// 地址: 0x1418a7310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
int32_t r11 = *(arg2 + 0x28)
int32_t r9 = 0
void* var_f8 = arg2 + 0x10
int32_t var_100 = 0
int32_t var_fc = 1
int32_t rcx = 0
int32_t var_f0 = 0xffffffff
int64_t var_ec = 0

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
    label_1418a73cc:
        int32_t rax_9 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rax_9)
        int32_t var_fc_1 = rax_9
        int32_t var_e0_1 = temp0_1
        int32_t rax_10
        
        if (rax_9 == 0)
            rax_10 = 0x20
        else
            rax_10 = 0x1f - temp0_1
        
        var_ec.d = rcx - rax_10 + 0x1f
        
        if (rcx - rax_10 + 0x1f s> r11)
            var_ec.d = r11
    else
        while (true)
            int64_t rdx_3 = sx.q(r9)
            rcx += 0x20
            r9 += 1
            var_ec:4.d = rcx
            var_100 = r9
            
            if (rdx_3.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r8 + (rdx_3 << 2) + 4)
            int32_t var_f0_1 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_1418a73cc
        
        var_ec.d = r11

int32_t rax_12 = *(arg2 + 0x28)
char rcx_3 = rax_12.b & 0x1f
double var_120[0x2] = var_100.o
int32_t r8_2 = rax_12 s>> 5
int32_t r9_2 = rax_12 & 0xffffffe0
int128_t var_110 = 0xffffffff
int32_t r12 = 0xffffffff << rcx_3
int64_t var_90 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
void* var_128
var_128.d = r8_2
var_128:4.d = 1 << rcx_3
var_120[0] = arg2 + 0x10
var_120[1].d = r12
var_120[1]:4.d = rax_12
var_110.d = r9_2
double var_b0[0x2] = arg2.o

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
    label_1418a74cd:
        int32_t rax_20 = neg.d(rdx_8) & rdx_8
        uint64_t rflags_2
        int32_t temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_20)
        var_128:4.d = rax_20
        int32_t var_dc_1 = temp0_3
        int32_t rbx_1
        
        if (rax_20 == 0)
            rbx_1 = 0x20
        else
            rbx_1 = 0x1f - temp0_3
        
        var_120[1]:4.d = r9_2 - rbx_1 + 0x1f
        
        if (r9_2 - rbx_1 + 0x1f s> r11)
            var_120[1]:4.d = r11
    else
        while (true)
            int64_t rcx_5 = sx.q(r8_2)
            r9_2 += 0x20
            r8_2 += 1
            var_110.d = r9_2
            var_128.d = r8_2
            
            if (rcx_5.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                break
            
            rdx_8 = *(r10_1 + (rcx_5 << 2) + 4)
            var_120[1].d = 0xffffffff
            
            if (rdx_8 != 0)
                goto label_1418a74cd
        
        var_120[1]:4.d = r11

void* var_d8 = arg2
double var_c0[0x2] = var_120
double var_d0[0x2] = var_128.o
double var_88[0x2] = var_d8.o
double rsi_1 = var_120[0]
int64_t var_68 = (_mm_unpackhi_pd(var_120, var_120[0])).q
double var_78[0x2] = var_d0

while (true)
    int64_t result = sx.q(var_120[1]:4.d)
    double rdx_9 = var_b0[0]
    
    if (result.d == (rsi_1 u>> 0x20).d && var_120[0] == arg2 + 0x10 && rdx_9 == arg2)
        __security_check_cookie(rax_1 ^ &var_148)
        return result
    
    sub_140596d10(&var_d8, *rdx_9 + result * 0x18)
    var_d0[1].d = arg3
    char var_38_1 = 0xff
    int64_t var_60
    sub_140596d10(&var_60, &var_d8)
    int32_t var_50_1 = var_d0[1].d
    char var_38_2 = 2
    int64_t* rax_24 = j_sub_140a82f30(0x38)
    
    if (rax_24 != 0)
        *rax_24 = 0
        rax_24[6].b = 0xff
        sub_14189e9c0(&rax_24[1], &var_60)
        int64_t* temp0_5 = *(arg1 + 0xe0)
        *(arg1 + 0xe0) = rax_24
        *temp0_5
        *temp0_5 = rax_24
    
    uint64_t rdx_13 = zx.q(var_38_2)
    bool cond:4_1
    
    if (rdx_13.d u<= 5)
        switch (rdx_13)
            case 0
                if (rdx_13.b == 0)
                    char var_38_3 = 0xff
                    sub_14189e230(&var_60)
            case 1
                if (rdx_13.b == 1)
                    char var_38_4 = 0xff
            case 2
                cond:4_1 = rdx_13.b != 2
            label_1418a7600:
                
                if (not(cond:4_1))
                    int64_t rcx_16 = var_60
                    char var_38_5 = 0xff
                    
                    if (rcx_16 != 0)
                        sub_140a74f90(rcx_16)
            case 3
                cond:4_1 = rdx_13.b != 3
                goto label_1418a7600
            case 4
                if (rdx_13.b == 4)
                    char var_38_6 = 0xff
            case 5
                char rax_26 = rdx_13.b
                
                if (rdx_13.b == 4)
                    rax_26 = -1
                
                char var_38_7 = rax_26
    void* rcx_17 = var_d8
    
    if (rcx_17 != 0)
        sub_140a74f90(rcx_17)
    
    var_120[1].d &= not.d(var_b0[1]:4.d)
    sub_14059bdd0(&var_b0[1])
