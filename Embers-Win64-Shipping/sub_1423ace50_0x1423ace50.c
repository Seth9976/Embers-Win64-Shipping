// 函数: sub_1423ace50
// 地址: 0x1423ace50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r11 = &arg1[0xe]
int32_t arg_8 = 0
int32_t* r13 = r11 + 0x10
int64_t var_108
__builtin_memset(&var_108, 0, 0x14)
int32_t rbx = 0
int32_t rdi = r13[6]
int32_t r10 = 0
int32_t var_f4 = 1
int32_t r8 = 0
int32_t* var_f0 = r13
int32_t rcx = 0
int32_t var_e8 = 0xffffffff
int64_t var_e4 = 0
int32_t var_f8_1

if (rdi != 0)
    int32_t* rax_1 = *(r13 + 0x10)
    int32_t* r9_1 = r13
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(rdi - 1)
    int32_t rdx_2 = *r9_1
    
    if (rdx_2 != 0)
    label_1423acf0b:
        int32_t rax_8 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_f4_1 = rax_8
        arg_8 = temp0_1
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_1
        
        var_e4.d = rcx - rax_9 + 0x1f
        
        if (rcx - rax_9 + 0x1f s> rdi)
            var_e4.d = rdi
    else
        while (true)
            int64_t rdx_3 = sx.q(r8)
            rcx += 0x20
            r8 += 1
            var_e4:4.d = rcx
            var_f8_1 = r8
            
            if (rdx_3.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = r9_1[rdx_3 + 1]
            int32_t var_e8_1 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_1423acf0b
        
        var_e4.d = rdi
    
    r11 = &arg1[0xe]

int32_t rdx_5 = *(r11 + 0x28)
int128_t var_d0 = var_f8_1.o
int32_t r8_2 = rdx_5 s>> 5
int32_t r12 = 0xffffffff << (rdx_5.b & 0x1f)
int32_t r9_3 = rdx_5 & 0xffffffe0
void* var_d8
var_d8.d = r8_2
int128_t var_c0 = 0xffffffff
int64_t var_90 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t zmm1 = var_d0
var_d0:8.d = r12
var_d0:0xc.d = rdx_5
var_c0.d = r9_3
int128_t var_b0 = r11.o
int128_t var_a0 = zmm1

if (rdx_5 != rdi)
    int32_t* rax_11 = *(r13 + 0x10)
    int32_t* r11_1 = r13
    
    if (rax_11 != 0)
        r11_1 = rax_11
    
    int32_t temp3_1
    int32_t temp4_1
    temp3_1:temp4_1 = sx.q(rdi - 1)
    int32_t rdx_9 = r11_1[sx.q(r8_2)] & r12
    
    if (rdx_9 != 0)
    label_1423acfec:
        int32_t rax_18 = neg.d(rdx_9) & rdx_9
        uint64_t rflags_2
        int32_t temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t arg_18 = temp0_3
        int32_t r14_1
        
        if (rax_18 == 0)
            r14_1 = 0x20
        else
            r14_1 = 0x1f - temp0_3
        
        var_d0:0xc.d = r9_3 - r14_1 + 0x1f
        
        if (r9_3 - r14_1 + 0x1f s> rdi)
            var_d0:0xc.d = rdi
    else
        while (true)
            int64_t rcx_5 = sx.q(r8_2)
            r9_3 += 0x20
            r8_2 += 1
            var_c0.d = r9_3
            var_d8.d = r8_2
            
            if (rcx_5.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                break
            
            rdx_9 = r11_1[rcx_5 + 1]
            var_d0:8.d = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_1423acfec
        
        var_d0:0xc.d = rdi
    
    r11 = &arg1[0xe]

while (true)
    int64_t rcx_7 = sx.q(var_a0:0xc.d)
    int64_t* rax_20 = var_b0.q
    int64_t var_100_1
    
    if (rcx_7.d == (var_d0:8.q u>> 0x20).d && var_a0.q == r13 && rax_20 == r11)
        int32_t* rdx_13 = arg2
        
        if (rdx_13 != 0)
            if (*(rdx_13 + 9) == 0)
                if (rbx s> 1)
                    int32_t rdi_3 = rbx - 1
                    
                    if (rbx s<= 0)
                        rdi_3 = 0
                    
                    int32_t rax_31
                    rax_31.b = rbx s<= 0
                    int32_t rax_33 = rax_31 + 1 + rbx
                    var_100_1.d = rax_33
                    
                    if (rax_33 s> r10)
                        sub_140594770(&var_108)
                        rdx_13 = arg2
                    
                    int64_t rcx_21 = sx.q(rdi_3)
                    *(var_108 + (rcx_21 << 1)) = 0xa
                    *(var_108 + (rcx_21 << 1) + 2) = 0
                
                int64_t var_60
                int64_t* rax_36 = sub_1423b6510(arg1, &var_60, rdx_13)
                int32_t rcx_23 = rax_36[1].d
                int32_t r8_9 = rcx_23 - 1
                
                if (rcx_23 == 0)
                    r8_9 = 0
                
                sub_140a20ba0(&var_108, *rax_36, r8_9)
                int64_t rcx_25 = var_60
                
                if (rcx_25 != 0)
                    sub_140a74f90(rcx_25)
                
                rbx = var_100_1.d
            else
                int64_t* rax_30 = sub_140ac6680((sx.q(*rdx_13) << 5) + *(rdx_13 + 0x10))
                
                if (&var_108 == rax_30)
                    rbx = var_100_1.d
                else
                    rbx = rax_30[1].d
                    int64_t rdi_2 = *rax_30
                    int32_t r8_5 = var_100_1:4.d
                    var_100_1.d = rbx
                    
                    if (rbx != 0 || r8_5 != 0)
                        sub_1405a4c70(&var_108, rbx, r8_5)
                        memcpy(var_108, rdi_2, rbx * 2)
                        rbx = var_100_1.d
                    else
                        var_100_1:4.d = 0
        
        int64_t* var_80
        int64_t* r12_1
        int32_t r14_5
        
        if (rbx s> 1)
            void var_50
            r12_1 = sub_140aae420(&var_50, &var_108)
            r14_5 = 2
        else
            sub_1405d9400()
            int64_t var_88 = data_143cd6fd8
            int64_t* rcx_27 = data_143cd6fe0
            var_80 = rcx_27
            
            if (rcx_27 != 0)
                rcx_27[1].d += 1
            
            r12_1 = &var_88
            int32_t var_78_1 = data_143cd6fe8
            r14_5 = 1
        
        *(arg1 + 0x14) += 1
        uint32_t r15_1
        r15_1.b = 0
        int32_t rcx_29 = arg1[1].d
        int32_t rax_39 = *(arg1 + 0x14)
        int64_t rbx_1 = sx.q(rcx_29 - 1)
        
        if (rcx_29 - 1 s>= 0)
            int64_t rdi_5 = rbx_1 << 4
            int64_t temp6_1
            
            do
                int64_t rax_40 = *arg1
                
                if (*(rdi_5 + rax_40 + 8) == 0)
                    r15_1.b = 1
                else
                    int64_t* rcx_31 = *(rdi_5 + rax_40)
                    
                    if (rcx_31 == 0)
                        r15_1.b = 1
                    else if ((*(*rcx_31 + 0x50))(rcx_31, r12_1) == 0)
                        r15_1.b = 1
                
                rdi_5 -= 0x10
                temp6_1 = rbx_1
                rbx_1 -= 1
            while (temp6_1 - 1 s>= 0)
            rax_39 = *(arg1 + 0x14)
        
        int32_t result = rax_39 - 1
        *(arg1 + 0x14) = result
        
        if (r15_1.b != 0)
            result = sub_140599630(arg1, 0)
        
        if ((r14_5.b & 2) != 0)
            r14_5 &= 0xfffffffd
            int64_t* var_48
            
            if (var_48 != 0)
                result = var_48[1].d
                var_48[1].d -= 1
                
                if (result == 1)
                    (**var_48)(var_48)
                    result = *(var_48 + 0xc)
                    *(var_48 + 0xc) -= 1
                    
                    if (result == 1)
                        result = (*(*var_48 + 8))(var_48, 1)
        
        if ((r14_5.b & 1) != 0 && var_80 != 0)
            result = var_80[1].d
            var_80[1].d -= 1
            
            if (result == 1)
                result = (**var_80)(var_80)
                int32_t rdi_6 = *(var_80 + 0xc)
                *(var_80 + 0xc) -= 1
                
                if (rdi_6 == 1)
                    result = (*(*var_80 + 8))(var_80, zx.q(rdi_6))
        
        int64_t rcx_37 = var_108
        
        if (rcx_37 == 0)
            return result
        
        return sub_140a74f90(rcx_37)
    
    void* r14_4 = (rcx_7 << 5) + *rax_20
    void* r8_3 = *(r14_4 + 8)
    
    if (r8_3 != 0)
        if (rbx s> 1)
            int32_t rdi_1 = rbx - 1
            
            if (rbx s<= 0)
                rdi_1 = 0
            
            int32_t rax_22
            rax_22.b = rbx s<= 0
            int32_t rax_24 = rax_22 + 1 + rbx
            var_100_1.d = rax_24
            
            if (rax_24 s> r10)
                sub_140594770(&var_108)
            
            int64_t rcx_9 = sx.q(rdi_1)
            *(var_108 + (rcx_9 << 1)) = 0xa
            *(var_108 + (rcx_9 << 1) + 2) = 0
            r8_3 = *(r14_4 + 8)
        
        int64_t var_70
        int64_t* rax_27 = sub_1423b6510(arg1, &var_70, r8_3)
        int32_t rcx_11 = rax_27[1].d
        int32_t r8_4 = rcx_11 - 1
        
        if (rcx_11 == 0)
            r8_4 = 0
        
        sub_140a20ba0(&var_108, *rax_27, r8_4)
        int64_t rcx_13 = var_70
        
        if (rcx_13 != 0)
            sub_140a74f90(rcx_13)
    
    var_a0:8.d &= not.d(var_b0:0xc.d)
    sub_14059bdd0(&var_b0:8)
    r10 = var_100_1:4.d
    r11 = &arg1[0xe]
    rbx = var_100_1.d
