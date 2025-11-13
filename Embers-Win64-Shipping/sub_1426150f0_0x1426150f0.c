// 函数: sub_1426150f0
// 地址: 0x1426150f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
int128_t* r14 = arg4
int64_t rbp = arg2

if (*arg1 == 0)
    sub_140af98a0("Unknown", 0xbd7, u"dtNavMeshQuery::raycast doesn't have valid navmesh!", arg4)
    sub_140afbb40()

*arg6 = 0

if (arg9 != 0)
    *arg9 = 0

char rax_3

if (rbp != 0)
    rax_3 = sub_1426126b0(*arg1, rbp)

uint64_t result

if (rbp == 0 || rax_3 == 0)
    result = 0x80000008
else
    float zmm6[0x4]
    float var_48_1[0x4] = zmm6
    int128_t zmm7
    int128_t var_58_1 = zmm7
    int128_t zmm8
    int128_t var_68_1 = zmm8
    float zmm9[0x4]
    float var_78_1[0x4] = zmm9
    float zmm10[0x4]
    float var_88_1[0x4] = zmm10
    float zmm11[0x4]
    float var_98_1[0x4] = zmm11
    *arg7 = 0
    arg7[1].d = 0
    int32_t rax_5 = 0
    int32_t var_198_1 = 0
    int64_t var_168_1 = 0
    int32_t rdx_1 = ((zx.q(*(arg1[0xd] + 0x20)) << 2) + 4).d
    int32_t result_1 = 0x40000000
    int32_t var_174_1 = rdx_1
    
    while (true)
        if (rax_5 + 1 s>= rdx_1)
            result = 0x80000080
            break
        
        void* r9 = *arg1
        char rdx_2 = (*(r9 + 0xa0)).b
        int32_t rbx_3 = ((1 << (*(r9 + 0x9c)).b).d - 1) & (rbp u>> rdx_2).d
        int32_t rdi_3 = ((1 << rdx_2).d - 1) & rbp.d
        int32_t rax_9 = *(r9 + 0x30)
        
        if (rbx_3 u>= rax_9)
            int32_t var_1b0_1 = rax_9
            int32_t var_1b8_1 = rbx_3
            sub_140af98a0("Unknown", 0xbff, 
                dtNavMeshQuery::raycast tried to access invalid tile with ref:0x%X (tileIdx:%d, "
            "maxTiles:%d) - out of bounds!", rbp)
            sub_140afbb40()
            r9 = *arg1
        
        int64_t rsi_1 = sx.q(rbx_3) * 0xb0
        
        if (*(r9 + 0x90) == neg.q(rsi_1))
            int32_t var_1b0_2 = *(r9 + 0x30)
            int32_t var_1b8_2 = rbx_3
            sub_140af98a0("Unknown", 0xc00, 
                dtNavMeshQuery::raycast tried to access invalid tile with ref:0x%X (tileIdx:%d, "
            "maxTiles:%d) - empty tile!", rbp)
            sub_140afbb40()
            r9 = *arg1
        
        if (*(*(r9 + 0x90) + rsi_1 + 8) == 0)
            int32_t var_1b0_3 = *(r9 + 0x30)
            int32_t var_1b8_3 = rbx_3
            sub_140af98a0("Unknown", 0xc01, 
                dtNavMeshQuery::raycast tried to access invalid tile with ref:0x%X (til", rbp)
            sub_140afbb40()
            r9 = *arg1
        
        int32_t rax_15 = *(*(*(r9 + 0x90) + rsi_1 + 8) + 0x18)
        
        if (rdi_3 u>= rax_15)
            int32_t var_1b0_4 = rax_15
            int32_t var_1b8_4 = rdi_3
            sub_140af98a0("Unknown", 0xc02, 
                dtNavMeshQuery::raycast tried to access invalid poly with ref:0x%X (polyIdx:%d,", rbp)
            sub_140afbb40()
            r9 = *arg1
        
        int64_t r11_1 = *(r9 + 0x90)
        char r8 = (*(r9 + 0xa0)).b
        int64_t var_1a0_1 = r11_1
        int64_t r13_1 = (((1 << (*(r9 + 0x9c)).b) - 1) & zx.q((rbp u>> r8).d)) * 0xb0
        uint64_t rdi_7 = (zx.q((1 << r8).d - 1) & zx.q(rbp.d)) << 5
        int32_t* rdi_8 = rdi_7 + *(r11_1 + r13_1 + 0x10)
        
        if (rdi_7 != neg.q(*(r11_1 + r13_1 + 0x10)))
            char rax_20 = *(rdi_8 + 0x1e)
            
            if (rax_20 u<= 6)
                uint64_t r9_5 = zx.q(rax_20)
                int32_t var_194_1 = 0
                int32_t rsi_2 = 0
                int64_t rbx_4 = 0
                int32_t var_130[0x12]
                
                if (r9_5 u>= 4)
                    int64_t r8_1 = *(r11_1 + r13_1 + 0x18)
                    void* r10_1 = rdi_8 + 6
                    int32_t (* rdx_6)[0x12] = &var_130
                    int64_t i_3 = ((r9_5 - 4) u>> 2) + 1
                    rsi_2 = (i_3 << 2).d
                    var_194_1 = rsi_2
                    rbx_4 = i_3 << 2
                    int64_t i
                    
                    do
                        uint64_t rax_21 = zx.q(*(r10_1 - 2))
                        rdx_6 = &(*rdx_6)[0xc]
                        r10_1 += 8
                        uint64_t rcx_9 = rax_21 * 3
                        (*rdx_6)[-0xe] = *(r8_1 + (rcx_9 << 2))
                        (*rdx_6)[-0xd] = *(r8_1 + (rcx_9 << 2) + 4)
                        (*rdx_6)[-0xc] = *(r8_1 + (rcx_9 << 2) + 8)
                        uint64_t rcx_10 = zx.q(*(r10_1 - 8)) * 3
                        (*rdx_6)[-0xb] = *(r8_1 + (rcx_10 << 2))
                        (*rdx_6)[-0xa] = *(r8_1 + (rcx_10 << 2) + 4)
                        (*rdx_6)[-9] = *(r8_1 + (rcx_10 << 2) + 8)
                        uint64_t rcx_11 = zx.q(*(r10_1 - 6)) * 3
                        (*rdx_6)[-8] = *(r8_1 + (rcx_11 << 2))
                        (*rdx_6)[-7] = *(r8_1 + (rcx_11 << 2) + 4)
                        (*rdx_6)[-6] = *(r8_1 + (rcx_11 << 2) + 8)
                        uint64_t rcx_12 = zx.q(*(r10_1 - 4)) * 3
                        (*rdx_6)[-5] = *(r8_1 + (rcx_12 << 2))
                        rdx_6[0][0] = *(r8_1 + (rcx_12 << 2) + 4)
                        (*rdx_6)[-3] = *(r8_1 + (rcx_12 << 2) + 8)
                        i = i_3
                        i_3 -= 1
                    while (i != 1)
                    r11_1 = var_1a0_1
                
                if (rbx_4 s< r9_5)
                    int64_t r8_2 = *(r11_1 + r13_1 + 0x18)
                    int64_t rax_37 = rbx_4 * 3
                    int64_t i_2 = r9_5 - rbx_4
                    rsi_2 += i_2.d
                    void* r10_3 = &rdi_8[1] + (rbx_4 << 1)
                    var_194_1 = rsi_2
                    rbx_4 += i_2
                    void* rdx_7 = &var_130[rax_37]
                    int64_t i_1
                    
                    do
                        uint64_t rax_38 = zx.q(*r10_3)
                        rdx_7 += 0xc
                        r10_3 += 2
                        uint64_t rcx_13 = rax_38 * 3
                        *(rdx_7 - 0x14) = *(r8_2 + (rcx_13 << 2))
                        *(rdx_7 - 0x10) = *(r8_2 + (rcx_13 << 2) + 4)
                        *(rdx_7 - 0xc) = *(r8_2 + (rcx_13 << 2) + 8)
                        i_1 = i_2
                        i_2 -= 1
                    while (i_1 != 1)
                
                int32_t rcx_14 = rsi_2 - 1
                int32_t r10_4 = -1
                float zmm4[0x4] = zx.o(0)
                zmm11 = 0x3f800000
                int32_t var_1a8_1 = 0xffffffff
                zmm9 = *arg3
                zmm10 = *(arg3 + 8)
                zmm7.d = (*r14).d f- zmm9[0]
                zmm8.d = (*(r14 + 8)).d f- zmm10[0]
                int32_t r8_3 = 0
                int64_t r9_6 = 0
                int32_t var_138[0x2]
                float zmm0[0x4]
                float zmm1
                float zmm2[0x4]
                
                if (rbx_4 s> 0)
                    void* rdx_8 = nullptr
                    void* rax_44 = rbx_4 * 0xc + -0xfffffffffffffff4
                    
                    do
                        zmm0 = *(&var_138 + rax_44)
                        float zmm5[0x4] = *(&var_138 + rdx_8)
                        zmm9[0] = zmm9[0] - zmm0[0]
                        zmm1 = *(&var_130 + rax_44)
                        zmm5[0] = zmm5[0] - zmm0[0]
                        zmm2 = *(&var_130 + rdx_8)
                        zmm10[0] = zmm10[0] - zmm1
                        zmm2[0] = zmm2[0] - zmm1
                        zmm10[0] = zmm10[0] * zmm5[0]
                        zmm9[0] = zmm9[0] * zmm2[0]
                        zmm5[0] = zmm5[0] f* zmm8.d
                        zmm9[0] = zmm9[0] - zmm10[0]
                        zmm2[0] = zmm2[0] f* zmm7.d
                        zmm5[0] = zmm5[0] - zmm2[0]
                        bool cond:3_1
                        
                        if (__andps_xmmxud_memxud(zmm5, data_142d3f770)[0] >= 9.99999994e-09f)
                            bool cond:2_1 = zmm5[0] >= 0f
                            zmm9[0] = zmm9[0] / zmm5[0]
                            
                            if (not(cond:2_1))
                                if (not(zmm9[0] <= zmm4[0]) && zmm9[0] > zmm11[0])
                                    goto label_142615af8
                                
                                zmm4 = _mm_max_ss(zmm9[0], zmm4[0])
                            else if (not(zmm9[0] >= zmm11[0]))
                                zmm11 = zmm9
                                var_1a8_1 = rcx_14
                                r10_4 = rcx_14
                                cond:3_1 = zmm9[0] < zmm4[0]
                                goto label_142615647
                        else
                            cond:3_1 = zmm9[0] < 0f
                        label_142615647:
                            
                            if (cond:3_1)
                                goto label_142615af8
                        rcx_14 = r8_3
                        rax_44 = rdx_8
                        r8_3 += 1
                        rdx_8 += 0xc
                        r9_6 += 1
                    while (r9_6 s< rbx_4)
                
                if (not(zmm11[0] f<= *arg6))
                    *arg6 = zmm11[0]
                
                int32_t rax_48
                
                if (var_168_1 s>= sx.q(arg10))
                    result_1 |= 0x10
                    rax_48 = var_198_1
                else
                    *(arg8 + (var_168_1 << 3)) = rbp
                    rax_48 = var_198_1 + 1
                    var_198_1 = rax_48
                    var_168_1 += 1
                
                if (r10_4 == 0xffffffff)
                    *arg6 = 0x7f7fffff
                    
                    if (arg9 != 0)
                        *arg9 = rax_48
                else
                    int32_t rbp_1 = *rdi_8
                    float zmm3[0x4]
                    
                    if (rbp_1 != 0xffffffff)
                        int64_t* rbx_7
                        
                        while (true)
                            int32_t rcx_17 = *(*(r11_1 + r13_1 + 8) + 0x20)
                            
                            if (rbp_1 u>= rcx_17)
                                rbx_7 = (sx.q(rbp_1 - rcx_17) << 4) + *(r11_1 + r13_1 + 0x80)
                            else
                                rbx_7 = (zx.q(rbp_1) << 4) + *(r11_1 + r13_1 + 0x20)
                            
                            rbp_1 = rbx_7[1].d
                            
                            if (zx.d(*(rbx_7 + 0xc)) == r10_4)
                                void* r9_7 = *arg1
                                int64_t r10_5 = *rbx_7
                                char rdx_10 = (*(r9_7 + 0xa0)).b
                                int32_t rdi_11 =
                                    ((1 << (*(r9_7 + 0x9c)).b).d - 1) & (r10_5 u>> rdx_10).d
                                int32_t rsi_5 = ((1 << rdx_10).d - 1) & r10_5.d
                                int32_t rax_53 = *(r9_7 + 0x30)
                                
                                if (rdi_11 u>= rax_53)
                                    int32_t var_1b0_5 = rax_53
                                    int32_t var_1b8_5 = rdi_11
                                    sub_140af98a0("Unknown", 0xc45, 
                                        dtNavMeshQuery::raycast tried to access invalid nei tile with "
                                    "ref:0x%X (tileIdx:%d, maxTiles:%d) - out of bound", r10_5)
                                    sub_140afbb40()
                                    r9_7 = *arg1
                                    r10_5 = *rbx_7
                                
                                int64_t r14_1 = sx.q(rdi_11) * 0xb0
                                
                                if (*(r9_7 + 0x90) == neg.q(r14_1))
                                    int32_t var_1b0_6 = *(r9_7 + 0x30)
                                    int32_t var_1b8_6 = rdi_11
                                    sub_140af98a0("Unknown", 0xc46, 
                                        dtNavMeshQuery::raycast tried to access invalid nei tile with "
                                    "ref:0x%X (tileIdx:%d, maxTiles:%d) - empty tile!", r10_5)
                                    sub_140afbb40()
                                    r9_7 = *arg1
                                    r10_5 = *rbx_7
                                
                                if (*(*(r9_7 + 0x90) + r14_1 + 8) == 0)
                                    int32_t var_1b0_7 = *(r9_7 + 0x30)
                                    int32_t var_1b8_7 = rdi_11
                                    sub_140af98a0("Unknown", 0xc47, 
                                        dtNavMeshQuery::raycast tried to access invalid nei tile with "
                                    "ref:0x%X (tileIdx:%d, maxTiles:%d) - missing tile header!", 
                                        r10_5)
                                    sub_140afbb40()
                                    r9_7 = *arg1
                                    r10_5 = *rbx_7
                                
                                int32_t rax_59 = *(*(*(r9_7 + 0x90) + r14_1 + 8) + 0x18)
                                
                                if (rsi_5 u>= rax_59)
                                    int32_t var_1b0_8 = rax_59
                                    int32_t var_1b8_8 = rsi_5
                                    sub_140af98a0("Unknown", 0xc48, 
                                        dtNavMeshQuery::raycast tried to access invalid nei poly with "
                                    "ref:0x%X (polyIdx:%d, maxPolys:%d)!", r10_5)
                                    sub_140afbb40()
                                    r10_5 = *rbx_7
                                    r9_7 = *arg1
                                
                                char r8_4 = (*(r9_7 + 0xa0)).b
                                void* rdi_13 = (((1 << (*(r9_7 + 0x9c)).b) - 1)
                                    & zx.q((r10_5 u>> r8_4).d)) * 0xb0 + *(r9_7 + 0x90)
                                void* r9_14 = ((zx.q((1 << r8_4).d - 1) & zx.q(r10_5.d)) << 5)
                                    + *(rdi_13 + 0x10)
                                char rcx_25 = *(r9_14 + 0x1f)
                                
                                if (rcx_25 u< 0x40)
                                    if (arg5[0x43].b != 0)
                                        if ((*(*arg5 + 8))(arg5, r10_5, rdi_13) != 0)
                                        label_14261590d:
                                            
                                            if (sub_142613610(arg1, rdi_13, (*rbx_7).d) != 0)
                                                char r8_7 = *(rbx_7 + 0xd)
                                                
                                                if (r8_7 s< 0)
                                                    r14 = arg4
                                                    break
                                                
                                                char r9_15 = *(rbx_7 + 0xe)
                                                
                                                if (r9_15 == 0 && *(rbx_7 + 0xf) == 0xff)
                                                    r14 = arg4
                                                    break
                                                
                                                uint64_t rax_72 = zx.q(*(rbx_7 + 0xc))
                                                r8_7 &= 7
                                                int64_t r10_7 = *(var_1a0_1 + r13_1 + 0x18)
                                                uint64_t r11_4 =
                                                    zx.q(*(rdi_8 + (rax_72 << 1) + 4)) * 3
                                                uint64_t rax_75 = zx.q(*(rdi_8 + (sx.q(modu.dp.d(
                                                    0:(rax_72.d + 1), zx.d(*(rdi_8 + 0x1e)))) << 1)
                                                    + 4)) * 3
                                                
                                                if ((r8_7 & 0xfb) == 0)
                                                    zmm0 = *(r10_7 + (rax_75 << 2) + 8)
                                                    zmm3 = zx.o(0)
                                                    zmm1 = *(r10_7 + (r11_4 << 2) + 8)
                                                    zmm2 = zx.o(0)
                                                    r14 = arg4
                                                    zmm0[0] = zmm0[0] - zmm1
                                                    zmm3[0] = float.s(zx.d(r9_15))
                                                    zmm2[0] = float.s(zx.d(*(rbx_7 + 0xf)))
                                                    zmm3[0] = zmm3[0] * zmm0[0]
                                                    zmm2[0] = zmm2[0] * zmm0[0]
                                                    zmm3[0] = zmm3[0] * 0.00392156886f
                                                    zmm2[0] = zmm2[0] * 0.00392156886f
                                                    zmm3[0] = zmm3[0] + zmm1
                                                    zmm2[0] = zmm2[0] + zmm1
                                                    zmm1 = (*(r14 + 8) f- *(arg3 + 8))
                                                        * zmm11[0] f+ *(arg3 + 8)
                                                label_142615a4b:
                                                    
                                                    if (not(zmm1 < _mm_min_ss(zmm2[0], zmm3[0])[0])
                                                            && zmm1
                                                            <= _mm_max_ss(zmm2[0], zmm3[0])[0])
                                                        break
                                                else if (((r8_7 - 2) & 0xfb) == 0)
                                                    zmm0 = *(r10_7 + (rax_75 << 2))
                                                    zmm3 = zx.o(0)
                                                    zmm1 = *(r10_7 + (r11_4 << 2))
                                                    zmm2 = zx.o(0)
                                                    r14 = arg4
                                                    zmm0[0] = zmm0[0] - zmm1
                                                    zmm3[0] = float.s(zx.d(r9_15))
                                                    zmm2[0] = float.s(zx.d(*(rbx_7 + 0xf)))
                                                    zmm3[0] = zmm3[0] * zmm0[0]
                                                    zmm2[0] = zmm2[0] * zmm0[0]
                                                    zmm3[0] = zmm3[0] * 0.00392156886f
                                                    zmm2[0] = zmm2[0] * 0.00392156886f
                                                    zmm3[0] = zmm3[0] + zmm1
                                                    zmm2[0] = zmm2[0] + zmm1
                                                    zmm1 = (*r14 f- *arg3) * zmm11[0] f+ *arg3
                                                    goto label_142615a4b
                                    else
                                        int16_t rax_66 = *(r9_14 + 0x1c)
                                        
                                        if ((arg5[0x42].w & rax_66) != 0
                                                && (*(arg5 + 0x212) & rax_66) == 0)
                                            uint64_t rax_68 = zx.q(rcx_25) & 0x3f
                                            
                                            if (not(3.40282347e+38f f<= *(arg5 + (rax_68 << 2) + 8))
                                                    && not(3.40282347e+38f f<=
                                                    *(arg5 + (rax_68 << 2) + 0x108)))
                                                goto label_14261590d
                                
                                r10_4 = var_1a8_1
                                r11_1 = var_1a0_1
                            
                            if (rbp_1 == 0xffffffff)
                                goto label_142615a74
                        
                        rbp = *rbx_7
                        
                        if (rbp == 0)
                        label_142615a74:
                            rsi_2 = var_194_1
                        else
                            rax_5 += 1
                            rdx_1 = var_174_1
                            continue
                    
                    uint64_t rax_82 = zx.q(var_1a8_1)
                    uint64_t rcx_31 = zx.q((rax_82 + 1).d)
                    int64_t rdx_17 = sx.q((rax_82 * 3).d)
                    
                    if (rcx_31.d s>= rsi_2)
                        rcx_31 = 0
                    
                    zmm3 = var_138[rdx_17]
                    int64_t rcx_32 = sx.q((rcx_31 * 3).d)
                    zmm3[0] = zmm3[0] f- var_138[rcx_32]
                    zmm2 = var_130[rcx_32]
                    zmm2[0] = zmm2[0] f- var_130[rdx_17]
                    *(arg7 + 4) = 0
                    zmm1 = zmm3[0] * zmm3[0]
                    zmm2[0] = zmm2[0] * zmm2[0]
                    int128_t zmm15
                    zmm15.d = 1f / _mm_sqrt_ss(0, zmm1 + zmm2[0])[0]
                    zmm2[0] = zmm2[0] f* zmm15.d
                    zmm3[0] = zmm3[0] f* zmm15.d
                    *arg7 = zmm2[0]
                    arg7[1].d = zmm3[0]
                label_142615af8:
                    
                    if (arg9 != 0)
                        *arg9 = var_198_1
                
                result = zx.q(result_1)
                break
        
        if (arg9 != 0)
            *arg9 = var_198_1
        
        result = 0x80000000
        break

__security_check_cookie(rax_1 ^ &var_1d8)
return result
