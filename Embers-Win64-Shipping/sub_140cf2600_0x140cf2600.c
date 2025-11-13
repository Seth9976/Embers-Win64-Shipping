// 函数: sub_140cf2600
// 地址: 0x140cf2600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r13 = 0
int32_t var_b8 = 0xffffffff
void**** var_d8
__builtin_memset(&var_d8, 0, 0x14)
int32_t* r11 = arg1 + 0x68
int32_t rbx = r11[6]
void* r12 = arg1
int32_t arg_20 = 0
int32_t rcx = 0
int64_t* rdi = arg2
int32_t var_c4 = 1
int32_t* var_c0 = r11
int32_t r10 = 0
int32_t var_b4 = 0
int32_t r9 = 0
int32_t var_b0 = 0
int32_t var_c8_1

if (rbx != 0)
    int32_t* rax_1 = *(r11 + 0x10)
    int32_t* r8 = r11
    
    if (rax_1 != 0)
        r8 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbx - 1)
    int32_t rdx_2 = *r8
    int32_t var_b4_2
    
    if (rdx_2 != 0)
    label_140cf26c8:
        int32_t rax_8 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_c4_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        int32_t var_b4_1 = rcx - rax_9 + 0x1f
        
        if (rcx - rax_9 + 0x1f s> rbx)
            var_b4_2 = rbx
    else
        while (true)
            int64_t rdx_3 = sx.q(r9)
            rcx += 0x20
            r9 += 1
            int32_t var_b0_1 = rcx
            var_c8_1 = r9
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = r8[rdx_3 + 1]
            var_b8 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_140cf26c8
        
        var_b4_2 = rbx
    r11 = var_c0

int32_t r14 = r11[6]
void* rbx_1 = r12 + 0x58
int32_t rdx_5 = *(rbx_1 + 0x28)
double zmm2[0x2] = var_b8.o
int128_t var_a0 = var_c8_1.o
int32_t r15 = 0xffffffff << (rdx_5.b & 0x1f)
double var_90[0x2] = zmm2
int32_t r8_2 = rdx_5 s>> 5
int32_t r9_2 = rdx_5 & 0xffffffe0
int64_t var_50 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
int64_t zmm1 = var_a0:8.q
var_a0:8.d = r15
var_a0:0xc.d = rdx_5
int128_t var_70 = rbx_1.o

if (rdx_5 != r14)
    int32_t* rax_11 = *(r11 + 0x10)
    
    if (rax_11 != 0)
        r11 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r14 - 1)
    int32_t rdx_9 = r11[sx.q(r8_2)] & r15
    
    if (rdx_9 != 0)
    label_140cf27a2:
        int32_t rax_18 = neg.d(rdx_9) & rdx_9
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t rsi_1
        
        if (rax_18 == 0)
            rsi_1 = 0x20
        else
            rsi_1 = 0x1f - temp0_4
        
        var_a0:0xc.d = r9_2 - rsi_1 + 0x1f
        
        if (r9_2 - rsi_1 + 0x1f s> r14)
            var_a0:0xc.d = r14
    else
        while (true)
            int64_t rcx_5 = sx.q(r8_2)
            r9_2 += 0x20
            r8_2 += 1
            
            if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_9 = r11[rcx_5 + 1]
            var_a0:8.d = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_140cf27a2
        
        var_a0:0xc.d = r14
    
    r11 = var_c0
    rbx_1 = r12 + 0x58

uint64_t rdx_11 = var_a0:8.q u>> 0x20
uint64_t var_80 = rdx_11

while (true)
    int32_t var_54
    int64_t rcx_7 = sx.q(var_54)
    int64_t* rax_20 = var_70.q
    
    if (rcx_7.d == rdx_11.d && zmm1 == r11 && rax_20 == rbx_1)
        if ((arg3.b & 6) == 0)
            sub_140d0cd50(rdi)
        else
            int32_t rdx_21 = rdi[1].d
            int32_t r8_9 = 0
            void* arg_8
            arg_8.d = 0
            
            if (rdx_21 s> 0)
                int64_t r12_6 = 0
                
                do
                    int32_t r14_3 = rdx_21 - 1
                    int64_t rsi_5 = sx.q(r14_3)
                    int64_t* rax_37 = *(*rdi + (r12_6 << 3))
                    int64_t r13_1 = *(*rax_37 + (sx.q(rax_37[1].d) << 3) - 8)
                    
                    if (rsi_5 s> r12_6)
                        int32_t r15_3 = r14_3 + 1
                        
                        do
                            int64_t* rbx_6 = *(*rdi + (rsi_5 << 3))
                            int64_t rcx_32 = *rbx_6
                            
                            if (*(rcx_32 + (sx.q(rbx_6[1].d) << 3) - 8) == r13_1)
                                int64_t rax_41 = rbx_6[2]
                                
                                if (rax_41 != 0)
                                    sub_140a74f90(rax_41)
                                    rcx_32 = *rbx_6
                                
                                if (rcx_32 != 0)
                                    sub_140a74f90(rcx_32)
                                
                                j_sub_140a74f90(rbx_6)
                                int32_t rcx_35 = rdi[1].d
                                int64_t r9_5 = *rdi
                                int32_t rax_43 = rcx_35 - r14_3
                                
                                if (rax_43 != 1)
                                    memmove(r9_5 + (sx.q(r14_3) << 3), r9_5 + (sx.q(r15_3) << 3), 
                                        (rax_43 - 1) << 3)
                                    rcx_35 = rdi[1].d
                                
                                rdi[1].d = rcx_35 - 1
                                sub_1405c53d0(rdi)
                            
                            r14_3 -= 1
                            r15_3 -= 1
                            rsi_5 -= 1
                        while (rsi_5 s> r12_6)
                        
                        rdx_21 = rdi[1].d
                        r8_9 = arg_8.d
                    
                    r8_9 += 1
                    r12_6 += 1
                    arg_8.d = r8_9
                while (r8_9 s< rdx_21)
                
                r13 = 0
        
        int64_t rcx_40 = *rdi
        int32_t rdx_24 = rdi[1].d
        int32_t arg_18
        arg_18.b = 0
        
        if ((not.b((arg3 u>> 2).b) & 1) == 0)
            sub_140cee260(rcx_40, rdx_24)
        else
            sub_140cee5f0(rcx_40, rdx_24)
        
        int64_t* rbx_7 = *rdi
        void* result = &rbx_7[rdi[1]]
        uint64_t rdi_2 = sx.q(rdi[1].d) << 3 u>> 3
        
        if (rbx_7 u> result)
            rdi_2 = 0
        
        if (rdi_2 != 0)
            do
                result = sub_140cfdea0(*rbx_7)
                r13 += 1
                rbx_7 = &rbx_7[1]
            while (r13 != rdi_2)
        
        void**** rcx_42 = var_d8
        
        if (rcx_42 == 0)
            return result
        
        return sub_140a74f90(rcx_42)
    
    int32_t rsi_3 = arg_20 + 1
    arg_20 = rsi_3
    int64_t* rbx_2 = *(*rax_20 + rcx_7 * 0x10)
    *(r12 + 0xa8) = rsi_3
    int64_t var_d0_1
    var_d0_1.d = 0
    
    if (r10 s< 0 && r10 != 0)
        sub_1405c5570(&var_d8, 0)
    
    sub_140cf2270(rbx_2, &var_d8, 2, rsi_3)
    void**** rsi_4 = var_d8
    int64_t r15_1 = 0
    int64_t rbx_3 = sx.q(var_d0_1.d)
    void* rcx_11 = &rsi_4[rbx_3]
    uint64_t r12_4 = (rcx_11 - rsi_4 + 7) u>> 3
    
    if (rsi_4 u> rcx_11)
        r12_4 = 0
    
    if (r12_4 != 0)
        do
            void*** rbx_4 = *rsi_4
            int64_t r14_1 = sx.q(rbx_4[1].d)
            int32_t rax_22 = (r14_1 + 1).d
            rbx_4[1].d = rax_22
            
            if (rax_22 s> *(rbx_4 + 0xc))
                sub_1405a4d70(rbx_4)
            
            void** rdx_14 = *rbx_4
            memmove(&rdx_14[1], rdx_14, (r14_1 << 3).d)
            rsi_4 = &rsi_4[1]
            r15_1 += 1
            **rbx_4 = arg1
        while (r15_1 != r12_4)
        
        rbx_3 = zx.q(var_d0_1.d)
        rsi_4 = var_d8
    
    if ((not.b(arg3.b) & 1) == 0)
        int32_t r14_2 = (rbx_3 - 1).d
        
        if (r14_2 s>= 0)
            int64_t r15_2 = sx.q(r14_2) << 3
            int64_t r12_5 = r15_2
            int32_t temp5_1
            
            do
                int64_t* rbx_5 = *(rsi_4 + r15_2)
                int64_t rax_26 = sx.q(rbx_5[1].d)
                char rax_27
                
                if (rax_26.d s> 1)
                    int64_t* rcx_15 = *rbx_5
                    rax_27 = sub_140d23d40(*rcx_15[rax_26 - 1], **rcx_15)
                
                if (rax_26.d s<= 1 || rax_27 != 0)
                    int64_t rcx_18 = rbx_5[2]
                    
                    if (rcx_18 != 0)
                        sub_140a74f90(rcx_18)
                    
                    int64_t rcx_19 = *rbx_5
                    
                    if (rcx_19 != 0)
                        sub_140a74f90(rcx_19)
                    
                    j_sub_140a74f90(rbx_5)
                    int32_t rcx_21 = var_d0_1.d
                    int32_t rax_30 = rcx_21 - r14_2 - 1
                    
                    if (rax_30 s>= 1)
                        rax_30 = 1
                    
                    if (rax_30 != 0)
                        void**** rcx_23 = var_d8
                        memcpy(rcx_23 + r12_5, &rcx_23[sx.q(rcx_21 - rax_30)], rax_30 << 3)
                        rcx_21 = var_d0_1.d
                    
                    var_d0_1.d = rcx_21 - 1
                    sub_1405c53d0(&var_d8)
                
                rsi_4 = var_d8
                r12_5 -= 8
                r15_2 -= 8
                temp5_1 = r14_2
                r14_2 -= 1
            while (temp5_1 - 1 s>= 0)
            rbx_3 = zx.q(var_d0_1.d)
            rdi = arg2
    
    if (rbx_3.d != 0)
        int32_t rax_32 = rdi[1].d
        int32_t rdx_19 = rax_32 + rbx_3.d
        
        if (rdx_19 s> *(rdi + 0xc))
            sub_1405c5570(rdi, rdx_19)
            rax_32 = rdi[1].d
            rsi_4 = var_d8
        
        memcpy(*rdi + (sx.q(rax_32) << 3), rsi_4, rbx_3.d << 3)
        rdi[1].d += rbx_3.d
    
    int32_t var_58 = var_58 & not.d(var_70:0xc.d)
    sub_14059bdd0(&var_70:8)
    r10 = var_d0_1:4.d
    rdx_11 = var_80
    r11 = var_c0
    r12 = arg1
    rbx_1 = arg1 + 0x58
