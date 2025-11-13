// 函数: sub_1425c53c0
// 地址: 0x1425c53c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct DOS_Header* const rdi
struct DOS_Header* const var_10 = rdi
void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
struct DOS_Header* rbx = nullptr
int32_t r13 = 0
struct DOS_Header* r14 = arg1
int64_t* r15 = arg3
int32_t var_188 = 0
struct DOS_Header* var_178 = nullptr
int64_t var_158 = 0
int32_t var_198 = 0
int32_t var_14c = 0
int128_t zmm6
int128_t var_58 = zmm6
int128_t zmm7
int128_t var_68 = zmm7
int32_t var_148

if ((*(*arg3 + 0x18))(arg3, &var_148) == 0)
label_1425c5ff7:
    rdi.b = 0
else
    zmm7 = var_178.o
    zmm6 = var_188.o
    
    while (true)
        int64_t* rax_5 = (**r15)(r15)
        int16_t* r12_1 = nullptr
        uint64_t var_168 = 0
        int32_t rsi_1 = rax_5[1].d
        rdi = *rax_5
        
        if (rsi_1 != 0)
            sub_1405a4c70(&var_168, rsi_1, 0)
            r12_1 = var_168
            memcpy(r12_1, rdi, rsi_1 * 2)
        else
            int32_t var_15c_1 = 0
        
        int64_t rax_6 = sx.q(var_148)
        
        if (rax_6.d u> 7)
            goto label_1425c5fd5
        
        int32_t var_1a8
        int64_t* var_1a0
        int32_t var_e8
        void* var_e0
        struct DOS_Header* const var_d8
        int64_t var_d0
        int64_t var_c0
        int32_t rcx_57
        int16_t* rsi_4
        int64_t zmm1
        
        switch (rax_6)
            case 0
                void* rax_7
                
                if (rbx != 0)
                    rax_7.w = rbx->e_cparhdr
                    rax_7:2.w = rbx->e_minalloc
                    rax_7:4.w = rbx->e_maxalloc
                    rax_7:6.w = rbx->e_ss
                
                if (rbx == 0 || ((*(rax_7 + 0x10) u>> 0x2f).b & 1) == 0)
                    rbx = nullptr
                
                if (rbx != 0)
                    var_e8.q = rbx->__offset(0x78).q
                    var_d8.o = rbx->__offset(0x80).o
                    int32_t var_c8_1 = rbx->__offset(0x90).d
                    var_e0 = r14
                    sub_140d0c8b0(&var_e8)
                
                rcx_57 = var_198
                
                if (rcx_57 == 0)
                    goto label_1425c551d
                
            label_1425c5ae2:
                int64_t r12_5 = var_158
                rdi = zx.q(rcx_57 - 1)
                int32_t rcx_58 = rcx_57 - rdi.d
                int64_t rax_59 = sx.q(rdi.d) << 5
                zmm7 = *(rax_59 + r12_5 + 0x10)
                zmm6 = *(rax_59 + r12_5)
                
                if (rcx_58 != 1)
                    memmove((sx.q(rdi.d) << 5) + r12_5, (sx.q((&rdi->e_magic[1]).d) << 5) + r12_5, 
                        (rcx_58 - 1) << 5)
                
                var_198 = rdi.d
                goto label_1425c5b2a
            case 1
                var_e8 = 0
                var_e0 = nullptr
                var_d0 = 0
                int16_t* rdx_3 = &data_142d40450
                
                if (rsi_1 != 0)
                    rdx_3 = r12_1
                
                int64_t var_130
                zmm6 = sub_140b58260(&var_130, rdx_3, 0)
                struct DOS_Header* rax_10 = sub_140bd3220(arg2, var_130)
                struct DOS_Header* const r15_1 = rax_10
                int16_t* rcx_63
                
                if (rax_10 == 0)
                    if (arg4->e_magic.d == 0)
                        goto label_1425c551d
                    
                    r15 = arg3
                    (*(*r15 + 0x28))(r15)
                label_1425c5b43:
                    rsi_4 = var_168
                label_1425c5b48:
                    
                    if (rsi_4 == 0)
                        goto label_1425c5fec
                    
                    rcx_63 = rsi_4
                    goto label_1425c5fdd
                
                struct DOS_Header* var_138
                char rax_13
                
                if (arg4->e_sp.q != 0)
                    char rdx_5[0x8]
                    rdx_5[0] = arg4->e_res1[4]
                    rdx_5[1] = arg4->e_res1[5]
                    rdx_5[2] = arg4->e_res1[6]
                    rdx_5[3] = arg4->e_res1[7]
                    rdx_5[4] = arg4->e_oemid.b
                    rdx_5[5] = arg4->e_oemid:1.b
                    rdx_5[6] = arg4->e_oeminfo.b
                    rdx_5[7] = arg4->e_oeminfo:1.b
                    char* rcx_12 = &arg4->e_res2[8]
                    var_138 = rbx
                    struct DOS_Header* var_128 = rax_10
                    
                    if (rdx_5 != 0)
                        rcx_12 = rdx_5
                    
                    int64_t rax_11
                    rax_11.b = (rcx_12 - 0x30)->e_res2[8]
                    rax_11:1.b = (rcx_12 - 0x30)->e_res2[9]
                    rax_11:2.b = (rcx_12 - 0x30)->e_res2[0xa]
                    rax_11:3.b = (rcx_12 - 0x30)->e_res2[0xb]
                    rax_11:4.b = (rcx_12 - 0x30)->e_res2[0xc]
                    rax_11:5.b = (rcx_12 - 0x30)->e_res2[0xd]
                    rax_11:6.b = (rcx_12 - 0x30)->e_res2[0xe]
                    rax_11:7.b = (rcx_12 - 0x30)->e_res2[0xf]
                    rax_13 = arg4->e_sp.q((*(rax_11 + 8))(rcx_12, rdx_5), &var_128, &var_138)
                
                if (arg4->e_sp.q != 0 && rax_13 == 0)
                    r15 = arg3
                    (*(*r15 + 0x28))(r15)
                label_1425c5fd5:
                    
                    if (r12_1 == 0)
                        goto label_1425c5fec
                    
                    rcx_63 = r12_1
                label_1425c5fdd:
                    sub_140a74f90(rcx_63)
                label_1425c5fec:
                    
                    if ((*(*r15 + 0x18))(r15, &var_148) == 0)
                        goto label_1425c5ff7
                    
                    continue
                
                void* rax_15
                rax_15.w = r15_1->e_cparhdr
                rax_15:2.w = r15_1->e_minalloc
                rax_15:4.w = r15_1->e_maxalloc
                rax_15:6.w = r15_1->e_ss
                
                if (((*(rax_15 + 0x10) u>> 0x2f).b & 1) == 0)
                    var_e0 = r14
                else
                    int64_t* rsi_2 = r15_1->__offset(0x78).q
                    int96_t var_100_1 = r15_1->__offset(0x80).o.12
                    void* r12_3 =
                        &r14->e_magic[sx.q(r15_1->e_lfanew * r13) + sx.q(r15_1->__offset(0x4c).d)]
                    int32_t rax_20 = r15_1->__offset(0x90).d
                    var_e0 = r12_3
                    var_138.d = rax_20
                    int32_t r14_1 = *(r12_3 + 8)
                    int32_t i = r14_1 - *(r12_3 + 0x34)
                    
                    if (r14_1 != *(r12_3 + 0x34))
                        int32_t rdi_1 = 0
                        
                        if ((rsi_2[8] & 0x1040000000) == 0)
                            int64_t r15_2 = *r12_3
                            int32_t rbx_1 = 1
                            
                            do
                                if (rdi_1 s>= 0 && rdi_1 s< *(r12_3 + 0x28))
                                    void* rax_21 = *(r12_3 + 0x20)
                                    void* rcx_17 = r12_3 + 0x10
                                    
                                    if (rax_21 != 0)
                                        rcx_17 = rax_21
                                    
                                    int32_t rax_22 = rdi_1
                                    
                                    if (rdi_1 s< 0)
                                        rax_22 = rdi_1 + 0x1f
                                    
                                    if ((*(rcx_17 + (sx.q(rax_22 s>> 5) << 2)) & rbx_1) != 0)
                                        if ((not.b((rsi_2[8] u>> 0x24).b) & 1) != 0)
                                            (*(*rsi_2 + 0xe8))(rsi_2, sx.q(*(rsi_2 + 0x4c)) + r15_2)
                                        
                                        i -= 1
                                
                                r15_2 += zx.q(var_100_1:8.d)
                                rbx_1 = rol.d(rbx_1, 1)
                                rdi_1 += 1
                            while (i != 0)
                            
                            r15_1 = rax_10
                            rax_20 = var_138.d
                        
                        bool cond:8_1 = *(r12_3 + 0xc) == 0
                        *(r12_3 + 8) = 0
                        
                        if (not(cond:8_1))
                            sub_140ce4fc0(r12_3, 0, rax_20)
                        
                        *(r12_3 + 0x30) = 0xffffffff
                        *(r12_3 + 0x34) = 0
                        bool cond:10_1 = *(r12_3 + 0x2c) == 0
                        *(r12_3 + 0x28) = 0
                        
                        if (not(cond:10_1))
                            *(r12_3 + 0x2c) = 0
                            sub_140d0bc80(r12_3 + 0x10, 0)
                        
                        int64_t rcx_21 = sx.q(*(r12_3 + 0x48))
                        void* rdi_2 = r12_3 + 0x38
                        void* rax_28 = *(rdi_2 + 8)
                        
                        if (rcx_21 s> 0)
                            if (rax_28 != 0)
                                rdi_2 = rax_28
                            
                            __builtin_memset(rdi_2, 0xffffffff, rcx_21 << 2)
                
                void* rax_29
                rax_29.w = r15_1->e_cparhdr
                rax_29:2.w = r15_1->e_minalloc
                rax_29:4.w = r15_1->e_maxalloc
                rax_29:6.w = r15_1->e_ss
                int64_t rdi_3 = 0
                
                if (((zx.q(*(rax_29 + 0x10)) u>> 0x15).b & 1) != 0)
                    r15_1 = r15_1->__offset(0x78).q
                
                void* rax_30
                
                if (r15_1 != 0)
                    rax_30.w = r15_1->e_cparhdr
                    rax_30:2.w = r15_1->e_minalloc
                    rax_30:4.w = r15_1->e_maxalloc
                    rax_30:6.w = r15_1->e_ss
                
                struct DOS_Header* const rdx_9
                
                if (r15_1 == 0 || ((zx.q(*(rax_30 + 0x10)) u>> 0x14).b & 1) == 0)
                    rdx_9 = nullptr
                else
                    rdx_9 = r15_1
                
                void* rax_31
                
                if (r15_1 != 0)
                    rax_31.w = r15_1->e_cparhdr
                    rax_31:2.w = r15_1->e_minalloc
                    rax_31:4.w = r15_1->e_maxalloc
                    rax_31:6.w = r15_1->e_ss
                
                if (r15_1 == 0 || ((zx.q(*(rax_31 + 0x10)) u>> 0x1a).b & 1) == 0)
                    r15_1 = nullptr
                
                if (rdx_9 != 0)
                    rdi_3 = rdx_9->__offset(0x78).q
                else if (r15_1 != 0)
                    rdi_3 = r15_1->__offset(0x78).q
                
                var_d0 = rdi_3
                rdi = sx.q(var_198)
                int32_t rcx_28 = (&rdi->e_magic[1]).d
                var_198 = rcx_28
                
                if (rcx_28 s> var_14c)
                    sub_1405c4e40(&var_158)
                    var_198 = rcx_28
                
                int64_t rcx_30 = var_158
                r15 = arg3
                int64_t rax_34 = rdi << 5
                *(rax_34 + rcx_30) = zmm6
                zmm6 = var_e8.o
                *(rax_34 + rcx_30 + 0x10) = zmm7
                zmm7 = rax_10.o
            label_1425c5b2a:
                var_188.o = zmm6
                r14 = arg1
                r13 = var_188
                var_178.o = zmm7
                rbx = var_178
                goto label_1425c5b43
            case 2, 4
                goto label_1425c5fd5
            case 3
            label_1425c551d:
                rdi.b = 0
            case 5
                if (rsi_1 s<= 1)
                    struct DOS_Header* rdx_12
                    
                    if (rbx == 0)
                    label_1425c5893:
                        rdx_12 = rbx
                    else
                        rdi.w = rbx->e_cparhdr
                        rdi:2.w = rbx->e_minalloc
                        rdi:4.w = rbx->e_maxalloc
                        rdi:6.w = rbx->e_ss
                        zmm6 = sub_140d11d60()
                        void* rax_37
                        rax_37.w = rbx->e_cparhdr
                        rax_37:2.w = rbx->e_minalloc
                        rax_37:4.w = rbx->e_maxalloc
                        rax_37:6.w = rbx->e_ss
                        
                        if (rdi == &data_143e1c310)
                            struct DOS_Header* rax_38 = nullptr
                            bool cond:6_1 = ((*(rax_37 + 0x10) u>> 0x2f).b & 1) != 0
                            var_e0 = r14
                            
                            if (cond:6_1)
                                rax_38 = rbx
                            
                            int64_t rsi_3 = rax_38->__offset(0x78).q
                            rdi = zx.q(rax_38->__offset(0x90).d)
                            var_d8.o = rax_38->__offset(0x80).o
                            var_e8.q = rsi_3
                            int32_t var_c8_2 = rdi.d
                            int32_t rax_39 = sub_140cf15e0(&var_e8)
                            int32_t rcx_35
                            rcx_35.w = r14->e_cparhdr
                            rcx_35:2.w = r14->e_minalloc
                            int64_t r9
                            
                            if (rcx_35 != r14->e_res2[0xc].d)
                                r9 = sx.q(rdi.d * rax_39) + r14->e_magic.q
                            else
                                r9 = 0
                            
                            (*(*r15 + 0x20))(r15, rsi_3, rbx, r9, r13, var_1a0, var_198, arg4, 
                                var_188, arg1, var_178, arg2)
                            goto label_1425c5b43
                        
                        if (((zx.q(*(rax_37 + 0x10)) u>> 0x15).b & 1) == 0)
                            goto label_1425c5893
                        
                        rdx_12 = rbx->__offset(0x78).q
                    
                    if (rdx_12 == 0)
                        goto label_1425c551d
                    
                    (*(*r15 + 0x20))(r15, rdx_12, rbx, r14, r13, var_1a0, var_198, arg4, var_188, 
                        arg1, var_178, arg2)
                    r13 += 1
                    var_188 = r13
                    zmm6 = var_188.o
                    goto label_1425c5b43
                
                int64_t rdi_4
                
                if (rbx != 0)
                    rdi_4.w = rbx->e_cparhdr
                    rdi_4:2.w = rbx->e_minalloc
                    rdi_4:4.w = rbx->e_maxalloc
                    rdi_4:6.w = rbx->e_ss
                    sub_140d11890()
                
                if (rbx == 0 || rdi_4 != &data_143e1bbb0)
                    int16_t* rdx_17 = &data_142d40450
                    
                    if (rsi_1 != 0)
                        rdx_17 = r12_1
                    
                    int64_t var_120
                    zmm6 = sub_140b58260(&var_120, rdx_17, 0)
                    void* rax_51 = sub_140bd3220(arg2, var_120)
                    
                    if (rax_51 == 0)
                        if (arg4->e_magic.d == 0)
                            goto label_1425c551d
                        
                        goto label_1425c5b43
                    
                    char rax_52
                    
                    if (arg4->e_sp.q != 0)
                        rax_52 = sub_14207a590(&arg4->e_sp, rax_51, rbx)
                    
                    if (arg4->e_sp.q != 0 && rax_52 == 0)
                        goto label_1425c5fd5
                    
                    (*(*r15 + 0x20))(r15, rax_51, rbx, r14, r13, var_1a0, var_198, arg4, var_188, 
                        arg1, var_178, arg2)
                    goto label_1425c5b43
                
                void* rax_42
                rax_42.w = rbx->e_cparhdr
                rax_42:2.w = rbx->e_minalloc
                rax_42:4.w = rbx->e_maxalloc
                rax_42:6.w = rbx->e_ss
                int64_t* rdx_13 = &var_c0
                struct DOS_Header* r15_3 = nullptr
                
                if (((*(rax_42 + 0x10) u>> 0x2e).b & 1) != 0)
                    r15_3 = rbx
                
                char rcx_42 = (r15_3->__offset(0xa0).d).b
                int128_t zmm0_1 = r15_3->__offset(0x88).o
                void* r12_4 = r15_3->__offset(0x80).q
                int64_t zmm1_1 = r15_3->__offset(0x98).q
                var_e8.q = r15_3->__offset(0x78).q
                var_e0 = r12_4
                var_d0.o = zmm0_1
                var_c0 = zmm1_1
                int32_t rax_44
                
                if ((not.b(rcx_42) & 1) != 0)
                    rax_44 = sub_140cf1c20(r14, rdx_13)
                else
                    rax_44 = sub_140cf1af0(r14, rdx_13)
                
                sub_140cf59a0(&var_e8, rax_44)
                int32_t rax_46
                rax_46.w = r14->e_cparhdr
                rax_46:2.w = r14->e_minalloc
                
                if ((not.b(rcx_42) & 1) != 0)
                    if (rax_46 != r14->e_res2[0xc].d)
                        rdi = sx.q(rax_44 * var_c0:4.d) + r14->e_magic.q
                    else
                        rdi = nullptr
                else if (rax_46 != r14->e_oemid.d)
                    void* rax_47
                    rax_47.b = r14->e_magic[0]
                    rax_47:1.b = r14->e_magic[1]
                    rax_47:2.w = r14->e_cblp
                    rax_47:4.w = r14->e_cp
                    rax_47:6.w = r14->e_crlc
                    
                    if ((rax_47.b & 1) != 0)
                        rax_47 = &r14->e_magic[rax_47 s>> 1]
                    
                    rdi = sx.q(rax_44 * var_c0:4.d) + rax_47
                else
                    rdi = nullptr
                
                int16_t* rdx_15 = &data_142d40450
                rsi_4 = var_168
                
                if (rsi_1 != 0)
                    rdx_15 = rsi_4
                
                var_1a0 = data_143ddb418
                var_1a8.q = 0
                zmm6 = sub_140941070(r15_3->__offset(0x78).q, rdx_15, rdi, 0, var_1a8, var_1a0)
                r15 = arg3
                (*(*r15 + 0x20))(r15, r12_4, rbx, rdi, r13)
                goto label_1425c5b48
            case 6
                void* rax_55
                
                if (rbx != 0)
                    rax_55.w = rbx->e_cparhdr
                    rax_55:2.w = rbx->e_minalloc
                    rax_55:4.w = rbx->e_maxalloc
                    rax_55:6.w = rbx->e_ss
                
                if (rbx == 0 || ((*(rax_55 + 0x10) u>> 0x2e).b & 1) == 0)
                    rbx = nullptr
                
                if (rbx != 0)
                    int128_t zmm0 = rbx->__offset(0x88).o
                    var_e8.q = rbx->__offset(0x78).q
                    zmm1 = rbx->__offset(0x98).q
                    int32_t var_b8_2 = rbx->__offset(0xa0).d
                    var_e0 = rbx->__offset(0x80).q
                    var_d0.o = zmm0
                    var_d8 = r14
                    var_c0 = zmm1
                    sub_140d0c840(&var_e8)
                
                rcx_57 = var_198
                
                if (rcx_57 != 0)
                    goto label_1425c5ae2
                
                rdi.b = 1
            case 7
                var_e8 = 0
                __builtin_memset(&var_e0, 0, 0x18)
                void* var_b0
                void* var_a0
                int128_t var_98
                void* rax_66
                
                if (rsi_1 s<= 1)
                    if (rbx == 0)
                        goto label_1425c5fd5
                    
                    void* rax_61
                    rax_61.w = rbx->e_cparhdr
                    rax_61:2.w = rbx->e_minalloc
                    rax_61:4.w = rbx->e_maxalloc
                    rax_61:6.w = rbx->e_ss
                    struct DOS_Header* rdi_10 = nullptr
                    int64_t rcx_64 = *(rax_61 + 0x10)
                    
                    if (((rcx_64 u>> 0x2f).b & 1) != 0)
                        rdi_10 = rbx
                    
                    if (rdi_10 == 0)
                        rdi = nullptr
                        
                        if (((rcx_64 u>> 0x15).b & 1) != 0)
                            rdi = rbx
                        
                        if (rdi == 0)
                            goto label_1425c551d
                        
                        void* rax_69 = rdi->__offset(0x78).q
                        int32_t rcx_68 = rdi->__offset(0x80).d
                        void* rdx_25 = &r14->e_magic[sx.q(rdi->__offset(0x4c).d)]
                        var_b0 = rax_69
                        var_a0:4.d = rcx_68
                        var_a0.d = *(rax_69 + 0x3c)
                        int32_t rax_71 = sub_140cd78f0(&var_b0, 1)
                        rdi = rdi->__offset(0x78).q
                        var_d8 = rdi
                        
                        if (*(rdx_25 + 8) != 0)
                            void* rcx_71 = *rdx_25
                            
                            if ((not.b(var_a0:4.b) & 1) == 0 && (rcx_71.b & 1) != 0)
                                rcx_71 = (rcx_71 s>> 1) + rdx_25
                            
                            rax_66 = sx.q(var_a0.d * rax_71) + rcx_71
                        else
                            rax_66 = nullptr
                        
                        goto label_1425c5ec1
                    
                    int32_t rsi_5 = rdi_10->__offset(0x90).d
                    var_a0.o = rdi_10->__offset(0x80).o
                    var_b0 = rdi_10->__offset(0x78).q
                    struct DOS_Header* var_a8_1 = r14
                    var_98:8.d = rsi_5
                    int32_t rax_65 = sub_140cf15e0(&var_b0)
                    int32_t rcx_66
                    rcx_66.w = r14->e_cparhdr
                    rcx_66:2.w = r14->e_minalloc
                    
                    if (rcx_66 != r14->e_res2[0xc].d)
                        rdi = rdi_10->__offset(0x78).q
                        var_d8 = rdi
                        rax_66 = sx.q(rax_65 * rsi_5) + r14->e_magic.q
                    else
                        rdi = rdi_10->__offset(0x78).q
                        rax_66 = nullptr
                        var_d8 = rdi
                    
                    goto label_1425c5ec1
                
                int64_t rdi_11
                
                if (rbx != 0)
                    rdi_11.w = rbx->e_cparhdr
                    rdi_11:2.w = rbx->e_minalloc
                    rdi_11:4.w = rbx->e_maxalloc
                    rdi_11:6.w = rbx->e_ss
                    sub_140d11890()
                
                int64_t var_88
                
                if (rbx == 0 || rdi_11 != &data_143e1bbb0)
                    int16_t* rdx_31 = &data_142d40450
                    
                    if (rsi_1 != 0)
                        rdx_31 = r12_1
                    
                    int64_t var_118
                    zmm6 = sub_140b58260(&var_118, rdx_31, 0)
                    void* rax_89 = sub_140bd3220(arg2, var_118)
                    var_d8 = rax_89
                    rdi = rax_89
                    
                    if (rax_89 == 0)
                        rdi = arg4
                        
                        if (rdi->e_magic.d == rax_89.d)
                            goto label_1425c551d
                        
                        goto label_1425c5fc9
                    
                    struct DOS_Header* const r8_16 = nullptr
                    
                    if (((*(*(rax_89 + 8) + 0x10) u>> 0x2e).b & 1) != 0)
                        r8_16 = rdi
                    
                    if (r8_16 == 0)
                        rax_66 = &r14->e_magic[sx.q(rdi->__offset(0x4c).d)]
                    label_1425c5ec1:
                        var_e0 = rax_66
                    else
                        char rcx_86 = (r8_16->__offset(0xa0).d).b
                        int64_t r9_6 = sx.q(r8_16->__offset(0x4c).d)
                        zmm1 = r8_16->__offset(0x98).q
                        int32_t rax_92 = r8_16->e_lfanew * r13
                        var_98 = r8_16->__offset(0x88).o
                        var_88 = zmm1
                        void* r9_7 = &r14->e_magic[sx.q(rax_92) + r9_6]
                        var_b0 = r8_16->__offset(0x78).q
                        int64_t var_a8_4 = r8_16->__offset(0x80).q
                        int32_t r8_17 = *(r9_7 + 8)
                        var_e0 = r9_7
                        int32_t r8_18
                        
                        if ((not.b(rcx_86) & 1) != 0)
                            r8_18 = r8_17 - *(r9_7 + 0x34)
                        else
                            r8_18 = r8_17 - *(r9_7 + 0x24)
                        
                        if (r8_18 != 0)
                            sub_140cfaf40(&var_b0, 0, r8_18)
                            void* r8_19 = &var_98:4
                            
                            if ((not.b(rcx_86) & 1) != 0)
                                sub_141d485f0(r9_7, 0, r8_19)
                            else
                                sub_140cfb920(r9_7, 0, r8_19)
                else
                    void* rax_75
                    rax_75.w = rbx->e_cparhdr
                    rax_75:2.w = rbx->e_minalloc
                    rax_75:4.w = rbx->e_maxalloc
                    rax_75:6.w = rbx->e_ss
                    int64_t* rdx_27 = &var_88
                    struct DOS_Header* r15_4 = nullptr
                    var_a0 = r14
                    
                    if (((*(rax_75 + 0x10) u>> 0x2e).b & 1) != 0)
                        r15_4 = rbx
                    
                    char rcx_75 = (r15_4->__offset(0xa0).d).b
                    int128_t zmm0_2 = r15_4->__offset(0x88).o
                    int64_t zmm1_2 = r15_4->__offset(0x98).q
                    var_b0 = r15_4->__offset(0x78).q
                    int64_t* rcx_76 = r14
                    int64_t var_a8_3 = r15_4->__offset(0x80).q
                    var_98 = zmm0_2
                    var_88 = zmm1_2
                    int32_t rax_78
                    
                    if ((not.b(rcx_75) & 1) != 0)
                        rax_78 = sub_140cf1c20(rcx_76, rdx_27)
                    else
                        rax_78 = sub_140cf1af0(rcx_76, rdx_27)
                    
                    sub_140cf59a0(&var_b0, rax_78)
                    void* r8_13
                    
                    if ((not.b(rcx_75) & 1) != 0)
                        if (*(var_a0 + 8) != *(var_a0 + 0x34))
                            r8_13 = sx.q(var_88:4.d * rax_78) + *var_a0
                        else
                            r8_13 = nullptr
                    else if (*(var_a0 + 8) != *(var_a0 + 0x24))
                        void* rcx_78 = *var_a0
                        
                        if ((rcx_78.b & 1) != 0)
                            rcx_78 = (rcx_78 s>> 1) + var_a0
                        
                        r8_13 = sx.q(var_88:4.d * rax_78) + rcx_78
                    else
                        r8_13 = nullptr
                    
                    rdi = r15_4->__offset(0x80).q
                    int16_t* const rdx_30 = &data_142d40450
                    int64_t* rcx_81 = r15_4->__offset(0x78).q
                    var_e0 = sx.q(var_98.d) + r8_13
                    
                    if (rsi_1 != 0)
                        rdx_30 = r12_1
                    
                    var_1a0 = data_143ddb418
                    var_d8 = rdi
                    var_1a8.q = 0
                    zmm6 = sub_140941070(rcx_81, rdx_30, r8_13, 0, var_1a8, var_1a0)
                    r15 = arg3
                
                if (rdi == 0)
                    rdi = arg4
                label_1425c5fc9:
                    (*(*r15 + 0x30))(r15)
                    
                    if (rdi->e_magic.d == 0)
                        goto label_1425c551d
                    
                    goto label_1425c5fd5
                
                char rax_99
                
                if (arg4->e_sp.q != 0)
                    rax_99 = sub_14207a590(&arg4->e_sp, rdi, rbx)
                
                if (arg4->e_sp.q == 0 || rax_99 != 0)
                    void* rax_101
                    rax_101.w = rdi->e_cparhdr
                    rax_101:2.w = rdi->e_minalloc
                    rax_101:4.w = rdi->e_maxalloc
                    rax_101:6.w = rdi->e_ss
                    int64_t r8_21 = 0
                    
                    if (((zx.q(*(rax_101 + 0x10)) u>> 0x15).b & 1) != 0)
                        rdi = rdi->__offset(0x78).q
                    
                    void* rax_102
                    
                    if (rdi != 0)
                        rax_102.w = rdi->e_cparhdr
                        rax_102:2.w = rdi->e_minalloc
                        rax_102:4.w = rdi->e_maxalloc
                        rax_102:6.w = rdi->e_ss
                    
                    struct DOS_Header* const rdx_34
                    
                    if (rdi == 0 || ((zx.q(*(rax_102 + 0x10)) u>> 0x14).b & 1) == 0)
                        rdx_34 = nullptr
                    else
                        rdx_34 = rdi
                    
                    void* rax_103
                    
                    if (rdi != 0)
                        rax_103.w = rdi->e_cparhdr
                        rax_103:2.w = rdi->e_minalloc
                        rax_103:4.w = rdi->e_maxalloc
                        rax_103:6.w = rdi->e_ss
                    
                    if (rdi == 0 || ((zx.q(*(rax_103 + 0x10)) u>> 0x1a).b & 1) == 0)
                        rdi = nullptr
                    
                    if (rdx_34 != 0)
                        r8_21 = rdx_34->__offset(0x78).q
                    else if (rdi != 0)
                        r8_21 = rdi->__offset(0x78).q
                    
                    rdi = sx.q(var_198)
                    var_d0 = r8_21
                    int32_t rcx_98 = (&rdi->e_magic[1]).d
                    var_198 = rcx_98
                    
                    if (rcx_98 s> var_14c)
                        sub_1405c4e40(&var_158)
                        var_198 = rcx_98
                    
                    int64_t rcx_100 = var_158
                    int64_t rax_106 = rdi << 5
                    *(rax_106 + rcx_100) = zmm6
                    zmm6 = var_e8.o
                    *(rax_106 + rcx_100 + 0x10) = zmm7
                    zmm7 = var_d8.o
                    var_188.o = zmm6
                    r14 = arg1
                    r13 = var_188
                    var_178.o = zmm7
                    rbx = var_178
                else
                    (*(*r15 + 0x30))(r15)
                
                goto label_1425c5fd5
        
        if (r12_1 == 0)
            break
        
        sub_140a74f90(r12_1)
        break

int64_t rax_110 = var_158

if (rax_110 != 0)
    sub_140a74f90(rax_110)

__security_check_cookie(rax_1 ^ &var_1c8)
return zx.q(rdi.b)
