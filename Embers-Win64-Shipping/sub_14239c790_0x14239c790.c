// 函数: sub_14239c790
// 地址: 0x14239c790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm7 = arg2
EnterCriticalSection(arg1 + 0x580)
sub_140b33630("RenderAssetStreaming")
sub_140b34170("EventWait/RenderAssetStreaming")
char rax = sub_140b011d0()
void*** r15 = nullptr
char r12 = rax
int64_t rcx_1 = 0

if (data_143f0f208 s<= 0)
    rcx_1 = *(arg1 + 0x3b8)

int128_t zmm2
zmm2.d = float.s(*(arg1 + 0x3c0) + rcx_1)
zmm2.d = zmm2.d f* 9.53674316e-07f
int32_t zmm6 = sub_140b43f30("StreamingPool", data_143f59bd0, zmm2, 0)
zmm2.d = float.s(*(arg1 + 0x3a0))
zmm2.d = zmm2.d f* zmm6
int32_t zmm6_1 = sub_140b43f30("SafetyPool", data_143f59bd0, zmm2, 0)
zmm2.d = float.s(*(arg1 + 0x3a8))
zmm2.d = zmm2.d f* zmm6_1
int32_t zmm6_2 = sub_140b43f30("TemporaryPool", data_143f59bd0, zmm2, 0)
zmm2.d = float.s(*(arg1 + 0x3e8))
zmm2.d = zmm2.d f* zmm6_2
int32_t zmm6_3 = sub_140b43f30("CachedMips", data_143f59bd0, zmm2, 0)
zmm2.d = float.s(*(arg1 + 0x3f0))
zmm2.d = zmm2.d f* zmm6_3
sub_140b43f30("WantedMips", data_143f59bd0, zmm2, 0)
void* rbx = *(arg1 + 0x208)
int64_t* rcx_2 = *(rbx + 0x58)

if (rcx_2 == 0)
    bool z_1
    
    if (0 == *(rbx + 0x48))
        *(rbx + 0x48) = 0
        z_1 = true
    else
        *(rbx + 0x48)
        z_1 = false
    
    if (not(z_1))
        zmm7 = sub_1423ae170(rbx + 8)
        *(rbx + 0x48) -= 1
    
    goto label_14239c930

if ((*(*rcx_2 + 0x18))(rcx_2, rbx) == 0)
label_14239c930:
    
    if (*(rbx + 0x58) != 0)
        int64_t* rcx_6 = *(rbx + 0x50)
        (*(*rcx_6 + 0x20))(rcx_6, 0xffffffff, 0)
        *(rbx + 0x58) = 0
else
    zmm7 = sub_1423ae170(rbx + 8)
    *(rbx + 0x48) -= 1
    int64_t* rcx_4 = *(rbx + 0x50)
    
    if (rcx_4 != 0)
        (*(*rcx_4 + 0x10))(rcx_4)
    
    *(rbx + 0x58) = 0

int32_t rcx_7 = *(arg1 + 0x354)

if (rcx_7 s<= 0 || arg3 != 0)
    if (sub_142391d90(*(arg1 + 0x200)) == 0)
        sub_14238b8b0(*(arg1 + 0x200), 1)
    
    *(arg1 + 0x354) = *(arg1 + 0x1ec)
    *(arg1 + 0x350) = 0
    sub_14239d050(arg1, 0, 1, 0, sub_142397bb0(arg1))
    sub_14239bed0(arg1, 1)
    char rdx_19
    
    if (arg3 != 0 || *(arg1 + 0x1f8) != 0)
        rdx_19 = 1
    else
        rdx_19 = 0
    
    sub_1423937c0(arg1, rdx_19)
    void* rbx_7 = *(arg1 + 0x200)
    *(rbx_7 + 0x128) += 1
    int64_t* rcx_53 = *(rbx_7 + 0x130)
    *(rbx_7 + 0x138) = 0
    sub_140a4fc50(rcx_53)
    *(rbx_7 + 0x130) = 0
    sub_142389df0(rbx_7 + 8)
    *(rbx_7 + 0x128) -= 1
    sub_14239a830(arg1)
    sub_142399a40(arg1, zx.q(arg3))
    
    if (arg3 == 0)
    label_14239cca5:
        
        if (*data_143f59c28 != 0)
            int32_t i = *data_143f59c40
            
            if (i s> 0)
                do
                    int64_t rcx_28 = sx.q(*(arg1 + 0x338))
                    
                    if (rcx_28.d s>= *(arg1 + 0x330))
                        break
                    
                    *(arg1 + 0x338) = (rcx_28 + 1).d
                    int64_t* rax_33 = (rcx_28 << 4) + *(arg1 + 0x328)
                    void* rbx_3 = *rax_33
                    
                    if (rbx_3 != 0)
                        int64_t rcx_29 = sx.q(rax_33[1].d)
                        int64_t* rcx_31
                        
                        if (rcx_29.d s>= 0 && rcx_29.d s< *(arg1 + 0x18))
                            rcx_31 = rcx_29 * 0xd8 + *(arg1 + 0x10)
                        
                        if (rcx_29.d s>= 0 && rcx_29.d s< *(arg1 + 0x18) && *rcx_31 == rbx_3)
                            goto label_14239cd33
                        
                        void arg_20
                        
                        if (*sub_1408296b0(arg1 + 0x20, &arg_20, rbx_3) != 0xffffffff)
                            rcx_31 = sx.q(*(rbx_3 + 0x34)) * 0xd8 + *(arg1 + 0x10)
                        label_14239cd33:
                            
                            if (rcx_31 != 0)
                                sub_1423b6430(rcx_31)
                                i -= 1
                while (i != 0)
    
    void* rbx_4 = *(arg1 + 0x208)
    void*** rcx_34
    
    if (r12 == 0)
        *(rbx_4 + 0x48) += 1
        rcx_34 = *(rbx_4 + 0x50)
        *(rbx_4 + 0x58) = 0
    label_14239cffe:
        sub_140a4fc50(rcx_34)
        *(rbx_4 + 0x50) = 0
        sub_1423ae170(rbx_4 + 8)
        *(rbx_4 + 0x48) -= 1
    else
        int64_t rax_36 = data_143db7ac8
        *(rbx_4 + 0x48) += 1
        rcx_34 = *(rbx_4 + 0x50)
        *(rbx_4 + 0x58) = rax_36
        
        if (rax_36 == 0)
            goto label_14239cffe
        
        if (rcx_34 == 0)
            rcx_34.b = 1
            void*** rax_37 = sub_140a491d0(rcx_34.b)
            *(rbx_4 + 0x50) = rax_37
            rcx_34 = rax_37
        
        (*rcx_34)[3](rcx_34)
        int64_t* rcx_35 = *(rbx_4 + 0x58)
        (*(*rcx_35 + 0x10))(rcx_35, rbx_4)
    sub_140b38630()
    int64_t result = sub_140b37f60("RenderAssetStreaming")
    
    if (arg1 == -0x580)
        return result
    
    return LeaveCriticalSection(arg1 + 0x580)

int32_t rax_8 = *(arg1 + 0x350)

if (rax_8 == 0)
    void* rcx_8 = *(arg1 + 0x200)
    *(arg1 + 0x354) = *(arg1 + 0x1ec)
    
    if (sub_142391d90(rcx_8) == 0)
        sub_14238b8b0(*(arg1 + 0x200), 1)
    
    sub_14239bed0(arg1, 0)
    sub_1423937c0(arg1, *(arg1 + 0x1f8) != 0)
    int64_t rcx_12 = data_143db7ac8
    void* rbx_1 = *(arg1 + 0x200)
    
    if (*data_143f59c58 != 0)
        rcx_12 = data_143db7ad8
    
    *(rbx_1 + 0x128) += 1
    *(rbx_1 + 0x138) = rcx_12
    void*** rcx_13 = *(rbx_1 + 0x130)
    
    if (rcx_12 == 0)
        sub_140a4fc50(rcx_13)
        *(rbx_1 + 0x130) = 0
        sub_142389df0(rbx_1 + 8)
        *(rbx_1 + 0x128) -= 1
        sub_14239a830(arg1)
        *(arg1 + 0x350) += 1
    else
        if (rcx_13 == 0)
            rcx_13.b = 1
            void*** rax_12 = sub_140a491d0(rcx_13.b)
            *(rbx_1 + 0x130) = rax_12
            rcx_13 = rax_12
        
        (*rcx_13)[3](rcx_13)
        int64_t* rcx_14 = *(rbx_1 + 0x138)
        (*(*rcx_14 + 0x10))(rcx_14, rbx_1)
        sub_14239a830(arg1)
        *(arg1 + 0x350) += 1
else if (rax_8 s> rcx_7)
    if (sub_142391d90(*(arg1 + 0x200)) != 0)
        int64_t rbp_2 = 0
        int32_t* rbx_5 = *(arg1 + 0x520)
        uint64_t r14_3 = sx.q(*(arg1 + 0x528)) << 2 u>> 2
        
        if (rbx_5 u> &rbx_5[sx.q(*(arg1 + 0x528))])
            r14_3 = 0
        
        if (r14_3 != 0)
            r15.b = zmm7.d f> (zx.o(0)).d
            
            do
                sub_1423b8300(sx.q(*rbx_5) * 0xd8 + *(arg1 + 0x10))
                rbp_2 += 1
                rbx_5 = &rbx_5[1]
            while (rbp_2 != r14_3)
        
        sub_14239a830(arg1)
        sub_142399a40(arg1, 0)
        void* r14_4 = *(arg1 + 0x200)
        int32_t rbp_3 = 1
        void var_80
        
        if (r14_4 + 0x48 != &var_80)
            int64_t* rcx_42 = *(r14_4 + 0x48)
            *(r14_4 + 0x48) = 0
            
            if (rcx_42 != 0)
                rcx_42[1].d -= 1
                
                if (rcx_42[1].d == 1)
                    (**rcx_42)(rcx_42, 1)
        
        void var_78
        
        if (r14_4 + 0x50 != &var_78)
            int64_t rcx_43 = *(r14_4 + 0x50)
            
            if (rcx_43 != 0)
                sub_140a74f90(rcx_43)
            
            *(r14_4 + 0x50) = 0
            *(r14_4 + 0x58) = 0
        
        *(r14_4 + 0x60) = 0x7f7fffff
        sub_142396850(r14_4 + 0x68, 0)
        int32_t rax_47 = *(arg1 + 0x354) - 1
        
        if (rax_47 s>= 1)
            rbp_3 = rax_47
        
        int128_t zmm1_1
        zmm1_1.d = 1f f/ _mm_cvtepi32_ps(zx.o(rbp_3)).d
        sub_1423915a0(arg1, zmm1_1, 1)
        sub_142393960(arg1 + 0x210)
        *(arg1 + 0x350) = 0
else
    if (rax_8 == 1)
        zmm7 = sub_142397bb0(arg1)
    
    sub_14239a830(arg1)
    int32_t rbp_1 = 1
    int64_t r13
    
    if (r12 == 0 || *data_143f59bf8 == 0)
        r13.b = 0
        sub_14239d050(arg1, *(arg1 + 0x350) - 1, *(arg1 + 0x354), zmm7.d f> 0f, (zx.o(0)).d)
    else
        r13 = 1
        r15 = sub_140a491d0(0)
        int32_t r12_2 = *(arg1 + 0x350) - 1
        void** lpTlsValue_1 = TlsGetValue(data_143cf0950)
        void** lpTlsValue = lpTlsValue_1
        
        if (lpTlsValue_1 == 0)
            void** lpTlsValue_2 = j_sub_140a82f30(0x18)
            lpTlsValue = lpTlsValue_2
            
            if (lpTlsValue_2 == 0)
                lpTlsValue = nullptr
            else
                __builtin_memset(lpTlsValue, 0, 0x14)
            
            TlsSetValue(data_143cf0950, lpTlsValue)
        
        void*** rcx_22 = lpTlsValue[1]
        int32_t rdx_10
        
        if (rcx_22 != 0)
            rdx_10 = lpTlsValue[2].d
        else
            void*** rax_17 = *lpTlsValue
            
            if (rax_17 == 0)
                int64_t rax_18 = sub_14059e7c0(&data_143cf0958)
                lpTlsValue[1] = rax_18
                
                if (rax_18 == 0)
                    int64_t* rax_19 = sub_140a82f70(0x2000, 0)
                    lpTlsValue[1] = rax_19
                    int64_t i_2 = 0x1f
                    int64_t* rcx_23
                    int64_t i_1
                    
                    do
                        rcx_23 = &rax_19[0x20]
                        *rax_19 = rcx_23
                        rax_19 = rcx_23
                        i_1 = i_2
                        i_2 -= 1
                    while (i_1 != 1)
                    *rcx_23 = i_2
                
                rcx_22 = lpTlsValue[1]
                rdx_10 = 0x20
                lpTlsValue[2].d = 0x20
            else
                rdx_10 = 0x20
                *lpTlsValue = rcx_22
                lpTlsValue[2].d = 0x20
                rcx_22 = rax_17
                lpTlsValue[1] = rax_17
        
        lpTlsValue[1] = *rcx_22
        lpTlsValue[2].d = rdx_10 - 1
        rcx_22[1].d = 0xff
        *rcx_22 = &data_142d40498
        int64_t var_90_1 = 0
        int64_t var_88_1 = 0
        *(rcx_22 + 0xc) = 1
        *rcx_22 = &data_143336a80
        rcx_22[6].b = 0
        rcx_22[7] = 0
        *(rcx_22 + 0x24) = *(arg1 + 0x354)
        rcx_22[5].b = zmm7.d f> 0f
        rcx_22[2] = r15
        rcx_22[3] = arg1
        rcx_22[4].d = r12_2
        int64_t* rbx_2 = rcx_22[7]
        int64_t* var_98_1 = rbx_2
        int32_t* r14_1 = &rbx_2[9]
        
        if (rbx_2 != 0)
            *r14_1 += 1
            rbx_2 = var_98_1
        
        sub_142398490(rcx_22, nullptr, 2, 1)
        
        if (rbx_2 != 0)
            int32_t rax_24 = *r14_1
            *r14_1 -= 1
            
            if (rax_24 == 1)
                sub_140a2f6e0(var_98_1)
        
        r12 = rax
    
    int32_t rax_26 = *(arg1 + 0x354) - 1
    
    if (rax_26 s>= 1)
        rbp_1 = rax_26
    
    int128_t zmm1
    zmm1.d = 1f f/ _mm_cvtepi32_ps(zx.o(rbp_1)).d
    sub_1423915a0(arg1, zmm1, 1)
    *(arg1 + 0x350) += 1
    
    if (r13.b != 0)
        (*r15)[4](r15, 0xffffffff, 0)
        sub_140a4fc50(r15)

goto label_14239cca5
