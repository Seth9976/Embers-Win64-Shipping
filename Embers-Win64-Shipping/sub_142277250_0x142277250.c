// 函数: sub_142277250
// 地址: 0x142277250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((arg1[0x7a].b & 1) != 0)
    return 

void* rax_2 = (*(*arg1 + 0x150))()
arg1[0x7a].d |= 1
int64_t rax = sub_141dcc7c0(arg1)
void* rcx_1 = *(rax_2 + 0x38)
int32_t var_88
double zmm1[0x2]

if (*(rax + 0x370) != 0)
    void* r14_1 = *(rcx_1 + 0x6f0)
    int32_t rcx_2 = 0
    int32_t rbx_1 = *(r14_1 + 0x28)
    int32_t r8_1 = 0
    var_88 = 0
    int32_t var_84_1 = 1
    void* var_80_1 = r14_1 + 0x10
    int32_t var_78_1 = 0xffffffff
    int64_t var_74_1 = 0
    
    if (rbx_1 != 0)
        void* rax_3 = *(r14_1 + 0x20)
        void* r9_1 = r14_1 + 0x10
        
        if (rax_3 != 0)
            r9_1 = rax_3
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rbx_1 - 1)
        int32_t rdx_3 = *r9_1
        
        if (rdx_3 != 0)
        label_142277348:
            int32_t rax_10 = neg.d(rdx_3) & rdx_3
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_10)
            int32_t var_84_2 = rax_10
            int32_t rax_11
            
            if (rax_10 == 0)
                rax_11 = 0x20
            else
                rax_11 = 0x1f - temp0_2
            
            var_74_1.d = r8_1 - rax_11 + 0x1f
            
            if (r8_1 - rax_11 + 0x1f s> rbx_1)
                var_74_1.d = rbx_1
        else
            while (true)
                int64_t rdx_4 = sx.q(rcx_2)
                r8_1 += 0x20
                rcx_2 += 1
                var_74_1:4.d = r8_1
                var_88 = rcx_2
                
                if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
                var_78_1 = 0xffffffff
                
                if (rdx_3 != 0)
                    goto label_142277348
            
            var_74_1.d = rbx_1
    
    int32_t rdx_5 = *(r14_1 + 0x28)
    double zmm2[0x2] = var_78_1.o
    double var_28_1[0x2] = zmm2
    int32_t r15_1 = 0xffffffff << (rdx_5.b & 0x1f)
    int128_t var_38_1 = var_88.o
    int32_t r8_4 = rdx_5 s>> 5
    int32_t r9_3 = rdx_5 & 0xffffffe0
    int64_t var_48_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
    int32_t var_78_2 = r15_1
    var_74_1.d = rdx_5
    zmm1 = var_38_1
    int128_t var_68 = r14_1.o
    
    if (rdx_5 != rbx_1)
        void* rax_13 = *(r14_1 + 0x20)
        void* r10_1 = r14_1 + 0x10
        
        if (rax_13 != 0)
            r10_1 = rax_13
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rbx_1 - 1)
        int32_t rdx_9 = *(r10_1 + (sx.q(r8_4) << 2)) & r15_1
        
        if (rdx_9 != 0)
        label_142277412:
            int32_t rax_20 = neg.d(rdx_9) & rdx_9
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_20)
            int32_t r11_1
            
            if (rax_20 == 0)
                r11_1 = 0x20
            else
                r11_1 = 0x1f - temp0_4
            
            var_74_1.d = r9_3 - r11_1 + 0x1f
            
            if (r9_3 - r11_1 + 0x1f s> rbx_1)
                var_74_1.d = rbx_1
        else
            while (true)
                int64_t rcx_7 = sx.q(r8_4)
                r9_3 += 0x20
                r8_4 += 1
                
                if (rcx_7.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_9 = *(r10_1 + (rcx_7 << 2) + 4)
                var_78_2 = 0xffffffff
                
                if (rdx_9 != 0)
                    goto label_142277412
            
            var_74_1.d = rbx_1
    
    while (true)
        rax = sx.q(zmm1[1]:4.d)
        int64_t* rdx_10 = var_68.q
        
        if (rax.d == (var_78_2.q u>> 0x20).d && zmm1[0] == r14_1 + 0x10 && rdx_10 == r14_1)
            break
        
        void* rcx_9 = rax * 3
        int64_t rax_22 = *rdx_10
        int64_t* rbx_2 = *(rax_22 + (rcx_9 << 3) + 8)
        void* rdx_11 = *(rax_22 + (rcx_9 << 3))
        
        if (rbx_2 != 0)
            rbx_2[1].d += 1
        
        if (rdx_11 != 0)
            int64_t* rax_23 = sub_140d3c6e0(rdx_11 + 8)
            
            if (rax_23 != 0 && (rax_23[0xb].b & 4) == 0)
                int64_t rdx_12 = *rax_23
                (*(rdx_12 + 0x5e8))(rax_23, rdx_12)
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp5_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
        
        int32_t var_5c
        zmm1[1].d &= not.d(var_5c)
        sub_14059bdd0(&var_68:8)
else if (rcx_1 != 0)
    int64_t* rcx_15 = *(rax_2 + 0x128)
    
    if ((*(*rcx_15 + 0x6a0))(rcx_15) s>= 8)
        zmm1 = 0x3f000000
    else
        zmm1 = 0x3e4ccccd
    
    void arg_8
    void* var_80_2 = &arg_8
    var_88.q = sub_142261fb0
    sub_142167d60(*(rax_2 + 0x38), zmm1, &var_88)
