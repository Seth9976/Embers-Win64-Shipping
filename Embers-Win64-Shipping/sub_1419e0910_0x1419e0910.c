// 函数: sub_1419e0910
// 地址: 0x1419e0910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = *(arg1 + 0xa8)
void* r10 = arg1 + 0x90
int64_t r14 = 0
int64_t* rbx = nullptr
float zmm6[0x4]
float var_58[0x4] = zmm6
int32_t rcx = 0
int32_t r8 = 0
int64_t* var_118
__builtin_memset(&var_118, 0, 0x14)
int32_t var_104 = 1
void* var_100 = r10
int32_t var_f8 = 0xffffffff
int64_t var_f4 = 0
int32_t var_108_1

if (r11 != 0)
    void* rax_1 = *(r10 + 0x10)
    void* r9_1 = r10
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_3 = *r9_1
    
    if (rdx_3 != 0)
    label_1419e09db:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_104_1 = rax_8
        int32_t arg_8 = temp0_2
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_f4.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r11)
            var_f4.d = r11
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_f4:4.d = r8
            var_108_1 = rcx
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
            int32_t var_f8_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_1419e09db
        
        var_f4.d = r11
    
    r10 = arg1 + 0x90

int32_t rdx_5 = *(arg1 + 0xa8)
int32_t r15 = *(r10 + 0x18)
float var_e0[0x4] = var_108_1.o
int32_t r12 = 0xffffffff << (rdx_5.b & 0x1f)
int32_t r8_3 = rdx_5 s>> 5
int128_t var_d0 = 0xffffffff
int32_t r9_3 = rdx_5 & 0xffffffe0
int64_t* var_e8
var_e8.d = r8_3
int64_t var_80 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
var_e0[2] = r12
var_e0[3] = rdx_5
var_d0.d = r9_3
float var_a0[0x4] = (arg1 + 0x80).o

if (rdx_5 != r15)
    void* rax_11 = *(r10 + 0x10)
    
    if (rax_11 != 0)
        r10 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r15 - 1)
    int32_t rdx_9 = *(r10 + (sx.q(r8_3) << 2)) & r12
    
    if (rdx_9 != 0)
    label_1419e0acd:
        int32_t rax_18 = neg.d(rdx_9) & rdx_9
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t arg_10 = temp0_4
        int32_t rdi_1
        
        if (rax_18 == 0)
            rdi_1 = 0x20
        else
            rdi_1 = 0x1f - temp0_4
        
        var_e0[3] = r9_3 - rdi_1 + 0x1f
        
        if (r9_3 - rdi_1 + 0x1f s> r15)
            var_e0[3] = r15
    else
        while (true)
            int64_t rcx_5 = sx.q(r8_3)
            r9_3 += 0x20
            r8_3 += 1
            var_d0.d = r9_3
            var_e8.d = r8_3
            
            if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_9 = *(r10 + (rcx_5 << 2) + 4)
            var_e0[2] = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_1419e0acd
        
        var_e0[3] = r15
    
    r10 = arg1 + 0x90

int128_t zmm7 = 0x3f800000
uint32_t r15_2 = (var_e0[2].q u>> 0x20).d
int128_t zmm8
int128_t var_78 = zmm8
int32_t result

while (true)
    int64_t rcx_7 = sx.q(var_e0[3])
    int64_t* rax_20 = var_a0[0].q
    int64_t var_110_1
    
    if (rcx_7.d == r15_2 && var_e0[0].q == r10 && rax_20 == arg1 + 0x80)
        int64_t* rdi_4 = rbx
        void* rcx_17 = &rbx[sx.q(var_110_1.d)]
        uint64_t r15_6 = (rcx_17 - rbx + 7) u>> 3
        
        if (rbx u> rcx_17)
            r15_6 = 0
        
        if (r15_6 != 0)
            do
                int64_t var_b8 = *rdi_4
                void arg_20
                sub_140b91690(arg1 + 0x80, &arg_20, &var_b8, nullptr)
                r14 += 1
                rdi_4 = &rdi_4[1]
            while (r14 != r15_6)
        
        result = sub_1419e19e0(arg1)
        break
    
    int32_t* rbx_1 = *(*rax_20 + rcx_7 * 0x10)
    result = 0
    void* rcx_9 = *(arg1 + 0x28)
    
    if (0 == *(rcx_9 + 0x38))
        *(rcx_9 + 0x38) = 0
    else
        result = *(rcx_9 + 0x38)
    
    if (result != *(arg1 + 0x150))
        rbx = var_118
        break
    
    if (rbx_1[0x14].b == 0)
        rbx = var_118
    else
        void* rdi_2 = *(rbx_1 + 0x38)
        
        if (*(arg1 + 0xe0) s> *(rdi_2 + 0x2a0))
            rbx = var_118
        else
            int32_t rax_22
            
            if (*(rdi_2 + 0x2bc) == 0 || *(rdi_2 + 0x2bd) == 0)
                rax_22.b = 0
            else
                rax_22.b = 1
            
            if (rax_22.b != *(arg1 + 0x14c))
                rbx = var_118
            else
                zmm6 = rbx_1[0xb]
                int32_t i = 0
                float zmm1[0x4] = *(rdi_2 + 0x2c4)
                
                do
                    zmm6[0] = zmm6[0] f+ zmm7.d
                    
                    if (zmm6[0] > zmm1[0])
                        break
                    
                    i += 1
                while (i s< 1)
                
                int64_t r8_4
                int128_t zmm0_1
                int512_t zmm2_1
                float zmm6_1
                zmm0_1, r8_4, zmm2_1, zmm6_1 = sub_1419e2f60(rdi_2, zmm6)
                int32_t rax_23 = rbx_1[2]
                int64_t var_b0 = *rbx_1
                int32_t var_a8_1 = rax_23
                int32_t* var_c0 = rbx_1
                
                if (rbx_1[0x14].b != 0)
                    sub_1419e4df0(arg1 + 0xe8, rbx_1)
                    rbx_1[0x14].b = 0
                    int32_t arg_18
                    r8_4 = sub_140b91690(arg1 + 0x30, &arg_18, &var_c0, nullptr)
                
                zmm2_1.o = zmm0_1
                int64_t* rax_24
                rax_24, zmm7 = sub_1419e3940(arg1, &var_b0, r8_4, rdi_2, zmm6_1, 0)
                
                if (rax_24 == 0)
                    rbx = var_118
                else
                    int64_t rbx_2 = sx.q(var_110_1.d)
                    int32_t rcx_14 = (rbx_2 + 1).d
                    var_110_1.d = rcx_14
                    
                    if (rcx_14 s> var_110_1:4.d)
                        sub_1405a4d70(&var_118)
                    
                    rbx = var_118
                    rbx[rbx_2] = rax_24
    
    var_e0[2] &= not.d(var_a0[3])
    sub_14059bdd0(&var_a0[2])
    r10 = arg1 + 0x90

if (rbx == 0)
    return result

return sub_140a74f90(rbx)
