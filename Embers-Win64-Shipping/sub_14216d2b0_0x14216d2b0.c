// 函数: sub_14216d2b0
// 地址: 0x14216d2b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r10_1 = *(arg1 + 0x310) + 0x50
int32_t arg_8 = 0
int32_t rbx = r10_1[5].d
void* r9 = &r10_1[2]
int32_t var_e8 = 0
int32_t var_e4 = 1
int32_t r12 = 0
void* var_e0 = r9
int32_t r8 = 0
int32_t var_d8 = 0xffffffff
int32_t rcx = 0
int64_t var_d4 = 0

if (rbx != 0)
    void* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbx - 1)
    int32_t rdx_2 = *r9
    
    if (rdx_2 != 0)
    label_14216d35b:
        int32_t rax_8 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_e4_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_d4.d = rcx - rax_9 + 0x1f
        
        if (rcx - rax_9 + 0x1f s> rbx)
            var_d4.d = rbx
    else
        while (true)
            int64_t rdx_3 = sx.q(r8)
            rcx += 0x20
            r8 += 1
            var_d4:4.d = rcx
            var_e8 = r8
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r9 + (rdx_3 << 2) + 4)
            var_d8 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_14216d35b
        
        var_d4.d = rbx

double zmm4[0x2] = var_d8.o
int64_t* var_40 = r10_1
int16_t var_90 = 0
double zmm3[0x2] = var_e8.o
double result = zmm3[0]
int128_t var_c8 = r10_1.o
double rcx_2 = zmm4[0]
zmm4[0] = (_mm_unpackhi_pd(zmm4, zmm4[0])).q
double var_a8[0x2] = zmm4

if ((rcx_2 u>> 0x20).d s< *(result i+ 0x18))
    int32_t i = zmm3[1]:4.d
    
    do
        int64_t* r15_1 = var_c8.q
        int16_t* var_f8 = nullptr
        int64_t var_f0_1 = 0
        int64_t r14_1 = sx.q(i) * 0x14
        int64_t rbx_1 = sx.q(*(*r15_1 + r14_1 + 8))
        sub_1405947f0(&var_f8, 7)
        int32_t rdi_1 = var_f0_1:4.d
        int32_t rax_13 = var_f0_1.d + 7
        var_f0_1.d = rax_13
        
        if (rax_13 s> rdi_1)
            sub_140594770(&var_f8)
            rdi_1 = var_f0_1:4.d
        
        int16_t* rsi_1 = var_f8
        UnDecorator::getReferenceType(rsi_1, u"Unused", 0xe)
        int64_t* r9_1 = *(arg1 + 0x2e8)
        
        if (r9_1[1].d != *(r9_1 + 0x34))
            void* rcx_8 = r9_1[8]
            void* r8_1 = &r9_1[7]
            
            if (rcx_8 != 0)
                r8_1 = rcx_8
            
            int32_t j_1 = *(r8_1 + (((sx.q(r9_1[9].d) - 1) & rbx_1) << 2))
            int32_t j = j_1
            
            if (j_1 != 0xffffffff)
                int64_t r8_2 = *r9_1
                
                do
                    int64_t rdx_10 = sx.q(j) * 2
                    
                    if (*(r8_2 + (rdx_10 << 3)) == rbx_1.d)
                        if (j != 0xffffffff)
                            if (j_1 == 0xffffffff)
                            label_14216d514:
                                
                                if (rsi_1 != u"Pending")
                                    int32_t rdx_11 = 0
                                    var_f0_1.d = 0
                                    
                                    if (rdi_1 != 8)
                                        sub_1405947f0(&var_f8, 8)
                                        rdx_11 = var_f0_1.d
                                        rdi_1 = var_f0_1:4.d
                                        rsi_1 = var_f8
                                    
                                    var_f0_1.d = rdx_11 + 8
                                    
                                    if (rdx_11 + 8 s> rdi_1)
                                        sub_140594770(&var_f8)
                                        rsi_1 = var_f8
                                    
                                    *rsi_1 = *u"Pending"
                            else
                                int64_t j_2
                                
                                while (true)
                                    j_2 = sx.q(j_1)
                                    int64_t rax_16 = j_2 * 2
                                    
                                    if (*(r8_2 + (rax_16 << 3)) == rbx_1.d)
                                        break
                                    
                                    j_1 = *(r8_2 + (rax_16 << 3) + 8)
                                    
                                    if (j_1 == 0xffffffff)
                                        goto label_14216d514
                                
                                if (j_1 == 0xffffffff)
                                    goto label_14216d514
                                
                                int64_t rdx_13 = j_2 << 4
                                
                                if (rdx_13 == neg.q(r8_2))
                                    goto label_14216d514
                                
                                int32_t rax_20 = *(rdx_13 + r8_2 + 4)
                                
                                if (rax_20 != 0xfffffffe)
                                    if (rax_20 != 0xffffffff)
                                        goto label_14216d514
                                    
                                    if (rsi_1 != u"Ackd")
                                        int32_t rdx_16 = 0
                                        var_f0_1.d = 0
                                        
                                        if (rdi_1 != 5)
                                            sub_1405947f0(&var_f8, 5)
                                            rdx_16 = var_f0_1.d
                                            rdi_1 = var_f0_1:4.d
                                            rsi_1 = var_f8
                                        
                                        var_f0_1.d = rdx_16 + 5
                                        
                                        if (rdx_16 + 5 s> rdi_1)
                                            sub_140594770(&var_f8)
                                            rsi_1 = var_f8
                                        
                                        *rsi_1 = 0x64006b00630041
                                        rsi_1[4] = 0
                                else if (rsi_1 != u"UnAckd")
                                    int32_t rdx_15 = 0
                                    var_f0_1.d = 0
                                    
                                    if (rdi_1 != 7)
                                        sub_1405947f0(&var_f8, 7)
                                        rdx_15 = var_f0_1.d
                                        rdi_1 = var_f0_1:4.d
                                        rsi_1 = var_f8
                                    
                                    var_f0_1.d = rdx_15 + 7
                                    
                                    if (rdx_15 + 7 s> rdi_1)
                                        sub_140594770(&var_f8)
                                        rsi_1 = var_f8
                                    
                                    *rsi_1 = 0x630041006e0055
                                    *(rsi_1 + 8) = 0x64006b
                                    rsi_1[6] = 0
                        
                        break
                    
                    j = *(r8_2 + (rdx_10 << 3) + 8)
                while (j != 0xffffffff)
        
        void* rax_18 = sub_140d3c6e0(*r15_1 + r14_1)
        int16_t* const r14_2
        
        if (rax_18 == 0)
            r14_2 = u"NULL"
        else
            r12 |= 1
            int64_t* rax_19 = sub_140d21830(rax_18, &var_e8, 0, 0)
            
            if (rax_19[1].d == 0)
                r14_2 = &data_142d40450
            else
                r14_2 = *rax_19
        
        if (rbx_1.d == 0 || (rbx_1.b & 1) != 0)
            r15_1.b = 0
        else
            r15_1.b = 1
        
        int16_t* var_88
        sub_140a2e390(&var_88, u"%d", zx.q(rbx_1.d))
        int16_t* const r8_4 = &data_142d40450
        int16_t* const var_100_1 = r14_2
        int32_t var_80
        
        if (var_80 != 0)
            r8_4 = var_88
        
        wchar16 const* const rax_23 = u"Static"
        
        if (r15_1.b != 0)
            rax_23 = u"Dynamic"
        
        wchar16 const* const var_108_1 = rax_23
        int16_t* var_78
        sub_140a2e390(&var_78, u"%s [%s] [%s] - %s", r8_4)
        int16_t* rcx_20 = var_88
        
        if (rcx_20 != 0)
            sub_140a74f90(rcx_20)
        
        if ((r12.b & 1) != 0)
            int64_t rcx_21 = var_e8.q
            r12 &= 0xfffffffe
            
            if (rcx_21 != 0)
                sub_140a74f90(rcx_21)
        
        int16_t* const r8_5 = &data_142d40450
        int32_t var_70
        
        if (var_70 != 0)
            r8_5 = var_78
        
        sub_140b1f700(arg2, u"%s", r8_5)
        int16_t* rcx_23 = var_78
        
        if (rcx_23 != 0)
            sub_140a74f90(rcx_23)
        
        if (rsi_1 != 0)
            sub_140a74f90(rsi_1)
        
        zmm3[1].d &= not.d(var_c8:0xc.d)
        sub_14059bdd0(&var_c8:8)
        result = zmm3[0]
        i = zmm3[1]:4.d
    while (i s< *(result i+ 0x18))
    
    if (var_90.b != 0 && var_90:1.b != 0)
        return sub_14084bdb0(r10_1, r10_1[1].d - *(r10_1 + 0x34), 1)

return result
