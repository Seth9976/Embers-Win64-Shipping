// 函数: sub_1417d34e0
// 地址: 0x1417d34e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r12

if (*(arg2[7] + 8) s<= 0 || *(arg2[3] + 8) s<= 0)
    r12.b = 0
else
    r12.b = 1

int32_t rax_2 = *(arg1 + 0xc)
char arg_8 = r12.b
void* const rax_8

if (rax_2 s>= data_143e1d9b4)
    rax_8 = nullptr
else
    int16_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(rax_2)
    uint32_t rdx_1 = zx.d(temp1_1)
    int32_t rax_4 = temp2_1 + rdx_1
    rax_8 = *(data_143e1d9a0 + (sx.q(rax_4 s>> 0x10) << 3)) + sx.q(zx.d(rax_4.w) - rdx_1) * 0x18

uint64_t i = zx.q(*(rax_8 + 8) u>> 0x1d)
uint64_t i_3

if ((i.b & 1) == 0 && *(arg1 + 0x41a) == 0)
    uint64_t i_6 = *(arg1 + 0xa8)
    i_3 = i_6
    
    if (i_6 != 0)
        if (*(i_6 + 0x1f8) == 0)
            goto label_1417d3a8d
        
        goto label_1417d35d5
    
    i = sub_141ee69e0(arg1)
    i_3 = i
    i_6 = i
    
    if (i == 0 || *(i_6 + 0x1f8) == 0)
    label_1417d3a8d:
        
        if (r12.b != 0 && *(arg1 + 0x419) != 0 && *(arg1 + 0x20f) != 0)
            i = sub_141f4def0(arg1)
    else
    label_1417d35d5:
        int64_t* r8_2 = *(arg1 + 0x458)
        i = sx.q(*(arg1 + 0x460))
        int64_t* rdx_3 = r8_2
        void* rcx_5 = &r8_2[i]
        int32_t rdx_4
        
        if (r8_2 == rcx_5)
        label_1417d3602:
            rdx_4 = -1
        else
            i = arg2[2]
            
            while (*rdx_3 != i)
                rdx_3 = &rdx_3[1]
                
                if (rdx_3 == rcx_5)
                    goto label_1417d3602
            
            rdx_4 = ((rdx_3 - r8_2) s>> 3).d
        
        if (r12.b != 0)
            *(arg1 + 0x88) |= 4
            char var_348
            
            if (rdx_4 == 0xffffffff)
                int64_t rdi_1 = sx.q(*(arg1 + 0x460))
                int32_t rax_10 = (rdi_1 + 1).d
                *(arg1 + 0x460) = rax_10
                
                if (rax_10 s> *(arg1 + 0x464))
                    sub_1405a4d70(arg1 + 0x458)
                
                int32_t* r12_1 = nullptr
                *(*(arg1 + 0x458) + (rdi_1 << 3)) = arg2[2]
                int64_t arg_18 = 0
                var_348 = 0
                void* rax_12 = sub_1409fa7d0(arg1, 0, 0, 0, 0, 0)
                void var_88
                int128_t zmm0_1 = *sub_140b214c0(&var_88)
                *(rax_12 + 0x89) &= 0xbf
                *(rax_12 + 0x8a) |= 4
                *(rax_12 + 0xc0) = zmm0_1
                void* rdx_6 = *(arg1 + 0x420)
                
                if (rdx_6 == 0)
                    sub_1417cf9a0(arg1)
                    rdx_6 = *(arg1 + 0x420)
                
                sub_14222caa0(rax_12, rdx_6)
                int64_t r13_1 = sx.q(*(arg1 + 0x430))
                int32_t rax_14 = (r13_1 + 1).d
                *(arg1 + 0x430) = rax_14
                
                if (rax_14 s> *(arg1 + 0x434))
                    sub_1405a4d70(arg1 + 0x428)
                
                *(*(arg1 + 0x428) + (r13_1 << 3)) = rax_12
                int32_t* rax_15 = j_sub_140a82f30(0x130)
                
                if (rax_15 != 0)
                    r12_1 = sub_14220ad50(rax_15)
                
                int64_t rdi_3 = sx.q(*(arg1 + 0x450))
                int32_t rax_17 = (rdi_3 + 1).d
                *(arg1 + 0x450) = rax_17
                
                if (rax_17 s> *(arg1 + 0x454))
                    sub_1405a4d70(arg1 + 0x448)
                
                i_6 = i_3
                *(*(arg1 + 0x448) + (rdi_3 << 3)) = r12_1
                r12 = zx.q(arg_8)
                rdx_4 = *(arg1 + 0x460) - 1
            
            int64_t rax_19 = sx.q(rdx_4) << 3
            uint64_t rbx_2 = *(rax_19 + *(arg1 + 0x428))
            *(rbx_2 + 0x8a) |= 4
            *(rbx_2 + 0x8c) = 3
            sub_14222c330(rbx_2)
            (*(*rbx_2 + 0x278))(rbx_2)
            void var_308
            sub_14222a1e0(&var_308)
            sub_1422304e0(rbx_2, &var_308, 3)
            int32_t var_2c8
            int32_t var_2c8_1 = var_2c8 | 1
            char var_285_1 = 1
            int16_t var_2c0_1 = 0x303
            sub_140780bc0(&var_308, arg2[3])
            int32_t temp3_1
            int32_t temp4_1
            temp3_1:temp4_1 = muls.dp.d(0x55555556, *(arg2[7] + 8))
            int32_t i_8 = (temp3_1 u>> 0x1f) + temp3_1
            int32_t* var_2f8
            int32_t var_2ec
            
            if (i_8 s> var_2ec)
                sub_14083ad30(&var_2f8, i_8)
            
            int64_t i_4 = sx.q(i_8)
            
            if (i_8 s> 0)
                int32_t* rbx_5 = nullptr
                int64_t i_1
                
                do
                    int32_t var_2f0
                    int32_t rax_23 = var_2f0 + 1
                    var_2f0 = rax_23
                    
                    if (rax_23 s> var_2ec)
                        sub_14083a7e0(&var_2f8)
                    
                    *(var_2f8 + rbx_5) = *(rbx_5 + *arg2[7])
                    *(var_2f8 + rbx_5 + 4) = *(*arg2[7] + rbx_5 + 4)
                    *(var_2f8 + rbx_5 + 8) = *(*arg2[7] + rbx_5 + 8)
                    rbx_5 = &rbx_5[3]
                    i_1 = i_4
                    i_4 -= 1
                while (i_1 != 1)
            
            uint64_t rcx_23
            rcx_23.b = 1
            void var_188
            sub_14225a0b0(&var_188, sub_1417c9c70(rcx_23.b))
            sub_1417cec20(&var_188, &var_308)
            char var_140_1 = var_2c0_1.b
            char var_13f_1 = var_2c0_1:1.b
            void var_2b8
            void var_138
            sub_1417ce9d0(&var_138, &var_2b8)
            void var_2a8
            void var_128
            sub_1417ce9d0(&var_128, &var_2a8)
            int32_t var_290
            int32_t var_110_1 = var_290
            int32_t var_10c
            
            if (var_290 != 0 || var_10c != 0)
                uint64_t var_118
                sub_1405a4c70(&var_118, var_290, var_10c)
                int64_t var_298
                memcpy(var_118, var_298, var_290 * 2)
            else
                int32_t var_10c_1 = var_10c
            
            char var_288
            char var_108_1 = var_288
            char var_287
            char var_107_1 = var_287
            char var_286
            char var_106_1 = var_286
            char var_105_1 = var_285_1
            char var_284
            char var_104_1 = var_284
            char var_283
            char var_103_1 = var_283
            char var_282
            char var_102_1 = var_282
            sub_142265480(&var_188)
            int64_t var_100
            int64_t var_f0
            int64_t var_e0
            sub_14222eb60(rbx_2, &var_100, &var_f0, &var_e0)
            void* rdi_6 = *(rax_19 + *(arg1 + 0x448))
            sub_142225820(rdi_6, 0)
            var_348.q = *(i_6 + 0x1f8)
            void var_78
            sub_142219250(rdi_6, rbx_2, arg1 + 0x1c0, arg1, var_348, sub_14220af60(&var_78, arg1))
            sub_142212da0(rdi_6, arg1 + 0x2a8)
            int32_t i_7
            int32_t i_5 = i_7
            int64_t* var_b0
            int64_t* rbx_8 = var_b0
            
            if (i_5 != 0)
                int32_t i_2
                
                do
                    int64_t rcx_40 = *rbx_8
                    
                    if (rcx_40 != 0)
                        sub_140a74f90(rcx_40)
                    
                    rbx_8 = &rbx_8[2]
                    i_2 = i_5
                    i_5 -= 1
                while (i_2 != 1)
                rbx_8 = var_b0
            
            if (rbx_8 != 0)
                sub_140a74f90(rbx_8)
            
            int64_t var_c0
            
            if (var_c0 != 0)
                sub_140a74f90(var_c0)
            
            int64_t var_d0
            
            if (var_d0 != 0)
                sub_140a74f90(var_d0)
            
            int64_t rcx_44 = var_e0
            
            if (rcx_44 != 0)
                sub_140a74f90(rcx_44)
            
            int64_t rcx_45 = var_f0
            
            if (rcx_45 != 0)
                sub_140a74f90(rcx_45)
            
            int64_t rcx_46 = var_100
            
            if (rcx_46 != 0)
                sub_140a74f90(rcx_46)
            
            sub_1417ce6c0(&var_188)
            i = sub_1417ce6c0(&var_308)
            goto label_1417d3a8d
        
        if (rdx_4 != 0xffffffff)
            i = sub_1417d27c0(arg1, rdx_4)

if (*(arg1 + 0x418) != 0 && *(arg1 + 0x3e8) != 0 && data_143db7aa8 != 0)
    int64_t* rbx_9 = arg2[1]
    int64_t rdi_7 = *arg2
    void* var_268 = arg1
    
    if (rbx_9 != 0)
        rbx_9[1].d += 1
    
    int64_t rax_42 = arg2[4]
    uint128_t zmm0 = *(arg2 + 0x40)
    int64_t r12_2 = arg2[2]
    int64_t r13_2 = arg2[3]
    int64_t var_240_1 = rax_42
    int64_t rax_43 = arg2[5]
    int64_t var_238_1 = rax_43
    int64_t rax_44 = arg2[6]
    int64_t var_230_1 = rax_44
    int64_t rax_45 = arg2[7]
    int64_t var_228_1 = rax_45
    int32_t rax_46 = arg2[0xb].d
    i_3.d = rax_46
    int32_t var_208_1 = rax_46
    uint128_t var_278_1 = zmm0
    char var_200_1 = arg_8
    uint128_t var_220_1 = zmm0
    int64_t var_250_1 = r12_2
    zmm0 = zx.o(arg2[0xa])
    int64_t var_248_1 = r13_2
    uint64_t var_320_1 = zmm0.q
    uint64_t var_210_1 = zmm0.q
    
    if (sub_140a80f40() == 0)
        uint32_t rax_51
        
        if (data_143f138f4 == 0 && data_143de5480 != 0)
            rax_51.b = GetCurrentThreadId() == data_143de5470
        
        if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_51.b == 0))
            void var_68
            void** rax_55 = sub_1417d0180(&var_68, nullptr, 0xff)
            void* rcx_60 = *rax_55
            *(rcx_60 + 0x10) = arg1
            *(rcx_60 + 0x18) = rdi_7
            *(rcx_60 + 0x20) = rbx_9
            *(rcx_60 + 0x38) = rax_42
            *(rcx_60 + 0x40) = rax_43
            *(rcx_60 + 0x48) = rax_44
            *(rcx_60 + 0x50) = rax_45
            *(rcx_60 + 0x58) = var_278_1
            *(rcx_60 + 0x28) = r12_2
            *(rcx_60 + 0x68) = var_320_1
            *(rcx_60 + 0x70) = i_3.d
            *(rcx_60 + 0x30) = r13_2
            *(rcx_60 + 0x78) = arg_8
            void* rcx_61 = *rax_55
            int32_t r8_9 = rax_55[2].d
            int64_t* rdx_42 = rax_55[1]
            int64_t* rbx_12 = *(rcx_61 + 0x88)
            int64_t* var_318_1 = rbx_12
            void* rdi_8 = &rbx_12[9]
            
            if (rbx_12 != 0)
                *rdi_8 += 1
                rbx_12 = var_318_1
            
            i = sub_1417d4450(rcx_61, rdx_42, r8_9, 1)
            
            if (rbx_12 != 0)
                i = zx.q(*rdi_8)
                *rdi_8 -= 1
                
                if (i.d == 1)
                    i = sub_140a2f6e0(var_318_1)
        else
            int64_t var_1d0_1 = rax_42
            int64_t var_1c8_1 = rax_43
            int64_t var_1c0_1 = rax_44
            int64_t var_1b8_1 = rax_45
            int32_t var_198_1 = i_3.d
            void* var_1f8 = arg1
            int64_t var_1f0_1 = rdi_7
            int64_t var_1e0_1 = r12_2
            int64_t var_1d8_1 = r13_2
            uint128_t var_1b0_1 = var_278_1
            char var_190_1 = arg_8
            uint64_t var_1a0_1 = var_320_1
            i = sub_1417cef80(&var_1f8)
            
            if (rbx_9 != 0)
                i = zx.q(rbx_9[1].d)
                rbx_9[1].d -= 1
                
                if (i.d == 1)
                    (**rbx_9)(rbx_9)
                    i = zx.q(*(rbx_9 + 0xc))
                    *(rbx_9 + 0xc) -= 1
                    
                    if (i.d == 1)
                        i = (*(*rbx_9 + 8))(rbx_9, 1)
    else
        i = sub_1417cef80(&var_268)
        
        if (rbx_9 != 0)
            i = zx.q(rbx_9[1].d)
            rbx_9[1].d -= 1
            
            if (i.d == 1)
                (**rbx_9)(rbx_9)
                i = zx.q(*(rbx_9 + 0xc))
                *(rbx_9 + 0xc) -= 1
                
                if (i.d == 1)
                    i = (*(*rbx_9 + 8))(rbx_9, 1)

int64_t* rbx_13 = arg2[1]

if (rbx_13 != 0)
    i = zx.q(rbx_13[1].d)
    rbx_13[1].d -= 1
    
    if (i.d == 1)
        i = (**rbx_13)(rbx_13)
        int32_t r15_1 = *(rbx_13 + 0xc)
        *(rbx_13 + 0xc) -= 1
        
        if (r15_1 == 1)
            return (*(*rbx_13 + 8))(rbx_13, zx.q(r15_1))

return i
