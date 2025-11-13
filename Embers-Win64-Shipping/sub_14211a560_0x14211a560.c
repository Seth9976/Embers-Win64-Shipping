// 函数: sub_14211a560
// 地址: 0x14211a560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
char r10 = 0
int32_t rsi = 1
char var_147 = 0
int32_t r9_1 = 1 << (data_1439c7a08).b | data_143f4a12c

if (r9_1 != 0)
    int32_t rdx_3
    int32_t r8_1
    
    do
        r8_1 = r9_1
        rdx_3 = neg.d(r9_1) & r9_1
        int32_t rcx_2 = 0
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rdx_3)
        
        if (rdx_3 != 0)
            rcx_2 = temp0_1
        
        r9_1 ^= rdx_3
        
        if (arg1[0x16].d == (*U"1111")[sx.q(rcx_2)])
            r10 = 1
        
        char var_147_1 = r10
    while (rdx_3 != r8_1)
    
    if (r10 != 0)
        if (*(arg1 + 0xb4) != 0)
            sub_1419a21e0(0)
        
        int64_t var_120
        __builtin_memset(&var_120, 0, 0x20)
        char var_148
        int64_t var_140
        int64_t var_110
        double var_f8[0x2]
        double var_e8[0x2]
        double var_c8[0x2]
        double var_b8[0x2]
        
        if (arg1[0x14] != 0 || arg1[0x15] != 0)
            var_148 = 0
        else
            void* r9_2 = &arg1[2]
            var_148 = 1
            int32_t r10_1 = *(r9_2 + 0x18)
            int32_t rcx_3 = 0
            var_140.d = 0
            int32_t r8_2 = 0
            var_140:4.d = 1
            void* var_138_1 = r9_2
            int32_t var_130_1 = 0xffffffff
            int64_t var_12c_1 = 0
            
            if (r10_1 != 0)
                void* rax_5 = *(r9_2 + 0x10)
                
                if (rax_5 != 0)
                    r9_2 = rax_5
                
                int32_t temp0_2
                int32_t temp1_1
                temp0_2:temp1_1 = sx.q(r10_1 - 1)
                int32_t rdx_6 = *r9_2
                
                if (rdx_6 != 0)
                label_14211a6db:
                    int32_t rax_12 = neg.d(rdx_6) & rdx_6
                    uint64_t rflags_2
                    int32_t temp0_3
                    temp0_3, rflags_2 = _bit_scan_reverse(rax_12)
                    var_140:4.d = rax_12
                    int32_t rax_13
                    
                    if (rax_12 == 0)
                        rax_13 = 0x20
                    else
                        rax_13 = 0x1f - temp0_3
                    
                    var_12c_1.d = r8_2 - rax_13 + 0x1f
                    
                    if (r8_2 - rax_13 + 0x1f s> r10_1)
                        var_12c_1.d = r10_1
                else
                    while (true)
                        int64_t rdx_7 = sx.q(rcx_3)
                        r8_2 += 0x20
                        rcx_3 += 1
                        var_12c_1:4.d = r8_2
                        var_140.d = rcx_3
                        
                        if (rdx_7.d s>= (temp1_1 + (temp0_2 & 0x1f)) s>> 5)
                            break
                        
                        rdx_6 = *(r9_2 + (rdx_7 << 2) + 4)
                        var_130_1 = 0xffffffff
                        
                        if (rdx_6 != 0)
                            goto label_14211a6db
                    
                    var_12c_1.d = r10_1
            
            double zmm2[0x2] = var_130_1.o
            var_b8 = zmm2
            var_c8 = var_140.o
            double zmm1[0x2] = var_c8
            var_f8 = arg1.o
            uint32_t rax_16 = (zmm2[0] u>> 0x20).d
            int64_t var_d8_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
            var_e8 = zmm1
            
            if (rax_16 s< r10_1)
                int32_t i = var_e8[1]:4.d
                int64_t j_2
                
                do
                    j_2 = 3
                    int64_t* rdi_2 = *(*var_f8[0] + sx.q(i) * 0x10) + 0x250
                    int64_t j
                    
                    do
                        int64_t k_1 = 4
                        int64_t k
                        
                        do
                            int64_t var_108_1
                            int64_t rbx_1 = sx.q(var_108_1.d)
                            int64_t r14_1 = *rdi_2
                            int32_t rax_18 = (rbx_1 + 1).d
                            var_108_1.d = rax_18
                            
                            if (rax_18 s> var_108_1:4.d)
                                sub_1405a4d70(&var_110)
                            
                            rdi_2 = &rdi_2[1]
                            *(var_110 + (rbx_1 << 3)) = r14_1
                            k = k_1
                            k_1 -= 1
                        while (k != 1)
                        j = j_2
                        j_2 -= 1
                    while (j != 1)
                    var_e8[1].d &= not.d(var_f8[1]:4.d)
                    sub_14059bdd0(&var_f8[1])
                    i = var_e8[1]:4.d
                while (i s< *(var_e8[0] i+ 0x18))
                
                rsi = (j_2 + 1).d
        
        var_140 = 0
        int32_t var_138_2 = 0
        int32_t var_130_2 = 0xffffffff
        sub_140d3cc80(sub_142543020(), &var_140, 1, 0x10, 0)
        int32_t r8_5 = var_138_2
        int32_t i_1 = var_130_2 + 1
        int64_t rdx_12 = var_140
        int32_t i_2 = i_1
        
        if (i_1 s< r8_5)
            while (*(rdx_12 + (sx.q(i_1) << 3)) == 0)
                int32_t i_3 = i_1 + 1
                i_2 = i_3
                i_1 = i_3
                
                if (i_3 s>= r8_5)
                    break
        
        int64_t var_118_1
        
        while (i_1 s>= 0)
            if (i_1 s>= r8_5)
                break
            
            int64_t* rbx_2 = *(rdx_12 + (sx.q(i_1) << 3))
            
            if (*sub_1408296b0(arg1, &performanceCount, (*(*rbx_2 + 0x268))(rbx_2)) != 0xffffffff)
                var_f8[0]:4.d = rsi
                int32_t r10_2 = arg1[0xf].d
                void* r9_3 = &arg1[0xc]
                var_f8[1] = r9_3
                int32_t rcx_12 = 0
                var_f8[0].d = 0
                int32_t r8_7 = 0
                var_e8[0].d = 0xffffffff
                var_e8[0] = 0
                
                if (r10_2 != 0)
                    void* rax_29 = *(r9_3 + 0x10)
                    
                    if (rax_29 != 0)
                        r9_3 = rax_29
                    
                    int32_t temp2_1
                    int32_t temp3_1
                    temp2_1:temp3_1 = sx.q(r10_2 - 1)
                    int32_t rdx_16 = *r9_3
                    
                    if (rdx_16 != 0)
                    label_14211a928:
                        int32_t rax_36 = neg.d(rdx_16) & rdx_16
                        uint64_t rflags_3
                        int32_t temp0_5
                        temp0_5, rflags_3 = _bit_scan_reverse(rax_36)
                        var_f8[0]:4.d = rax_36
                        int32_t rax_37
                        
                        if (rax_36 == 0)
                            rax_37 = 0x20
                        else
                            rax_37 = 0x1f - temp0_5
                        
                        var_e8[0]:4.d = r8_7 - rax_37 + 0x1f
                        
                        if (r8_7 - rax_37 + 0x1f s> r10_2)
                            var_e8[0]:4.d = r10_2
                    else
                        while (true)
                            int64_t rdx_17 = sx.q(rcx_12)
                            r8_7 += 0x20
                            rcx_12 += 1
                            var_e8[1].d = r8_7
                            var_f8[0].d = rcx_12
                            
                            if (rdx_17.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                                break
                            
                            rdx_16 = *(r9_3 + (rdx_17 << 2) + 4)
                            var_e8[0].d = 0xffffffff
                            
                            if (rdx_16 != 0)
                                goto label_14211a928
                        
                        var_e8[0]:4.d = r10_2
                
                double var_88_1[0x2] = var_e8
                double var_98_1[0x2] = var_f8
                int64_t* var_d0
                var_d0.o = (&arg1[0xa]).o
                uint32_t rax_40 = (var_e8[0] u>> 0x20).d
                var_b8[1] = (_mm_unpackhi_pd(var_e8, var_e8[0])).q
                var_c8 = var_98_1
                
                if (rax_40 s< r10_2)
                    int32_t j_1 = var_b8[0]:4.d
                    
                    do
                        if ((*(*rbx_2 + 0x278))(rbx_2, *(*var_d0 + sx.q(j_1) * 0x10)) != 0)
                            int64_t rdi_4 = sx.q(var_118_1.d)
                            int32_t rax_47 = (rdi_4 + 1).d
                            var_118_1.d = rax_47
                            
                            if (rax_47 s> var_118_1:4.d)
                                sub_1405a4d70(&var_120)
                            
                            *(var_120 + (rdi_4 << 3)) = rbx_2
                            break
                        
                        var_b8[0].d &= not.d(var_c8[0]:4.d)
                        sub_14059bdd0(&var_c8)
                        j_1 = var_b8[0]:4.d
                    while (j_1 s< *(var_c8[1] i+ 0x18))
            
            r8_5 = var_138_2
            i_1 = i_2 + 1
            rdx_12 = var_140
            i_2 = i_1
            
            if (i_1 s< r8_5)
                while (*(rdx_12 + (sx.q(i_1) << 3)) == 0)
                    int32_t i_4 = i_1 + 1
                    i_2 = i_4
                    i_1 = i_4
                    
                    if (i_4 s>= r8_5)
                        break
        
        if (rdx_12 != 0)
            sub_140a74f90(rdx_12)
        
        int32_t var_a8 = 0
        int64_t* var_d0_1 = &var_120
        int64_t var_68_1 = 0
        int64_t (* var_78)(int64_t* arg1, int64_t* arg2, int32_t arg3 @ zmm0)
        var_c8[0] = &var_78
        var_c8[1] = &var_a8
        var_b8[0] = &var_148
        var_b8[1] = &var_110
        int64_t* rax_50 = sub_140a82f30(0x30, 8)
        int64_t* r8_9 = rax_50
        double zmm1_1[0x2] = var_c8
        *(rax_50 + 8) = var_d0_1.o
        uint128_t zmm0_2 = zx.o(var_b8[1])
        *(rax_50 + 0x18) = zmm1_1
        *r8_9 = &data_142ff85d8
        rax_50[5] = zmm0_2.q
        int64_t (* rcx_20)(int64_t* arg1, int64_t* arg2, int32_t arg3 @ zmm0) = var_78
        
        if (rax_50 != -8)
            rcx_20 = sub_14211f240
        
        int64_t* var_68_2 = r8_9
        int32_t rax_51 = var_118_1.d
        var_78 = rcx_20
        void var_58
        
        if (rax_51 s> 0)
            while (true)
                performanceCount = *(var_120 + (sx.q(rax_51 - 1) << 3))
                int64_t* rcx_23 = &var_58
                
                if (r8_9 != 0)
                    rcx_23 = r8_9
                
                var_78((*(*rcx_23 + 8))(rcx_23), &performanceCount)
                rax_51 = var_118_1.d
                
                if (rax_51 s<= 0)
                    break
                
                r8_9 = var_68_2
        
        if (var_148 == 0)
            int64_t* rbx_3 = arg1[0x14]
            
            if (rbx_3 == 0)
                rbx_3 = arg1[0x15]
                
                if (rbx_3 != 0)
                    arg1[0x15] = 0
                    sub_141ed40e0(rbx_3)
                    j_sub_140a74f90(rbx_3)
            else
                arg1[0x14] = 0
                sub_141ed41d0(rbx_3)
                j_sub_140a74f90(rbx_3)
        else
            int64_t* rax_56 = sub_142006940()
            int64_t r8_10 = *rax_56
            (*(r8_10 + 0x68))(rax_56, &var_110, r8_10)
        
        QueryPerformanceCounter(&performanceCount)
        
        if (var_78 != 0)
            int64_t* rcx_30 = &var_58
            
            if (var_68_2 != 0)
                rcx_30 = var_68_2
            
            (*(*rcx_30 + 0x10))(rcx_30)
        
        int64_t rcx_31 = var_120
        
        if (rcx_31 != 0)
            sub_140a74f90(rcx_31)
        
        int64_t rcx_32 = var_110
        
        if (rcx_32 != 0)
            sub_140a74f90(rcx_32)

int64_t* rbx_4 = arg1[0x15]

if (rbx_4 != 0)
    sub_141ed40e0(rbx_4)
    j_sub_140a74f90(rbx_4)

int64_t* rbx_5 = arg1[0x14]

if (rbx_5 != 0)
    sub_141ed41d0(rbx_5)
    j_sub_140a74f90(rbx_5)

arg1[0x13].d = 0
int64_t rcx_37 = arg1[0x12]

if (rcx_37 != 0)
    sub_140a74f90(rcx_37)

arg1[0xb].d = 0

if (*(arg1 + 0x5c) != 0)
    sub_1405a5410(&arg1[0xa], 0)

arg1[0x10].d = 0xffffffff
*(arg1 + 0x84) = 0
sub_14059a8e0(&arg1[0xc], 0)
int64_t rcx_40 = arg1[0xe]

if (rcx_40 != 0)
    sub_140a74f90(rcx_40)

int64_t rcx_41 = arg1[0xa]

if (rcx_41 != 0)
    sub_140a74f90(rcx_41)

arg1[9].d = 0
int64_t rcx_42 = arg1[8]

if (rcx_42 != 0)
    sub_140a74f90(rcx_42)

arg1[1].d = 0

if (*(arg1 + 0xc) != 0)
    sub_1405a5410(arg1, 0)

arg1[6].d = 0xffffffff
*(arg1 + 0x34) = 0
void* result = sub_14059a8e0(&arg1[2], 0)
int64_t rcx_45 = arg1[4]

if (rcx_45 != 0)
    result = sub_140a74f90(rcx_45)

int64_t rcx_46 = *arg1

if (rcx_46 != 0)
    result = sub_140a74f90(rcx_46)

__security_check_cookie(rax_1 ^ &var_178)
return result
