// 函数: sub_141ca8a50
// 地址: 0x141ca8a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(*(arg1 + 0x194))
uint64_t* rsi = arg2

if (rax.d s<= 0 || rax s> arg1[0x3a])
    rax.b = 0
    return rax

(*(*arg1 + 0x178))()
uint64_t var_d8
int512_t zmm1 = sub_140ba59c0(&var_d8, &arg1[0x12])
int16_t* var_a8
sub_140baa480(&var_a8, &var_d8)
int64_t* rcx_2 = arg1[1]
uint32_t r12_1 = *(arg1 + 0xcc) u>> 0x11
int32_t arg_18 = 0
r12_1.b &= 1
int32_t* rdx_2 = *rcx_2
uint32_t arg_20 = r12_1

if (&rdx_2[1] u> rcx_2[1])
    int32_t* rdx_3 = &arg_18
    
    if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, rdx_3, zmm1)
    else
        (*(*arg1 + 0x150))(arg1, rdx_3, 4)
else
    arg_18 = *rdx_2
    *rcx_2 += 4

int16_t* var_128
int16_t* var_108
int32_t var_100
int64_t var_e8
int64_t var_e0
int32_t var_d0
int32_t var_c8
int64_t* var_b0
int32_t var_a0
void var_98
void var_90
int64_t* arg_8
uint64_t rax_3

if (r12_1.b != 0 && (*(arg1 + 0xac) s< 0x151 || arg_18 == 0))
    zmm1 = sub_140baa460(&var_108, &var_d8)
    int64_t* rax_5 = j_sub_140a82f30(0x50)
    arg_8 = rax_5
    int64_t* r14_2
    
    if (rax_5 == 0)
        r14_2 = nullptr
    else
        int64_t rdi_1 = sx.q(arg1[0x36].d)
        int64_t rsi_1 = arg1[0x35]
        var_128 = nullptr
        int32_t var_120_1 = rdi_1.d
        
        if (rdi_1.d != 0)
            sub_140638750(&var_128, rdi_1.d, 0)
            memcpy(var_128, rsi_1, (rdi_1 << 2).d)
        else
            int32_t var_11c_1 = 0
        
        int16_t* const rdi_2 = &data_142d40450
        int32_t r14_1 = *(arg1 + 0xcc)
        int16_t* const r12_2 = &data_142d40450
        
        if (var_100 != 0)
            rdi_2 = var_108
        
        var_e8 = 0
        
        if (var_a0 != 0)
            r12_2 = var_a8
        
        var_e0 = 0
        int16_t* const r13_1 = &data_142d40450
        
        if (var_d0 != 0)
            r13_1 = var_d8
        
        int64_t* rax_6 = sub_140b58260(&var_b0, u"World", 1)
        int64_t* rax_7 = sub_140b58260(&var_c8, rdi_2, 1)
        int64_t* rax_8 = sub_140b58260(&var_98, r12_2, 1)
        int64_t* rax_9 = sub_140b58260(&var_90, r13_1, 1)
        int32_t var_158
        var_158.q = *rax_6
        int64_t* rax_10
        rax_10, zmm1 =
            sub_141c91700(arg_8, *rax_9, *rax_8, *rax_7, var_158, &var_e8, &var_128, r14_1)
        rsi = arg2
        r14_2 = rax_10
        r12_1 = arg_20
    
    int64_t rdi_4 = sx.q(rsi[1].d)
    int32_t rax_11 = (rdi_4 + 1).d
    rsi[1].d = rax_11
    
    if (rax_11 s> *(rsi + 0xc))
        sub_1405a4d70(rsi)
    
    *(*rsi + (rdi_4 << 3)) = r14_2
    int16_t* rcx_14 = var_108
    
    if (rcx_14 != 0)
        rax_3, zmm1 = sub_140a74f90(rcx_14)

bool cond:1 = arg_18 s<= 0
int32_t r15_2 = 0
var_c8 = 0

if (not(cond:1))
    do
        int64_t var_118 = 0
        int32_t var_110_1 = 0
        uint64_t var_f8 = 0
        int32_t var_f0_1 = 0
        arg_8.d = 0
        int512_t zmm1_2 = sub_140a1d9d0(arg1, &var_f8, sub_140a1d9d0(arg1, &var_118, zmm1))
        int64_t* rcx_17 = arg1[1]
        int32_t* rdx_14 = *rcx_17
        
        if (&rdx_14[1] u> rcx_17[1])
            int64_t** rdx_15 = &arg_8
            
            if ((*(arg1 + 0x29) & 0x20) != 0)
                sub_140b54070(arg1, rdx_15, zmm1_2)
            else
                (*(*arg1 + 0x150))(arg1, rdx_15, 4)
        else
            arg_8.d = *rdx_14
            *rcx_17 += 4
        
        int32_t rax_15 = arg_8.d
        int64_t var_138 = 0
        int64_t var_130_1 = 0
        
        if (rax_15 s> 0)
            zmm1_2 = sub_140a899b0(&var_138, rax_15)
            rax_15 = arg_8.d
        
        int32_t i = 0
        
        if (rax_15 s> 0)
            do
                var_108 = nullptr
                var_100.q = 0
                int64_t var_c0 = 0
                int32_t var_b8_1 = 0
                zmm1_2 = sub_140a1d9d0(arg1, &var_c0, sub_140a1d9d0(arg1, &var_108, zmm1_2))
                
                if (var_100 s> 1 && var_b8_1 s> 1)
                    int16_t* rdx_19 = &data_142d40450
                    
                    if (var_100 != 0)
                        rdx_19 = var_108
                    
                    zmm1_2 = sub_141c8f680(&var_138, sub_140b58260(&var_90, rdx_19, 1), &var_c0)
                
                int64_t rcx_24 = var_c0
                
                if (rcx_24 != 0)
                    zmm1_2 = sub_140a74f90(rcx_24)
                
                int16_t* rcx_25 = var_108
                
                if (rcx_25 != 0)
                    zmm1_2 = sub_140a74f90(rcx_25)
                
                i += 1
            while (i s< arg_8.d)
        
        if (sub_140a32ae0(&var_118, &data_142d5a024, 0) == 0)
            int32_t var_158_1 = 0xffffffff
            
            if (sub_140a23cf0(&var_118, &data_142d404c4, 0, 0, 0xffffffff) == 0xffffffff)
                int16_t* rsi_3 = nullptr
                int64_t rdi_5 = var_118
                var_128 = nullptr
                
                if (var_110_1 != 0)
                    sub_1405a4c70(&var_128, var_110_1, 0)
                    rsi_3 = var_128
                    memcpy(rsi_3, rdi_5, var_110_1 * 2)
                else
                    int32_t var_11c_2 = 0
                
                if (r12_1.b != 0 && *(arg1 + 0xac) s< 0x151)
                    int64_t var_60
                    int64_t* rax_20 = sub_140baa460(&var_60, &var_d8)
                    int16_t* rdx_24
                    
                    if (rax_20[1].d == 0)
                        rdx_24 = &data_142d40450
                    else
                        rdx_24 = *rax_20
                    
                    int16_t* const rcx_31 = &data_142d40450
                    
                    if (var_110_1 != 0)
                        rcx_31 = rsi_3
                    
                    int32_t rax_21 = sub_140a54510(rcx_31, rdx_24)
                    int64_t rcx_32 = var_60
                    rdi_5.b = rax_21 != 0
                    
                    if (rcx_32 != 0)
                        sub_140a74f90(rcx_32)
                
                if (r12_1.b == 0 || *(arg1 + 0xac) s>= 0x151 || rdi_5.b == 0)
                    int64_t* rax_22 = j_sub_140a82f30(0x50)
                    var_b0 = rax_22
                    int64_t* r14_5
                    
                    if (rax_22 == 0)
                        r14_5 = nullptr
                    else
                        int64_t rdi_6 = sx.q(arg1[0x36].d)
                        int64_t r15_3 = arg1[0x35]
                        var_e8 = 0
                        var_e0.d = rdi_6.d
                        
                        if (rdi_6.d != 0)
                            sub_140638750(&var_e8, rdi_6.d, 0)
                            memcpy(var_e8, r15_3, (rdi_6 << 2).d)
                        else
                            var_e0:4.d = 0
                        
                        int16_t* const rdx_27 = &data_142d40450
                        int16_t* rdi_7 = &data_142d40450
                        
                        if (var_f0_1 != 0)
                            rdx_27 = var_f8
                        
                        int16_t* r12_3 = &data_142d40450
                        int64_t var_88 = var_138
                        int32_t r14_4 = *(arg1 + 0xcc)
                        
                        if (var_110_1 != 0)
                            rdi_7 = rsi_3
                        
                        var_138 = 0
                        uint64_t r13_2 = &data_142d40450
                        
                        if (var_a0 != 0)
                            r12_3 = var_a8
                        
                        int32_t var_80_1 = var_130_1.d
                        
                        if (var_d0 != 0)
                            r13_2 = var_d8
                        
                        int32_t var_7c_1 = var_130_1:4.d
                        int64_t var_130_2 = 0
                        int64_t* rax_26 = sub_140b58260(&var_98, rdx_27, 1)
                        void var_78
                        int64_t* rax_27 = sub_140b58260(&var_78, rdi_7, 1)
                        void var_70
                        int64_t* rax_28 = sub_140b58260(&var_70, r12_3, 1)
                        void var_68
                        int64_t* rax_29 = sub_140b58260(&var_68, r13_2, 1)
                        var_158_1.q = *rax_26
                        int64_t* rax_30 = sub_141c91700(var_b0, *rax_29, *rax_28, *rax_27, 
                            0xffffffff, &var_88, &var_e8, r14_4)
                        r15_2 = var_c8
                        r14_5 = rax_30
                        r12_1 = arg_20
                    
                    int64_t rdi_9 = sx.q(arg2[1].d)
                    int32_t rax_31 = (rdi_9 + 1).d
                    arg2[1].d = rax_31
                    
                    if (rax_31 s> *(arg2 + 0xc))
                        sub_1405a4d70(arg2)
                    
                    int16_t* rcx_33 = var_128
                    *(*arg2 + (rdi_9 << 3)) = r14_5
                    
                    if (rcx_33 != 0)
                        sub_140a74f90(rcx_33)
                else if (rsi_3 != 0)
                    sub_140a74f90(rsi_3)
        
        rax_3, zmm1 = sub_1408464b0(&var_138)
        uint64_t rcx_44 = var_f8
        
        if (rcx_44 != 0)
            rax_3, zmm1 = sub_140a74f90(rcx_44)
        
        int64_t rcx_45 = var_118
        
        if (rcx_45 != 0)
            rax_3, zmm1 = sub_140a74f90(rcx_45)
        
        r15_2 += 1
        var_c8 = r15_2
    while (r15_2 s< arg_18)

int16_t* rcx_46 = var_a8

if (rcx_46 != 0)
    sub_140a74f90(rcx_46)

uint64_t rcx_47 = var_d8

if (rcx_47 != 0)
    sub_140a74f90(rcx_47)

rax_3.b = 1
return rax_3
