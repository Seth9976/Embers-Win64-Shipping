// 函数: sub_141a5bf60
// 地址: 0x141a5bf60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_20 = arg4
*(arg1 + 0x38) = 0
void* rsi = arg1

if (*(arg1 + 0x3c) s<= 0xffffffff)
    sub_1405dadb0(arg1 + 0x30, 0)

*(arg1 + 0x48) = 0

if (*(arg1 + 0x4c) s<= 0xffffffff)
    sub_1405a5410(arg1 + 0x40, 0)

void* r12 = *arg4
int16_t r15 = 0
int64_t rdx = sx.q(arg4[1].d)
int16_t rdi_1 = 0
void* var_a0 = r12
void* r8 = r12 + rdx * 0x28
void* var_50 = r8
void* i_4
void* i_2
int32_t var_b0
uint64_t var_88
uint64_t var_78
int64_t var_60
void* i_3

if (r12 != r8)
    do
        if (*(r12 + 0xc) != 0)
            void* rax_1 = *(r12 + 0x10)
            int64_t rbx_1 = sx.q(*(r12 + 0x20))
            var_88 = *(r12 + 0x18)
            int32_t rax_2 = var_88.d
            int16_t var_bc_1 = r15
            r15 += 1
            uint32_t var_94_1 = (var_88 u>> 0x20).d
            i_3 = rax_2.q
            uint8_t r13_2 = (*(rax_1 + 0xf0) u>> 2).b
            i_4 = i_3
            int32_t var_c0_1 = 0xffffffff
            r13_2 &= 1
            
            if (r13_2 == 0)
                int16_t var_ba_2 = not.w(rdi_1)
            else
                int16_t var_ba_1 = rdi_1
            
            int64_t r14_1 = sx.q(*(rsi + 0x48))
            int32_t rax_6 = (r14_1 + 1).d
            *(rsi + 0x48) = rax_6
            
            if (rax_6 s> *(rsi + 0x4c))
                sub_1405a4f90(rsi + 0x40)
                i_3 = rax_2.q
                r8 = var_50
            
            rdi_1 += 1
            *(*(rsi + 0x40) + r14_1 * 0x10) = i_4.o
            void* rax_9 = *(r12 + 0x10)
            void* rdx_2 = *(rax_9 + 0x28)
            int64_t rcx_7 = sx.q(*(*(rax_9 + 0x18) + (rbx_1 << 2))) * 0x58
            int64_t* r14_3 = rdx_2 + 0x18 + rcx_7
            int64_t* rax_10 = *(rcx_7 + rdx_2 + 0x48)
            
            if (rax_10 != 0)
                r14_3 = rax_10
            
            void* rax_12 = r14_3 + sx.q(*(rcx_7 + rdx_2 + 0x50)) * 0xc
            
            if (r14_3 != rax_12)
                do
                    int32_t rax_13 = r14_3[1].d
                    int16_t var_ac_1 = r15
                    r15 += 1
                    var_78 = *r14_3
                    int32_t var_70_1 = rax_13
                    var_b0 = var_78.d
                    var_60.d = 0xffffffff
                    i_2 = i_3
                    
                    if (r13_2 == 0)
                        int16_t var_aa_2 = not.w(rdi_1)
                    else
                        int16_t var_aa_1 = rdi_1
                    
                    int64_t rbx_2 = sx.q(*(rsi + 0x48))
                    int32_t rax_16 = (rbx_2 + 1).d
                    *(rsi + 0x48) = rax_16
                    
                    if (rax_16 s> *(rsi + 0x4c))
                        sub_1405a4f90(rsi + 0x40)
                    
                    rdi_1 += 1
                    i_3 = rax_2.q
                    r14_3 += 0xc
                    *(*(rsi + 0x40) + rbx_2 * 0x10) = i_2.o
                while (r14_3 != rax_12)
                
                r12 = var_a0
                r8 = var_50
            
            rsi = arg1
        
        r12 += 0x28
        var_a0 = r12
    while (r12 != r8)
    
    int64_t* rax_19 = arg_20
    r12 = *rax_19
    rdx = zx.q(rax_19[1].d)
    var_a0 = r12

int64_t* r8_1 = r12 + sx.q(rdx.d) * 0x28
arg_20 = r8_1

while (r12 != r8_1)
    if (*(r12 + 0xc) == 0)
        void* rax_21 = *(r12 + 0x10)
        int64_t rbx_3 = sx.q(*(r12 + 0x20))
        var_78 = *(r12 + 0x18)
        int32_t rax_22 = var_78.d
        int16_t var_ac_2 = r15
        r15 += 1
        uint32_t var_94_2 = (var_78 u>> 0x20).d
        i_3 = rax_22.q
        uint8_t r13_4 = (*(rax_21 + 0xf0) u>> 2).b
        i_2 = i_3
        var_b0 = 0xffffffff
        r13_4 &= 1
        
        if (r13_4 == 0)
            int16_t var_aa_4 = not.w(rdi_1)
        else
            int16_t var_aa_3 = rdi_1
        
        int64_t r14_4 = sx.q(*(rsi + 0x48))
        int32_t rax_26 = (r14_4 + 1).d
        *(rsi + 0x48) = rax_26
        
        if (rax_26 s> *(rsi + 0x4c))
            sub_1405a4f90(rsi + 0x40)
            i_3 = rax_22.q
            r8_1 = arg_20
        
        rdi_1 += 1
        *(*(rsi + 0x40) + r14_4 * 0x10) = i_2.o
        void* rax_29 = *(r12 + 0x10)
        void* rdx_5 = *(rax_29 + 0x28)
        int64_t rcx_16 = sx.q(*(*(rax_29 + 0x18) + (rbx_3 << 2))) * 0x58
        int64_t* rbx_5 = rdx_5 + 0x18 + rcx_16
        int64_t* rax_30 = *(rcx_16 + rdx_5 + 0x48)
        
        if (rax_30 != 0)
            rbx_5 = rax_30
        
        void* rax_32 = rbx_5 + sx.q(*(rcx_16 + rdx_5 + 0x50)) * 0xc
        
        if (rbx_5 != rax_32)
            do
                int32_t rax_33 = rbx_5[1].d
                int16_t var_bc_2 = r15
                r15 += 1
                var_88 = *rbx_5
                int32_t var_80_1 = rax_33
                int32_t var_c0_2 = var_88.d
                var_60.d = 0xffffffff
                i_4 = i_3
                
                if (r13_4 == 0)
                    int16_t var_ba_4 = not.w(rdi_1)
                else
                    int16_t var_ba_3 = rdi_1
                
                int64_t r14_5 = sx.q(*(rsi + 0x48))
                int32_t rax_36 = (r14_5 + 1).d
                *(rsi + 0x48) = rax_36
                
                if (rax_36 s> *(rsi + 0x4c))
                    sub_1405a4f90(rsi + 0x40)
                
                rdi_1 += 1
                i_3 = rax_22.q
                rbx_5 += 0xc
                *(*(rsi + 0x40) + r14_5 * 0x10) = i_4.o
            while (rbx_5 != rax_32)
            
            r12 = var_a0
            r8_1 = arg_20
    
    rsi = arg1
    r12 += 0x28
    var_a0 = r12

sub_141a2c130(*(arg1 + 0x40), *(arg1 + 0x48), 0, arg1.b)
void* r12_3 = arg1 + 0x30
*(r12_3 + 8) = 0

if (*(r12_3 + 0xc) s<= 0xffffffff)
    sub_1405dadb0(r12_3, 0)

int64_t rbx_6 = sx.q(*(r12_3 + 8))
int32_t rax_39 = (rbx_6 + 1).d
*(r12_3 + 8) = rax_39

if (rax_39 s> *(r12_3 + 0xc))
    sub_1405a4cf0(r12_3)

*(*r12_3 + (rbx_6 << 2)) = data_143f29fb0
arg_20 = -ffffffffffffffff
void** arg_28
void** rdx_9 = arg_28
int32_t zmm1 = (rdx_9[2]).d
i_2.o = *rdx_9
int64_t var_68
sub_141a2e9f0(&var_68, *rdx_9, arg_20)
void* i_1 = i_2
int32_t r14_6 = zmm1
void* const i = var_b0.q

while (true)
    int32_t var_58
    uint64_t* rax_41
    
    if (i_1 != var_68 || i != var_60 || r14_6 != var_58)
        rax_41.b = 1
    else
        rax_41.b = 0
    
    if (rax_41.b == 0)
        break
    
    int64_t rax_42 = sx.q(*(i + 0x1c))
    int64_t* rax_45
    
    if (rax_42.d == 0xffffffff)
        i_4 = nullptr
        rax_45 = &i_4
        int32_t var_c0_3 = 0
    else
        int64_t rdx_11 = *(i_1 + 0x40)
        int64_t rax_43 = rax_42 * 3
        int32_t var_b0_1 = *(rdx_11 + (rax_43 << 2) + 4)
        i_2 = *(i_1 + 0x50) + (sx.q(*(rdx_11 + (rax_43 << 2))) << 2)
        rax_45 = &i_2
    
    int64_t rbx_7 = sx.q(*(*rax_45 + (sx.q(r14_6) << 2)))
    arg_28.d = rbx_7.d
    void* r13_6
    
    if (arg2[1].d == *(arg2 + 0x34))
    labelid_2b:
        r13_6 = nullptr
    else
        void* rcx_28 = arg2[8]
        void* r8_4 = &arg2[7]
        
        if (rcx_28 != 0)
            r8_4 = rcx_28
        
        int32_t rax_48 = *(r8_4 + (((sx.q(arg2[9].d) - 1) & rbx_7) << 2))
        
        if (rax_48 == 0xffffffff)
        label_141a5c49c:
            r13_6 = nullptr
        else
            int32_t* rcx_31
            
            while (true)
                rcx_31 = sx.q(rax_48) * 0xf8 + *arg2
                
                if (*rcx_31 == rbx_7.d)
                    break
                
                rax_48 = rcx_31[0x3c]
                
                if (rax_48 == 0xffffffff)
                    goto label_141a5c49c_2
            
            if (rax_48 == 0xffffffff)
            label_141a5c49c_1:
                r13_6 = nullptr
            else
                r13_6 = &rcx_31[2]
                
                if (rcx_31 == 0)
                label_141a5c49c_2:
                    r13_6 = nullptr
    
    void* rax_49 = sub_140d3c6e0(r13_6 + 0xb0)
    void* const r15_1 = rax_49
    
    if (rax_49 == 0)
        void* rax_50 = sub_140d2bce0(r13_6)
        r15_1 = rax_50
        void* rax_51
        int64_t rax_52
        void* rdx_15
        
        if (rax_50 != 0)
            rax_51 = sub_141a77ca0()
            rdx_15 = *(r15_1 + 0x10)
            rax_52 = sx.q(*(rax_51 + 0x38))
        
        if (rax_50 == 0 || rax_52.d s> *(rdx_15 + 0x38)
                || *(*(rdx_15 + 0x30) + (rax_52 << 3)) != rax_51 + 0x30)
            r15_1 = nullptr
        
        sub_140d3a3a0(r13_6 + 0xb0, r15_1)
    
    int32_t rax_54
    
    if (rax_49 != 0 || r15_1 != 0)
        rax_54 = *((*(*arg3 + 8))(arg3, r15_1) + 0x180)
    else
        rax_54 = 0
    
    int64_t r15_2 = sx.q(*(arg1 + 0x38))
    r12_3 = arg1 + 0x30
    arg_20.d = rax_54
    int32_t rax_57 = (r15_2 + 1).d
    *(r12_3 + 8) = rax_57
    
    if (rax_57 s> *(r12_3 + 0xc))
        sub_1405a4cf0(r12_3)
    
    *(*r12_3 + (r15_2 << 2)) = rbx_7.d
    sub_140998bf0(arg1 + 0x50, &arg_28, &arg_20)
    r14_6 += 1
    
    do
        int64_t rax_59 = sx.q(*(i + 0x1c))
        
        if (rax_59.d == 0xffffffff)
            var_88 = 0
            rax_41 = &var_88
            int32_t var_80_2 = 0
        else
            int32_t* rdx_20 = *(i_1 + 0x40) + rax_59 * 0xc
            int32_t var_70_2 = rdx_20[1]
            rax_41 = &var_78
            var_78 = *(i_1 + 0x50) + (sx.q(*rdx_20) << 2)
        
        int32_t var_98
        var_98.o = *rax_41
        int32_t var_90
        
        if (r14_6 s< 0 || r14_6 s>= var_90)
            rax_41.b = 0
        else
            rax_41.b = 1
        
        if (rax_41.b != 0)
            break
        
        if (*(i + 0x10) != 0xffffffff || *(i + 0x14) == 0)
            rax_41.b = 1
        
        if (rax_41.b == 0)
            i = nullptr
        else
            rax_41 = *(i + 0x10)
            
            if (rax_41.d == 0xffffffff)
                i = i_1
            else
                i = ((sx.q(*(*(i_1 + 0x20) + sx.q(rax_41.d) * 0xc)) + sx.q((rax_41 u>> 0x20).d))
                    << 5) + *(i_1 + 0x30)
        
        r14_6 = 0
    while (i != 0)

return sub_141a2c690(*r12_3, *(r12_3 + 8), arg1.b)
