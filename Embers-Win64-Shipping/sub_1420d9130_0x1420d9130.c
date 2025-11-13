// 函数: sub_1420d9130
// 地址: 0x1420d9130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = arg1[5].d
void* rsi = &arg1[2]
int32_t var_c8 = 0
int32_t r8 = 0
int32_t var_c4 = 1
int32_t r9 = 0
void* var_c0 = rsi
int32_t var_b8 = 0xffffffff
int64_t var_b4 = 0

if (r11 != 0)
    void* rax_1 = *(rsi + 0x10)
    void* r10_1 = rsi
    
    if (rax_1 != 0)
        r10_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rcx = *r10_1
    
    if (rcx != 0)
    label_1420d91da:
        int32_t rax_8 = neg.d(rcx) & rcx
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_c4_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_b4.d = r9 - rax_9 + 0x1f
        
        if (r9 - rax_9 + 0x1f s> r11)
            var_b4.d = r11
    else
        while (true)
            int64_t rcx_1 = sx.q(r8)
            r9 += 0x20
            r8 += 1
            var_b4:4.d = r9
            var_c8 = r8
            
            if (rcx_1.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rcx = *(r10_1 + (rcx_1 << 2) + 4)
            int32_t var_b8_1 = 0xffffffff
            
            if (rcx != 0)
                goto label_1420d91da
        
        var_b4.d = r11

int32_t rdx_3 = arg1[5].d
int64_t var_90 = 0xffffffff
int32_t rdi = 0xffffffff << (rdx_3.b & 0x1f)
int128_t var_a0 = var_c8.o
int32_t r8_2 = rdx_3 s>> 5
int32_t r9_3 = rdx_3 & 0xffffffe0
int64_t var_60 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_b8_2 = rdi
var_b4.d = rdx_3
int128_t zmm1 = var_a0
int128_t var_80 = arg1.o
int128_t var_70 = zmm1

if (rdx_3 != r11)
    void* rax_11 = *(rsi + 0x10)
    void* r10_2 = rsi
    
    if (rax_11 != 0)
        r10_2 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_7 = *(r10_2 + (sx.q(r8_2) << 2)) & rdi
    
    if (rdx_7 != 0)
    label_1420d92b2:
        int32_t rax_18 = neg.d(rdx_7) & rdx_7
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t rax_19
        
        if (rax_18 == 0)
            rax_19 = 0x20
        else
            rax_19 = 0x1f - temp0_4
        
        var_b4.d = r9_3 - rax_19 + 0x1f
        
        if (r9_3 - rax_19 + 0x1f s> r11)
            var_b4.d = r11
    else
        while (true)
            int64_t rcx_6 = sx.q(r8_2)
            r9_3 += 0x20
            r8_2 += 1
            
            if (rcx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_7 = *(r10_2 + (rcx_6 << 2) + 4)
            var_b8_2 = 0xffffffff
            
            if (rdx_7 != 0)
                goto label_1420d92b2
        
        var_b4.d = r11

while (true)
    int64_t rcx_8 = sx.q(var_70:0xc.d)
    int64_t* rax_21 = var_80.q
    
    if (rcx_8.d == (var_b8_2.q u>> 0x20).d && var_70.q == rsi && rax_21 == arg1)
        int32_t i_1 = arg1[0xb].d
        void* rcx_21 = arg1[0xa]
        
        if (i_1 != 0)
            int64_t* rdi_2 = rcx_21 + 0x10
            int32_t i
            
            do
                int64_t* rbx_3 = *rdi_2
                
                if (rbx_3 != 0)
                    rbx_3[1].d -= 1
                    
                    if (rbx_3[1].d == 1)
                        (**rbx_3)(rbx_3)
                        int32_t temp10_1 = *(rbx_3 + 0xc)
                        *(rbx_3 + 0xc) -= 1
                        
                        if (temp10_1 == 1)
                            (*(*rbx_3 + 8))(rbx_3, 1)
                
                rdi_2 = &rdi_2[3]
                i = i_1
                i_1 -= 1
            while (i != 1)
            rcx_21 = arg1[0xa]
        
        if (rcx_21 != 0)
            sub_140a74f90(rcx_21)
        
        arg1[9].d = 0
        int64_t rcx_24 = arg1[8]
        
        if (rcx_24 != 0)
            sub_140a74f90(rcx_24)
        
        int64_t result = sub_1407ece30(arg1, 0)
        int64_t rcx_26 = arg1[4]
        
        if (rcx_26 != 0)
            result = sub_140a74f90(rcx_26)
        
        int64_t rcx_27 = *arg1
        
        if (rcx_27 == 0)
            return result
        
        return sub_140a74f90(rcx_27)
    
    void* r12_3 = (rcx_8 << 5) + *rax_21
    void* rsi_1 = *(r12_3 + 8)
    
    if (rsi_1 != 0)
        int32_t r10_3 = *(rsi_1 + 0x28)
        int32_t var_c4_2 = 1
        int32_t rcx_9 = 0
        int32_t var_c8_1 = 0
        int32_t r8_3 = 0
        void* var_c0_1 = rsi_1 + 0x10
        int32_t var_b8_3 = 0xffffffff
        int64_t var_b4_1 = 0
        
        if (r10_3 != 0)
            void* rax_23 = *(rsi_1 + 0x20)
            void* r9_5 = rsi_1 + 0x10
            
            if (rax_23 != 0)
                r9_5 = rax_23
            
            int32_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q(r10_3 - 1)
            int32_t rdx_10 = *r9_5
            
            if (rdx_10 != 0)
            label_1420d93a8:
                int32_t rax_30 = neg.d(rdx_10) & rdx_10
                uint64_t rflags_3
                int32_t temp0_5
                temp0_5, rflags_3 = _bit_scan_reverse(rax_30)
                int32_t var_c4_3 = rax_30
                int32_t rax_31
                
                if (rax_30 == 0)
                    rax_31 = 0x20
                else
                    rax_31 = 0x1f - temp0_5
                
                var_b4_1.d = r8_3 - rax_31 + 0x1f
                
                if (r8_3 - rax_31 + 0x1f s> r10_3)
                    var_b4_1.d = r10_3
            else
                while (true)
                    int64_t rdx_11 = sx.q(rcx_9)
                    r8_3 += 0x20
                    rcx_9 += 1
                    var_b4_1:4.d = r8_3
                    var_c8_1 = rcx_9
                    
                    if (rdx_11.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_10 = *(r9_5 + (rdx_11 << 2) + 4)
                    int32_t var_b8_4 = 0xffffffff
                    
                    if (rdx_10 != 0)
                        goto label_1420d93a8
                
                var_b4_1.d = r10_3
        
        int32_t rdx_12 = *(rsi_1 + 0x28)
        int128_t var_40_1 = 0xffffffff
        int32_t r14_1 = 0xffffffff << (rdx_12.b & 0x1f)
        int128_t var_50_1 = var_c8_1.o
        int32_t r8_6 = rdx_12 s>> 5
        int32_t r9_7 = rdx_12 & 0xffffffe0
        var_90 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        int32_t var_b8_5 = r14_1
        var_b4_1.d = rdx_12
        int64_t* var_a8
        var_a8.o = rsi_1.o
        var_a0 = var_50_1
        
        if (rdx_12 != r10_3)
            void* rax_33 = *(rsi_1 + 0x20)
            void* r11_1 = rsi_1 + 0x10
            
            if (rax_33 != 0)
                r11_1 = rax_33
            
            int32_t temp6_1
            int32_t temp7_1
            temp6_1:temp7_1 = sx.q(r10_3 - 1)
            int32_t rdx_16 = *(r11_1 + (sx.q(r8_6) << 2)) & r14_1
            
            if (rdx_16 != 0)
            label_1420d9474:
                int32_t rax_40 = neg.d(rdx_16) & rdx_16
                uint64_t rflags_4
                int32_t temp0_7
                temp0_7, rflags_4 = _bit_scan_reverse(rax_40)
                int32_t rax_41
                
                if (rax_40 == 0)
                    rax_41 = 0x20
                else
                    rax_41 = 0x1f - temp0_7
                
                var_b4_1.d = r9_7 - rax_41 + 0x1f
                
                if (r9_7 - rax_41 + 0x1f s> r10_3)
                    var_b4_1.d = r10_3
            else
                while (true)
                    int64_t rcx_14 = sx.q(r8_6)
                    r9_7 += 0x20
                    r8_6 += 1
                    
                    if (rcx_14.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_16 = *(r11_1 + (rcx_14 << 2) + 4)
                    var_b8_5 = 0xffffffff
                    
                    if (rdx_16 != 0)
                        goto label_1420d9474
                
                var_b4_1.d = r10_3
        
        while (true)
            int64_t rax_43 = sx.q(var_90:4.d)
            
            if (rax_43.d == (var_b8_5.q u>> 0x20).d && var_a0:8.q == rsi_1 + 0x10
                    && var_a8 == rsi_1)
                break
            
            int64_t rcx_16 = rax_43 * 3
            int64_t rax_44 = *var_a8
            int64_t* r8_7 = *(rax_44 + (rcx_16 << 3) + 8)
            *(rax_44 + (rcx_16 << 3) + 8) = 0
            
            if (r8_7 != 0)
                (**r8_7)(r8_7, 1)
            
            var_90.d &= not.d(var_a0:4.d)
            sub_14059bdd0(&var_a0)
        
        sub_1408d84f0(*(r12_3 + 8))
    
    var_70:8.d &= not.d(var_80:0xc.d)
    sub_14059bdd0(&var_80:8)
    rsi = &arg1[2]
