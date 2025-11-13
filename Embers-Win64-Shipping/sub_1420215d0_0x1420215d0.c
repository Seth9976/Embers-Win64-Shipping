// 函数: sub_1420215d0
// 地址: 0x1420215d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const arg_18 = arg3
int64_t* arg_10 = arg2
int16_t* const r12 = &data_142d40450
void* const rsi = arg3
int64_t* r15 = arg2
int64_t* rax = arg1
int64_t var_78 = 0
int32_t i = 0
int64_t var_70 = 0
int64_t var_88 = 0
int32_t var_80 = 0

if (arg2[0xa].d s> 0)
    int64_t* rbx_1 = nullptr
    
    do
        sub_140a20ba0(&var_78, &data_142e5f8f8, 1)
        int64_t rax_1 = r15[9]
        int32_t r8 = *(rbx_1 + rax_1 + 8)
        int32_t r8_1
        
        if (r8 == 0)
            r8_1 = 0
        else
            r8_1 = r8 - 1
        
        sub_140a20ba0(&var_78, *(rbx_1 + rax_1), r8_1)
        int64_t rax_2 = r15[9]
        int16_t* rcx_2
        
        if (*(rbx_1 + rax_2 + 8) == 0)
            rcx_2 = &data_142d40450
        else
            rcx_2 = *(rbx_1 + rax_2)
        
        arg3, arg4 = sub_140b2acc0(rcx_2, u"GAME=", &var_88, 1)
        i += 1
        rbx_1 = &rbx_1[2]
    while (i s< r15[0xa].d)
    
    rax = arg1

if (rsi == 0)
    void* rax_3 = rax[6]
    
    if (rax_3 == 0)
        rsi = nullptr
        arg_18 = nullptr
    else
        rsi = *(rax_3 + 0x278)
        arg_18 = rsi

arg3.b = 1
void* rax_4
void* r8_3
rax_4, r8_3 = sub_142437e30(rsi, 0, arg3.b)
void* const r13 = data_143f5b298
void* rax_5
int64_t rcx_4
void* rdx_1

if (r13 != 0)
    rax_5 = sub_1424ad0c0()
    rdx_1 = *(r13 + 0x10)
    rcx_4 = sx.q(*(rax_5 + 0x38))

if (r13 == 0 || rcx_4.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rcx_4 << 3)) != rax_5 + 0x30)
    r13 = nullptr

int64_t r14 = -1
void* rbx_3 = *(rax_4 + 0x268)
int32_t var_e8
int64_t var_d8
int64_t var_d0
int16_t* var_a8

if (var_80 s> 1)
    sub_141520340(&var_a8, &var_88, arg4)
    int32_t var_a0
    
    if (r13 != 0)
        int16_t* const rsi_1 = &data_142d40450
        
        if (var_a0 != 0)
            rsi_1 = var_a8
        
        var_d8 = 0
        int32_t rdx_3 = 0
        var_d0 = 0
        int32_t rcx_6 = 0
        
        if (rsi_1 != 0 && *rsi_1 != 0)
            int64_t rdi = -1
            
            do
                rdi += 1
            while (rsi_1[rdi] != 0)
            
            if (rdi.d + 1 s> 0)
                sub_1405947f0(&var_d8, rdi.d + 1)
                rcx_6 = var_d0:4.d
                rdx_3 = var_d0.d
            
            int32_t rax_7 = rdi.d + 1 + rdx_3
            var_d0.d = rax_7
            
            if (rax_7 s> rcx_6)
                sub_140594770(&var_d8)
            
            UnDecorator::getReferenceType(var_d8, rsi_1, (rdi.d + 1) * 2)
        
        sub_1423e8e40(r13, arg_18, 1, &var_d8)
        int64_t rcx_11 = var_d8
        
        if (rcx_11 != 0)
            sub_140a74f90(rcx_11)
    
    int16_t* rdi_2 = &data_142d40450
    
    if (var_a0 != 0)
        rdi_2 = var_a8
    
    var_e8 = 0
    void* rax_9
    rax_9, r8_3 = sub_140d2f240(sub_1424b14e0(), 0, rdi_2, 0, 0, 0)
    
    if (rax_9 != 0)
        void* rax_10
        rax_10, r8_3 = sub_1424b14e0()
        
        if (rax_10 != 0)
            int64_t rax_11 = sx.q(*(rax_10 + 0x38))
            
            if (rax_11.d s<= *(rax_9 + 0x38) && *(*(rax_9 + 0x30) + (rax_11 << 3)) == rax_10 + 0x30)
                rbx_3 = rax_9
    
    int16_t* rcx_14 = var_a8
    
    if (rcx_14 != 0)
        sub_140a74f90(rcx_14)

int64_t var_c8
int64_t var_b8

if (rbx_3 == 0)
label_142021858:
    int32_t rdi_4 = r15[6].d
    var_b8 = 0
    int64_t rsi_2 = r15[5]
    int32_t var_b0_1 = rdi_4
    int32_t rsi_3
    
    if (rdi_4 != 0)
        sub_1405a4c70(&var_b8, rdi_4, 0)
        memcpy(var_b8, rsi_2, rdi_4 * 2)
        rsi_3 = 0
    else
        rsi_3 = 0
        int32_t var_ac_1 = 0
    
    r8_3.b = 1
    int512_t zmm1 = sub_140b18720(&var_d8, &var_b8, r8_3.b)
    int32_t rdi_5
    
    if (sub_140a32ae0(&var_d8, u"UEDPIE", 1) == 0)
        rdi_5 = var_d0.d
    else
        int64_t* rax_19
        rax_19, zmm1 = sub_14242e5f0(&var_c8, *(arg1[6] + 0x230))
        int32_t rcx_21 = rax_19[1].d
        int32_t r15_1 = rcx_21 - 1
        int64_t rcx_22 = var_c8
        
        if (rcx_21 == 0)
            r15_1 = 0
        
        if (rcx_22 != 0)
            zmm1 = sub_140a74f90(rcx_22)
        
        rdi_5 = var_d0.d
        int32_t rcx_23 = 0x7fffffff
        
        if (sx.q(r15_1) + 0x7fffffff s<= 0x7fffffff)
            rcx_23 = r15_1 + 0x7fffffff
        
        int32_t rax_22 = rdi_5 - 1
        
        if (rdi_5 == 0)
            rax_22 = 0
        
        int32_t r10_1
        
        if (rcx_23 s>= 0)
            r10_1 = rax_22
            
            if (rcx_23 s< rax_22)
                r10_1 = rcx_23
        else
            r10_1 = 0
        
        int32_t rax_23 = rax_22 - r10_1
        
        if (rdi_5 != 0)
            rsi_3 = rdi_5 - 1
        
        int32_t rsi_4 = rsi_3 - r10_1
        
        if (rax_23 s>= 0)
            if (rax_23 s< rsi_4)
                rsi_4 = rax_23
            
            if (rsi_4 != 0)
                int32_t rax_25 = rdi_5 - rsi_4
                
                if (rax_25 != r10_1)
                    int64_t r8_9 = var_d8
                    memmove(r8_9 + (sx.q(r10_1) << 1), r8_9 + (sx.q(rsi_4 + r10_1) << 1), 
                        (rax_25 - r10_1) * 2)
                    rdi_5 = var_d0.d
                
                rdi_5 -= rsi_4
                var_d0.d = rdi_5
        
        int32_t rsi_5
        
        if (rdi_5 == 0)
            rsi_5 = 0
        else
            rsi_5 = rdi_5 - 1
        
        if (r15_1 s>= 0)
            if (r15_1 s< rsi_5)
                rsi_5 = r15_1
            
            if (rsi_5 != 0)
                if (rdi_5 != rsi_5)
                    int64_t rcx_26 = var_d8
                    memmove(rcx_26, rcx_26 + (sx.q(rsi_5) << 1), (rdi_5 - rsi_5) * 2)
                    rdi_5 = var_d0.d
                
                rdi_5 -= rsi_5
                var_d0.d = rdi_5
        
        r15 = arg_10
    
    int64_t rsi_6 = var_d8
    var_c8 = 0
    int32_t var_c0_1 = rdi_5
    int32_t var_bc
    
    if (rdi_5 != 0)
        sub_1405a4c70(&var_c8, rdi_5, 0)
        memcpy(var_c8, rsi_6, rdi_5 * 2)
    else
        var_bc = 0
    
    int16_t* var_98
    sub_141520070(&var_98, &var_c8, zmm1)
    int64_t rcx_30 = var_c8
    
    if (rcx_30 != 0)
        sub_140a74f90(rcx_30)
    
    int32_t var_90
    int32_t rax_33 = var_90
    
    if (rax_33 s> 1)
        if (r13 != 0)
            int16_t* rsi_7 = &data_142d40450
            
            if (rax_33 != 0)
                rsi_7 = var_98
            
            var_c8 = 0
            int32_t rdx_18 = 0
            var_c0_1.q = 0
            int32_t rcx_31 = 0
            
            if (rsi_7 != 0 && *rsi_7 != 0)
                int64_t rdi_6 = -1
                
                do
                    rdi_6 += 1
                while (rsi_7[rdi_6] != 0)
                
                if (rdi_6.d + 1 s> 0)
                    sub_1405947f0(&var_c8, rdi_6.d + 1)
                    rcx_31 = var_bc
                    rdx_18 = var_c0_1
                
                int32_t rax_32 = rdi_6.d + 1 + rdx_18
                int32_t var_c0_2 = rax_32
                
                if (rax_32 s> rcx_31)
                    sub_140594770(&var_c8)
                
                UnDecorator::getReferenceType(var_c8, rsi_7, (rdi_6.d + 1) * 2)
            
            sub_1423e8e40(r13, arg_18, 1, &var_c8)
            int64_t rcx_36 = var_c8
            
            if (rcx_36 != 0)
                sub_140a74f90(rcx_36)
            
            rax_33 = var_90
        
        int16_t* rdi_8 = &data_142d40450
        
        if (rax_33 != 0)
            rdi_8 = var_98
        
        var_e8 = 0
        void* rax_35 = sub_140d2f240(sub_1424b14e0(), 0, rdi_8, 0, 0, 0)
        
        if (rax_35 != 0)
            void* rax_36 = sub_1424b14e0()
            
            if (rax_36 != 0)
                int64_t rax_37 = sx.q(*(rax_36 + 0x38))
                
                if (rax_37.d s<= *(rax_35 + 0x38)
                        && *(*(rax_35 + 0x30) + (rax_37 << 3)) == rax_36 + 0x30)
                    rbx_3 = rax_35
    
    int16_t* rcx_39 = var_98
    
    if (rcx_39 != 0)
        sub_140a74f90(rcx_39)
    
    int64_t rcx_40 = var_d8
    
    if (rcx_40 != 0)
        sub_140a74f90(rcx_40)
    
    int64_t rcx_41 = var_b8
    
    if (rcx_41 != 0)
        sub_140a74f90(rcx_41)
else
    void* rax_13
    rax_13, r8_3 = sub_1424b14e0()
    
    if (rax_13 == 0)
        goto label_142021858
    
    int64_t rax_14 = sx.q(*(rax_13 + 0x38))
    
    if (rax_14.d s> *(rbx_3 + 0x38) || *(*(rbx_3 + 0x30) + (rax_14 << 3)) != rax_13 + 0x30)
        goto label_142021858

if (rbx_3 == 0)
label_142021b6b:
    int16_t** rax_42 = sub_141520630(&var_c8)
    int16_t* rbx_4
    
    if (rax_42[1].d == 0)
        rbx_4 = &data_142d40450
    else
        rbx_4 = *rax_42
    
    var_e8 = 0
    void* rax_44 = sub_140d2f240(sub_1424b14e0(), 0, rbx_4, 0, 0, 0)
    int64_t rcx_45 = var_c8
    rbx_3 = rax_44
    
    if (rcx_45 != 0)
        sub_140a74f90(rcx_45)
else
    void* rax_39 = sub_1424b14e0()
    
    if (rax_39 == 0)
        goto label_142021b6b
    
    int64_t rax_40 = sx.q(*(rax_39 + 0x38))
    
    if (rax_40.d s> *(rbx_3 + 0x38) || *(*(rbx_3 + 0x30) + (rax_40 << 3)) != rax_39 + 0x30)
        goto label_142021b6b

int64_t* rbx_5

if (rbx_3 == 0)
    rbx_5 = sub_1424b14e0()
else
    void* rax_45 = sub_1424b14e0()
    
    if (rax_45 == 0)
        rbx_5 = sub_1424b14e0()
    else
        int64_t rax_46 = sx.q(*(rax_45 + 0x38))
        
        if (rax_46.d s> *(rbx_3 + 0x38) || *(*(rbx_3 + 0x30) + (rax_46 << 3)) != rax_45 + 0x30)
            rbx_5 = sub_1424b14e0()
        else
            if (r15[0xc].d != 0)
                r12 = r15[0xb]
            
            var_c8 = 0
            int32_t rdx_25 = 0
            int32_t var_c0_3 = 0
            int32_t rcx_47 = 0
            int32_t var_bc_1 = 0
            
            if (r12 != 0 && *r12 != 0)
                do
                    r14 += 1
                while (r12[r14] != 0)
                
                if (r14.d + 1 s> 0)
                    sub_1405947f0(&var_c8, r14.d + 1)
                    rcx_47 = var_bc_1
                    rdx_25 = var_c0_3
                
                int32_t rax_48 = r14.d + 1 + rdx_25
                int32_t var_c0_4 = rax_48
                
                if (rax_48 s> rcx_47)
                    sub_140594770(&var_c8)
                
                UnDecorator::getReferenceType(var_c8, r12, (r14.d + 1) * 2)
            
            var_e8.q = &var_78
            int64_t** rax_50 = (*(*arg1 + 0x338))(arg1, &arg_10, rbx_3, 
                sub_140b18720(&var_a8, &r15[5], 1), var_e8, &var_c8)
            int16_t* rcx_53 = var_a8
            rbx_5 = *rax_50
            
            if (rcx_53 != 0)
                sub_140a74f90(rcx_53)
            
            int64_t rcx_54 = var_c8
            
            if (rcx_54 != 0)
                sub_140a74f90(rcx_54)

void* const rdi_11

if (r13 == 0)
    rdi_11 = arg_18
else
    int64_t* rcx_56
    
    if (rbx_5 == 0)
        rcx_56 = nullptr
    else
        void* rax_51 = sub_1424b14e0()
        
        if (rax_51 == 0)
            rcx_56 = nullptr
        else
            int64_t rax_52 = sx.q(*(rax_51 + 0x38))
            
            if (rax_52.d s> rbx_5[7].d)
                rcx_56 = nullptr
            else
                rcx_56 = rbx_5
                
                if (*(rbx_5[6] + (rax_52 << 3)) != rax_51 + 0x30)
                    rcx_56 = nullptr
    
    rdi_11 = arg_18
    sub_1423e8e40(r13, rdi_11, 2, sub_140d21e10(rcx_56, &var_b8, 0))
    int64_t rcx_58 = var_b8
    
    if (rcx_58 != 0)
        sub_140a74f90(rcx_58)
    
    var_d8 = 0
    int32_t var_d0_1 = 0
    sub_1405947f0(&var_d8, 0x14)
    int32_t rax_55 = var_d0_1 + 0x14
    var_d0_1 = rax_55
    
    if (rax_55 s> 0)
        sub_140594770(&var_d8)
    
    UnDecorator::getReferenceType(var_d8, u"LoadForAllGameModes", 0x28)
    sub_1423e8e40(r13, rdi_11, 2, &var_d8)
    int64_t rcx_63 = var_d8
    
    if (rcx_63 != 0)
        sub_140a74f90(rcx_63)

void var_68
sub_142427eb0(&var_68)
int32_t var_3c
int32_t var_3c_1 = var_3c | 0x40
char var_40 = 1

if (rbx_5 == 0)
    rbx_5 = nullptr
else
    void* rax_57 = sub_1424b14e0()
    
    if (rax_57 == 0)
        rbx_5 = nullptr
    else
        int64_t rax_58 = sx.q(*(rax_57 + 0x38))
        
        if (rax_58.d s> rbx_5[7].d || *(rbx_5[6] + (rax_58 << 3)) != rax_57 + 0x30)
            rbx_5 = nullptr

var_e8.q = &var_68
void* result = sub_1420efae0(rdi_11, rbx_5, nullptr, nullptr, var_e8)
int64_t rcx_67 = var_88

if (rcx_67 != 0)
    sub_140a74f90(rcx_67)

int64_t rcx_68 = var_78

if (rcx_68 != 0)
    sub_140a74f90(rcx_68)

sub_14094c030(r15)
return result
