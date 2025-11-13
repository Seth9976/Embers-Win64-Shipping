// 函数: sub_141fc26f0
// 地址: 0x141fc26f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140b33630("HandleRPC")
int64_t* rcx = *(*(arg1 + 0x50) + 0x58)
char i_3 = (*(*rcx + 0x368))(rcx)
int64_t* r12 = *(arg1 + 0x48)
uint64_t i_1 = zx.q(i_3)
int64_t var_a0
sub_140cbc2c0(arg4, &var_a0)
void*** (* rax_2)() = sub_140d1fd20(r12, var_a0)
void* rax_3 = *(arg1 + 0x50)
uint128_t zmm7 = 0x4170000000000000
int64_t performanceCount
uint128_t performanceCount_1

if (data_143f3d170 == 0)
    performanceCount_1 = zx.o(performanceCount)
else
    QueryPerformanceCounter(&performanceCount)
    performanceCount_1.q = float.d(performanceCount)
    performanceCount_1.q = performanceCount_1.q f* data_143d796f8
    performanceCount_1.q = performanceCount_1.q f+ zmm7.q

if (rax_2 != 0)
    int32_t rcx_4 = *(rax_2 + 0xb0)
    
    if ((rcx_4.b & 0x40) != 0)
        int32_t rax_4 = 0x1004000
        
        if (i_1.b != 0)
            rax_4 = 0x200000
        
        if ((rax_4 & rcx_4) != 0)
            int64_t* rcx_5 = *(*(arg1 + 0x50) + 0x58)
            
            if ((*(*rcx_5 + 0x3e8))(rcx_5, r12, rax_2, arg3) == 0)
                i_1.b = 1
            else
                if (arg5 != 0)
                    performanceCount.b = 1
                
                if (arg5 == 0 || (*(rax_2 + 0xb0) & 0x80) == 0)
                    performanceCount.b = 0
                
                char arg_20 = 0
                char* var_b8_1 = &arg_20
                void*** (* var_c0)() = j_sub_140597fc0
                int64_t* rax_9 = sub_140a756e0(&var_c0, &data_143958018) + 0x10
                void*** (* var_70)() = j_sub_140597fc0
                int64_t* var_e8 = rax_9
                int64_t var_e0_1 = *rax_9
                int64_t rcx_8 = rax_9[2]
                char var_d0_1 = 0
                int64_t rcx_9 = rax_9[3]
                rax_9[3] = &var_e8
                int64_t* rax_10 = var_e8
                rax_10[4].d += 1
                char* var_68_1 = &arg_20
                arg_20 = 0
                void* rax_11 = sub_140a756e0(&var_70, &data_143958018)
                uint64_t count = zx.q(*(rax_2 + 0xb6))
                int32_t rcx_11 = 8
                void** r8_1 = rax_11 + 0x10
                int64_t rdx_3 = 8
                
                if (count.d u>= 0x10)
                    rdx_3 = 0x10
                
                int64_t r9_2 = not.q(rdx_3 - 1)
                void* rsi_4 = (*(rax_11 + 0x10) - 1 + rdx_3) & r9_2
                var_c0 = r9_2
                void* rax_12 = rsi_4 + count
                
                if (rax_12 u> r8_1[1])
                    if (count.d u>= 0x10)
                        rcx_11 = 0x10
                    
                    sub_140b0e3d0(r8_1, rcx_11 + count.d)
                    rsi_4 = (rdx_3 - 1 + *r8_1) & var_c0
                    rax_12 = rsi_4 + count
                
                *r8_1 = rax_12
                memset(rsi_4, 0, count)
                void* var_80
                zmm7 = sub_1421685b0(*(*(arg1 + 0x50) + 0x58), &var_80, rax_2)
                performanceCount_1 =
                    sub_1422cccc0(var_80, r12, rax_2, *(arg1 + 0x58), arg2, rsi_4, arg7)
                int64_t* i_2
                
                if ((*(arg2 + 0x29) & 1) == 0)
                    if (arg2[0x14] != arg2[0x15])
                        if (i_1.b != 0)
                            goto label_141fc2bb8
                        
                        arg4[3].b = 1
                        i_1.b = 1
                        goto label_141fc2bc1
                    
                    Concurrency::details::_RegisterConcRTEventTracing()
                    
                    if (performanceCount.b == 0
                            || (arg7[1].d - *(arg7 + 0x34) s<= 0 && *(arg1 + 0x80) s<= 0))
                        int64_t r12_1 = *(*(arg1 + 0x58) + 0x70)
                        int64_t* rcx_18 = *(*(arg1 + 0x50) + 0x58)
                        
                        if ((*(*rcx_18 + 0x3d8))(rcx_18, r12_1, rax_2, rsi_4) != 0)
                            void* rax_23 =
                                sub_1423de4b0(data_143f5b298, *(*(*(arg1 + 0x50) + 0x58) + 0x140))
                            
                            if (rax_23 != 0)
                                int64_t* r13_2 = nullptr
                                int64_t* i = *(rax_23 + 0x220)
                                
                                if (r12 != *(*(arg1 + 0x58) + 0x70))
                                    r13_2 = r12
                                
                                for (void* r15_3 = &i[sx.q(*(rax_23 + 0x228)) * 2]; i != r15_3; 
                                        i = &i[2])
                                    int64_t* rcx_22 = *i
                                    
                                    if (rcx_22 != 0 && rcx_22 != *(*(arg1 + 0x50) + 0x58)
                                            && (*(*rcx_22 + 0x3d0))(rcx_22, r12_1, rax_2) != 0)
                                        int64_t* rcx_23 = *i
                                        (*(*rcx_23 + 0x2e0))(rcx_23, r12_1, rax_2, rsi_4, 0, 0, 
                                            r13_2)
                        
                        Concurrency::details::_RegisterConcRTEventTracing()
                        (*(*r12 + 0x210))(r12, rax_2, rsi_4)
                    else
                        *arg6 = 1
                    
                    uint64_t i_4 = *(rax_2 + 0x50)
                    var_c0 = rax_2
                    int32_t var_b0_1 = 0xffffffff
                    int16_t var_ac_1 = 0x101
                    char var_aa_1 = 0
                    sub_1406328d0(&var_c0)
                    uint64_t i_5
                    
                    for (i_1 = i_4; i_1 != 0; i_1 = i_5)
                        int64_t rcx_26 = *(i_1 + 0x40)
                        
                        if ((zx.q(rcx_26.d) & 0x480) != 0x80)
                            break
                        
                        if ((not.b((rcx_26 u>> 0x24).b) & 1) != 0)
                            (*(*i_1 + 0xe8))(i_1, sx.q(*(i_1 + 0x4c)) + rsi_4)
                        
                        i_5 = *(i_1 + 0x20)
                        sub_1406328d0(&var_c0)
                    
                    if (var_d0_1 == 0)
                        int64_t* rax_33 = var_e8
                        var_d0_1 = 1
                        rax_33[4].d -= 1
                        int64_t* rcx_30 = var_e8
                        
                        if (rcx_8 != rcx_30[2])
                            performanceCount_1 = sub_140b16b40(rcx_30, rcx_8)
                            rcx_30 = var_e8
                        
                        *rcx_30 = var_e0_1
                        var_e8[3] = rcx_9
                        var_e0_1 = 0
                    
                    if (sub_140be4100() != 0)
                        goto label_141fc2bb8
                    
                    i_1 = i_2
                    
                    if (i_1 != 0)
                        int32_t temp2_1 = *(i_1 + 8)
                        *(i_1 + 8) -= 1
                        
                        if (temp2_1 == 1)
                            (**i_1)(i_1)
                            int32_t temp3_1 = *(i_1 + 0xc)
                            *(i_1 + 0xc) -= 1
                            
                            if (temp3_1 == 1)
                                (*(*i_1 + 8))(i_1, 1)
                    
                    if (var_d0_1 == 0)
                        int64_t* rax_44 = var_e8
                        char var_d0_3 = 1
                        rax_44[4].d -= 1
                        int64_t* rcx_38 = var_e8
                        
                        if (rcx_8 != rcx_38[2])
                            performanceCount_1 = sub_140b16b40(rcx_38, rcx_8)
                            rcx_38 = var_e8
                        
                        *rcx_38 = var_e0_1
                        var_e8[3] = rcx_9
                    
                    i_1.b = 1
                else
                    if (i_1.b != 0)
                    label_141fc2bb8:
                        i_1.b = 0
                        goto label_141fc2bc1
                    
                    arg4[3].b = 1
                    i_1.b = 1
                label_141fc2bc1:
                    
                    if (i_2 != 0)
                        i_2[1].d -= 1
                        
                        if (i_2[1].d == 1)
                            (**i_2)(i_2)
                            int32_t temp1_1 = *(i_2 + 0xc)
                            *(i_2 + 0xc) -= 1
                            
                            if (temp1_1 == 1)
                                (*(*i_2 + 8))(i_2, 1)
                    
                    if (var_d0_1 == 0)
                        int64_t* rax_39 = var_e8
                        char var_d0_2 = 1
                        rax_39[4].d -= 1
                        int64_t* rcx_34 = var_e8
                        
                        if (rcx_8 != rcx_34[2])
                            performanceCount_1 = sub_140b16b40(rcx_34, rcx_8)
                            rcx_34 = var_e8
                        
                        *rcx_34 = var_e0_1
                        var_e8[3] = rcx_9
        else if (i_1.b == 0)
            arg4[3].b = 1
            i_1.b = 1
        else
            i_1.b = 0
    else if (i_1.b == 0)
        arg4[3].b = 1
        i_1.b = 1
    else
        i_1.b = 0
else if (i_1.b == 0)
    arg4[3].b = 1
    i_1.b = 1
else
    i_1.b = 0

if (data_143f3d170 != 0)
    QueryPerformanceCounter(&performanceCount)
    int128_t zmm3
    zmm3.q = float.d(performanceCount)
    zmm3.q = zmm3.q f* data_143d796f8
    zmm3.q = zmm3.q f+ zmm7.q
    zmm3.q = zmm3.q f- performanceCount_1.q
    sub_14216f5c0(*(rax_3 + 0x58), rax_2, rax_3, zmm3)

sub_140b37f60("HandleRPC")
return zx.q(i_1.b)
