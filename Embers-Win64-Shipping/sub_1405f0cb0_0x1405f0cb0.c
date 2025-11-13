// 函数: sub_1405f0cb0
// 地址: 0x1405f0cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_f8 = -2
void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
int64_t result = sx.q(*(arg2 + 0x5c))

if (result.d s< 0 || result.d s>= arg2[5].d)
    result.b = 0
else
    int64_t* r14_2 = result * 0x70 + arg2[4]
    int64_t* rcx = r14_2[1]
    int64_t var_68
    (*(*rcx + 0x50))(rcx, &data_1434cbb80, &var_68)
    int64_t var_60
    
    if (var_68 != 0x10000073647561 || var_60 != 0x719b3800aa000080)
    label_1405f0d83:
        int64_t* rcx_2 = arg2[6]
        
        if ((*(*rcx_2 + 0x30))(rcx_2, *r14_2).d s< 0)
            result.b = 0
        else
            int32_t* lpCriticalSection_1 = nullptr
            struct IMFActivate var_158 = 0
            int32_t var_198
            int64_t* var_178
            void*** pIMFSampleGrabberSinkCallback_3
            
            if (var_68 != 0x10000073647561 || var_60 != 0x719b3800aa000080)
            label_1405f0efc:
                int64_t* pIMFSampleGrabberSinkCallback_2 = j_sub_140a82f30(0x40)
                int64_t* pIMFSampleGrabberSinkCallback = pIMFSampleGrabberSinkCallback_2
                pIMFSampleGrabberSinkCallback_3 = pIMFSampleGrabberSinkCallback_2
                
                if (pIMFSampleGrabberSinkCallback_2 == 0)
                    pIMFSampleGrabberSinkCallback = nullptr
                else
                    *pIMFSampleGrabberSinkCallback = &data_142d5f290
                    pIMFSampleGrabberSinkCallback[1] = 0
                    pIMFSampleGrabberSinkCallback[2] = 0
                    pIMFSampleGrabberSinkCallback[3] = 2
                    pIMFSampleGrabberSinkCallback[4].d = 0
                    pIMFSampleGrabberSinkCallback[5] = 0
                    pIMFSampleGrabberSinkCallback[6] = 0
                    pIMFSampleGrabberSinkCallback[7] = 2
                
                int64_t* pIMFSampleGrabberSinkCallback_1 = pIMFSampleGrabberSinkCallback
                
                if (pIMFSampleGrabberSinkCallback != 0)
                    (*(*pIMFSampleGrabberSinkCallback + 8))(pIMFSampleGrabberSinkCallback)
                
                int64_t rcx_12 = var_68
                
                if (rcx_12 == 0x10000073647561 && var_60 == 0x719b3800aa000080)
                    var_178 = sub_140594850
                    int32_t var_170_1 = 0
                    int128_t var_b8 = var_178.o
                    var_198 = 0
                    void var_e8
                    sub_1405e9190(&pIMFSampleGrabberSinkCallback[1], &var_e8, arg1, &var_b8, 
                        var_198)
                    var_178 = sub_1405f9690
                    int32_t var_170_2 = 0
                    int128_t var_a8 = var_178.o
                    void var_e0
                    sub_1405e9010(&pIMFSampleGrabberSinkCallback[5], &var_e0, arg1, &var_a8)
                else if (rcx_12 == 0x40cb3dcde69669a0 && var_60 == 0x16067c3808372e9e)
                    var_178 = sub_1405f98b0
                    int32_t var_170_3 = 0
                    int128_t var_98 = var_178.o
                    void var_d8
                    sub_1405e9010(&pIMFSampleGrabberSinkCallback[5], &var_d8, arg1, &var_98)
                else if (rcx_12 == 0x11d5e45b72178c25 && var_60 == -0x540b0c2f4fffd544)
                    var_178 = sub_1405f9a30
                    int32_t var_170_4 = 0
                    int128_t var_88 = var_178.o
                    void var_d0
                    sub_1405e9010(&pIMFSampleGrabberSinkCallback[5], &var_d0, arg1, &var_88)
                else if (rcx_12 == 0x10000073646976 && var_60 == 0x719b3800aa000080)
                    var_178 = sub_1405f9c30
                    int32_t var_170_5 = 0
                    int128_t var_78 = var_178.o
                    void var_c8
                    sub_1405e9010(&pIMFSampleGrabberSinkCallback[5], &var_c8, arg1, &var_78)
                
                if (MFCreateSampleGrabberSinkActivate(r14_2[1], pIMFSampleGrabberSinkCallback, 
                        &var_158) s>= 0)
                    if (pIMFSampleGrabberSinkCallback != 0)
                        (*(*pIMFSampleGrabberSinkCallback + 0x10))(pIMFSampleGrabberSinkCallback)
                    
                    goto label_1405f0ee3
                
                if (pIMFSampleGrabberSinkCallback != 0)
                    (*(*pIMFSampleGrabberSinkCallback + 0x10))(pIMFSampleGrabberSinkCallback)
                
                lpCriticalSection_1.b = 0
            else
                if (*(sub_1405ea680() + 0x2a) == 0)
                    goto label_1405f0efc
                
                if (MFCreateAudioRendererActivate(&var_158) s>= 0)
                    TEB* gsbase
                    lpCriticalSection_1 =
                        *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14
                    
                    if (data_143cd5b60 s> *lpCriticalSection_1)
                        _Init_thread_header(&data_143cd5b60)
                        
                        if (data_143cd5b60 == 0xffffffff)
                            sub_140b58260(&data_143cd5b58, &data_142d408a8, 1)
                            _Init_thread_footer(&data_143cd5b60)
                    
                    int64_t rbx_1 = data_143cd5b58
                    sub_140a387e0()
                    void* r8_1 = data_14399e720
                    
                    if ((*(r8_1 + 8))(&data_14399e720, rbx_1, r8_1) s<= 0)
                    label_1405f0ee3:
                        
                        if (var_158 != 0)
                            struct IMFTopologyNode ppNode = 0
                            int64_t* pIMFSampleGrabberSinkCallback_4 = nullptr
                            pIMFSampleGrabberSinkCallback_3 = nullptr
                            
                            if (data_143f5b298 == 0)
                                goto label_1405f1347
                            
                            if (*(sub_1405ea680() + 0x2b) == 0 || var_68 != 0x10000073646976
                                    || var_60 != 0x719b3800aa000080)
                                goto label_1405f1347
                            
                            if (sub_140b74110(6, 2) == 0)
                                goto label_1405f1347
                            
                            if (sub_1405f3b40("vids", &pIMFSampleGrabberSinkCallback_3) == 0)
                                pIMFSampleGrabberSinkCallback_4 = pIMFSampleGrabberSinkCallback_3
                            label_1405f1347:
                                void* rcx_30 = *(arg1 + 0x160)
                                
                                if (rcx_30 != 0)
                                    sub_1405ee410(rcx_30, 1)
                                
                                int32_t** rax_50 = j_sub_140a82f30(0x10)
                                int32_t** rsi_3 = rax_50
                                int32_t** var_130_2 = rax_50
                                
                                if (rax_50 == 0)
                                    rsi_3 = nullptr
                                else
                                    *rsi_3 = nullptr
                                    rsi_3[1] = 0
                                    int32_t* lpCriticalSection = j_sub_140a82f30(0x60)
                                    lpCriticalSection_1 = lpCriticalSection
                                    int32_t* lpCriticalSection_2 = lpCriticalSection
                                    
                                    if (lpCriticalSection == 0)
                                        lpCriticalSection_1 = nullptr
                                    else
                                        InitializeCriticalSection(lpCriticalSection)
                                        SetCriticalSectionSpinCount(lpCriticalSection_1, 0xfa0)
                                        *(lpCriticalSection_1 + 0x28) = 0
                                        *(lpCriticalSection_1 + 0x30) = 0
                                        int64_t* rax_51 = j_sub_140a82f30(0x10)
                                        int64_t* var_150_2 = rax_51
                                        
                                        if (rax_51 != 0)
                                            *rax_51 = 0
                                        
                                        *(lpCriticalSection_1 + 0x48) = rax_51
                                        *(lpCriticalSection_1 + 0x40) = rax_51
                                        *(lpCriticalSection_1 + 0x50) = 0
                                    
                                    void*** rax_52 = j_sub_140a82f30(0x18)
                                    void*** var_150_3 = rax_52
                                    
                                    if (rax_52 != 0)
                                        rax_52[1].d = 1
                                        *(rax_52 + 0xc) = 1
                                        *rax_52 = &data_142d62cc0
                                        rax_52[2] = lpCriticalSection_1
                                    
                                    *rsi_3 = lpCriticalSection_1
                                    rsi_3[1] = rax_52
                                
                                *(arg1 + 0x160) = rsi_3
                                
                                if (MFCreateTopologyNode(MF_TOPOLOGY_OUTPUT_NODE, &ppNode) s< 0)
                                    lpCriticalSection_1.b = 0
                                else
                                    struct IMFTopologyNode ppNode_5 = ppNode
                                    
                                    if ((*(*ppNode_5 + 0x108))(ppNode_5, var_158) s< 0)
                                        lpCriticalSection_1.b = 0
                                    else
                                        struct IMFTopologyNode ppNode_6 = ppNode
                                        
                                        if ((*(*ppNode_6 + 0xa8))(ppNode_6, &data_142d5b278, 0)
                                                s< 0)
                                            lpCriticalSection_1.b = 0
                                        else
                                            if ((*(*arg3 + 0x110))(arg3, ppNode) s>= 0)
                                                goto label_1405f14a0
                                            
                                            lpCriticalSection_1.b = 0
                            else
                                void*** rax_29 = sub_1405eadc0()
                                void* var_108 = &rax_29[2]
                                void*** rbx_4 = rax_29
                                void*** rdi_2 = rbx_4
                                void*** var_100_1 = rbx_4
                                
                                if (rbx_4 != 0)
                                    rbx_4[1].d += 1
                                    rbx_4 = rax_29
                                
                                if (arg1 + 0x168 != &var_108)
                                    *(arg1 + 0x168) = &rax_29[2]
                                    var_108 = nullptr
                                    int64_t* rsi_1 = *(arg1 + 0x170)
                                    
                                    if (rdi_2 != rsi_1)
                                        int64_t var_100_2 = 0
                                        *(arg1 + 0x170) = rdi_2
                                        rdi_2 = nullptr
                                        
                                        if (rsi_1 != 0)
                                            rsi_1[1].d -= 1
                                            
                                            if (rsi_1[1].d == 1)
                                                (**rsi_1)(rsi_1)
                                                int32_t temp5_1 = *(rsi_1 + 0xc)
                                                *(rsi_1 + 0xc) -= 1
                                                
                                                if (temp5_1 == 1)
                                                    (*(*rsi_1 + 8))(rsi_1, 1)
                                            
                                            rbx_4 = rax_29
                                
                                if (rdi_2 != 0)
                                    rdi_2[1].d -= 1
                                    
                                    if (rdi_2[1].d == 1)
                                        (**rdi_2)(rdi_2)
                                        int32_t temp2_1 = *(rdi_2 + 0xc)
                                        *(rdi_2 + 0xc) -= 1
                                        
                                        if (temp2_1 == 1)
                                            (*rdi_2)[1](rdi_2, 1)
                                    
                                    rbx_4 = rax_29
                                
                                if (rbx_4 != 0)
                                    rbx_4[1].d -= 1
                                    
                                    if (rbx_4[1].d == 1)
                                        (**rbx_4)(rbx_4)
                                        int32_t temp4_1 = *(rbx_4 + 0xc)
                                        *(rbx_4 + 0xc) -= 1
                                        
                                        if (temp4_1 == 1)
                                            (*rbx_4)[1](rbx_4, 1)
                                
                                pIMFSampleGrabberSinkCallback_4 = pIMFSampleGrabberSinkCallback_3
                                EnterCriticalSection(&pIMFSampleGrabberSinkCallback_4[4])
                                int64_t var_128 = *(arg1 + 0x168)
                                int64_t* rsi_2 = *(arg1 + 0x170)
                                
                                if (rsi_2 != 0)
                                    rsi_2[1].d += 1
                                
                                if (&var_128 != &pIMFSampleGrabberSinkCallback_4[0x13])
                                    var_128.o = *(pIMFSampleGrabberSinkCallback_4 + 0x98)
                                    *(pIMFSampleGrabberSinkCallback_4 + 0x98) = var_128.o
                                
                                if (rsi_2 != 0)
                                    rsi_2[1].d -= 1
                                    
                                    if (rsi_2[1].d == 1)
                                        (**rsi_2)(rsi_2)
                                        int32_t temp7_1 = *(rsi_2 + 0xc)
                                        *(rsi_2 + 0xc) -= 1
                                        
                                        if (temp7_1 == 1)
                                            (*(*rsi_2 + 8))(rsi_2, 1)
                                
                                pIMFSampleGrabberSinkCallback_4[0x15] = arg1 + 0x180
                                
                                if (pIMFSampleGrabberSinkCallback_4 != -0x20)
                                    LeaveCriticalSection(&pIMFSampleGrabberSinkCallback_4[4])
                                
                                if (MFCreateTopologyNode(MF_TOPOLOGY_OUTPUT_NODE, &ppNode) s< 0)
                                    lpCriticalSection_1.b = 0
                                else
                                    struct IMFTopologyNode ppNode_2 = ppNode
                                    
                                    if ((*(*ppNode_2 + 0x108))(ppNode_2, 
                                            &pIMFSampleGrabberSinkCallback_4[2]) s< 0)
                                        lpCriticalSection_1.b = 0
                                    else
                                        struct IMFTopologyNode ppNode_3 = ppNode
                                        
                                        if ((*(*ppNode_3 + 0xa8))(ppNode_3, &data_142d5b278, 0)
                                                s< 0)
                                            lpCriticalSection_1.b = 0
                                        else
                                            struct IMFTopologyNode ppNode_4 = ppNode
                                            
                                            if ((*(*ppNode_4 + 0xa8))(ppNode_4, &data_142d5b288, 0)
                                                    s< 0)
                                                lpCriticalSection_1.b = 0
                                            else if ((*(*arg3 + 0x110))(arg3, ppNode) s< 0)
                                                lpCriticalSection_1.b = 0
                                            else
                                                *(arg1 + 0x159) = 1
                                            label_1405f14a0:
                                                struct IMFTopologyNode ppNode_1 = 0
                                                
                                                if (MFCreateTopologyNode(
                                                        MF_TOPOLOGY_SOURCESTREAM_NODE, &ppNode_1) s< 0)
                                                    lpCriticalSection_1.b = 0
                                                else
                                                    struct IMFTopologyNode ppNode_7 = ppNode_1
                                                    
                                                    if ((*(*ppNode_7 + 0xd8))(ppNode_7, 
                                                            &data_142d5b248, *(arg1 + 0xe8)) s< 0)
                                                        lpCriticalSection_1.b = 0
                                                    else
                                                        struct IMFTopologyNode ppNode_8 = ppNode_1
                                                        
                                                        if ((*(*ppNode_8 + 0xd8))(ppNode_8, 
                                                                &data_142d5b258, *(arg1 + 0x140)) s< 0)
                                                            lpCriticalSection_1.b = 0
                                                        else
                                                            struct IMFTopologyNode ppNode_9 =
                                                                ppNode_1
                                                            
                                                            if ((*(*ppNode_9 + 0xd8))(ppNode_9, 
                                                                    &data_142d5b268, *arg2) s< 0)
                                                                lpCriticalSection_1.b = 0
                                                            else if (
                                                                    (*(*arg3 + 0x110))(arg3, ppNode_1) s< 0)
                                                                lpCriticalSection_1.b = 0
                                                            else
                                                                int64_t* rcx_36 = *r14_2
                                                                void var_58
                                                                
                                                                if ((*(*rcx_36 + 0x50))(rcx_36, 
                                                                        &data_1434cbb90, &var_58) s< 0)
                                                                    lpCriticalSection_1.b = 0
                                                                else
                                                                    int64_t* var_168 = nullptr
                                                                    int64_t* var_138 = nullptr
                                                                    void* rax_71 = sub_1405f6d70()
                                                                    int32_t rax_87
                                                                    
                                                                    if (rax_71 == 0)
                                                                    label_1405f166e:
                                                                        struct IMFTopologyNode ppNode_12 =
                                                                            ppNode_1
                                                                        rax_87 = (*(*ppNode_12 + 0x140))(
                                                                            ppNode_12, 0, ppNode, 0, var_198)
                                                                    label_1405f1686:
                                                                        
                                                                        if (rax_87 s>= 0)
                                                                            lpCriticalSection_1.b = 1
                                                                        else
                                                                            lpCriticalSection_1.b = 0
                                                                    else
                                                                        int64_t* rcx_37 = *(rax_71 + 8)
                                                                        var_198.q = &var_138
                                                                        
                                                                        if ((*(*rcx_37 + 0x18))(rcx_37, 
                                                                                &var_68, &var_58, &var_168, var_198)
                                                                                == 0)
                                                                            goto label_1405f166e
                                                                        
                                                                        int64_t* rcx_38 = var_168
                                                                        
                                                                        if (rcx_38 == 0)
                                                                            goto label_1405f166e
                                                                        
                                                                        int64_t* rdx_20 = var_138
                                                                        
                                                                        if (rdx_20 == 0)
                                                                            goto label_1405f166e
                                                                        
                                                                        if ((*(*rcx_38 + 0x108))(rcx_38, rdx_20)
                                                                                s< 0)
                                                                            lpCriticalSection_1.b = 0
                                                                        else
                                                                            int64_t* rcx_39 = var_168
                                                                            
                                                                            if ((*(*rcx_39 + 0xa8))(rcx_39, 
                                                                                    &data_142d5b278, 0) s< 0)
                                                                                lpCriticalSection_1.b = 0
                                                                            else if (
                                                                                    (*(*arg3 + 0x110))(arg3, var_168) s< 0)
                                                                                lpCriticalSection_1.b = 0
                                                                            else
                                                                                struct IMFTopologyNode ppNode_10 =
                                                                                    ppNode_1
                                                                                
                                                                                if ((*(*ppNode_10 + 0x140))(ppNode_10, 
                                                                                        0, var_168, 0) s< 0)
                                                                                    lpCriticalSection_1.b = 0
                                                                                else
                                                                                    int64_t* rcx_41 = var_168
                                                                                    
                                                                                    if ((*(*rcx_41 + 0x140))(rcx_41, 0, 
                                                                                            ppNode, 0) s< 0)
                                                                                        lpCriticalSection_1.b = 0
                                                                                    else
                                                                                        int64_t* rcx_42 = var_168
                                                                                        
                                                                                        if ((*(*rcx_42 + 0xa8))(rcx_42, 
                                                                                                &data_142d5b238, 1) s>= 0)
                                                                                            struct IMFTopologyNode ppNode_11 =
                                                                                                ppNode
                                                                                            rax_87 = (*(*ppNode_11 + 0xa8))(
                                                                                                ppNode_11, &data_142d5b238, 1)
                                                                                            goto label_1405f1686
                                                                                        
                                                                                        lpCriticalSection_1.b = 0
                                                                    int64_t* rcx_43 = var_138
                                                                    
                                                                    if (rcx_43 != 0)
                                                                        (*(*rcx_43 + 0x10))(rcx_43)
                                                                    
                                                                    int64_t* rcx_44 = var_168
                                                                    
                                                                    if (rcx_44 != 0)
                                                                        (*(*rcx_44 + 0x10))(rcx_44)
                                                
                                                struct IMFTopologyNode ppNode_13 = ppNode_1
                                                
                                                if (ppNode_13 != 0)
                                                    (*(*ppNode_13 + 0x10))(ppNode_13)
                            
                            if (pIMFSampleGrabberSinkCallback_4 != 0)
                                (*(*pIMFSampleGrabberSinkCallback_4 + 0x10))(
                                    pIMFSampleGrabberSinkCallback_4)
                            
                            struct IMFTopologyNode ppNode_14 = ppNode
                            
                            if (ppNode_14 != 0)
                                (*(*ppNode_14 + 0x10))(ppNode_14)
                        else
                            lpCriticalSection_1.b = 0
                    else
                        if (data_143cd5b60 s> *lpCriticalSection_1)
                            _Init_thread_header(&data_143cd5b60)
                            
                            if (data_143cd5b60 == 0xffffffff)
                                sub_140b58260(&data_143cd5b58, &data_142d408a8, 1)
                                _Init_thread_footer(&data_143cd5b60)
                        
                        int64_t rbx_2 = data_143cd5b58
                        sub_140a387e0()
                        sub_1405ea6c0(&data_14399e720, &var_178, rbx_2)
                        char var_188
                        int32_t var_170
                        sub_1405ea950(var_178, var_170, var_188)
                        int64_t* rcx_6 = var_178
                        int64_t* rbx_3 = *rcx_6
                        sub_140a74f90(rcx_6)
                        int16_t* var_118
                        (*(*rbx_3 + 0x70))(rbx_3, &var_118)
                        int32_t var_110
                        
                        if (var_110 s<= 1)
                        label_1405f0ed2:
                            int16_t* rcx_10 = var_118
                            
                            if (rcx_10 != 0)
                                sub_140a74f90(rcx_10)
                            
                            goto label_1405f0ee3
                        
                        int16_t* const r8_4 = &data_142d40450
                        
                        if (var_110 != 0)
                            r8_4 = var_118
                        
                        struct IMFActivate rcx_8 = var_158
                        
                        if ((*(*rcx_8 + 0xc8))(rcx_8, &data_142d5b2d8, r8_4) s>= 0)
                            goto label_1405f0ed2
                        
                        int16_t* rcx_9 = var_118
                        
                        if (rcx_9 != 0)
                            sub_140a74f90(rcx_9)
                        
                        lpCriticalSection_1.b = 0
            struct IMFActivate rcx_46 = var_158
            
            if (rcx_46 != 0)
                int64_t rdx_22 = *rcx_46
                (*(rdx_22 + 0x10))(rcx_46, rdx_22)
            
            result = zx.q(lpCriticalSection_1.b)
    else if (waveOutGetNumDevs().d == 0)
        result.b = 0
    else
        int64_t* rcx_1 = data_143f5b298
        
        if (rcx_1 == 0)
        label_1405f0d74:
            
            if (*(sub_1405ea680() + 0x2a) != 0)
                goto label_1405f0d83
            
            result.b = 0
        else
            if ((*(*rcx_1 + 0x388))(rcx_1).b != 0)
                if (data_143f5b298 != 0)
                    goto label_1405f0d83
                
                goto label_1405f0d74
            
            result.b = 0

__security_check_cookie(rax_1 ^ &var_1b8)
return result
