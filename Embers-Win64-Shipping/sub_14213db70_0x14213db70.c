// 函数: sub_14213db70
// 地址: 0x14213db70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_20
sub_140b58260(&arg_20, u"MatineeTrackRedirects", 1)
int64_t* rax = sub_140af5690(data_143ddb400, u"/Script/Engine.Engine", 0, 1, &data_143de5780)
int32_t r11 = rax[5].d
int32_t var_104 = 1
int32_t rcx_2 = 0
int32_t var_108 = 0
int32_t var_f8 = 0xffffffff
void* r9_1 = &rax[2]
void* var_100 = r9_1
int32_t r8 = 0
int64_t var_f4 = 0

if (r11 != 0)
    void* rax_1 = *(r9_1 + 0x10)
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_3 = *r9_1
    
    if (rdx_3 != 0)
    label_14213dc3e:
        int32_t rax_8 = ((rdx_3 - 1) & rdx_3) ^ rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_104_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_f4.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r11)
            var_f4.d = r11
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx_2)
            r8 += 0x20
            rcx_2 += 1
            var_f4:4.d = r8
            var_108 = rcx_2
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
            var_f8 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_14213dc3e
        
        var_f4.d = r11

uint128_t zmm4 = var_f8.o
int64_t* var_48 = rax
uint128_t zmm0 = var_108.o
uint128_t var_58 = zmm4
int16_t var_90 = 0
void* rax_11 = zmm0.q
uint128_t var_b8 = zmm0
int128_t var_c8 = rax.o
zmm0.q = (_mm_unpackhi_pd(zmm4, zmm4.q)).q
uint64_t result = zx.q(_mm_bsrli_si128(zmm4, 4).d)
uint128_t var_a8 = zmm0

if (result.d s< *(rax_11 + 0x18))
    int32_t i = var_b8:0xc.d
    
    do
        int64_t* rsi_1 = var_c8.q
        int64_t rdi_2 = sx.q(i) * 0x30
        
        if (*(rdi_2 + *rsi_1) == arg_20)
            void arg_8
            int32_t arg_18 = *sub_140b5e500(&arg_8, 0x64)
            int32_t arg_1c = 0
            void* rdx_5 = *rsi_1
            int64_t* rcx_9 = rdx_5 + 0x18 + rdi_2
            int32_t rax_15 = rcx_9[1].d
            
            if (rax_15 == 0 || rax_15 - 1 s<= 0)
                rcx_9 = rdx_5 + 8 + rdi_2
            
            int16_t* rcx_11
            
            if (rcx_9[1].d == 0)
                rcx_11 = &data_142d40450
            else
                rcx_11 = *rcx_9
            
            sub_140b2ac50(rcx_11, u"TargetClassName=", &arg_18)
            int64_t* rax_17 = sub_140b63b70(&arg_18, &var_108)
            int16_t* rbx_1
            
            if (rax_17[1].d == 0)
                rbx_1 = &data_142d40450
            else
                rbx_1 = *rax_17
            
            void* rax_19 = sub_140d2f240(sub_140d41340(), 0, rbx_1, 0, 0, 0)
            int64_t rcx_14 = var_108.q
            
            if (rcx_14 != 0)
                sub_140a74f90(rcx_14)
            
            if (rax_19 != 0)
                int64_t rax_20 = *(rax_19 + 0x18)
                int64_t var_88 = rax_20
                void* rax_22 = sub_142136780(&data_143a2eb50, 
                    (rax_20 u>> 0x20).d + sub_140b5ead0(rax_20.d), &var_88)
                int64_t var_e8 = 0
                int64_t var_e0
                __builtin_memset(&var_e0, 0, 0x18)
                void* rdx_8 = *rsi_1
                int64_t* rcx_17 = rdx_8 + 0x18 + rdi_2
                int32_t rax_23 = rcx_17[1].d
                
                if (rax_23 == 0 || rax_23 - 1 s<= 0)
                    rcx_17 = rdx_8 + 8 + rdi_2
                
                int16_t* rcx_19
                
                if (rcx_17[1].d == 0)
                    rcx_19 = &data_142d40450
                else
                    rcx_19 = *rcx_17
                
                int64_t var_d8
                sub_140b2acc0(rcx_19, u"OldFieldName=", &var_d8, 1)
                void* rdx_9 = *rsi_1
                int64_t* rcx_21 = rdx_9 + 0x18 + rdi_2
                int32_t rax_25 = rcx_21[1].d
                
                if (rax_25 == 0 || rax_25 - 1 s<= 0)
                    rcx_21 = rdx_9 + 8 + rdi_2
                
                int16_t* rcx_23
                
                if (rcx_21[1].d == 0)
                    rcx_23 = &data_142d40450
                else
                    rcx_23 = *rcx_21
                
                sub_140b2acc0(rcx_23, u"NewFieldName=", &var_e8, 1)
                int32_t var_80
                sub_1405d1820(rax_22, &var_80)
                int64_t* var_78
                sub_140596d10(var_78, &var_d8)
                sub_140596d10(&var_78[2], &var_e8)
                var_78[4].d = 0xffffffff
                int32_t rax_27 = var_78[1].d
                int16_t* rdx_13
                
                if (rax_27 == 0)
                    rdx_13 = &data_142d40450
                else
                    rdx_13 = *var_78
                
                int32_t rcx_27 = rax_27 - 1
                
                if (rax_27 == 0)
                    rcx_27 = 0
                
                void arg_10
                sub_1405d2a60(rax_22, &arg_10, sub_1405969c0(rcx_27, rdx_13), var_78, var_80, 
                    nullptr)
                int64_t rcx_30 = var_e8
                
                if (rcx_30 != 0)
                    sub_140a74f90(rcx_30)
                
                int64_t rcx_31 = var_d8
                
                if (rcx_31 != 0)
                    sub_140a74f90(rcx_31)
        
        var_b8:8.d &= not.d(var_c8:0xc.d)
        sub_14059bdd0(&var_c8:8)
        result = var_b8.q
        i = var_b8:0xc.d
    while (i s< *(result + 0x18))
    
    if (var_90.b != 0 && var_90:1.b != 0)
        result = sub_140a6d3f0(rax, rax[1].d - *(rax + 0x34), 1)

data_143f4c9a8 = 1
return result
