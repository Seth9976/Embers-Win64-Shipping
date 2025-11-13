// 函数: sub_141d5ac90
// 地址: 0x141d5ac90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r12 = data_143f37908
uint32_t arg_18 = r12
sub_140b34200("FMediaTextureResource_Render", r12)
int64_t* rsi = *(arg2 + 0x40)
int64_t* r15 = nullptr
int128_t var_d0 = data_142d8c9b0
int128_t var_e0 = zx.o(0)

if (rsi == 0)
    goto label_141d5ad26

int32_t rax_1 = 0
bool z_1

if (0 == rsi[1].d)
    rsi[1].d = 0
    z_1 = true
else
    rax_1 = rsi[1].d
    z_1 = false

if (z_1)
label_141d5ad23:
    rsi = nullptr
label_141d5ad26:
    
    if (*arg2 != 0 && (*(arg1 + 0x59) == 0 || (*(arg1 + 0x5c)).d f!= *(arg2 + 4)
            || (*(arg1 + 0x60)).d f!= *(arg2 + 8) || (*(arg1 + 0x64)).d f!= *(arg2 + 0xc)
            || not((*(arg1 + 0x68)).d f== *(arg2 + 0x10))))
        sub_141d53d80(arg1, &arg2[4], arg2[0x48], arg4, arg3)
        sub_1405d16e0(arg1 + 0xc0, nullptr)
else
    while (true)
        bool z_2
        
        if (rax_1 == rsi[1].d)
            rsi[1].d = rax_1 + 1
            z_2 = true
        else
            rsi[1].d
            z_2 = false
        
        if (z_2)
            break
        
        rax_1 = 0
        bool z_3
        
        if (0 == rsi[1].d)
            rsi[1].d = 0
            z_3 = true
        else
            rax_1 = rsi[1].d
            z_3 = false
        
        if (z_3)
            goto label_141d5ad23
    
    if (rsi == 0)
        goto label_141d5ad26
    
    r15 = *(arg2 + 0x38)
    
    if (r15 == 0)
        goto label_141d5ad26
    
    int128_t var_138 = zx.o(0)
    uint64_t rbx
    rbx.b = 0
    int128_t var_178 = zx.o(0)
    
    if ((*(*r15 + 8))(r15, &var_138) != 0)
        char i
        
        do
            int64_t* rcx_4 = var_138.q
            
            if (rcx_4 == 0)
                break
            
            int64_t var_128
            (*(*rcx_4 + 0x40))(rcx_4, &var_128)
            int64_t* rcx_5 = var_138.q
            void var_c0
            int64_t* rax_7 = (*(*rcx_5 + 0x10))(rcx_5, &var_c0)
            int128_t zmm0 = *(arg2 + 0x34)
            int64_t rax_8 = var_128
            
            if (zmm0.d f< 0f)
            label_141d5ae13:
                
                if (*(arg2 + 0x50) s>= *rax_7 + rax_8)
                    break
            else
                if (*(arg2 + 0x50) s< rax_8)
                    break
                
                if (not(zmm0.d f> 0f))
                    goto label_141d5ae13
            
            char rax_10 = (**r15)(r15, &var_178)
            int64_t r8_2 = *r15
            rbx = zx.q(rax_10)
            i = (*(r8_2 + 8))(r15, &var_138, r8_2)
        while (i != 0)
    
    char rcx_10 = *(arg1 + 0xa8)
    
    if (rcx_10 == 0)
        r12.b = 1
    else
        r12 = zx.d(arg2[0x49])
    
    if (rbx.b != 0 && (*(arg1 + 0x58) == 0 || rcx_10 != 0))
        int64_t* rcx_11 = var_178.q
        void var_b8
        int32_t* rax_12 = (*(*rcx_11 + 0x20))(rcx_11, &var_b8)
        int32_t rdx_8 = rax_12[1]
        
        if (*rax_12 s<= rdx_8)
            rdx_8 = *rax_12
        
        int32_t* var_188
        int128_t zmm2
        int128_t zmm3
        
        if (rdx_8 s> 0)
            int64_t* rcx_13 = var_178.q
            int64_t rax_14 = (*(*rcx_13 + 0x38))(rcx_13, rdx_8)
            int64_t* rcx_14 = var_178.q
            int64_t rax_15 = *rcx_14
            
            if (rax_14 == 0)
                int32_t* rax_24
                
                if ((*(rax_15 + 0x58))(rcx_14).b != arg2[0x48])
                    rax_24.b = 1
                else
                    int64_t* rbx_3 = var_178.q
                    void var_a8
                    int64_t rax_26 = (*(*rbx_3 + 0x20))(rbx_3, &var_a8)
                    int64_t r8_6 = *rbx_3
                    char arg_8
                    arg_8.q = rax_26
                    void var_a0
                    int32_t* rax_27 = (*(r8_6 + 8))(rbx_3, &var_a0, r8_6)
                    rax_24 = arg_8.q
                    
                    if (*rax_27 != *rax_24 || rax_27[1] != rax_24[1])
                        rax_24.b = 1
                    else
                        int64_t* rcx_24 = var_178.q
                        rax_24 = (*(*rcx_24 + 0x18))(rcx_24, rax_27)
                        
                        if (((rax_24 - 2).d & 0xfffffff6) != 0 || rax_24.d == 3)
                            rax_24.b = 1
                        else
                            rax_24.b = 0
                
                char r9_2 = arg2[0x48]
                int64_t* rdx_15 = &var_178
                
                if (rax_24.b == 0)
                    var_188.b = r12.b
                    zmm2, zmm3 = sub_141d55d70(arg1, rdx_15, &arg2[4], r9_2, arg3, arg4, var_188.b, 
                        &arg2[0x14])
                else
                    var_188.b = r12.b
                    zmm2, zmm3 = sub_141d541b0(arg1, rdx_15, &arg2[4], r9_2, arg3, arg4, var_188.b)
            else
                int32_t rax_16 = (*(rax_15 + 0x18))(rcx_14)
                int32_t r12_1
                
                if (rax_16 != 3)
                    r12_1 = 2
                
                if (rax_16 == 3 || rax_16 == 0xc)
                    r12_1 = 0x12
                
                void var_b0
                zmm2, zmm3 = sub_141d56270(arg1, (*(*rcx_14 + 0x20))(rcx_14, &var_b0), r12_1, 
                    arg2[0x48], arg3, arg4, &arg2[4], r12.b)
                int64_t* rcx_17 = var_178.q
                int64_t* rax_23 = (*(*rcx_17 + 0x38))(rcx_17)
                void* rcx_18 = *(arg1 + 8)
                void* var_118 = rcx_18
                
                if (rcx_18 != 0)
                    *(rcx_18 + 8) += 1
                
                int64_t r8_5 = *rax_23
                (*r8_5)(rax_23, &var_118, r8_5)
                *(arg1 + 0x59) = 0
        else
            zmm2, zmm3 = sub_141d53d80(arg1, &data_14399f5f0, arg2[0x48], arg4, arg3)
        
        int64_t* rcx_27 = var_178.q
        void var_80
        int128_t* rax_31 = (*(*rcx_27 + 0x60))(rcx_27, &var_80)
        int64_t* rcx_28 = var_178.q
        var_d0 = *rax_31
        void var_70
        var_e0 = *(*(*rcx_28 + 0x68))(rcx_28, &var_70)
        void*** rax_34 = j_sub_140a82f30(0x28)
        
        if (rax_34 == 0)
            rax_34 = nullptr
        else
            *rax_34 = &data_142d3ff08
            rax_34[1].d = 0
            *rax_34 = &data_143228498
            *(rax_34 + 0xc) = 0
            rax_34[2].w = 0x100
            rax_34[3] = var_178.q
            void* rcx_30 = var_178:8.q
            rax_34[4] = rcx_30
            
            if (rcx_30 != 0)
                *(rcx_30 + 8) += 1
        
        void*** arg_20 = rax_34
        
        if (rax_34 != 0)
            rax_34[1].d += 1
        
        if (arg1 + 0xc0 != &arg_20)
            int64_t* rbx_4 = *(arg1 + 0xc0)
            *(arg1 + 0xc0) = rax_34
            arg_20 = nullptr
            
            if (rbx_4 != 0)
                rbx_4[1].d -= 1
                
                if (rbx_4[1].d == 1)
                    char rax_36
                    
                    if (rbx_4[2].b == 0 && data_143f0f1d0 == 0)
                        rax_36 = sub_1405949a0()
                    
                    if (rbx_4[2].b != 0 || (data_143f0f1d0 == 0 && rax_36 != 0))
                        (**rbx_4)(rbx_4, 1)
                    else
                        bool z_4
                        
                        if (0 == *(rbx_4 + 0xc))
                            *(rbx_4 + 0xc) = 1
                            z_4 = true
                        else
                            *(rbx_4 + 0xc)
                            z_4 = false
                        
                        if (z_4)
                            int32_t rax_38 = sub_140a20af0()
                            uint64_t rdx_18 = zx.q(rax_38)
                            void* const rax_39
                            
                            if (rax_38 != 0)
                                rax_39 = *(&data_143cf0bf8 + (rdx_18 u>> 0xe << 3))
                                    + (zx.q(rdx_18.d) & 0x3fff) * 0x18
                            else
                                rax_39 = nullptr
                            
                            *(rax_39 + 8) = rbx_4
                            sub_1405a42f0(&data_143f02390, rdx_18.d)
        
        sub_1405d1550(&arg_20)
        
        if (*(arg1 + 0xa9) u> 1 && *(arg1 + 0x59) == 0)
            char arg_10 = 0
            char* var_e8_1 = &arg_10
            void*** (* var_f0)() = j_sub_140597fc0
            int64_t* rax_45 = sub_140a756e0(&var_f0, &data_143958018) + 0x10
            int64_t* var_168 = rax_45
            int64_t rcx_38 = *rax_45
            int64_t rcx_39 = rax_45[2]
            char var_150_1 = 0
            int64_t rcx_40 = rax_45[3]
            rax_45[3] = &var_168
            int64_t* rax_46 = var_168
            rax_46[4].d += 1
            int64_t rcx_41 = *(arg1 + 0x88)
            int64_t* rbx_7 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
            void* rax_47 = &rbx_7[1]
            
            if (rax_47 u> data_143f02bd0)
                sub_140b0e3d0(&data_143f02bc8, 0x10)
                rbx_7 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
                rax_47 = &rbx_7[1]
            
            data_143f02bc8 = rax_47
            *rbx_7 = rcx_41
            void*** rcx_44 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
            void* rax_48 = &rcx_44[5]
            
            if (rax_48 u> data_143f02bd0)
                sub_140b0e3d0(&data_143f02bc8, 0x30)
                rcx_44 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
                rax_48 = &rcx_44[5]
            
            data_143f02bac += 1
            int128_t zmm0_2 = data_142d3f5b0
            data_143f02bc8 = rax_48
            void**** rax_49 = data_143f02ba0
            int128_t var_90 = zmm0_2
            *rax_49 = rcx_44
            data_143f02ba0 = &rcx_44[1]
            rcx_44[1] = 0
            *rcx_44 = &data_142d549c8
            rcx_44[2].d = 1
            rcx_44[3] = rbx_7
            rcx_44[4].d = 2
            var_188.b = 1
            sub_14199f740(&data_143f02b98, *(arg1 + 0x88), &var_90, arg1 + 0xc8, zmm2, zmm3)
            int64_t rcx_47 = *(arg1 + 0x88)
            int64_t* rbx_12 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
            void* rax_51 = &rbx_12[1]
            
            if (rax_51 u> data_143f02bd0)
                sub_140b0e3d0(&data_143f02bc8, 0x10)
                rbx_12 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
                rax_51 = &rbx_12[1]
            
            data_143f02bc8 = rax_51
            *rbx_12 = rcx_47
            void*** rcx_50 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
            void* rax_52 = &rcx_50[5]
            
            if (rax_52 u> data_143f02bd0)
                sub_140b0e3d0(&data_143f02bc8, 0x30)
                rcx_50 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
                rax_52 = &rcx_50[5]
            
            data_143f02bac += 1
            data_143f02bc8 = rax_52
            *data_143f02ba0 = rcx_50
            data_143f02ba0 = &rcx_50[1]
            rcx_50[1] = 0
            *rcx_50 = &data_142d549c8
            rcx_50[2].d = 1
            rcx_50[3] = rbx_12
            rcx_50[4].d = 0
            
            if (var_150_1 == 0)
                char var_150_2 = 1
                int64_t* rax_55 = var_168
                rax_55[4].d -= 1
                int64_t* rcx_53 = var_168
                
                if (rcx_39 != rcx_53[2])
                    sub_140b16b40(rcx_53, rcx_39)
                    rcx_53 = var_168
                
                *rcx_53 = rcx_38
                var_168[3] = rcx_40
    else if (*(arg1 + 0x88) == *(arg1 + 8))
        sub_1405d16e0(arg1 + 0xc0, nullptr)
    
    int64_t* rbx_15 = var_178:8.q
    
    if (rbx_15 != 0)
        rbx_15[1].d -= 1
        
        if (rbx_15[1].d == 1)
            (**rbx_15)(rbx_15)
            int32_t rax_61 = *(rbx_15 + 0xc)
            *(rbx_15 + 0xc) -= 1
            
            if (rax_61 == 1)
                (*(*rbx_15 + 8))(rbx_15, 1)
    
    int64_t* rbx_16 = var_138:8.q
    
    if (rbx_16 != 0)
        rbx_16[1].d -= 1
        
        if (rbx_16[1].d == 1)
            (**rbx_16)(rbx_16)
            int32_t rax_65 = *(rbx_16 + 0xc)
            *(rbx_16 + 0xc) -= 1
            
            if (rax_65 == 1)
                (*(*rbx_16 + 8))(rbx_16, 1)
    
    r12 = arg_18

int64_t rbx_17 = -0x8000000000000000

if (r15 != 0)
    int128_t var_100 = zx.o(0)
    
    if ((*(*r15 + 8))(r15, &var_100) != 0)
        int64_t* rcx_61 = var_100.q
        void var_98
        rbx_17 = *(*(*rcx_61 + 0x40))(rcx_61, &var_98)
    
    int64_t* r15_1 = var_100:8.q
    
    if (r15_1 != 0)
        r15_1[1].d -= 1
        
        if (r15_1[1].d == 1)
            (**r15_1)(r15_1)
            int32_t rax_73 = *(r15_1 + 0xc)
            *(r15_1 + 0xc) -= 1
            
            if (rax_73 == 1)
                (*(*r15_1 + 8))(r15_1, 1)

void* rax_75 = *(arg1 + 0x90)
*(rax_75 + 0x180)
*(rax_75 + 0x180) = rbx_17

if (*(arg1 + 0x58) == 0)
    sub_141d5ca50(arg1)
    
    if ((*(arg2 + 0x20) | *(arg2 + 0x1c) | *(arg2 + 0x18) | *(arg2 + 0x14)) != 0)
        void* rcx_65 = *(*(arg1 + 0x90) + 0x90)
        void* var_140 = rcx_65
        
        if (rcx_65 != 0)
            *(rcx_65 + 8) += 1
        
        sub_14200d210(sub_142003380(), &arg2[0x14], &var_140, arg1 + 0x28, &var_d0, &var_e0)
        sub_1405d1550(&var_140)
    
    int32_t r10_1 = *(arg2 + 0x24)
    int32_t r9_5 = *(arg2 + 0x28)
    int32_t r8_10 = *(arg2 + 0x2c)
    int32_t rdx_24 = *(arg2 + 0x30)
    
    if ((r10_1 | r9_5 | r8_10 | rdx_24) != 0 && ((*(arg2 + 0x18) ^ r9_5) | (*(arg2 + 0x1c) ^ r8_10)
            | (*(arg2 + 0x20) ^ rdx_24) | (*(arg2 + 0x14) ^ r10_1)) != 0)
        sub_142012610(sub_142003380(), &arg2[0x24])

void* rdi_1 = *(arg1 + 0x90)
EnterCriticalSection(rdi_1 + 0x158)
*(rdi_1 + 0xf8) = *(arg2 + 0x14)

if (rdi_1 != -0x158)
    LeaveCriticalSection(rdi_1 + 0x158)

if (rsi != 0)
    rsi[1].d -= 1
    
    if (rsi[1].d == 1)
        (**rsi)(rsi)
        int32_t r13_1 = *(rsi + 0xc)
        *(rsi + 0xc) -= 1
        
        if (r13_1 == 1)
            (*(*rsi + 8))(rsi, zx.q(r13_1))

return sub_140b38680("FMediaTextureResource_Render", r12)
