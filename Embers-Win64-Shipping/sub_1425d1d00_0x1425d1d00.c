// 函数: sub_1425d1d00
// 地址: 0x1425d1d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = *(arg2 + 0x28)
void* r12 = nullptr
void* var_b0 = arg2 + 0x10
int32_t rcx = 0
int32_t var_b8 = 0
int32_t r15 = 1
int32_t var_b4 = 1
int32_t var_a8 = 0xffffffff
int64_t var_a4 = 0
int128_t zmm6 = zx.o(0)
int32_t r8 = 0

if (r11 != 0)
    void* rax_1 = *(arg2 + 0x20)
    void* r9_1 = arg2 + 0x10
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_2 = *r9_1
    
    if (rdx_2 != 0)
    label_1425d1db8:
        int32_t rax_8 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_b4_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_a4.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r11)
            var_a4.d = r11
    else
        while (true)
            int64_t rdx_3 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_a4:4.d = r8
            var_b8 = rcx
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
            int32_t var_a8_1 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_1425d1db8
        
        var_a4.d = r11

int32_t rdx_4 = *(arg2 + 0x28)
var_a4.d = rdx_4
int32_t r9_2 = 0xffffffff << (rdx_4.b & 0x1f)
int32_t var_a8_2 = r9_2
int128_t var_68 = var_b8.o
int32_t r9_4 = rdx_4 & 0xffffffe0
int32_t r8_3 = rdx_4 s>> 5
int128_t zmm0 = arg2.o
int128_t var_58 = 0xffffffff
int64_t var_78 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_98 = zmm0
int128_t var_88 = var_68

if (rdx_4 != r11)
    void* rax_11 = *(arg2 + 0x20)
    void* r10_1 = arg2 + 0x10
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_8 = *(r10_1 + (sx.q(r8_3) << 2)) & r9_2
    
    if (rdx_8 != 0)
    label_1425d1e84:
        int32_t rax_18 = neg.d(rdx_8) & rdx_8
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t rbx_1
        
        if (rax_18 == 0)
            rbx_1 = 0x20
        else
            rbx_1 = 0x1f - temp0_4
        
        var_a4.d = r9_4 - rbx_1 + 0x1f
        
        if (r9_4 - rbx_1 + 0x1f s> r11)
            var_a4.d = r11
    else
        while (true)
            int64_t rcx_5 = sx.q(r8_3)
            r9_4 += 0x20
            r8_3 += 1
            
            if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_8 = *(r10_1 + (rcx_5 << 2) + 4)
            var_a8_2 = 0xffffffff
            
            if (rdx_8 != 0)
                goto label_1425d1e84
        
        var_a4.d = r11

int64_t result

while (true)
    result = sx.q(var_88:0xc.d)
    int64_t* rdx_9 = var_98.q
    
    if (result.d == (var_a8_2.q u>> 0x20).d && var_88.q == arg2 + 0x10 && rdx_9 == arg2)
        break
    
    int64_t* rcx_8 = *(*rdx_9 + result * 0x18 + 8)
    result = (*(*rcx_8 + 0x268))(rcx_8)
    zmm6 = zmm0
    
    if (zmm0.d f> 0f)
        break
    
    var_88:8.d &= not.d(var_98:0xc.d)
    sub_14059bdd0(&var_98:8)

if (not(zmm6.d f== 0f))
    int64_t r13_1 = sx.q(arg1[1].d)
    arg1[0x16].d = 0
    zmm6.d = zmm6.d f* zmm6.d
    
    if (*(arg1 + 0xb4) s<= 0xffffffff)
        sub_1405dadb0(&arg1[0x15], 0)
    
    result = zx.q(arg1[7].d)
    int32_t* r14_3
    
    if (result.d == *(arg1 + 0x64))
    label_1425d1f6f:
        r14_3 = nullptr
    else
        void* rax_24 = arg1[0xe]
        void* rdx_10 = &arg1[0xd]
        
        if (rax_24 != 0)
            rdx_10 = rax_24
        
        result = zx.q(*(rdx_10 + ((zx.q(arg1[0xf].d - 1) & 1) << 2)))
        
        if (result.d == 0xffffffff)
        label_1425d1f6f_1:
            r14_3 = nullptr
        else
            while (true)
                r14_3 = (sx.q(result.d) << 5) + arg1[6]
                
                if (*r14_3 == 1)
                    break
                
                result = zx.q(r14_3[6])
                
                if (result.d == 0xffffffff)
                    goto label_1425d1f6f_2
            
            if (result.d == 0xffffffff)
            label_1425d1f6f_2:
                r14_3 = nullptr
    
    int64_t rdx_12 = r13_1
    int32_t rbx_4 = 0
    int32_t arg_10
    arg_10.q = rdx_12
    
    if (r13_1.d s> 0)
        int64_t r15_1 = 0
        
        do
            if (rbx_4 s>= 0 && rbx_4 s< r14_3[4])
                result = *(r14_3 + 8)
            
            if (rbx_4 s< 0 || rbx_4 s>= r14_3[4] || not(0.100000001f f>= *(result + (r15_1 << 2))))
                int64_t r13_2 = sx.q(arg1[0x16].d)
                int32_t rax_25 = (r13_2 + 1).d
                arg1[0x16].d = rax_25
                
                if (rax_25 s> *(arg1 + 0xb4))
                    sub_1405a4cf0(&arg1[0x15])
                    rdx_12 = arg_10.q
                
                result = arg1[0x15]
                *(result + (r13_2 << 2)) = rbx_4
            
            rbx_4 += 1
            r15_1 += 1
        while (r15_1 s< rdx_12)
        
        r15 = 1
    
    int32_t i = arg1[0x16].d
    bool cond:5_1 = i == 0
    
    if (i s> 0)
        int32_t i_1 = i
        
        do
            result = arg1[0x15]
            i = i_1
            int64_t rdx_14 = sx.q(*(r12 + result))
            
            if (rdx_14.d != 0xffffffff)
                int64_t r11_1 = *arg1
                int64_t r10_2 = rdx_14 * 3
                int32_t r8_4 = r15
                
                if (r15 s< i_1)
                    void* rdx_15 = r12 + 4
                    
                    do
                        int64_t r9_6 = arg1[0x15]
                        result = sx.q(*(rdx_15 + r9_6))
                        
                        if (result.d != 0xffffffff)
                            int64_t rcx_15 = result * 3
                            result = *arg1
                            int64_t zmm2
                            zmm2.d =
                                (*(result + (rcx_15 << 2) + 4)).d f- *(r11_1 + (r10_2 << 2) + 4)
                            int128_t zmm1
                            zmm1.d = (*(result + (rcx_15 << 2))).d f- *(r11_1 + (r10_2 << 2))
                            zmm0.d =
                                (*(result + (rcx_15 << 2) + 8)).d f- *(r11_1 + (r10_2 << 2) + 8)
                            zmm2.d = zmm2.d f* zmm2.d
                            zmm1.d = zmm1.d f* zmm1.d
                            zmm0.d = zmm0.d f* zmm0.d
                            zmm2.d = zmm2.d f+ zmm1.d
                            zmm2.d = zmm2.d f+ zmm0.d
                            
                            if (not(zmm2.d f>= zmm6.d))
                                *(rdx_15 + r9_6) = 0xffffffff
                        
                        i = arg1[0x16].d
                        r8_4 += 1
                        rdx_15 += 4
                    while (r8_4 s< i)
            
            r15 += 1
            r12 += 4
            i_1 = i
        while (r15 s<= i)
        
        cond:5_1 = i == 0
    
    if (not(cond:5_1))
        result = sx.q(i)
        int64_t rsi_1 = result << 2
        int64_t r14_4 = rsi_1
        
        do
            int64_t rcx_16 = arg1[0x15]
            rsi_1 -= 4
            int64_t i_2 = sx.q(i)
            r14_4 -= 4
            i -= 1
            
            if (*(rsi_1 + rcx_16) == 0xffffffff)
                int32_t rdx_16 = arg1[0x16].d
                int32_t rax_27 = rdx_16 - i
                
                if (rax_27 != 1)
                    memmove(rcx_16 + r14_4, rcx_16 + (i_2 << 2), (rax_27 - 1) << 2)
                    rdx_16 = arg1[0x16].d
                
                arg1[0x16].d = rdx_16 - 1
                result = sub_1405dac90(&arg1[0x15])
        while (i != 0)

return result
