// 函数: sub_14151b370
// 地址: 0x14151b370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_248
int64_t rax_1 = __security_cookie ^ &var_248
int32_t rbx = *(arg2 + 0x28)
void* r13 = arg2 + 0x10
int32_t r10 = 0
void* r15 = arg1
int32_t rcx = 0
void* r14 = arg2
int32_t var_1d8 = 0
int32_t var_1d4 = 1
void* var_1d0 = r13
int32_t var_1c8 = 0xffffffff
int64_t var_1c4 = 0

if (rbx != 0)
    void* rax_3 = *(r13 + 0x10)
    void* r8 = r13
    
    if (rax_3 != 0)
        r8 = rax_3
    
    int32_t temp3_1
    int32_t temp4_1
    temp3_1:temp4_1 = sx.q(rbx - 1)
    int32_t rdx_2 = *r8
    
    if (rdx_2 != 0)
    label_14151b439:
        int32_t rax_10 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rax_10)
        int32_t var_1d4_1 = rax_10
        int32_t rax_11
        
        if (rax_10 == 0)
            rax_11 = 0x20
        else
            rax_11 = 0x1f - temp0_1
        
        var_1c4.d = rcx - rax_11 + 0x1f
        
        if (rcx - rax_11 + 0x1f s> rbx)
            var_1c4.d = rbx
    else
        while (true)
            int64_t rdx_3 = sx.q(r10)
            rcx += 0x20
            r10 += 1
            var_1c4:4.d = rcx
            var_1d8 = r10
            
            if (rdx_3.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r8 + (rdx_3 << 2) + 4)
            var_1c8 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_14151b439
        
        var_1c4.d = rbx

int32_t rdx_5 = *(r14 + 0x28)
void* var_1b0 = r14
double zmm2[0x2] = var_1c8.o
int128_t var_1a8 = var_1d8.o
int32_t rsi = 0xffffffff << (rdx_5.b & 0x1f)
int128_t zmm0 = var_1b0.o
int32_t r8_2 = rdx_5 s>> 5
int32_t r9_1 = rdx_5 & 0xffffffe0
double var_198[0x2] = zmm2
int64_t var_158 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
int128_t zmm1 = var_1a8
var_1a8:8.d = rsi
var_1a8:0xc.d = rdx_5
int128_t var_178 = zmm0
int128_t var_168 = zmm1

if (rdx_5 != rbx)
    void* rax_13 = *(r13 + 0x10)
    void* r10_1 = r13
    
    if (rax_13 != 0)
        r10_1 = rax_13
    
    int32_t temp5_1
    int32_t temp6_1
    temp5_1:temp6_1 = sx.q(rbx - 1)
    int32_t rdx_9 = *(r10_1 + (sx.q(r8_2) << 2)) & rsi
    
    if (rdx_9 != 0)
    label_14151b502:
        int32_t rax_20 = neg.d(rdx_9) & rdx_9
        uint64_t rflags_2
        int32_t temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_20)
        int32_t r11_1
        
        if (rax_20 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_3
        
        var_1a8:0xc.d = r9_1 - r11_1 + 0x1f
        
        if (r9_1 - r11_1 + 0x1f s> rbx)
            var_1a8:0xc.d = rbx
    else
        while (true)
            int64_t rcx_5 = sx.q(r8_2)
            r9_1 += 0x20
            r8_2 += 1
            
            if (rcx_5.d s>= (temp6_1 + (temp5_1 & 0x1f)) s>> 5)
                break
            
            rdx_9 = *(r10_1 + (rcx_5 << 2) + 4)
            var_1a8:8.d = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_14151b502
        
        var_1a8:0xc.d = rbx

uint64_t rdx_11 = var_1a8:8.q u>> 0x20
uint64_t var_180 = rdx_11

while (true)
    int64_t rcx_7 = sx.q(var_168:0xc.d)
    int64_t result = var_178.q
    
    if (rcx_7.d == rdx_11.d && var_168.q == r13 && result == r14)
        __security_check_cookie(rax_1 ^ &var_248)
        return result
    
    zmm0 = zx.o(0)
    zmm1 = zx.o(0)
    int128_t var_148 = zmm0
    int32_t rsi_1 = 0
    int32_t* r12_3 = (rcx_7 << 4) + *result
    int32_t i = 0
    int128_t var_128_1 = zmm1
    int128_t var_108_1 = zmm0
    int128_t var_e8_1 = zmm1
    int32_t rcx_8 = *r12_3
    int32_t var_1f4 = rcx_8
    int128_t var_c8_1 = zmm0
    int128_t var_a8_1 = zmm1
    int128_t var_88_1 = zmm0
    int128_t var_68_1 = zmm1
    void* rbx_3 = (zx.q(rcx_8) & 0x3fffff) * 0x60 + *(r15 + 0x98)
    
    if (*(rbx_3 + 0x2f) u> 0)
        int32_t r14_1 = r12_3[1]
        
        do
            void* r10_2 = *(*(rbx_3 + 0x38) + (sx.q(i) << 3))
            int32_t var_1b4_1 = zx.d(i.b) << 0x1c | (r14_1 & 0xfffffff)
            int64_t rax_28 = rcx_8.q
            int64_t rcx_13 = (rax_28 u>> 0x21 ^ rax_28) * -0xae502812aa7333
            int64_t r8_6 = (rcx_13 u>> 0x21 ^ rcx_13) * -0x3b314601e57a13ad
            
            for (int32_t j =
                    *(*(r10_2 + 0x80) + (((r8_6 u>> 0x21 ^ r8_6) & zx.q(*(r10_2 + 0x74))) << 2)); 
                    j != 0xffffffff; j = *(*(r10_2 + 0x88) + (zx.q(j) << 2)))
                if (*(*(r10_2 + 0x90) + (sx.q(j) << 3)) == rax_28)
                    if (j != 0xffffffff)
                        uint64_t rcx_18 = 0
                        
                        if (*(rbx_3 + 0x26) u> 0)
                            void* rdi_1 = r10_2 + 0x178
                            
                            do
                                if (zx.d(*(rbx_3 + rcx_18 + 0x30)) == i)
                                    uint64_t r9_5 = zx.q(rcx_18.d) << 5
                                    (&var_148)[zx.q(rcx_18.d) * 2].q = *(*(rdi_1 - 0xc0) + 0x10)
                                    *(&var_148:8 + r9_5) = *rdi_1
                                    uint32_t rax_32 = zx.d(j.w)
                                    int32_t temp2_1 = *(r10_2 + 0x1b8)
                                    void var_130
                                    *(&var_130 + r9_5) = 0
                                    void var_134
                                    *(&var_134 + r9_5) = divu.dp.d(0:rax_32, temp2_1)
                                    rsi_1 |= 1 << rcx_18.b
                                    void var_138
                                    *(&var_138 + r9_5) = modu.dp.d(0:rax_32, temp2_1)
                                    rdi_1 += 8
                                
                                rcx_18 = zx.q(rcx_18.d + 1)
                            while (rcx_18.d u< zx.d(*(rbx_3 + 0x26)))
                    
                    break
            
            i += 1
        while (i u< zx.d(*(rbx_3 + 0x2f)))
        
        r13 = var_1d0
        int32_t var_210
        void* var_208
        int128_t* var_200
        
        if (rsi_1 != 0)
            int64_t* rcx_19 = *(rbx_3 + 0x48)
            (*(*rcx_19 + 0x10))(rcx_19, &var_1b0, &var_1f4, zx.q(rsi_1.b), 
                (r14_1 u>> 0x18).b & 0xf, r14_1 & 0xffffff, 1, var_210, var_208, var_200, arg3, 
                arg2, arg1, arg5, var_1d8, var_1d0, var_1c8)
        
        if (rsi_1 == 0 || var_1a8.d != 3)
            r15 = arg1
        else
            int32_t r8_8 = r12_3[1]
            int64_t* rcx_20 = *(rbx_3 + 0x48)
            var_200 = &var_148
            var_208 = var_1b0
            var_210 = r8_8 & 0xffffff
            int32_t var_218_1
            var_218_1.b = (r8_8 u>> 0x18).b & 0xf
            int32_t var_220_1
            var_220_1.b = rsi_1.b
            uint8_t var_228_1
            var_228_1.q = &var_1f4
            int64_t i_1 = (*(*rcx_20 + 0x18))(rcx_20, arg4, zx.q(arg5), zx.q(arg3), var_228_1, 
                var_220_1, var_218_1, var_210, var_208, var_200)
            r15 = arg1
            
            if (i_1 != 0)
                int64_t* r8_11 = *(r15 + 0x300)
                int64_t r9_8 = sx.q(*(r15 + 0x308))
                int64_t* rdx_23 = r8_11
                void* rax_40 = &r8_11[r9_8]
                
                if (r8_11 != rax_40)
                    while (*rdx_23 != i_1)
                        rdx_23 = &rdx_23[1]
                        
                        if (rdx_23 == rax_40)
                            goto label_14151b7ff
                
                if (r8_11 == rax_40 || ((rdx_23 - r8_11) s>> 3).d == 0xffffffff)
                label_14151b7ff:
                    int32_t rax_41 = (r9_8 + 1).d
                    *(r15 + 0x308) = rax_41
                    
                    if (rax_41 s> *(r15 + 0x30c))
                        sub_1405a4d70(r15 + 0x300)
                    
                    *((r9_8 << 3) + *(r15 + 0x300)) = i_1
        
        r14 = arg2
    
    var_168:8.d &= not.d(var_178:0xc.d)
    sub_14059bdd0(&var_178:8)
    rdx_11 = var_180
