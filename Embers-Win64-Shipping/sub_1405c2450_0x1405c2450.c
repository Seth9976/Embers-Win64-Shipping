// 函数: sub_1405c2450
// 地址: 0x1405c2450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_8 = arg1
int32_t rdx_1 = *(arg1 + 0x70) - *(arg1 + 0x9c)
int64_t* var_c8 = nullptr
int64_t* r15 = nullptr
int64_t var_c0 = 0
int32_t result_1 = 0

if (rdx_1 s> 0)
    sub_1405c5570(&var_c8, rdx_1)
    result_1 = var_c0.d
    r15 = var_c8

int32_t var_b4 = 1
int32_t r11 = *(arg1 + 0x90)
void* r14 = arg1 + 0x78
void* var_b0 = r14
int32_t rcx_1 = 0
int32_t var_b8 = 0
int32_t r8 = 0
int32_t var_a8 = 0xffffffff
int64_t var_a4 = 0

if (r11 != 0)
    void* rax_1 = *(r14 + 0x10)
    void* r9_1 = r14
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_4 = *r9_1
    
    if (rdx_4 != 0)
    label_1405c2528:
        int32_t rax_8 = neg.d(rdx_4) & rdx_4
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
            int64_t rdx_5 = sx.q(rcx_1)
            r8 += 0x20
            rcx_1 += 1
            var_a4:4.d = r8
            var_b8 = rcx_1
            
            if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_4 = *(r9_1 + (rdx_5 << 2) + 4)
            var_a8 = 0xffffffff
            
            if (rdx_4 != 0)
                goto label_1405c2528
        
        var_a4.d = r11

int32_t rdx_6 = *(arg1 + 0x90)
double zmm2[0x2] = var_a8.o
int128_t zmm0 = var_b8.o
var_a4.d = rdx_6
int32_t r9_2 = 0xffffffff << (rdx_6.b & 0x1f)
int32_t arg_20 = r9_2
int32_t var_a8_1 = r9_2
int32_t r9_4 = rdx_6 & 0xffffffe0
int32_t r8_3 = rdx_6 s>> 5
double var_58[0x2] = zmm2
int64_t var_78 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
int128_t var_98 = (arg1 + 0x68).o
int128_t var_88 = zmm0

if (rdx_6 != r11)
    void* rax_11 = *(r14 + 0x10)
    void* r10_1 = r14
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_10 = *(r10_1 + (sx.q(r8_3) << 2)) & arg_20
    
    if (rdx_10 != 0)
    label_1405c25f4:
        int32_t rax_18 = neg.d(rdx_10) & rdx_10
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
            int64_t rcx_6 = sx.q(r8_3)
            r9_4 += 0x20
            r8_3 += 1
            
            if (rcx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_10 = *(r10_1 + (rcx_6 << 2) + 4)
            var_a8_1 = 0xffffffff
            
            if (rdx_10 != 0)
                goto label_1405c25f4
        
        var_a4.d = r11

while (true)
    int64_t rcx_8 = sx.q(var_88:0xc.d)
    int64_t rax_20 = var_98.q
    
    if (rcx_8.d == (var_a8_1.q u>> 0x20).d && var_88.q == r14 && rax_20 == arg1 + 0x68)
        uint64_t result = sx.q(result_1)
        int64_t rsi_1 = 0
        int64_t* rdi = r15
        void* rcx_13 = &r15[result]
        uint64_t r14_4 = (rcx_13 - r15 + 7) u>> 3
        
        if (r15 u> rcx_13)
            r14_4 = 0
        
        if (r14_4 != 0)
            void* r12_2 = arg_8
            
            do
                void* rbx_5 = *rdi
                result = sub_1405c3040(arg1 + 0x68, rbx_5)
                
                if (result.d s> 0)
                    var_c8.d = *(rbx_5 + 0xc0)
                    var_c8:4.d = *(rbx_5 + 0xc4)
                    var_c0.d = zx.d(*(rbx_5 + 0xdb))
                    var_b8.q = &var_c8
                    int32_t* var_b0_1 = &arg_20
                    arg_20.q = rbx_5
                    result = sub_1405a8090(r12_2 + 0x18, &arg_8, &var_b8, nullptr)
                
                rdi = &rdi[1]
                rsi_1 += 1
            while (rsi_1 != r14_4)
        
        if (r15 == 0)
            return result
        
        return sub_140a74f90(r15)
    
    int64_t* rbx_4 = (rcx_8 << 5) + *rax_20
    
    if ((rbx_4[2].d & arg3) == 0)
        char rax_21
        int32_t r8_4
        rax_21, r8_4 = sub_140d3e110(&rbx_4[1])
        char rax_22
        
        if (rax_21 != 0)
            rax_22 = sub_1405a66e0(&rbx_4[1], arg2, r8_4)
        
        if (rax_21 == 0 || rax_22 != 0)
            int64_t result_2 = sx.q(result_1)
            result_1 = (result_2 + 1).d
            var_c0.d = result_1
            
            if (result_1 s> var_c0:4.d)
                sub_1405a4d70(&var_c8)
                result_1 = var_c0.d
                r15 = var_c8
            
            r15[result_2] = *rbx_4
        
        r14 = arg1 + 0x78
    
    var_88:8.d &= not.d(var_98:0xc.d)
    sub_14059bdd0(&var_98:8)
