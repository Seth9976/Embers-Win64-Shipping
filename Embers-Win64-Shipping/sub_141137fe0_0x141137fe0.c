// 函数: sub_141137fe0
// 地址: 0x141137fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
int64_t rax_1 = __security_cookie ^ &var_188
int32_t* var_f8 = arg4
char rax_5 = sub_1410f9640(arg3)
uint64_t rsi

if (data_1439b5c30 == 0 || 0f f>= *arg4 || *(*(arg1 + 8) + 0x18b0) s<= 0)
    rsi.b = 0
else
    rsi.b = 1

char var_137 = rsi.b
char rax_6 = sub_14110e660()
int32_t rbx_1 = data_1439b5c50
void** var_d8
int64_t rcx_3 = *sub_1410f8060(&var_d8)
int32_t temp0 = divs.dp.d(sx.q(rcx_3.d), rbx_1)
int32_t rcx_5 = data_1439b55c0
int32_t temp0_1 = divs.dp.d(sx.q((rcx_3 u>> 0x20).d), rbx_1)
int32_t temp14
int32_t temp15
temp14:temp15 = sx.q(*(arg3 + 0x15a4) - *(arg3 + 0x159c))
int32_t rax_18 = (temp15 - temp14) s>> 1
int32_t temp16
int32_t temp17
temp16:temp17 = sx.q(arg3[0x2b4].d - arg3[0x2b3].d)
int32_t rdx_4 = 1
int32_t rax_23 = (temp17 - temp16) s>> 1

if (rax_23 s>= 1)
    rdx_4 = rax_23

int32_t temp0_2 = divs.dp.d(sx.q(rcx_5 - 1 + rdx_4), rcx_5)
int32_t rax_28 = 1

if (rax_18 s>= 1)
    rax_28 = rax_18

void** r12_1 = arg3[0x2b5] + 0xd48
var_d8 = r12_1
int64_t* rbx_2 = *r12_1
int32_t var_cc = divs.dp.d(sx.q(rax_28 - 1 + data_1439b55c4), data_1439b55c4)
void*** rax_34

if (rbx_2 == 0)
    rax_34 = j_sub_140a82f30(0xc0)
    
    if (rax_34 != 0)
        rax_34[1].d = 0xffffffff
        *(rax_34 + 0xc) = 4
        *rax_34 = &data_142f21ab0
        __builtin_memset(&rax_34[3], 0, 0x1c)
        rax_34[7].b = 0
        __builtin_memset(&rax_34[8], 0, 0x1c)
        __builtin_memset(&rax_34[0xc], 0, 0x1c)
        __builtin_memset(&rax_34[0x10], 0, 0x1c)
        __builtin_memset(&rax_34[0x14], 0, 0x1c)
    
    *r12_1 = rax_34
    goto label_1411381f7

if (rbx_2[2].d != temp0 || *(rbx_2 + 0x14) != temp0_1 || rbx_2[7].b != rax_5
        || rbx_2[1].d == 0xffffffff || data_143ed3440 != 0)
    (*(*rbx_2 + 0x30))(rbx_2)
    rax_34 = *r12_1
label_1411381f7:
    rax_34[7].b = rax_5
    void* rax_35 = *r12_1
    *(rax_35 + 0x10) = temp0
    *(rax_35 + 0x14) = temp0_1
    int64_t* rcx_8 = *r12_1
    (*(*rcx_8 + 0x28))(rcx_8)
    rbx_2 = *r12_1

void* rdi_1 = rbx_2[3]

if (*(rdi_1 + 0x11) == 0)
    if (data_143f0f1c7 != 0)
        int64_t* rcx_9 = data_143f0f180
        (*(*rcx_9 + 0x618))(rcx_9, rdi_1)
    
    *(rdi_1 + 0x11) = 1

if (rbx_2[7].b != 0)
    void* rdi_2 = rbx_2[0xc]
    
    if (*(rdi_2 + 0x11) == 0)
        if (data_143f0f1c7 != 0)
            int64_t* rcx_10 = data_143f0f180
            (*(*rcx_10 + 0x618))(rcx_10, rdi_2)
        
        *(rdi_2 + 0x11) = 1
    
    void* rdi_3 = rbx_2[0x10]
    
    if (*(rdi_3 + 0x11) == 0)
        if (data_143f0f1c7 != 0)
            int64_t* rcx_11 = data_143f0f180
            (*(*rcx_11 + 0x618))(rcx_11, rdi_3)
        
        *(rdi_3 + 0x11) = 1
    
    void* rbx_3 = rbx_2[0x14]
    
    if (*(rbx_3 + 0x11) == 0)
        if (data_143f0f1c7 != 0)
            int64_t* rcx_12 = data_143f0f180
            (*(*rcx_12 + 0x618))(rcx_12, rbx_3)
        
        *(rbx_3 + 0x11) = 1

sub_1410e0370(arg2)
int32_t* var_160
void* var_128
void* var_120
int32_t* rbx_4
void** rsi_5

if (rsi.b == 0)
label_1411385be:
    
    if (rax_6 == 0)
        rbx_4 = var_f8
        rsi_5 = arg6
    else
        int64_t* rdi_14 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* r13_3 = *(arg3[1] + 0xd40)
        int32_t var_130
        var_130.q = r13_3
        int64_t rcx_42 = *(*r12_1 + 0x20)
        void* rax_81 = &rdi_14[1]
        
        if (rax_81 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x10)
            rdi_14 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_81 = &rdi_14[1]
        
        *(arg2 + 0x30) = rax_81
        *rdi_14 = rcx_42
        void*** rcx_46 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_82 = &rcx_46[6]
        
        if (rax_82 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x38)
            rcx_46 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_82 = &rcx_46[6]
        
        *(arg2 + 0x30) = rax_82
        void**** rax_83 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_83 = rcx_46
        *(arg2 + 8) = &rcx_46[1]
        rcx_46[1] = 0
        *rcx_46 = &data_142da7798
        rcx_46[2].d = 1
        rcx_46[3] = rdi_14
        rcx_46[4].d = 2
        *(rcx_46 + 0x24) = 3
        rcx_46[5] = 0
        int64_t* rcx_50 = arg3[0xa2a]
        void* rdi_17
        
        if (rsi.b == 0)
            void** rdx_35 = &var_128
            
            if (rax_5 == 0)
                sub_1419a2ec0(rcx_50, rdx_35, &data_143e5afb0, 0)
                rdi_17 = var_128
                void* rsi_11 = nullptr
                
                if (rdi_17 != 0)
                    int64_t rdx_41 = sx.q(*(rdi_17 + 0x10c))
                    int64_t* r13_8 = *(var_120 + 0x10)
                    int64_t rax_110 = rdx_41
                    int64_t rsi_12 = r13_8[3]
                    
                    if (*(rsi_12 + (rdx_41 << 3)) == 0)
                        sub_1419ccf30(r13_8, rdx_41.d)
                        rax_110 = rdx_41
                        rsi_12 = r13_8[3]
                    
                    rsi_11 = *(rsi_12 + (rax_110 << 3))
                    r13_3 = var_130.q
                
                *(arg2 + 0x1b0) = rsi_11
                sub_14198aa60(rsi_11)
                void*** rcx_98 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_111 = &rcx_98[3]
                
                if (rax_111 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x20)
                    rcx_98 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_111 = &rcx_98[3]
                
                rbx_4 = var_f8
                *(arg2 + 0x30) = rax_111
                void**** rax_112 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_112 = rcx_98
                *(arg2 + 8) = &rcx_98[1]
                rcx_98[2] = rsi_11
                rsi_5 = arg6
                rcx_98[1] = 0
                *rcx_98 = &data_142dd5b40
                var_160 = &arg3[0x2f6]
                sub_1411404f0(rdi_17, arg2, arg3, *rsi_5 + 8, rbx_4)
            else
                sub_1419a2ec0(rcx_50, rdx_35, &data_143e5ae50, 0)
                rdi_17 = var_128
                void* rsi_9 = nullptr
                
                if (rdi_17 != 0)
                    int64_t rdx_36 = sx.q(*(rdi_17 + 0x10c))
                    int64_t* r13_7 = *(var_120 + 0x10)
                    int64_t rax_104 = rdx_36
                    int64_t rsi_10 = r13_7[3]
                    
                    if (*(rsi_10 + (rdx_36 << 3)) == 0)
                        sub_1419ccf30(r13_7, rdx_36.d)
                        rax_104 = rdx_36
                        rsi_10 = r13_7[3]
                    
                    rsi_9 = *(rsi_10 + (rax_104 << 3))
                    r13_3 = var_130.q
                
                *(arg2 + 0x1b0) = rsi_9
                sub_14198aa60(rsi_9)
                void*** rcx_86 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_105 = &rcx_86[3]
                
                if (rax_105 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x20)
                    rcx_86 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_105 = &rcx_86[3]
                
                rbx_4 = var_f8
                *(arg2 + 0x30) = rax_105
                void**** rax_106 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_106 = rcx_86
                *(arg2 + 8) = &rcx_86[1]
                rcx_86[2] = rsi_9
                rsi_5 = arg6
                rcx_86[1] = 0
                *rcx_86 = &data_142dd5b40
                var_160 = &arg3[0x2f6]
                sub_14113f0c0(rdi_17, arg2, arg3, *rsi_5 + 8, rbx_4)
        else
            int64_t* rdx_26 = &var_128
            
            if (rax_5 == 0)
                sub_1419a2ec0(rcx_50, rdx_26, &data_143e5acf0, 0)
                rdi_17 = var_128
                void* rsi_7 = nullptr
                
                if (rdi_17 != 0)
                    int64_t rdx_33 = sx.q(*(rdi_17 + 0x10c))
                    int64_t* r13_6 = *(var_120 + 0x10)
                    int64_t rax_98 = rdx_33
                    int64_t rsi_8 = r13_6[3]
                    
                    if (*(rsi_8 + (rdx_33 << 3)) == 0)
                        sub_1419ccf30(r13_6, rdx_33.d)
                        rax_98 = rdx_33
                        rsi_8 = r13_6[3]
                    
                    rsi_7 = *(rsi_8 + (rax_98 << 3))
                    r13_3 = var_130.q
                
                *(arg2 + 0x1b0) = rsi_7
                sub_14198aa60(rsi_7)
                void*** rcx_77 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_99 = &rcx_77[3]
                
                if (rax_99 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x20)
                    rcx_77 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_99 = &rcx_77[3]
                
                rbx_4 = var_f8
                *(arg2 + 0x30) = rax_99
                void**** rax_100 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_100 = rcx_77
                *(arg2 + 8) = &rcx_77[1]
                rcx_77[2] = rsi_7
                rsi_5 = arg6
                rcx_77[1] = 0
                *rcx_77 = &data_142dd5b40
                sub_14113f820(rdi_17, arg2, arg3, *rsi_5 + 8, rbx_4, &arg3[0x2f6])
            else
                sub_1419a2ec0(rcx_50, rdx_26, &data_143e5ab90, 0)
                rdi_17 = var_128
                void* rsi_3 = nullptr
                
                if (rdi_17 != 0)
                    int64_t rdx_27 = sx.q(*(rdi_17 + 0x10c))
                    int64_t* r13_4 = *(var_120 + 0x10)
                    int64_t rax_86 = rdx_27
                    int64_t rsi_4 = r13_4[3]
                    
                    if (*(rsi_4 + (rdx_27 << 3)) == 0)
                        sub_1419ccf30(r13_4, rdx_27.d)
                        rax_86 = rdx_27
                        rsi_4 = r13_4[3]
                    
                    rsi_3 = *(rsi_4 + (rax_86 << 3))
                    r13_3 = var_130.q
                
                *(arg2 + 0x1b0) = rsi_3
                sub_14198aa60(rsi_3)
                void*** rcx_55 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_87 = &rcx_55[3]
                
                if (rax_87 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x20)
                    rcx_55 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_87 = &rcx_55[3]
                
                rbx_4 = var_f8
                *(arg2 + 0x30) = rax_87
                void**** rax_88 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_88 = rcx_55
                *(arg2 + 8) = &rcx_55[1]
                rcx_55[2] = rsi_3
                rsi_5 = arg6
                rcx_55[1] = 0
                *rcx_55 = &data_142dd5b40
                sub_14113e3d0(rdi_17, arg2, arg3, *rsi_5 + 8, rbx_4, &arg3[0x2f6])
        
        sub_1419cd260(arg2, rdi_17, *(r13_3 + 0xb0), 0)
        sub_14077cfd0(rdi_17 + 0x1f8, arg2, *(arg2 + 0x1b0))
        sub_14077cfd0(rdi_17 + 0x200, arg2, *(arg2 + 0x1b0))
else
    int64_t* rdi_6 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    int32_t var_130_1 = 0x3f800000
    int64_t rcx_14 = *(*r12_1 + 0x20)
    void* rax_42 = &rdi_6[1]
    
    if (rax_42 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x10)
        rdi_6 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_42 = &rdi_6[1]
    
    *(arg2 + 0x30) = rax_42
    *rdi_6 = rcx_14
    void*** rcx_18 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_43 = &rcx_18[6]
    
    if (rax_43 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x38)
        rcx_18 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_43 = &rcx_18[6]
    
    *(arg2 + 0x30) = rax_43
    void* rsi_1 = nullptr
    *(arg2 + 0x14) += 1
    int64_t var_108 = 0
    int32_t var_fc_1 = 0
    **(arg2 + 8) = rcx_18
    *(arg2 + 8) = &rcx_18[1]
    rcx_18[1] = 0
    *rcx_18 = &data_142da7798
    rcx_18[2].d = 1
    rcx_18[3] = rdi_6
    rcx_18[4] = 2
    rcx_18[5] = 0
    var_108.d = var_130_1
    void*** rcx_24 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    int64_t rdi_9 = *(*r12_1 + 0x20)
    void* rax_48 = &rcx_24[5]
    
    if (rax_48 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_24 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_48 = &rcx_24[5]
    
    *(arg2 + 0x30) = rax_48
    *(arg2 + 0x14) += 1
    **(arg2 + 8) = rcx_24
    *(arg2 + 8) = &rcx_24[1]
    rcx_24[1] = 0
    *rcx_24 = &data_142f115d8
    rcx_24[2] = rdi_9
    *(rcx_24 + 0x18) = var_108.o
    int64_t* rcx_28 = arg3[0xa2a]
    int32_t temp30_1
    int32_t temp31_1
    temp30_1:temp31_1 = sx.q(arg3[0x2b4].d - arg3[0x2b3].d)
    int32_t temp38_1
    int32_t temp39_1
    temp38_1:temp39_1 = sx.q(divs.dp.d(sx.q((temp31_1 - temp30_1) s>> 1), data_1439b5c50) + 7)
    int32_t rax_61 = (temp39_1 + (temp38_1 & 7)) s>> 3
    int32_t r13_1 = rax_61
    int64_t var_e0_1
    var_e0_1.d = rax_61
    int32_t temp40_1
    int32_t temp41_1
    temp40_1:temp41_1 = sx.q(*(arg3 + 0x15a4) - *(arg3 + 0x159c))
    int32_t temp48_1
    int32_t temp49_1
    temp48_1:temp49_1 = sx.q(divs.dp.d(sx.q((temp41_1 - temp40_1) s>> 1), data_1439b5c50) + 7)
    int64_t* rdx_20 = &var_128
    int32_t rax_72 = (temp49_1 + (temp48_1 & 7)) s>> 3
    char var_158
    
    if (rax_6 != 0)
        sub_1419a2ec0(rcx_28, rdx_20, &data_143e5b110, 0)
        void* rsi_2 = var_128
        void* rdi_10 = nullptr
        
        if (rsi_2 != 0)
            int64_t rdx_21 = sx.q(*(rsi_2 + 0x10c))
            int64_t* r13_2 = *(var_120 + 0x10)
            int64_t rax_74 = rdx_21
            int64_t rdi_11 = r13_2[3]
            
            if (*(rdi_11 + (rdx_21 << 3)) == 0)
                sub_1419ccf30(r13_2, rdx_21.d)
                rax_74 = rdx_21
                rdi_11 = r13_2[3]
            
            rdi_10 = *(rdi_11 + (rax_74 << 3))
            r13_1 = var_e0_1.d
        
        *(arg2 + 0x1b0) = rdi_10
        sub_14198aa60(rdi_10)
        void*** rcx_33 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_75 = &rcx_33[3]
        
        if (rax_75 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x20)
            rcx_33 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_75 = &rcx_33[3]
        
        *(arg2 + 0x30) = rax_75
        void**** rax_76 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_76 = rcx_33
        *(arg2 + 8) = &rcx_33[1]
        rcx_33[1] = 0
        *rcx_33 = &data_142dd5b40
        rcx_33[2] = rdi_10
        var_158.q = &arg3[0x2f6]
        sub_14113d6a0(rsi_2, arg2, arg3, temp0_2.q, *arg6 + 8, var_f8, var_158)
        void** var_168_1
        var_168_1.d = 1
        sub_1419cd1c0(arg2, rsi_2, r13_1, rax_72, var_168_1.d)
        sub_14077cfd0(rsi_2 + 0x1d8, arg2, *(arg2 + 0x1b0))
        rsi = zx.q(var_137)
        goto label_1411385be
    
    sub_1419a2ec0(rcx_28, rdx_20, &data_143e5b270, 0)
    void* rdi_18 = var_128
    
    if (rdi_18 != 0)
        int64_t rdx_29 = sx.q(*(rdi_18 + 0x10c))
        int64_t* r13_5 = *(var_120 + 0x10)
        int64_t rax_92 = rdx_29
        int64_t rsi_6 = r13_5[3]
        
        if (*(rsi_6 + (rdx_29 << 3)) == 0)
            sub_1419ccf30(r13_5, rdx_29.d)
            rax_92 = rdx_29
            rsi_6 = r13_5[3]
        
        rsi_1 = *(rsi_6 + (rax_92 << 3))
        r13_1 = var_e0_1.d
    
    *(arg2 + 0x1b0) = rsi_1
    sub_14198aa60(rsi_1)
    void*** rcx_64 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_93 = &rcx_64[3]
    
    if (rax_93 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x20)
        rcx_64 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_93 = &rcx_64[3]
    
    rbx_4 = var_f8
    *(arg2 + 0x30) = rax_93
    void**** rax_94 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_94 = rcx_64
    *(arg2 + 8) = &rcx_64[1]
    rcx_64[2] = rsi_1
    rsi_5 = arg6
    rcx_64[1] = 0
    *rcx_64 = &data_142dd5b40
    var_158.q = &arg3[0x2f6]
    sub_14113d6a0(rdi_18, arg2, arg3, temp0_2.q, *rsi_5 + 8, rbx_4, var_158)
    void* var_168_3
    var_168_3.d = 1
    sub_1419cd1c0(arg2, rdi_18, r13_1, rax_72, var_168_3.d)
    sub_14077cfd0(rdi_18 + 0x1d8, arg2, *(arg2 + 0x1b0))

int64_t* var_c8 = nullptr
int128_t var_a8

if (rax_5 != 0)
    int32_t var_98_1 = data_143f02318
    int32_t var_94_1 = temp0
    char var_150_1 = 0
    char var_158_1 = 1
    var_160.b = 1
    int32_t var_88_1 = 1
    int16_t var_80_1 = 1
    int16_t var_60_1 = 1
    wchar16 const* const var_68_1 = u"UnknownTexture2D"
    wchar16 const* const var_168_7 = u"DownsampledIrradiance"
    int16_t var_70_1 = 0
    var_a8 = data_143f02308
    int32_t var_90_1 = temp0_1
    int32_t var_8c_1 = 0
    int32_t var_84_1 = 0x10000
    int32_t var_7c
    var_7c.q = 0xa
    int32_t var_74_1 = 0x10001
    char var_5e_1 = 0
    sub_1419a0ce0(&data_1439c9260, arg2, &var_a8, &var_c8, var_168_7, var_160.b, var_158_1, 
        var_150_1)
    var_158_1.q = &var_c8[1]
    sub_1410eff10(arg2, arg3, *(arg1 + 8), rbx_4, *rsi_5 + 8, *r12_1, var_158_1)

sub_1411daf50(&arg3[0xa1b], arg3, arg2, *rsi_5 + 8, *r12_1, rbx_4)
int128_t zmm0_2 = data_143f02308
int32_t var_98_2 = data_143f02318
char var_150_2 = 0
int32_t var_88_2 = 1
int16_t var_80_2 = 1
wchar16 const* const var_68_2 = u"UnknownTexture2D"
int32_t var_78 = data_143ed33c8
char var_158_2 = 1
int32_t* var_160_2
var_160_2.b = 1
wchar16 const* const var_168_10 = u"DownsampledBentNormal"
int64_t* var_e8 = nullptr
int16_t var_70_2 = 0
var_a8 = zmm0_2
int32_t var_94_2 = temp0
int32_t var_90_2 = temp0_1
int32_t var_8c_2 = 0
int32_t var_84_2 = 0x10000
int32_t var_7c_1 = 0xa
int32_t var_74_2 = 0x10009
int16_t var_60_2 = 1
char var_5e_2 = 0
sub_1419a0ce0(&data_1439c9260, arg2, &var_a8, &var_e8, var_168_10, var_160_2.b, var_158_2, 
    var_150_2)
int64_t* rbx_7 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
int64_t rcx_107 = *(*r12_1 + 0x20)
void* rax_124 = &rbx_7[1]

if (rax_124 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x10)
    rbx_7 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_124 = &rbx_7[1]

*(arg2 + 0x30) = rax_124
*rbx_7 = rcx_107
void*** rcx_111 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_125 = &rcx_111[6]

if (rax_125 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x38)
    rcx_111 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_125 = &rcx_111[6]

*(arg2 + 0x30) = rax_125
void**** rax_126 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_126 = rcx_111
*(arg2 + 8) = &rcx_111[1]
rcx_111[1] = 0
*rcx_111 = &data_142da7798
rcx_111[2].d = 1
rcx_111[4].d = 0
rcx_111[5] = 0
int32_t temp50
int32_t temp51
temp50:temp51 = sx.q(temp0 + 7)
rcx_111[3] = rbx_7
*(rcx_111 + 0x24) = 3
int32_t rax_131 = (temp51 + (temp50 & 7)) s>> 3
int32_t rsi_14 = rax_131
int32_t temp52
int32_t temp53
temp52:temp53 = sx.q(temp0_1 + 7)
sub_1419a2ec0(arg3[0xa2a], &var_128, &data_143e577a0, 0)
void* r13_10 = var_128
void* rbx_10 = nullptr

if (r13_10 != 0)
    int64_t rdx_52 = sx.q(*(r13_10 + 0x10c))
    int64_t* rsi_15 = *(var_120 + 0x10)
    int64_t rbx_11 = rsi_15[3]
    
    if (*(rbx_11 + (rdx_52 << 3)) == 0)
        sub_1419ccf30(rsi_15, rdx_52.d)
        rbx_11 = rsi_15[3]
    
    rbx_10 = *(rbx_11 + (rdx_52 << 3))
    r12_1 = var_d8
    rsi_14 = rax_131

*(arg2 + 0x1b0) = rbx_10
sub_14198aa60(rbx_10)
void*** rcx_121 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_136 = &rcx_121[3]

if (rax_136 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x20)
    rcx_121 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_136 = &rcx_121[3]

*(arg2 + 0x30) = rax_136
void**** rax_137 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_137 = rcx_121
*(arg2 + 8) = &rcx_121[1]
rcx_121[1] = 0
*rcx_121 = &data_142dd5b40
rcx_121[2] = rbx_10
sub_1411434d0(r13_10, arg2, arg3, *arg6 + 8, &var_e8[1])
void* var_168_11
var_168_11.d = 1
sub_1419cd1c0(arg2, r13_10, rsi_14, (temp53 + (temp52 & 7)) s>> 3, var_168_11.d)
int64_t* rbx_12 = var_e8
sub_14077cfd0(r13_10 + 0x148, arg2, *(arg2 + 0x1b0))
void** rax_141 = rbx_12[3]
int64_t rbx_14 = *(arg2 + 0x30) + 7
var_d8 = rax_141
void*** rbx_15 = rbx_14 & 0xfffffffffffffff8
void* rcx_128 = &rbx_15[1]

if (rcx_128 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x10)
    rax_141 = var_d8
    rbx_15 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rcx_128 = &rbx_15[1]

*(arg2 + 0x30) = rcx_128
*rbx_15 = rax_141
void*** rcx_132 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_142 = &rcx_132[6]

if (rax_142 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x38)
    rcx_132 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_142 = &rcx_132[6]

*(arg2 + 0x30) = rax_142
void** rax_143 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_143 = rcx_132
*(arg2 + 8) = &rcx_132[1]
rcx_132[1] = 0
*rcx_132 = &data_142da7798
rcx_132[2].d = 1
rcx_132[3] = rbx_15
rcx_132[4].d = 0
*(rcx_132 + 0x24) = 3
rcx_132[5] = 0
char rcx_136 = data_143f0f1c7

if (rcx_136 != 0 && *(data_143ed2e18 + 4) != 0)
    void* rbx_18 = *r12_1
    void* rdi_19 = *(rbx_18 + 0x18)
    
    if (*(rdi_19 + 0x11) != 0)
        int64_t* rcx_137 = data_143f0f180
        (*(*rcx_137 + 0x630))(rcx_137, rdi_19)
        *(rdi_19 + 0x11) = 0
        rcx_136 = data_143f0f1c7
    
    if (*(rbx_18 + 0x38) != 0)
        void* rdi_20 = *(rbx_18 + 0x60)
        
        if (*(rdi_20 + 0x11) != 0)
            if (rcx_136 != 0)
                int64_t* rcx_138 = data_143f0f180
                (*(*rcx_138 + 0x630))(rcx_138, rdi_20)
            
            *(rdi_20 + 0x11) = 0
            rcx_136 = data_143f0f1c7
        
        void* rdi_21 = *(rbx_18 + 0x80)
        
        if (*(rdi_21 + 0x11) != 0)
            if (rcx_136 != 0)
                int64_t* rcx_139 = data_143f0f180
                (*(*rcx_139 + 0x630))(rcx_139, rdi_21)
            
            *(rdi_21 + 0x11) = 0
            rcx_136 = data_143f0f1c7
        
        void* rbx_19 = *(rbx_18 + 0xa0)
        
        if (*(rbx_19 + 0x11) != 0)
            if (rcx_136 != 0)
                int64_t* rcx_140 = data_143f0f180
                (*(*rcx_140 + 0x630))(rcx_140, rbx_19)
            
            *(rbx_19 + 0x11) = 0

int64_t rax_151 = arg3[1]
int64_t r11 = rax_151 + 0xba0
int64_t r10 = rax_151 + 0xb90

if (rax_151 == 0)
    r11 = 0

var_150_2.q = r11

if (rax_151 == 0)
    r10 = 0

var_158_2.q = r10
int32_t* result = sub_14115c6b0(arg2, arg3, DistanceFieldAOHistory", *arg5, *arg6 + 8, &var_e8[1], 
    var_158_2, var_150_2, arg7, var_f8)
int64_t* rcx_144 = var_e8

if (rcx_144 != 0)
    result = (*(*rcx_144 + 0x38))(rcx_144)

int64_t* rcx_145 = var_c8

if (rcx_145 != 0)
    result = (*(*rcx_145 + 0x38))(rcx_145)

__security_check_cookie(rax_1 ^ &var_188)
return result
