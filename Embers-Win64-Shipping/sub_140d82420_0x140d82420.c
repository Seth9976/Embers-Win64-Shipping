// 函数: sub_140d82420
// 地址: 0x140d82420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2e8
int64_t rax_1 = __security_cookie ^ &var_2e8
int64_t* r15 = arg1
HWND var_248 = arg2
uint128_t zmm6
uint128_t var_58 = zmm6
int64_t* rect
sub_140d7ac60(&rect, &arg1[0x19], arg2)
int64_t* var_250
int64_t* r14 = var_250
uint64_t el

if (r15[0x1a].d == 0)
    el = zx.q(DefWindowProcW(var_248, arg3, arg4, arg5))
else
    int64_t* rect_2 = rect
    
    if (rect_2 == 0)
        el = zx.q(DefWindowProcW(var_248, arg3, arg4, arg5))
    else
        if (r14 != 0)
            r14[1].d += 1
        
        TEB* gsbase
        void* rdi_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
        bool var_298
        
        if (data_143e20ba0 s> *(rdi_1 + 0x14))
            _Init_thread_header(&data_143e20ba0)
            
            if (data_143e20ba0 == 0xffffffff)
                sub_140d73c60(&var_298, &data_143e20b50)
                atexit(sub_142cc9b20)
                _Init_thread_footer(&data_143e20ba0)
        
        if (data_143e20c00 s> *(rdi_1 + 0x14))
            _Init_thread_header(&data_143e20c00)
            
            if (data_143e20c00 == 0xffffffff)
                sub_140d74070(&var_298, &data_143e20bb0)
                atexit(sub_142cc9ab0)
                _Init_thread_footer(&data_143e20c00)
        
        if (data_143e20c60 s> *(rdi_1 + 0x14))
            _Init_thread_header(&data_143e20c60)
            
            if (data_143e20c60 == 0xffffffff)
                sub_140d74fc0(&var_298, &data_143e20c10)
                atexit(sub_142cc9ae0)
                _Init_thread_footer(&data_143e20c60)
        
        int64_t rax_7 = sx.q(r15[0x18].d)
        el = 0
        int64_t* rcx_2 = r15[0x17]
        bool r8_1 = false
        var_298 = false
        uint32_t r9 = 0
        uint32_t pcbSize = 0
        uint64_t dueTime_1 = rax_7 << 3 u>> 3
        
        if (rcx_2 u> &rcx_2[rax_7])
            dueTime_1 = 0
        
        int64_t dueTime = dueTime_1
        LPARAM var_2c8
        int32_t* var_2c0
        uint32_t var_28c
        
        if (dueTime_1 != 0)
            HWND r14_1 = var_248
            int64_t* r12_1 = rcx_2
            int64_t r15_1 = 0
            
            do
                int64_t* rcx_3 = *r12_1
                var_2c0 = &var_28c
                var_28c = 0
                var_2c8 = arg5
                char rax_10 = (**rcx_3)(rcx_3, r14_1, zx.q(arg3), arg4, var_2c8, var_2c0)
                r8_1 = var_298
                
                if (rax_10 == 0 || r8_1 != 0)
                    r9 = pcbSize
                else
                    r9 = var_28c
                    r8_1 = true
                    var_298 = true
                    pcbSize = r9
                
                r12_1 = &r12_1[1]
                r15_1 += 1
            while (r15_1 != dueTime)
            
            r14 = var_250
            r15 = arg1
            rect_2 = rect
        
        int64_t pcbSize_4
        int64_t* var_230
        int32_t pwi
        int128_t var_1f4
        uint32_t r9_14
        
        if (arg3 u<= 0xff)
            uint128_t zmm1
            
            if (arg3 == 0xff)
                pcbSize = 0
                var_2c8.d = 0x18
                GetRawInputData(arg5, RID_INPUT, nullptr, &pcbSize, var_2c8.d)
                int64_t pcbSize_1 = zx.q(pcbSize)
                pcbSize_4 = pcbSize_1
                int32_t* pData_1 = j_sub_140a82f30(zx.q(pcbSize_1.d))
                int32_t* pData = pData_1
                
                if (pData_1 == 0)
                    pData = nullptr
                else
                    memset(pData_1, 0, pcbSize_4)
                
                var_2c8.d = 0x18
                uint32_t rax_103
                int32_t rcx_72
                rax_103, rcx_72 = GetRawInputData(arg5, RID_INPUT, pData, &pcbSize, var_2c8.d)
                
                if (rax_103 != pcbSize || *pData != 0)
                    j_sub_140a74f90(pData)
                    goto label_140d83553
                
                if ((pData[6].b & 1) == 0)
                    sub_140d78c30(r15, &rect, var_248, 0xff, arg4, arg5, pData[9], pData[0xa], 0)
                else if (r15[0x3c].b == 0)
                    sub_140d78c30(r15, &rect, var_248, 0xff, arg4, arg5, 0, 0, 1)
                else
                    bool rbx_13 = pData[6].b u>> 1 & 1
                    var_298 = rbx_13
                    int32_t var_294_1
                    
                    if (rbx_13 == 0)
                        var_28c = 0
                        var_294_1 = 0
                    else
                        var_28c = GetSystemMetrics(SM_XVIRTUALSCREEN)
                        int32_t rax_105
                        rax_105, rcx_72 = GetSystemMetrics(SM_YVIRTUALSCREEN)
                        var_294_1 = rax_105
                    
                    int32_t rax_107 = GetSystemMetrics(sbb.d(rcx_72, rcx_72, rbx_13 != 0) & 0x4e)
                    enum SYSTEM_METRICS_INDEX nIndex = SM_CYSCREEN
                    
                    if (var_298 != 0)
                        nIndex = SM_CYVIRTUALSCREEN
                    
                    int32_t rax_108 = GetSystemMetrics(nIndex)
                    int32_t r11_2 = r15[0x40].d
                    int32_t rdx_36 = *(r15 + 0x204)
                    zmm1.d = _mm_cvtepi32_ps(zx.o(pData[9])).d f* -1.52590219e-05f
                    uint32_t rbx_15 = var_28c
                    zmm1.d = zmm1.d f* _mm_cvtepi32_ps(zx.o(rax_107)).d
                    uint128_t zmm0_5 = _mm_cvtepi32_ps(zx.o(rax_108))
                    int32_t rcx_75 = int.d(zmm1.d)
                    zmm1 = _mm_cvtepi32_ps(zx.o(pData[0xa]))
                    int32_t rbx_16 = rbx_15 - rcx_75
                    int32_t rcx_76 = *(r15 + 0x1fc)
                    int32_t var_278_1 = rbx_16
                    int32_t r10_2 = rbx_16 - *(r15 + 0x1ec)
                    int64_t* var_268
                    var_268.d = r10_2
                    zmm1.d = zmm1.d f* -1.52590219e-05f
                    zmm1.d = zmm1.d f* zmm0_5.d
                    int32_t r8_18 = var_294_1 - int.d(zmm1.d)
                    int32_t var_294_2 = r8_18
                    int32_t var_274_1 = r8_18
                    uint32_t r9_13 = r8_18 - r15[0x3e].d
                    uint128_t zmm4_1 = _mm_cvtepi32_ps(zx.o(r15[0x41].d - r11_2))
                    zmm0_5.d = zmm4_1.d f* 0.400000006f
                    dueTime.d = int.d(zmm0_5.d)
                    uint128_t zmm3 = _mm_cvtepi32_ps(zx.o(*(r15 + 0x20c) - rdx_36))
                    zmm0_5.d = zmm3.d f* 0.400000006f
                    pcbSize_4.d = int.d(zmm0_5.d)
                    *(r15 + 0x1fc) = rcx_76 - 1
                    
                    if (rcx_76 s<= 0)
                        goto label_140d83246
                    
                    uint32_t rax_118 = r8_18 - r15[0x3f].d
                    int32_t r11_4 = rbx_16 - *(r15 + 0x1f4)
                    var_28c = rax_118
                    
                    if (rax_118 * rax_118 + r11_4 * r11_4 s>= r9_13 * r9_13 + r10_2 * r10_2)
                        rdx_36 = *(r15 + 0x204)
                        r11_2 = r15[0x40].d
                    label_140d83246:
                        zmm0_5.d = zmm3.d f* -0.100000001f
                        zmm3.d = zmm3.d f* -0.899999976f
                        int32_t rax_123 = int.d(zmm0_5.d)
                        zmm0_5 = zmm4_1
                        zmm4_1.d = zmm4_1.d f* -0.899999976f
                        zmm0_5.d = zmm0_5.d f* -0.100000001f
                        var_28c = rdx_36 - rax_123
                        int32_t rdx_40 = rdx_36 - int.d(zmm3.d)
                        int32_t rcx_83 = r11_2 - int.d(zmm0_5.d)
                        int32_t r11_5 = r11_2 - int.d(zmm4_1.d)
                        uint32_t rax_126
                        rax_126.b = 0
                        
                        if (r8_18 s< var_28c)
                            r8_18 = rdx_40 - 0x32
                            rax_126.b = 1
                            var_294_2 = r8_18
                        else if (r8_18 s> rdx_40)
                            r8_18 = var_28c + 0x32
                            rax_126.b = 1
                            var_294_2 = r8_18
                        
                        if (rbx_16 s>= rcx_83)
                            if (rbx_16 s> r11_5)
                                rbx_16 = rcx_83 + 0x32
                                goto label_140d832c4
                            
                            if (rax_126.b != 0)
                                goto label_140d832c4
                        else
                            rbx_16 = r11_5 - 0x32
                        label_140d832c4:
                            int64_t* rcx_84 = r15[3]
                            zmm0_5 = _mm_cvtepi32_ps(zx.o(rbx_16))
                            zmm1 = _mm_cvtepi32_ps(zx.o(r8_18))
                            var_28c = zmm0_5.d
                            int32_t var_288_1 = zmm1.d
                            (*(*rcx_84 + 0x1a8))(rcx_84, &var_28c)
                            r10_2 = var_268.d
                            *(r15 + 0x1f4) = var_278_1
                            r15[0x3f].d = var_274_1
                            *(r15 + 0x1fc) = 0xa
                        
                        r15[0x3e].d = var_294_2
                        *(r15 + 0x1ec) = rbx_16
                    else
                        r9_13 = var_28c
                        r10_2 = r11_4
                        *(r15 + 0x1f4) = rbx_16
                        r15[0x3f].d = r8_18
                    
                    if (r10_2 != 0 || r9_13 != 0)
                        int32_t temp35_1
                        int32_t temp36_1
                        temp35_1:temp36_1 = sx.q(r10_2)
                        
                        if ((temp36_1 ^ temp35_1) - temp35_1 s< dueTime.d)
                            int32_t temp37_1
                            int32_t temp38_1
                            temp37_1:temp38_1 = sx.q(r9_13)
                            
                            if ((temp38_1 ^ temp37_1) - temp37_1 s< pcbSize_4.d)
                                sub_140d78c30(r15, &rect, var_248, 0xff, arg4, arg5, r10_2, r9_13, 
                                    0)
                
                j_sub_140a74f90(pData)
                el = 1
                goto label_140d83955
            
            uint64_t rax_11 = zx.q(arg3 - 1)
            
            if (rax_11.d u> 0xa6)
                goto label_140d83949
            
            switch (rax_11)
                case 0
                    goto label_140d83955
                case 1
                    int64_t pcbSize_7 = sx.q(r15[0x1a].d)
                    uint32_t rbx
                    
                    if (pcbSize_7.d != 0)
                        pcbSize_4 = pcbSize_7
                        int64_t rax_71 = r15[0x19]
                        rbx = 0
                        var_28c = 0
                        uint32_t pcbSize_2 = 0
                        int64_t pcbSize_9 = pcbSize_7
                        int64_t rsi_3 = 0
                        bool r11_1 = *rax_71 != rect_2
                        var_298 = r11_1
                        
                        do
                            int64_t pcbSize_5 = sx.q(pcbSize_2)
                            rsi_3 += 1
                            uint32_t pcbSize_3 = pcbSize_2 + 1
                            pcbSize = pcbSize_3
                            
                            if (rsi_3 s< pcbSize_9)
                                int64_t rcx_43 = (rsi_3 << 4) + r15[0x19]
                                
                                do
                                    int32_t rax_72
                                    rax_72.b = *rcx_43 != rect_2
                                    
                                    if (zx.d(r11_1) != rax_72)
                                        break
                                    
                                    pcbSize_3 += 1
                                    rsi_3 += 1
                                    rcx_43 += 0x10
                                while (rsi_3 s< pcbSize_9)
                                
                                pcbSize = pcbSize_3
                            
                            int32_t i_1 = pcbSize_3 - pcbSize_5.d
                            
                            if (r11_1 != 0)
                                if (rbx != pcbSize_5.d)
                                    memmove((sx.q(rbx) << 4) + r15[0x19], 
                                        (pcbSize_5 << 4) + r15[0x19], i_1 << 4)
                                    pcbSize_9 = pcbSize_4
                                    r11_1 = var_298
                                
                                rbx += i_1
                                var_28c = rbx
                            else if (i_1 != 0)
                                int64_t* r13_4 = (pcbSize_5 << 4) + 8 + r15[0x19]
                                int32_t i
                                
                                do
                                    int64_t* rbx_7 = *r13_4
                                    
                                    if (rbx_7 != 0)
                                        rbx_7[1].d -= 1
                                        
                                        if (rbx_7[1].d == 1)
                                            (**rbx_7)(rbx_7)
                                            int32_t temp30_1 = *(rbx_7 + 0xc)
                                            *(rbx_7 + 0xc) -= 1
                                            
                                            if (temp30_1 == 1)
                                                (*(*rbx_7 + 8))(rbx_7, 1)
                                    
                                    r13_4 = &r13_4[2]
                                    i = i_1
                                    i_1 -= 1
                                while (i != 1)
                                pcbSize_9 = pcbSize_4
                                rbx = var_28c
                                r11_1 = var_298
                            
                            pcbSize_2 = pcbSize
                            r11_1 ^= 1
                            rect_2 = rect
                            var_298 = r11_1
                        while (rsi_3 s< pcbSize_9)
                        
                        r15[0x1a].d = rbx
                        r14 = var_250
                    
                    void* rax_75 = r15[6]
                    int64_t* rect_1 = r15[5]
                    rect = rect_1
                    void* var_250_1 = rax_75
                    
                    if (rax_75 != 0)
                        *(rax_75 + 8) += 1
                    
                    if (rect_1[1].b == 0 || data_143e206e0 == 0)
                        rbx.b = 0
                    else
                        rbx.b = 1
                    
                    sub_140597060(&rect)
                    
                    if (rbx.b != 0)
                        UiaReturnRawElementProvider(var_248, 0, 0, 0)
                    
                    goto label_140d83955
                case 2
                    if (data_1439ae4f0 == sx.d(arg5.w) && data_1439ae4f4 == sx.d((arg5 u>> 0x10).w))
                        goto label_140d83553
                    
                    rect.o = rect.o
                    
                    if (r14 != 0)
                        r14[1].d += 1
                    
                    int64_t* rcx_24 = r15[3]
                    (*(*rcx_24 + 0x140))(rcx_24, &rect)
                    goto label_140d82898
                case 3, 6, 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 0x10, 0x11, 0x12, 0x14, 0x15, 0x16, 0x18, 
                        0x1a, 0x1c, 0x1d, 0x1e, 0x21, 0x22, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 
                        0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 
                        0x36, 0x37, 0x38, 0x39, 0x3a, 0x3b, 0x3d, 0x3e, 0x3f, 0x40, 0x41, 0x42, 
                        0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 
                        0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5a, 0x5b, 0x5c, 
                        0x5d, 0x5e, 0x5f, 0x60, 0x61, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 
                        0x69, 0x6a, 0x6b, 0x6c, 0x6d, 0x6e, 0x6f, 0x70, 0x71, 0x72, 0x73, 0x74, 
                        0x75, 0x76, 0x77, 0x78, 0x79, 0x7a, 0x7b, 0x7c, 0x7e, 0x7f, 0x80, 0x81, 
                        0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f, 0x90, 0x91, 0x92, 
                        0x93, 0x94, 0x95, 0x96, 0x97, 0x98, 0x99, 0x9a, 0x9b, 0x9c, 0x9d, 0x9e, 
                        0xa1, 0xa2, 0xa4, 0xa5
                    goto label_140d83949
                case 4
                    sub_140d78c30(r15, &rect, var_248, arg3, arg4, arg5, 0, 0, 0)
                    
                    if ((arg4 & 0xfffffffffffffffd) != 0)
                        goto label_140d83955
                    
                    rect.o = rect.o
                    
                    if (r14 != 0)
                        r14[1].d += 1
                    
                    int64_t* rcx_21 = r15[3]
                    (*(*rcx_21 + 0x1a0))(rcx_21, &rect, zx.q((zx.d(arg4 == 2) ^ 1) + 2))
                label_140d82898:
                    
                    if (var_250 == 0)
                        goto label_140d83955
                    
                    var_250[1].d -= 1
                    
                    if (var_250[1].d == 1)
                        (**var_250)(var_250)
                        int32_t temp18_1 = *(var_250 + 0xc)
                        *(var_250 + 0xc) -= 1
                        
                        if (temp18_1 == 1)
                            (*(*var_250 + 8))(var_250, 1)
                    
                    goto label_140d83955
                case 5, 0x17, 0x20
                    goto label_140d8344d
                case 0xe
                    if (r15[0x23].b == 0)
                        goto label_140d83553
                    
                    uint32_t rax_61
                    
                    if (data_143de5480 != 0)
                        rax_61.b = GetCurrentThreadId() == data_143de5470
                    
                    if (data_143de5480 != 0 && rax_61.b == 0)
                        goto label_140d83553
                    
                    if (r14 != 0)
                        r14[1].d += 1
                    
                    pcbSize_4.o = rect.o
                    
                    if (r14 != 0)
                        r14[1].d += 1
                    
                    int64_t* rcx_34 = r15[3]
                    (*(*rcx_34 + 0x108))(rcx_34, &pcbSize_4)
                    
                    if (var_230 != 0)
                        var_230[1].d -= 1
                        
                        if (var_230[1].d == 1)
                            (**var_230)(var_230)
                            int32_t temp24_1 = *(var_230 + 0xc)
                            *(var_230 + 0xc) -= 1
                            
                            if (temp24_1 == 1)
                                (*(*var_230 + 8))(var_230, 1)
                    
                    if (r14 != 0)
                        r14[1].d -= 1
                        
                        if (r14[1].d == 1)
                            (**r14)(r14)
                            int32_t temp26_1 = *(r14 + 0xc)
                            *(r14 + 0xc) -= 1
                            
                            if (temp26_1 == 1)
                                (*(*r14 + 8))(r14, 1)
                        
                        goto label_140d83553
                    
                    el = zx.q(DefWindowProcW(var_248, arg3, arg4, arg5))
                case 0xf, 0x4f, 0x50, 0x9f
                label_140d836c8:
                    sub_140d78c30(r15, &rect, var_248, arg3, arg4, arg5, 0, 0, 0)
                    goto label_140d83955
                case 0x13
                label_140d83906:
                    el = 1
                    goto label_140d83955
                case 0x19
                    if (arg5 != 0)
                        int64_t rcx_33 = -1
                        
                        while ((*ConvertibleSlateMode")[1 + rcx_33] == *(arg5 + (rcx_33 << 1) + 2))
                            rcx_33 += 2
                            
                            if (rcx_33 == 0x15)
                                goto label_140d8344d
                            
                            if ((*u"ConvertibleSlateMode")[rcx_33] != *(arg5 + (rcx_33 << 1)))
                                break
                    
                    goto label_140d83553
                case 0x1b
                label_140d8391a:
                    r15[0x23].b = 0
                label_140d8344d:
                    r9_14 = arg3
                    goto label_140d83471
                case 0x1f
                    sub_140d78c30(r15, &rect, var_248, arg3, arg4, arg5, 0, 0, 0)
                    
                    if (*((*(*rect_2 + 0xe0))(rect_2) + 0x18) == 0)
                        goto label_140d83955
                    
                    goto label_140d83553
                case 0x23
                    rect.o = rect.o
                    
                    if (r14 != 0)
                        r14[1].d += 1
                    
                    int64_t* rcx_51 = r15[3]
                    (*(*rcx_51 + 0x110))(rcx_51, &pcbSize_4, &rect)
                    int32_t zmm0_3 = sub_140597060(&rect)
                    int32_t rbx_8 = 0
                    int32_t r15_2 = 0
                    
                    if (*((*(*rect_2 + 0xe0))(rect_2) + 0x18) != 0)
                        enum WINDOW_STYLE dwStyle = GetWindowLongW(var_248, 0xfffffff0)
                        int32_t dwExStyle = GetWindowLongW(var_248, 0xffffffec)
                        zmm0_3 = (zx.o(0)).d
                        rect.o = zx.o(0)
                        AdjustWindowRectEx(&rect, dwStyle, 0, dwExStyle)
                        rbx_8 = var_250.d - rect.d
                        r15_2 = var_250:4.d - rect:4.d
                    
                    (*(*rect_2 + 0xf8))(rect_2)
                    zmm1 = _mm_cvtepi32_ps(zx.o(*(arg5 + 0x18)))
                    
                    if (pcbSize_4:4.b != 0)
                        zmm1 = pcbSize_4.d
                    
                    zmm1.d = zmm1.d f* zmm0_3
                    zmm1.d = zmm1.d f+ zmm1.d
                    zmm1.d = zmm1.d f+ 0.5f
                    int32_t rax_80 = int.d(zmm1.d)
                    zmm1 = zx.o(*(arg5 + 0x1c))
                    *(arg5 + 0x18) = rax_80 s>> 1
                    zmm1 = _mm_cvtepi32_ps(zmm1)
                    
                    if (var_230:4.b != 0)
                        zmm1 = var_230.d
                    
                    zmm1.d = zmm1.d f* zmm0_3
                    zmm1.d = zmm1.d f+ zmm1.d
                    zmm1.d = zmm1.d f+ 0.5f
                    int32_t rax_82 = int.d(zmm1.d)
                    zmm1 = zx.o(*(arg5 + 0x20))
                    *(arg5 + 0x1c) = rax_82 s>> 1
                    zmm1 = _mm_cvtepi32_ps(zmm1)
                    int72_t var_224
                    int32_t var_228
                    
                    if (var_224.b != 0)
                        zmm1 = var_228
                    zmm1.d = zmm1.d f* zmm0_3
                    zmm1.d = zmm1.d f+ zmm1.d
                    zmm1.d = zmm1.d f+ 0.5f
                    int32_t rax_84 = int.d(zmm1.d)
                    zmm1 = zx.o(*(arg5 + 0x24))
                    *(arg5 + 0x20) = (rax_84 s>> 1) + rbx_8
                    zmm1 = _mm_cvtepi32_ps(zmm1)
                    
                    if (var_224:8.b != 0)
                        zmm1 = var_224:4.d
                    
                    zmm1.d = zmm1.d f* zmm0_3
                    zmm1.d = zmm1.d f+ zmm1.d
                    zmm1.d = zmm1.d f+ 0.5f
                    *(arg5 + 0x24) = (int.d(zmm1.d) s>> 1) + r15_2
                    goto label_140d83955
                case 0x3c
                    void* rax_101 = r15[6]
                    int64_t pcbSize_8 = r15[5]
                    pcbSize_4 = pcbSize_8
                    void* var_230_1 = rax_101
                    
                    if (rax_101 != 0)
                        *(rax_101 + 8) += 1
                    
                    if (*(pcbSize_8 + 8) == 0 || data_143e206e0 == 0)
                        rect_2.b = 0
                    else
                        rect_2.b = 1
                    
                    sub_140597060(&pcbSize_4)
                    
                    if (rect_2.b == 0)
                        goto label_140d83553
                    
                    rect.o = rect.o
                    
                    if (r14 != 0)
                        r14[1].d += 1
                    
                    void* rax_102 = sub_140d7db60(r15[0x34], &rect)
                    
                    if (rax_102 != 0)
                        el = rax_102 + 0x28
                    
                    LRESULT el_1 = UiaReturnRawElementProvider(var_248, arg4, arg5, el)
                    int64_t rdx_35 = *(rax_102 + 0x28)
                    el = el_1
                    (*(rdx_35 + 0x10))(rax_102 + 0x28, rdx_35)
                    goto label_140d83955
                case 0x7d
                    int64_t var_1f0_1 = 0
                    int128_t var_1b8
                    __builtin_memset(&var_1b8, 0, 0x20)
                    int64_t var_1e8_1 = 0
                    sub_140d84bf0(&pwi)
                    *(r15 + 0x4c) += 1
                    int32_t rax_96 = r15[8].d
                    int64_t* rcx_61
                    rcx_61.b = 0
                    int32_t rdx_31 = *(r15 + 0x4c)
                    int64_t r15_4 = sx.q(rax_96 - 1)
                    var_298 = false
                    
                    if (rax_96 - 1 s>= 0)
                        int64_t rdi_7 = r15_4 << 4
                        int64_t temp16_1
                        
                        do
                            rcx_61 = r15[7]
                            
                            if (*(rdi_7 + rcx_61 + 8) == 0)
                                rcx_61.b = 1
                                var_298 = true
                            else
                                rcx_61 = *(rdi_7 + rcx_61)
                                
                                if (rcx_61 == 0)
                                    rcx_61.b = 1
                                    var_298 = true
                                else
                                    char rax_99
                                    rax_99, rcx_61 = (*(*rcx_61 + 0x50))(rcx_61, &pwi)
                                    
                                    if (rax_99 != 0)
                                        rcx_61 = zx.q(var_298)
                                    else
                                        rcx_61.b = 1
                                        var_298 = true
                            
                            rdi_7 -= 0x10
                            temp16_1 = r15_4
                            r15_4 -= 1
                        while (temp16_1 - 1 s>= 0)
                        rdx_31 = *(r15 + 0x4c)
                    
                    *(r15 + 0x4c) = rdx_31 - 1
                    
                    if (rcx_61.b != 0)
                        sub_140599630(&r15[7], 0)
                    
                    sub_140d72800(&var_1f4:4)
                    goto label_140d83553
                case 0x82
                    if (arg4 == 0)
                        goto label_140d83553
                    
                    if (*((*(*rect_2 + 0xe0))(rect_2) + 0x18) != 0)
                        goto label_140d83553
                    
                    int32_t* rax_18 = (*(*rect_2 + 0xe0))(rect_2)
                    char rax_20
                    
                    if (*rax_18 == 5)
                        rax_20 = (*(*rect_2 + 0x70))(rect_2)
                    
                    if (*rax_18 != 5 || rax_20 == 0)
                        QueryPerformanceFrequency(&pcbSize_4)
                        var_194
                        memset(&var_194, 0, 0x120)
                        struct DWM_TIMING_INFO timingInfo
                        timingInfo.cbSize = 0x124
                        
                        if (DwmGetCompositionTimingInfo(nullptr, &timingInfo) s>= 0)
                            QueryPerformanceCounter(&var_248)
                            uint64_t qpcRefreshPeriod = timingInfo.qpcRefreshPeriod
                            int64_t rbx_2 = timingInfo.qpcVBlank - var_248
                            int64_t rax_33 = divs.dp.q(sx.o(rbx_2), qpcRefreshPeriod)
                            
                            if (rbx_2 s< 0)
                                rax_33 -= 1
                            
                            int64_t rbx_3 = rbx_2 - rax_33 * qpcRefreshPeriod
                            HANDLE rax_35 = CreateWaitableTimerW(nullptr, 1, nullptr)
                            
                            if (rax_35 != 0)
                                int64_t pcbSize_6 = pcbSize_4
                                zmm6 = zx.o(0)
                                float zmm0_1[0x2]
                                
                                if (pcbSize_6 s> 0)
                                    double zmm2[0x2] = zx.o(0)
                                    zmm0_1 = (zx.o(0)).q
                                    int64_t rdx_11 = 0
                                    zmm0_1[0] = float.s(pcbSize_6)
                                    
                                    if (rbx_3 != qpcRefreshPeriod)
                                        rdx_11 = rbx_3
                                    
                                    zmm2[0] = float.d(rdx_11)
                                    uint128_t temp0_2 = _mm_cvtps_pd(zmm0_1)
                                    zmm2[0] = zmm2[0] * 1000.0
                                    zmm2[0] = zmm2[0] f/ temp0_2.q
                                    zmm6 = _mm_cvtpd_ps(zmm2)
                                
                                zmm0_1 = zmm6.q
                                var_2c0.d = 0
                                zmm0_1[0] = zmm0_1[0] * 10000f
                                int64_t lpArgToCompletionRoutine = 0
                                dueTime = neg.q(int.q(zmm0_1[0]))
                                
                                if (SetWaitableTimer(rax_35, &dueTime, 0, nullptr, 
                                        lpArgToCompletionRoutine, var_2c0.d) != 0)
                                    WaitForSingleObject(rax_35, (int.q(zmm6.d)).d + 0xa)
                                
                                CloseHandle(rax_35)
                    else
                        HWND hwnd = var_248
                        pcbSize_4.d = 0x3c
                        __builtin_memset(&pcbSize_4:4, 0, 0x38)
                        GetWindowInfo(hwnd, &pcbSize_4)
                        int128_t var_214
                        int32_t r9_3 = var_214:0xc.d
                        *(arg5 + 0xc) -= r9_3
                        int32_t rax_21 = *(arg5 + 0xc)
                        *arg5 += r9_3
                        *(arg5 + 4) += r9_3
                        *(arg5 + 8) -= r9_3
                        int32_t rcx_9 = *(arg5 + 8)
                        int32_t r8_4 = *arg5
                        int32_t rdx_7 = *(arg5 + 4)
                        *(arg5 + 0x1c) = rax_21
                        void* rax_22 = *(arg5 + 0x30)
                        *(arg5 + 0x18) = rcx_9
                        *(arg5 + 0x10) = r8_4
                        *(arg5 + 0x14) = rdx_7
                        *(rax_22 + 0x10) += r9_3
                        void* rcx_10 = *(arg5 + 0x30)
                        *(rcx_10 + 0x14) += var_214:0xc.d
                        void* rcx_11 = *(arg5 + 0x30)
                        *(rcx_11 + 0x18) += neg.d(var_214:0xc.d) * 2
                        void* rcx_12 = *(arg5 + 0x30)
                        *(rcx_12 + 0x1c) += neg.d(var_214:0xc.d) * 2
                        el = 0x400
                    
                    goto label_140d83955
                case 0x83
                    if (*((*(*rect_2 + 0xe0))(rect_2) + 0x18) != 0)
                        goto label_140d83553
                    
                    GetWindowRect(var_248, &pcbSize_4)
                    int32_t rdi_3 = sx.d(arg5.w) - pcbSize_4.d
                    var_28c = sx.d((arg5 u>> 0x10).w) - pcbSize_4:4.d
                    
                    if (*(rect_2[1] + 0x25) == 0)
                        goto label_140d83553
                    
                    zmm6 = rect.o
                    rect.o = zmm6
                    
                    if (r14 != 0)
                        r14[1].d += 1
                    
                    int64_t* rcx_27 = r15[3]
                    char rax_53 = (*(*rcx_27 + 8))(rcx_27, &rect)
                    
                    if (var_250 != 0)
                        var_250[1].d -= 1
                        
                        if (var_250[1].d == 1)
                            int64_t rdx_21 = *var_250
                            (*rdx_21)(var_250, rdx_21)
                            int32_t temp19_1 = *(var_250 + 0xc)
                            *(var_250 + 0xc) -= 1
                            
                            if (temp19_1 == 1)
                                (*(*var_250 + 8))(var_250, 1)
                    
                    int32_t rdi_4
                    
                    if (rax_53 == 0)
                        rdi_4 = 5
                    else
                        rect.o = zmm6
                        
                        if (r14 != 0)
                            r14[1].d += 1
                        
                        int64_t* rcx_30 = r15[3]
                        rdi_4 = (*(*rcx_30 + 0x160))(rcx_30, &rect, zx.q(rdi_3), zx.q(var_28c), 
                            var_2c8, var_2c0)
                        
                        if (var_250 != 0)
                            var_250[1].d -= 1
                            
                            if (var_250[1].d == 1)
                                int64_t rdx_23 = *var_250
                                (*rdx_23)(var_250, rdx_23)
                                int32_t temp29_1 = *(var_250 + 0xc)
                                *(var_250 + 0xc) -= 1
                                
                                if (temp29_1 == 1)
                                    (*(*var_250 + 8))(var_250, 1)
                    
                    el = zx.q(*((sx.q(rdi_4) << 3) + 0x142ec0ec0))
                    goto label_140d83955
                case 0x84
                    if (*((*(*rect_2 + 0xe0))(rect_2) + 0x18) != 0)
                        goto label_140d83553
                    
                    goto label_140d83955
                case 0x85
                    if (*((*(*rect_2 + 0xe0))(rect_2) + 0x18) != 0)
                        goto label_140d83553
                    
                    el = 1
                    goto label_140d83955
                case 0x86
                    el = 4
                label_140d83955:
                    
                    if (r14 != 0)
                        r14[1].d -= 1
                        
                        if (r14[1].d == 1)
                            (**r14)(r14)
                            int32_t temp13_1 = *(r14 + 0xc)
                            *(r14 + 0xc) -= 1
                            
                            if (temp13_1 == 1)
                                (*(*r14 + 8))(r14, 1)
                case 0xa0, 0xa3, 0xa6
                    if (arg4 != 2 && arg4 != 8 && arg4 != 9 && arg4 != 0x14)
                        goto label_140d83553
                    
                    rect.o = rect.o
                    
                    if (r14 != 0)
                        r14[1].d += 1
                    
                    int64_t* rcx_58 = r15[3]
                    char rax_95 = (*(*rcx_58 + 0x1a0))(rcx_58, &rect, 1)
                    sub_140597060(&rect)
                    
                    if (rax_95 != 0)
                        goto label_140d83553
                    
                    el = 1
                    goto label_140d83955
        else if (arg3 u> 0x112)
            if (arg3 u> 0x31e)
            label_140d83949:
                
                if (r8_1 == 0)
                    goto label_140d83553
                
                el = zx.q(r9)
                goto label_140d83955
            
            if (arg3 == 0x31e)
                r9_14 = 0x31e
            label_140d83471:
                sub_140d78c30(r15, &rect, var_248, r9_14, arg4, arg5, 0, 0, 0)
            label_140d83553:
                
                if (r14 == 0)
                    el = zx.q(DefWindowProcW(var_248, arg3, arg4, arg5))
                else
                    r14[1].d -= 1
                    
                    if (r14[1].d == 1)
                        (**r14)(r14)
                        int32_t temp11_1 = *(r14 + 0xc)
                        *(r14 + 0xc) -= 1
                        
                        if (temp11_1 == 1)
                            (*(*r14 + 8))(r14, 1)
                    
                    el = zx.q(DefWindowProcW(var_248, arg3, arg4, arg5))
            else
                uint64_t rax_162 = zx.q(arg3 - 0x200)
                
                if (rax_162.d u> 0xe0)
                    goto label_140d83949
                
                switch (rax_162)
                    case 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 0x40, 0x81, 0x82, 0x86, 
                            0x88
                        goto label_140d836c8
                    case 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x15, 0x16, 0x17, 0x18, 0x1a, 0x1b, 
                            0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 
                            0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f, 0x30, 0x33, 0x34, 0x35, 
                            0x36, 0x37, 0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x3f, 0x41, 0x42, 
                            0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 
                            0x4f, 0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5a, 
                            0x5b, 0x5c, 0x5d, 0x5e, 0x5f, 0x60, 0x61, 0x62, 0x63, 0x64, 0x65, 0x66, 
                            0x67, 0x68, 0x69, 0x6a, 0x6b, 0x6c, 0x6d, 0x6e, 0x6f, 0x70, 0x71, 0x72, 
                            0x73, 0x74, 0x75, 0x76, 0x77, 0x78, 0x79, 0x7a, 0x7b, 0x7c, 0x7d, 0x7e, 
                            0x7f, 0x80, 0x83, 0x84, 0x85, 0x87, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 
                            0x8f, 0x90, 0x91, 0x92, 0x93, 0x94, 0x95, 0x96, 0x97, 0x98, 0x99, 0x9a, 
                            0x9b, 0x9c, 0x9d, 0x9e, 0x9f, 0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 
                            0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf, 0xb0, 0xb1, 0xb2, 
                            0xb3, 0xb4, 0xb5, 0xb6, 0xb7, 0xb8, 0xb9, 0xba, 0xbb, 0xbc, 0xbd, 0xbe, 
                            0xbf, 0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 
                            0xcb, 0xcc, 0xcd, 0xce, 0xcf, 0xd0, 0xd1, 0xd2, 0xd3, 0xd4, 0xd5, 0xd6, 
                            0xd7, 0xd8, 0xd9, 0xda, 0xdb, 0xdc, 0xdd, 0xde, 0xdf
                        goto label_140d83949
                    case 0x14
                        sub_140d78c30(r15, &rect, var_248, arg3, arg4, arg5, 0, 0, 0)
                        
                        if (*((*(*rect_2 + 0xe0))(rect_2) + 0x28) == 0)
                            goto label_140d83553
                        
                        HWND hwnd_1 = var_248
                        int64_t var_1c4_1 = 0
                        pwi = 0x3c
                        __builtin_memset(&var_1f4, 0, 0x28)
                        GetWindowInfo(hwnd_1, &pwi)
                        int64_t var_240_1 = 0
                        var_248 = nullptr
                        int64_t var_1d4
                        AdjustWindowRectEx(&var_248, var_1d4.d, 0, var_1d4:4.d)
                        *arg5 -= var_248.d
                        *(arg5 + 8) -= var_240_1.d
                        *(arg5 + 4) -= var_248:4.d
                        *(arg5 + 0xc) -= var_240_1:4.d
                        int32_t rbx_19 = *(arg5 + 0xc) - *(arg5 + 4)
                        int32_t rdi_9 = *(arg5 + 8) - *arg5
                        zmm6 = rect_2[0x14].d
                        rect.o = rect.o
                        
                        if (r14 != 0)
                            r14[1].d += 1
                        
                        int64_t* rcx_109 = r15[3]
                        (*(*rcx_109 + 0x110))(rcx_109, &pcbSize_4, &rect)
                        
                        if (var_250 != 0)
                            var_250[1].d -= 1
                            
                            if (var_250[1].d == 1)
                                (**var_250)(var_250)
                                int32_t temp21_1 = *(var_250 + 0xc)
                                *(var_250 + 0xc) -= 1
                                
                                if (temp21_1 == 1)
                                    (*(*var_250 + 8))(var_250, 1)
                        
                        if (arg4 - 1 u<= 7)
                            uint128_t zmm0_6
                            float zmm1_1
                            
                            switch (arg4)
                                case 1, 2, 4, 5, 7, 8
                                    zmm1_1 = var_230.d
                                    int32_t rdx_55 = int.d(fconvert.t(pcbSize_4.d))
                                    
                                    if (not(zmm1_1 f>= pcbSize_4.d))
                                        zmm0_6.d = zmm6.d f* zmm1_1
                                        rdx_55 = int.d(zmm0_6.d)
                                    
                                    if (rdi_9 s< rdx_55)
                                        if (arg4 u> 7 || not(test_bit(0x92, arg4)))
                                            if (arg4 u<= 8 && test_bit(0x124, arg4))
                                                *(arg5 + 8) += rdx_55 - rdi_9
                                            
                                            rdi_9 = rdx_55
                                        else
                                            *arg5 += rdi_9 - rdx_55
                                            rdi_9 = rdx_55
                                case 3, 6
                                    zmm1_1 = pcbSize_4.d
                                    int32_t rdx_56 = int.d(fconvert.t(var_230.d))
                                    
                                    if (not(zmm1_1 f>= var_230.d))
                                        rdx_56 = int.d(zmm1_1 f/ zmm6.d)
                                    
                                    if (rbx_19 s< rdx_56)
                                        if (arg4 != 3)
                                            *(arg5 + 0xc) += rdx_56 - rbx_19
                                        else
                                            *(arg5 + 4) += rbx_19 - rdx_56
                                        
                                        rbx_19 = rdx_56
                            
                            switch (arg4)
                                case 1, 2
                                    zmm0_6.d = _mm_cvtepi32_ps(zx.o(rdi_9)).d f/ zmm6.d
                                    int32_t temp31_1
                                    int32_t temp32_1
                                    temp31_1:temp32_1 = sx.q(int.d(zmm0_6.d) - rbx_19)
                                    int32_t rax_185 = (temp32_1 - temp31_1) s>> 1
                                    *(arg5 + 4) -= rax_185
                                    *(arg5 + 0xc) += rax_185
                                case 3, 6
                                    zmm0_6.d = _mm_cvtepi32_ps(zx.o(rbx_19)).d f* zmm6.d
                                    int32_t temp33_1
                                    int32_t temp34_1
                                    temp33_1:temp34_1 = sx.q(int.d(zmm0_6.d) - rdi_9)
                                    int32_t rax_190 = (temp34_1 - temp33_1) s>> 1
                                    *arg5 -= rax_190
                                    *(arg5 + 8) += rax_190
                                case 4, 5
                                    zmm0_6.d = _mm_cvtepi32_ps(zx.o(rdi_9)).d f/ zmm6.d
                                    *(arg5 + 4) += rbx_19 - int.d(zmm0_6.d)
                                case 7, 8
                                    zmm0_6.d = _mm_cvtepi32_ps(zx.o(rdi_9)).d f/ zmm6.d
                                    *(arg5 + 0xc) += int.d(zmm0_6.d) - rbx_19
                        
                        AdjustWindowRectEx(arg5, var_1d4.d, 0, var_1d4:4.d)
                        goto label_140d83906
                    case 0x19
                        *(r15[0x1b] + 8) = 1
                        sub_140d843e0(r15)
                        goto label_140d83553
                    case 0x31
                        r15[0x23].b = 1
                        goto label_140d8344d
                    case 0x32
                        goto label_140d8391a
                    case 0xe0
                        goto label_140d8344d
        else
            if (arg3 == 0x112)
                uint64_t rax_147 = zx.q(arg4.d) & 0xfff0
                int64_t r8_21
                int128_t zmm0
                
                if (rax_147 == 0xf030)
                    zmm0 = rect.o
                    rect.o = zmm0
                    
                    if (r14 != 0)
                        r14[1].d += 1
                    
                    r8_21 = 2
                label_140d83535:
                    char rax_155 = (*(*r15[3] + 0x1a0))(zmm0, &rect, r8_21)
                    sub_140597060(&rect)
                    
                    if (rax_155 == 0)
                        goto label_140d83906
                    
                    goto label_140d83553
                
                if (rax_147 == 0xf060)
                    if (data_143de5430 != 0)
                        goto label_140d83906
                    
                    HWND r8_23 = var_248
                    int32_t var_2a8_5 = 0
                    int32_t var_2b0_5 = 0
                    int64_t var_2c8_5
                    __builtin_memset(&var_2c8_5, 0, 0x14)
                    int64_t var_2c0_5
                    int32_t var_2b8_4
                    sub_140d78c30(r15, &rect, r8_23, 0x10, var_2c8_5, var_2c0_5, var_2b8_4, 
                        var_2b0_5, var_2a8_5)
                    el = 1
                    goto label_140d83955
                
                if (rax_147 == 0xf120)
                    HWND hWnd = var_248
                    
                    if (IsIconic(hWnd) != 0)
                        ShowWindow(hWnd, SW_RESTORE)
                        goto label_140d83955
                    
                    zmm0 = rect.o
                    rect.o = zmm0
                    
                    if (r14 != 0)
                        r14[1].d += 1
                    
                    r8_21 = 3
                    goto label_140d83535
                
                rect.o = rect.o
                
                if (r14 != 0)
                    r14[1].d += 1
                
                int64_t* rcx_89 = r15[3]
                char rax_151 = (*(*rcx_89 + 8))(rcx_89, &rect)
                char rax_152
                
                if (rax_151 != 0)
                    rax_152 = sub_140d7f010(0x112)
                
                if (rax_151 == 0 || rax_152 == 0)
                    r15.b = 1
                else
                    r15.b = 0
                
                sub_140597060(&rect)
                
                if (r15.b == 0)
                    goto label_140d83553
                
                goto label_140d83955
            
            uint64_t rax_141 = zx.q(arg3 - 0x100)
            
            if (rax_141.d u> 0xf)
                goto label_140d83949
            
            switch (rax_141)
                case 0, 1, 2, 5, 0xd, 0xe, 0xf
                    goto label_140d836c8
                case 3, 7, 8, 9, 0xa, 0xb, 0xc
                    goto label_140d83949
                case 4
                    if (arg4 == 0x73 || (*(r15 + 0x95) == 0 && arg4 == 0x20))
                        goto label_140d83553
                    
                    goto label_140d8344d
                case 6
                    if (*(r15 + 0x95) != 0 || (0x2000 & (arg5 u>> 0x10).w) == 0 || arg4 != 0x20)
                        goto label_140d83955
                    
                    goto label_140d83553

if (r14 != 0)
    r14[1].d -= 1
    
    if (r14[1].d == 1)
        (**r14)(r14)
        int32_t temp3_1 = *(r14 + 0xc)
        *(r14 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*r14 + 8))(r14, 1)

__security_check_cookie(rax_1 ^ &var_2e8)
return zx.q(el.d)
