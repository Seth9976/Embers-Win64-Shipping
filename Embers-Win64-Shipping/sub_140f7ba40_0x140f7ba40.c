// 函数: sub_140f7ba40
// 地址: 0x140f7ba40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 u> 5)
    return 

int128_t zmm6
int128_t var_38_1 = zmm6
int32_t var_58
int64_t var_50
int32_t var_48
bool arg_10
char arg_11
int32_t arg_20
int32_t arg_24
uint64_t rax
int32_t* rdx_4
void* rsi_2
int32_t rdi_2
float zmm0_1

switch (arg2)
    case 0
        rdi_2 = 0
        rsi_2 = &arg1[0xf2]
        bool cond:3_1 = *(rsi_2 + 8) == 1
        arg_20 = *rsi_2
        int32_t rcx_8
        rcx_8.b = cond:3_1
        int32_t rcx_9 = rcx_8 + *(rsi_2 + 4)
        bool cond:4_1 = rcx_8 + *(rsi_2 + 4) s>= 0
        int32_t rax_12 = 0
        var_50 = 0
        
        if (cond:4_1)
            rax_12 = rcx_9
        
        arg_24 = rax_12
    label_140f7bcdb:
        
        if (arg3 != 1)
            if (&var_48 != &arg1[0xf0] && arg1[0xf1].b != 0)
                arg1[0xf1].b = 0
        else if (arg1[0xf1].b == 0 && &arg_20 != &arg1[0xf0])
            arg1[0xf0] = arg_20.q
            arg1[0xf1].b = arg3.b
        
        sub_140f8b080(rsi_2, arg1[9], &var_50, 0, arg4)
        rdx_4 = &arg_20
        bool cond:17_1 = *(rsi_2 + 8) == 1
        arg_20 = *rsi_2
        int32_t rax_31
        rax_31.b = cond:17_1
        
        if (rax_31 + *(rsi_2 + 4) s>= 0)
            rdi_2 = rax_31 + *(rsi_2 + 4)
        
        arg_24 = rdi_2
        goto label_140f7bd48
    case 1
        if (sub_140f07390(arg1[9]).b == 0)
            void* rdx_9 = arg1[9]
            rsi_2 = &arg1[0xf2]
            rdi_2 = 0
            bool cond:14_1 = *(rsi_2 + 8) == 1
            arg_20 = *rsi_2
            int32_t rax_24 = 0
            int64_t r8_4 = sx.q(*(rdx_9 + 0x20))
            int32_t rcx_17
            rcx_17.b = cond:14_1
            
            if (rcx_17 + *(rsi_2 + 4) s>= 0)
                rax_24 = rcx_17 + *(rsi_2 + 4)
            
            arg_24 = rax_24
            var_50.d = (r8_4 - 1).d
            int32_t rdx_10 = *(*(r8_4 * 0x70 + *(rdx_9 + 0x18) - 0x70) + 8)
            int32_t rax_27 = rdx_10 - 1
            
            if (rdx_10 == 0)
                rax_27 = 0
            
            var_50:4.d = rax_27
            goto label_140f7bcdb
    case 2
        int32_t rdi_1 = 0
        int32_t rcx
        rcx.b = arg1[0xf3].b == 1
        arg_20 = arg1[0xf2].d
        int32_t rax_3 = 0
        
        if (rcx + *(arg1 + 0x794) s>= 0)
            rax_3 = rcx + *(arg1 + 0x794)
        
        void* rcx_2 = arg1[9]
        arg_24 = rax_3
        rax = sub_140f01890(rcx_2, rcx_2 + 0x28, &arg_20, arg1[0xf3].b == 1)
        
        if (rax.d s>= 0 && rax.d s< *(rcx_2 + 0x30))
            var_50.d = arg_20
            var_50:4.d = *(sx.q(rax.d) * 0x58 + *(rcx_2 + 0x28) + 0x48)
            
            if (arg3 != 1)
                if (&var_48 != &arg1[0xf0] && arg1[0xf1].b != 0)
                    arg1[0xf1].b = 0
            else if (arg1[0xf1].b == 0 && &var_48 != &arg1[0xf0])
                arg1[0xf0] = arg_20.q
                arg1[0xf1].b = arg3.b
            
            sub_140f8b080(&arg1[0xf2], arg1[9], &var_50, 0, arg4)
            rdx_4 = &var_50
            var_50.d = arg1[0xf2].d
            int32_t rax_9
            rax_9.b = arg1[0xf3].b == 1
            
            if (rax_9 + *(arg1 + 0x794) s>= 0)
                rdi_1 = rax_9 + *(arg1 + 0x794)
            
            var_50:4.d = rdi_1
        label_140f7bd48:
            int64_t* rcx_23 = *arg1
            (*(*rcx_23 + 0xa8))(rcx_23, rdx_4)
            char rdx_12
            uint32_t r8_6
            rdx_12, r8_6 = sub_140f90a90(arg1, arg1.d)
            sub_140f8fc70(arg1, rdx_12, r8_6)
    case 3
        int32_t rdi_3 = 0
        int32_t rcx_10
        rcx_10.b = arg1[0xf3].b == 1
        arg_20 = arg1[0xf2].d
        int32_t rax_14 = 0
        
        if (rcx_10 + *(arg1 + 0x794) s>= 0)
            rax_14 = rcx_10 + *(arg1 + 0x794)
        
        void* rcx_12 = arg1[9]
        arg_24 = rax_14
        rax = sub_140f01890(rcx_12, rcx_12 + 0x28, &arg_20, arg1[0xf3].b == 1)
        
        if (rax.d s>= 0 && rax.d s< *(rcx_12 + 0x30))
            int32_t rdx_7 = *(sx.q(rax.d) * 0x58 + *(rcx_12 + 0x28) + 0x4c) - 1
            var_50.d = arg_20
            
            if (rdx_7 s<= 0)
                rdx_7 = 0
            
            var_50:4.d = rdx_7
            
            if (arg3 != 1)
                if (&var_48 != &arg1[0xf0] && arg1[0xf1].b != 0)
                    arg1[0xf1].b = 0
            else if (arg1[0xf1].b == 0 && &var_48 != &arg1[0xf0])
                arg1[0xf0] = arg_20.q
                arg1[0xf1].b = arg3.b
            
            int32_t var_68
            sub_140f8af60(&arg1[0xf2], arg1[9], &var_50, true, arg4, var_68)
            rdx_4 = &var_58
            bool cond:21_1 = arg1[0xf3].b == 1
            var_58 = arg1[0xf2].d
            int32_t rax_21
            rax_21.b = cond:21_1
            
            if (rax_21 + *(arg1 + 0x794) s>= 0)
                rdi_3 = rax_21 + *(arg1 + 0x794)
            
            int32_t var_54_1 = rdi_3
            goto label_140f7bd48
    case 4
        int32_t rdi_4 = 0
        int32_t rcx_26
        rcx_26.b = arg1[0xf3].b == 1
        var_58 = arg1[0xf2].d
        int32_t rax_35 = 0
        
        if (rcx_26 + *(arg1 + 0x794) s>= 0)
            rax_35 = rcx_26 + *(arg1 + 0x794)
        
        void* rcx_28 = arg1[9]
        int32_t var_54_2 = rax_35
        rax = sub_140f01890(rcx_28, rcx_28 + 0x28, &var_58, arg1[0xf3].b == 1)
        
        if (rax.d s>= 0)
            int64_t rdx_14 = sx.q(*(rcx_28 + 0x30))
            
            if (rax.d s< rdx_14.d)
                void* i = *(rcx_28 + 0x28)
                int32_t r8_8 = 0
                void* r12_2 = sx.q(rax.d) * 0x58 + i
                var_50 = var_58.q
                arg_20.q = 0
                arg_11 = 0
                
                for (void* rdx_16 = rdx_14 * 0x58 + i; i != rdx_16; i += 0x58)
                    arg4 = *(i + 0x34)
                    
                    if (not(arg4.d f< 0f))
                        arg4.d = arg4.d f+ *(i + 0x3c)
                        
                        if (arg4.d f> arg1[0x10e].d)
                            break
                        
                        r8_8 += 1
                
                if (r8_8 s<= 1)
                    r8_8 = 1
                
                int64_t zmm0 =
                    sub_140f8f360(arg1, &var_50, neg.d(r8_8), *(arg1[9] + 0x8c), &arg_20, &arg_10)
                
                if (arg3 != 1)
                    if (&var_48 != &arg1[0xf0] && arg1[0xf1].b != 0)
                        arg1[0xf1].b = 0
                else if (arg1[0xf1].b == 0 && &var_50 != &arg1[0xf0])
                    arg1[0xf0] = var_50
                    arg1[0xf1].b = arg3.b
                
                int64_t* r8_10 = &arg_20
                void* rdx_18 = arg1[9]
                
                if (arg_11 == 0)
                    sub_140f8b080(&arg1[0xf2], rdx_18, r8_10, 0, zmm0)
                else
                    sub_140f8af60(&arg1[0xf2], rdx_18, r8_10, arg_10, zmm0)
                
                bool cond:22_1 = arg1[0xf3].b == 1
                var_48 = arg1[0xf2].d
                int32_t rax_42 = 0
                int32_t rcx_32
                rcx_32.b = cond:22_1
                
                if (rcx_32 + *(arg1 + 0x794) s>= 0)
                    rax_42 = rcx_32 + *(arg1 + 0x794)
                
                int64_t* rcx_34 = *arg1
                int32_t var_44_1 = rax_42
                (*(*rcx_34 + 0xa8))(rcx_34, &var_48)
                char rdx_20
                uint32_t r8_11
                rdx_20, r8_11, zmm6 = sub_140f90a90(arg1, arg1.d)
                sub_140f8fc70(arg1, rdx_20, r8_11)
                bool cond:23_1 = arg1[0xf3].b == 1
                void* rcx_37 = arg1[9]
                var_48 = arg1[0xf2].d
                int32_t rax_45
                rax_45.b = cond:23_1
                
                if (rax_45 + *(arg1 + 0x794) s>= 0)
                    rdi_4 = rax_45 + *(arg1 + 0x794)
                
                int32_t var_44_2 = rdi_4
                rax = sub_140f01890(rcx_37, rcx_28 + 0x28, &var_48, arg1[0xf3].b == 1)
                
                if (rax.d s>= 0 && rax.d s< *(rcx_28 + 0x30))
                    zmm0_1 = _mm_max_ss(
                        (*(sx.q(rax.d) * 0x58 + *(rcx_28 + 0x28) + 0x34) f- *(r12_2 + 0x34)) f/
                            *(arg1[9] + 0x8c) f+ *(arg1 + 0x76c), 
                        zmm6.d)
                label_140f7c16b:
                    *(arg1 + 0x76c) = zmm0_1
                    
                    if (*(arg1 + 0x77c) != 0)
                        *(arg1 + 0x77c) = 0
    case 5
        int32_t rdi_5 = 0
        int32_t rcx_39
        rcx_39.b = arg1[0xf3].b == 1
        var_50.d = arg1[0xf2].d
        int32_t rax_50 = 0
        
        if (rcx_39 + *(arg1 + 0x794) s>= 0)
            rax_50 = rcx_39 + *(arg1 + 0x794)
        
        void* rcx_41 = arg1[9]
        var_50:4.d = rax_50
        rax = sub_140f01890(rcx_41, rcx_41 + 0x28, &var_50, arg1[0xf3].b == 1)
        
        if (rax.d s>= 0)
            int64_t rdx_23 = sx.q(*(rcx_41 + 0x30))
            
            if (rax.d s< rdx_23.d)
                void* i_1 = *(rcx_41 + 0x28)
                int32_t r8_14 = 0
                void* r12_4 = sx.q(rax.d) * 0x58 + i_1
                var_58.q = var_50
                arg_20.q = 0
                arg_11 = 0
                
                for (void* rdx_25 = rdx_23 * 0x58 + i_1; i_1 != rdx_25; i_1 += 0x58)
                    arg4 = *(i_1 + 0x34)
                    
                    if (not(arg4.d f< 0f))
                        arg4.d = arg4.d f+ *(i_1 + 0x3c)
                        
                        if (arg4.d f> arg1[0x10e].d)
                            break
                        
                        r8_14 += 1
                
                if (r8_14 s<= 1)
                    r8_14 = 1
                
                int64_t zmm0_2 =
                    sub_140f8f360(arg1, &var_58, r8_14, *(arg1[9] + 0x8c), &arg_20, &arg_10)
                
                if (arg3 != 1)
                    if (&var_48 != &arg1[0xf0] && arg1[0xf1].b != 0)
                        arg1[0xf1].b = 0
                else if (arg1[0xf1].b == 0 && &var_58 != &arg1[0xf0])
                    arg1[0xf0] = var_58.q
                    arg1[0xf1].b = arg3.b
                
                int64_t* r8_15 = &arg_20
                void* rdx_27 = arg1[9]
                
                if (arg_11 == 0)
                    sub_140f8b080(&arg1[0xf2], rdx_27, r8_15, 0, zmm0_2)
                else
                    sub_140f8af60(&arg1[0xf2], rdx_27, r8_15, arg_10, zmm0_2)
                
                bool cond:25_1 = arg1[0xf3].b == 1
                var_48 = arg1[0xf2].d
                int32_t rax_57 = 0
                int32_t rcx_45
                rcx_45.b = cond:25_1
                
                if (rcx_45 + *(arg1 + 0x794) s>= 0)
                    rax_57 = rcx_45 + *(arg1 + 0x794)
                
                int64_t* rcx_47 = *arg1
                int32_t var_44_3 = rax_57
                (*(*rcx_47 + 0xa8))(rcx_47, &var_48)
                char rdx_29
                uint32_t r8_16
                rdx_29, r8_16 = sub_140f90a90(arg1, arg1.d)
                sub_140f8fc70(arg1, rdx_29, r8_16)
                bool cond:26_1 = arg1[0xf3].b == 1
                void* rcx_50 = arg1[9]
                var_48 = arg1[0xf2].d
                int32_t rax_60
                rax_60.b = cond:26_1
                
                if (rax_60 + *(arg1 + 0x794) s>= 0)
                    rdi_5 = rax_60 + *(arg1 + 0x794)
                
                int32_t var_44_4 = rdi_5
                rax = sub_140f01890(rcx_50, rcx_41 + 0x28, &var_48, arg1[0xf3].b == 1)
                
                if (rax.d s>= 0 && rax.d s< *(rcx_41 + 0x30))
                    void* rcx_51 = arg1[9]
                    zmm6.d = (*(sx.q(rax.d) * 0x58 + *(rcx_41 + 0x28) + 0x34)).d f- *(r12_4 + 0x34)
                    zmm6.d = zmm6.d f/ *(rcx_51 + 0x8c)
                    zmm6.d = zmm6.d f+ *(arg1 + 0x76c)
                    zmm0_1 =
                        _mm_min_ss(*(sub_140f030e0(rcx_51, &var_48) + 4) f- arg1[0x10e].d, zmm6.d)
                    goto label_140f7c16b
