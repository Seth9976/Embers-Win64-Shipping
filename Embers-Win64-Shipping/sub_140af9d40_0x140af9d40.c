// 函数: sub_140af9d40
// 地址: 0x140af9d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
uint64_t rbx = 0
uint64_t var_178 = 0
int64_t var_170 = 0
uint64_t r12 = 0
int64_t rdi = -1
int32_t rdx = 0
int32_t r8 = 0

if (arg2 != 0 && *arg2 != 0)
    int64_t rsi_1 = -1
    
    do
        rsi_1 += 1
    while (arg2[rsi_1] != 0)
    
    if (rsi_1.d + 1 s> 0)
        sub_1405947f0(&var_178, rsi_1.d + 1)
        r8 = var_170:4.d
        rdx = var_170.d
        r12 = var_178
    
    int32_t rax_2 = rsi_1.d + 1 + rdx
    var_170.d = rax_2
    
    if (rax_2 s> r8)
        sub_140594770(&var_178)
        r12 = var_178
    
    UnDecorator::getReferenceType(r12, arg2, (rsi_1.d + 1) * 2)

int32_t result_1
sub_140a452d0(arg1, &result_1, &var_178)
int64_t result = sx.q(result_1)
int64_t* r13_1

if (result.d == 0xffffffff)
    r13_1 = nullptr
else
    int64_t rax_3 = result * 0xb8
    result = rax_3 + *arg1
    r13_1 = result + 0x10
    
    if (rax_3 == neg.q(*arg1))
        r13_1 = nullptr

if (r12 != 0)
    result = sub_140a74f90(r12)

if (r13_1 != 0)
    var_178 = 0
    uint64_t r12_1 = 0
    int64_t var_170_1 = 0
    int32_t rdx_4 = 0
    int32_t rcx_5 = 0
    
    if (arg3 != 0 && *arg3 != 0)
        int64_t rsi_3 = -1
        
        do
            rsi_3 += 1
        while (arg3[rsi_3] != 0)
        
        if (rsi_3.d + 1 s> 0)
            sub_1405947f0(&var_178, rsi_3.d + 1)
            rcx_5 = var_170_1:4.d
            rdx_4 = var_170_1.d
            r12_1 = var_178
        
        int32_t rax_4 = rsi_3.d + 1 + rdx_4
        var_170_1.d = rax_4
        
        if (rax_4 s> rcx_5)
            sub_140594770(&var_178)
            r12_1 = var_178
        
        UnDecorator::getReferenceType(r12_1, arg3, (rsi_3.d + 1) * 2)
    
    sub_140a452d0(arg1, &result_1, &var_178)
    int64_t result_2 = sx.q(result_1)
    int64_t rsi_5
    
    if (result_2.d != 0xffffffff)
        rsi_5 = result_2 * 0xb8
    
    int64_t* rsi_7
    
    if (result_2.d == 0xffffffff || rsi_5 == neg.q(*arg1))
        rsi_7 = nullptr
    else
        rsi_7 = rsi_5 + *arg1 + 0x10
    
    if (r12_1 != 0)
        sub_140a74f90(r12_1)
    
    int64_t* r14_2
    int32_t var_160
    
    if (rsi_7 == 0)
        void var_e8
        sub_140a3b500(&var_e8, r13_1)
        var_178 = 0
        uint64_t r13_2 = 0
        int64_t var_170_2 = 0
        int32_t r12_2 = 0
        int32_t rax_27 = 0
        
        if (arg3 != 0 && *arg3 != 0)
            int64_t rsi_8 = -1
            
            do
                rsi_8 += 1
            while (arg3[rsi_8] != 0)
            
            if (rsi_8.d + 1 s> 0)
                sub_1405947f0(&var_178, rsi_8.d + 1)
                rax_27 = var_170_2:4.d
                r12_2 = var_170_2.d
                r13_2 = var_178
            
            r12_2 += rsi_8.d + 1
            var_170_2.d = r12_2
            
            if (r12_2 s> rax_27)
                sub_140594770(&var_178)
                r12_2 = var_170_2.d
                r13_2 = var_178
            
            UnDecorator::getReferenceType(r13_2, arg3, (rsi_8.d + 1) * 2)
        
        r14_2 = arg1
        sub_140a3f040(r14_2, &var_160)
        int64_t* var_158
        *var_158 = r13_2
        var_158[1].d = r12_2
        *(var_158 + 0xc) = var_170_2:4.d
        sub_140a3b380(&var_158[2], &var_e8)
        var_158[0x16].d = 0xffffffff
        int32_t rax_29 = var_158[1].d
        int16_t* rdx_27
        
        if (rax_29 == 0)
            rdx_27 = &data_142d40450
        else
            rdx_27 = *var_158
        
        int32_t rcx_27 = rax_29 - 1
        
        if (rax_29 == 0)
            rcx_27 = 0
        
        sub_140a42a90(r14_2, &result_1, sub_1405969c0(rcx_27, rdx_27), var_158, var_160, nullptr)
        var_178 = 0
        int32_t rdx_29 = 0
        int64_t var_170_3 = 0
        int32_t rcx_30 = 0
        
        if (arg2 != 0 && *arg2 != 0)
            do
                rdi += 1
            while (arg2[rdi] != 0)
            
            if (rdi.d + 1 s> 0)
                sub_1405947f0(&var_178, rdi.d + 1)
                rcx_30 = var_170_3:4.d
                rdx_29 = var_170_3.d
                rbx = var_178
            
            int32_t rax_31 = rdi.d + 1 + rdx_29
            var_170_3.d = rax_31
            
            if (rax_31 s> rcx_30)
                sub_140594770(&var_178)
                rbx = var_178
            
            UnDecorator::getReferenceType(rbx, arg2, (rdi.d + 1) * 2)
        
        sub_140afe6c0(r14_2, &var_178)
        
        if (rbx != 0)
            sub_140a74f90(rbx)
        
        result = sub_140a3c110(&var_e8)
    else
        int32_t r10_1 = r13_1[5].d
        var_160 = 0
        int32_t rcx_11 = 0
        int32_t var_15c_1 = 1
        void* var_158_1 = &r13_1[2]
        int32_t var_150_1 = 0xffffffff
        int64_t var_14c_1 = 0
        
        if (r10_1 != 0)
            void* rax_6 = r13_1[4]
            void* r8_7 = &r13_1[2]
            
            if (rax_6 != 0)
                r8_7 = rax_6
            
            int32_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q(r10_1 - 1)
            int32_t rdx_10 = *r8_7
            
            if (rdx_10 != 0)
            label_140af9f89:
                int32_t rax_13 = neg.d(rdx_10) & rdx_10
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_13)
                int32_t var_15c_2 = rax_13
                int32_t rax_14
                
                if (rax_13 == 0)
                    rax_14 = 0x20
                else
                    rax_14 = 0x1f - temp0_2
                
                var_14c_1.d = rcx_11 - rax_14 + 0x1f
                
                if (rcx_11 - rax_14 + 0x1f s> r10_1)
                    var_14c_1.d = r10_1
            else
                while (true)
                    int64_t rdx_11 = sx.q(rbx.d)
                    rcx_11 += 0x20
                    rbx = zx.q(rbx.d + 1)
                    var_14c_1:4.d = rcx_11
                    var_160 = rbx.d
                    
                    if (rdx_11.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_10 = *(r8_7 + (rdx_11 << 2) + 4)
                    var_150_1 = 0xffffffff
                    
                    if (rdx_10 != 0)
                        goto label_140af9f89
                
                var_14c_1.d = r10_1
        
        int32_t rdx_13 = r13_1[5].d
        double zmm2[0x2] = var_150_1.o
        var_14c_1.d = rdx_13
        double var_f8_1[0x2] = zmm2
        int128_t var_108_1 = var_160.o
        int32_t r15_1 = 0xffffffff << (rdx_13 & 0x1f).b
        int32_t r8_9 = rdx_13 s>> 5
        int32_t r9_2 = rdx_13 & 0xffffffe0
        int64_t var_118_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
        int32_t var_150_2 = r15_1
        int128_t var_138 = r13_1.o
        int128_t var_128_1 = var_108_1
        
        if (rdx_13 != r10_1)
            void* rax_17 = r13_1[4]
            void* r11_1 = &r13_1[2]
            
            if (rax_17 != 0)
                r11_1 = rax_17
            
            int32_t temp6_1
            int32_t temp7_1
            temp6_1:temp7_1 = sx.q(r10_1 - 1)
            int32_t rdx_17 = *(r11_1 + (sx.q(r8_9) << 2)) & r15_1
            
            if (rdx_17 != 0)
            label_140afa066:
                int32_t rax_23 = neg.d(rdx_17) & rdx_17
                uint64_t rflags_2
                int32_t temp0_4
                temp0_4, rflags_2 = _bit_scan_reverse(rax_23)
                int32_t rdi_1
                
                if (rax_23 == 0)
                    rdi_1 = 0x20
                else
                    rdi_1 = 0x1f - temp0_4
                
                result = zx.q(r9_2 - rdi_1 + 0x1f)
                var_14c_1.d = result.d
                
                if (result.d s> r10_1)
                    var_14c_1.d = r10_1
            else
                while (true)
                    int64_t rcx_15 = sx.q(r8_9)
                    r9_2 += 0x20
                    r8_9 += 1
                    
                    if (rcx_15.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_17 = *(r11_1 + (rcx_15 << 2) + 4)
                    var_150_2 = 0xffffffff
                    
                    if (rdx_17 != 0)
                        goto label_140afa066
                
                var_14c_1.d = r10_1
        
        while (true)
            int64_t rdx_18 = sx.q(var_128_1:0xc.d)
            
            if (rdx_18.d != (var_150_2.q u>> 0x20).d || var_128_1.q != &r13_1[2])
                result.b = 0
            else
                result.b = 1
            
            int64_t rcx_17 = var_138.q
            
            if (result.b == 0 || rcx_17 != r13_1)
                result.b = 1
            else
                result.b = 0
            
            if (result.b == 0)
                break
            
            int64_t* rbx_4 = rdx_18 * 0x30 + *rcx_17
            
            if (*sub_14093f560(rsi_7, &result_1, *rbx_4) == 0xffffffff)
                sub_140ae48f0(rsi_7, rbx_4, &rbx_4[1])
            
            var_128_1:8.d &= not.d(var_138:0xc.d)
            sub_14059bdd0(&var_138:8)
        
        r14_2 = arg1
    r14_2[0xa].b = 1

__security_check_cookie(rax_1 ^ &var_1a8)
return result
