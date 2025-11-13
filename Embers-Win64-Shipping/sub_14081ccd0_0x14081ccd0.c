// 函数: sub_14081ccd0
// 地址: 0x14081ccd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142dd5c48
sub_1408400b0(arg1)
int32_t rcx = 0
int32_t var_98 = 0xffffffff
int32_t var_a8 = 0
int32_t rdi = arg1[0xf].d
void* r10 = &arg1[0xc]
int32_t r8 = 0
void* var_a0 = r10
int64_t var_94 = 0
int32_t var_a4 = 1

if (rdi != 0)
    void* rax_1 = *(r10 + 0x10)
    void* r9_1 = r10
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rdi - 1)
    int32_t rdx_3 = *r9_1
    
    if (rdx_3 != 0)
    label_14081cd98:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_a4_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_94.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> rdi)
            var_94.d = rdi
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_94:4.d = r8
            var_a8 = rcx
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
            int32_t var_98_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_14081cd98
        
        var_94.d = rdi

int32_t rdx_5 = arg1[0xf].d
char rcx_3 = rdx_5.b & 0x1f
void* var_a0_1 = r10
int128_t var_50 = var_a8.o
int32_t r8_3 = rdx_5 s>> 5
int128_t var_40 = 0xffffffff
int32_t r14 = 0xffffffff << rcx_3
int32_t r9_3 = rdx_5 & 0xffffffe0
int32_t var_a8_1 = r8_3
int64_t var_60 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
int32_t var_a4_2 = 1 << rcx_3
int32_t var_98_2 = r14
var_94.d = rdx_5
var_94:4.d = r9_3
int128_t var_80 = (&arg1[0xa]).o
int128_t var_70 = var_50

if (rdx_5 != rdi)
    void* rax_12 = *(r10 + 0x10)
    
    if (rax_12 != 0)
        r10 = rax_12
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rdi - 1)
    int32_t rdx_9 = *(r10 + (sx.q(r8_3) << 2)) & r14
    
    if (rdx_9 != 0)
    label_14081ce7a:
        int32_t rax_19 = neg.d(rdx_9) & rdx_9
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_19)
        int32_t var_a4_3 = rax_19
        int32_t r11_1
        
        if (rax_19 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_4
        
        var_94.d = r9_3 - r11_1 + 0x1f
        
        if (r9_3 - r11_1 + 0x1f s> rdi)
            var_94.d = rdi
    else
        while (true)
            int64_t rcx_5 = sx.q(r8_3)
            r9_3 += 0x20
            r8_3 += 1
            var_94:4.d = r9_3
            var_a8_1 = r8_3
            
            if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_9 = *(r10 + (rcx_5 << 2) + 4)
            var_98_2 = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_14081ce7a
        
        var_94.d = rdi

int128_t var_50_1 = var_a8_1.o
double var_40_1[0x2] = var_98_2.o
var_a8_1.o = (&arg1[0xa]).o
var_98_2.o = var_50_1

while (true)
    int64_t rdx_10 = sx.q(var_70:0xc.d)
    int64_t rcx_7 = var_80.q
    
    if (rdx_10.d == (var_94 u>> 0x20).d && var_70.q == var_98_2.q && rcx_7 == var_a8_1.q)
        sub_140825110(&arg1[0xa], 0)
        int64_t rcx_19 = arg1[0x14]
        
        if (rcx_19 != 0)
            sub_140a74f90(rcx_19)
        
        arg1[0x13].d = 0
        int64_t rcx_20 = arg1[0x12]
        
        if (rcx_20 != 0)
            sub_140a74f90(rcx_20)
        
        int64_t result = sub_140825230(&arg1[0xa], 0)
        int64_t rcx_22 = arg1[0xe]
        
        if (rcx_22 != 0)
            result = sub_140a74f90(rcx_22)
        
        int64_t rcx_23 = arg1[0xa]
        
        if (rcx_23 != 0)
            result = sub_140a74f90(rcx_23)
        
        int64_t rcx_24 = arg1[8]
        
        if (rcx_24 != 0)
            result = sub_140a74f90(rcx_24)
        
        int64_t rcx_25 = arg1[6]
        
        if (rcx_25 != 0)
            result = sub_140a74f90(rcx_25)
        
        int64_t rcx_26 = arg1[4]
        
        if (rcx_26 != 0)
            result = sub_140a74f90(rcx_26)
        
        int64_t rcx_27 = arg1[2]
        
        if (rcx_27 == 0)
            return result
        
        return sub_140a74f90(rcx_27)
    
    void** rax_25 = (rdx_10 << 6) + *rcx_7
    void* rdi_1 = *rax_25
    
    if (rdi_1 != 0)
        int64_t* r9_5 = *(rdi_1 + 0xa0)
        uint64_t rdx_11 = sx.q(*(rdi_1 + 0xa8))
        int64_t* rax_26 = r9_5
        void* r8_4 = &r9_5[rdx_11]
        
        if (r9_5 != r8_4)
            do
                if (*rax_26 == arg1)
                    int32_t rax_28 = ((rax_26 - r9_5) s>> 3).d
                    
                    if (rax_28 != 0xffffffff)
                        int32_t rcx_10 = rdx_11.d - rax_28 - 1
                        
                        if (rcx_10 s>= 1)
                            rcx_10 = 1
                        
                        if (rcx_10 != 0)
                            memcpy(&r9_5[sx.q(rax_28)], &r9_5[sx.q(rdx_11.d - rcx_10)], rcx_10 << 3)
                            rdx_11 = zx.q(*(rdi_1 + 0xa8))
                        
                        *(rdi_1 + 0xa8) = (rdx_11 - 1).d
                    
                    break
                
                rax_26 = &rax_26[1]
            while (rax_26 != r8_4)
    
    rax_25[2].d = 0
    
    if (*(rax_25 + 0x14) s<= 0xffffffff)
        sub_14083adb0(&rax_25[1], 0)
    
    int32_t rax_30 = *(rax_25 + 0x24)
    rax_25[4].d = 0
    
    if (rax_30 s< 0 && rax_30 != 0)
        sub_1405dadb0(&rax_25[3], 0)
    
    int32_t rax_31 = *(rax_25 + 0x34)
    rax_25[6].d = 0
    
    if (rax_31 s< 0 && rax_31 != 0)
        sub_1405dadb0(&rax_25[5], 0)
    
    var_70:8.d &= not.d(var_80:0xc.d)
    sub_14059bdd0(&var_80:8)
