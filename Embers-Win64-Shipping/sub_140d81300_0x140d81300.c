// 函数: sub_140d81300
// 地址: 0x140d81300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int64_t* rax_2 = arg2
POINT point
point.x = arg2.d
point.y = arg2:4.d
uint64_t result

if (arg1[0x1a].d == 0 || *arg2 == 0)
    result = 0
else
    int64_t* rcx = arg2[1]
    
    if (rcx == 0)
        result = 0
    else
        int32_t rdx = rcx[1].d
        
        if (rdx s<= 0)
            result = 0
        else
            int32_t result_1 = 0
            LPARAM hTouchInput = rax_2[5]
            int64_t* r14_1 = nullptr
            uint32_t rsi_1 = rax_2[3].d
            WPARAM r13_1 = rax_2[4]
            HWND hWnd = rax_2[2]
            
            if (rdx != 0)
                int32_t rax_3 = rdx + 1
                rdx.b = 1
                rcx[1].d = rax_3
                rax_2.d = point.x
                rax_2:4.d = point.y
            
            int64_t* rbx_1 = nullptr
            
            if (rdx.b != 0)
                rbx_1 = rcx
            
            if (rbx_1 != 0)
                r14_1 = *rax_2
            
            int64_t* var_78 = r14_1
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
            
            int64_t* rcx_1 = arg1[3]
            char rax_5 = (*(*rcx_1 + 8))(rcx_1, &var_78)
            char var_e8_1
            char rax_6
            
            if (rax_5 == 0)
                rax_6 = sub_140d7f010(rsi_1)
                var_e8_1 = 1
            
            if (rax_5 != 0 || rax_6 == 0)
                var_e8_1 = 0
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp1_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
            
            if (var_e8_1 != 0)
                if (rsi_1 - 0x100 u<= 0x12 && test_bit(0x40077, rsi_1 - 0x100))
                    sub_140d89ab0(arg1)
                
                goto label_140d81f29
            
            int64_t var_108
            int64_t* rdi_3
            
            if (rsi_1 u<= 0xff)
                if (rsi_1 == 0xff)
                    void* rax_39
                    rax_39.d = point.x
                    rax_39:4.d = point.y
                    int64_t* rcx_33 = arg1[3]
                    int64_t r9_2 = *rcx_33
                    
                    if (*(rax_39 + 0x38) != 0)
                        (*(r9_2 + 0x70))(rcx_33)
                    else
                        (*(r9_2 + 0x78))(rcx_33, zx.q(*(rax_39 + 0x30)), zx.q(*(rax_39 + 0x34)), 
                            r9_2)
                    
                    goto label_140d81f29
                
                uint64_t rax_11 = zx.q(rsi_1 - 5)
                
                if (rax_11.d u> 0x9b)
                    goto label_140d8217e
                
                switch (rax_11)
                    case 0
                        if (r14_1 == 0)
                            goto label_140d8217e
                        
                        int32_t rsi_4 = sx.d(hTouchInput.w)
                        int32_t r15_3 = sx.d((hTouchInput u>> 0x10).w)
                        void* rax_35 = (*(*r14_1 + 0xe0))(r14_1)
                        
                        if (*(rax_35 + 0x25) != 0 && *(rax_35 + 0x18) == 0)
                            r14_1[6].d = rsi_4
                            *(r14_1 + 0x34) = r15_3
                            HRGN hRgn = sub_140d7fa60(r14_1, 1)
                            SetWindowRgn(r14_1[5], hRgn, 0)
                        
                        result_1.b = r13_1 == 1
                        
                        if ((*(*r14_1 + 0x68))(r14_1) == 0)
                            goto label_140d8217e
                        
                        if (rbx_1 != 0)
                            rbx_1[1].d += 1
                        
                        var_78 = r14_1
                        
                        if (rbx_1 != 0)
                            rbx_1[1].d += 1
                        
                        int64_t* rcx_32 = arg1[3]
                        var_108.b = result_1.b
                        (*(*rcx_32 + 0x100))(rcx_32, &var_78, zx.q(rsi_4), zx.q(r15_3), var_108)
                        rdi_3 = rbx_1
                        goto label_140d82125
                    case 1
                        if ((r13_1.b & 1) == 0)
                            rsi_1.b = (r13_1.b & 2) == 0
                            rsi_1.b += 1
                        else
                            rsi_1.b = *(arg1 + 0x93) != 0
                        
                        *(arg1 + 0x93) = 0
                        sub_140d89ab0(arg1)
                        
                        if (r14_1 == 0)
                            goto label_140d815fc
                        
                        if (rbx_1 != 0)
                            rbx_1[1].d += 1
                        
                        var_78 = r14_1
                        
                        if (rbx_1 != 0)
                            rbx_1[1].d += 1
                        
                        int64_t* rcx_10 = arg1[3]
                        uint32_t rsi_3 = zx.d((*(*rcx_10 + 0x148))(rcx_10, &var_78, zx.q(rsi_1.b)))
                        
                        if (rbx_1 != 0)
                            rbx_1[1].d -= 1
                            
                            if (rbx_1[1].d == 1)
                                (**rbx_1)(rbx_1)
                                int32_t temp25_1 = *(rbx_1 + 0xc)
                                *(rbx_1 + 0xc) -= 1
                                
                                if (temp25_1 == 1)
                                    (*(*rbx_1 + 8))(rbx_1, 1)
                        
                        if (rbx_1 != 0)
                            rbx_1[1].d -= 1
                            
                            if (rbx_1[1].d == 1)
                                (**rbx_1)(rbx_1)
                                int32_t temp28_1 = *(rbx_1 + 0xc)
                                *(rbx_1 + 0xc) -= 1
                                
                                if (temp28_1 == 1)
                                    (*(*rbx_1 + 8))(rbx_1, 1)
                        
                        result_1.b = rsi_3 == 0
                        goto label_140d81f29
                    case 2, 3, 4, 5, 6, 7, 8, 9, 0xa, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x14, 
                            0x16, 0x18, 0x19, 0x1a, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x24, 
                            0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f, 0x30, 
                            0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x3b, 0x3c, 
                            0x3d, 0x3e, 0x3f, 0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 
                            0x49, 0x4a, 0x4d, 0x4e, 0x4f, 0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 
                            0x57, 0x58, 0x59, 0x5a, 0x5b, 0x5c, 0x5d, 0x5e, 0x5f, 0x60, 0x61, 0x62, 
                            0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 0x69, 0x6a, 0x6b, 0x6c, 0x6d, 0x6e, 
                            0x6f, 0x70, 0x71, 0x72, 0x73, 0x74, 0x75, 0x76, 0x77, 0x78, 0x79, 0x7a, 
                            0x7b, 0x7c, 0x7d, 0x7e, 0x7f, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 
                            0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f, 0x90, 0x91, 0x92, 0x93, 0x94, 
                            0x95, 0x96, 0x97, 0x98, 0x99, 0x9a
                        goto label_140d8217e
                    case 0xb
                        if (r14_1 == 0)
                            goto label_140d81f29
                        
                        if (rbx_1 != 0)
                            rbx_1[1].d += 1
                        
                        var_78 = r14_1
                        
                        if (rbx_1 != 0)
                            rbx_1[1].d += 1
                        
                        int64_t* rcx_21 = arg1[3]
                        (*(*rcx_21 + 0x168))(rcx_21, &var_78)
                        
                        if (rbx_1 != 0)
                            rbx_1[1].d -= 1
                            
                            if (rbx_1[1].d == 1)
                                (**rbx_1)(rbx_1)
                                int32_t temp16_1 = *(rbx_1 + 0xc)
                                *(rbx_1 + 0xc) -= 1
                                
                                if (temp16_1 == 1)
                                    (*(*rbx_1 + 8))(rbx_1, 1)
                        
                        if (rbx_1 != 0)
                            rbx_1[1].d -= 1
                            
                            if (rbx_1[1].d == 1)
                                (**rbx_1)(rbx_1)
                                int32_t temp20_1 = *(rbx_1 + 0xc)
                                *(rbx_1 + 0xc) -= 1
                                
                                if (temp20_1 == 1)
                                    (*(*rbx_1 + 8))(rbx_1, 1)
                            
                            goto label_140d81f29
                        
                        result = zx.q(result_1)
                    case 0x13
                        if (r14_1 != 0)
                            if (hTouchInput == 1)
                                GetWindowPlacement(r14_1[5], r14_1 + 0x6c)
                                arg1[0x12].b = 1
                            else if (hTouchInput == 3)
                                SetWindowPlacement(r14_1[5], r14_1 + 0x6c)
                                arg1[0x12].b = 0
                        
                        goto label_140d8217e
                    case 0x15
                        if (hTouchInput != 0)
                            int64_t rcx_17 = -1
                            
                            while (*(hTouchInput + (rcx_17 << 1) + 2) == (*ConvertibleSlateMode")[1
                                    + rcx_17])
                                rcx_17 += 2
                                
                                if (rcx_17 == 0x15)
                                    int64_t* rcx_18 = arg1[3]
                                    (*(*rcx_18 + 0x158))(rcx_18)
                                    break
                                
                                if (*(hTouchInput + (rcx_17 << 1)) != (*ConvertibleSlateMode")[
                                        rcx_17])
                                    break
                        
                        goto label_140d8217e
                    case 0x17
                        sub_140d89ab0(arg1)
                        int64_t* rcx_16 = arg1[3]
                        int64_t rdx_3
                        rdx_3.b = r13_1 != 0
                        (*(*rcx_16 + 0x150))(rcx_16, rdx_3)
                        goto label_140d8217e
                    case 0x1b
                        int64_t* rcx_8 = arg1[3]
                        result_1.b = (*(*rcx_8 + 0x80))(rcx_8) == 0
                    label_140d81f29:
                        
                        if (rbx_1 == 0)
                            result = zx.q(result_1)
                        else
                            rbx_1[1].d -= 1
                            
                            if (rbx_1[1].d == 1)
                                (**rbx_1)(rbx_1)
                                int32_t temp3_1 = *(rbx_1 + 0xc)
                                *(rbx_1 + 0xc) -= 1
                                
                                if (temp3_1 == 1)
                                    int64_t r8_20 = *rbx_1
                                    (*(r8_20 + 8))(rbx_1, 1, r8_20)
                            
                            result = zx.q(result_1)
                    case 0x1c
                        hTouchInput.b = not.b(hTouchInput.b)
                        hTouchInput.b &= 1
                        *(arg1 + 0x93) = hTouchInput.b
                        goto label_140d81f29
                    case 0x4b, 0x4c
                    label_140d81a9b:
                        void* rcx_52 = arg1[0x30]
                        
                        if (rcx_52 != 0)
                            sub_140d83ce0(rcx_52, hWnd, rsi_1, r13_1, hTouchInput)
                        
                        if (rsi_1 == 0x51)
                            int64_t* rcx_53 = arg1[3]
                            (*(*rcx_53 + 0x28))(rcx_53)
                        
                        goto label_140d81f29
                    case 0x80
                        if (r14_1 == 0)
                            goto label_140d8217e
                        
                        if (*((*(*r14_1 + 0xe0))(r14_1) + 0x18) != 0)
                            goto label_140d8217e
                        
                        goto label_140d81f29
                    case 0x81
                        if (r14_1 == 0)
                            goto label_140d8217e
                        
                        if (*((*(*r14_1 + 0xe0))(r14_1) + 0x18) != 0)
                            goto label_140d8217e
                        
                    label_140d815fc:
                        result_1 = 1
                        goto label_140d81f29
                    case 0x9b
                        goto label_140d81a36
            else if (rsi_1 u> 0x200)
                if (rsi_1 u> 0x31e)
                    goto label_140d8217e
                
                if (rsi_1 == 0x31e)
                    (*(*arg1 + 0xd0))(arg1)
                label_140d8217e:
                    
                    if (rbx_1 == 0)
                        result = 0
                    else
                        rbx_1[1].d -= 1
                        
                        if (rbx_1[1].d == 1)
                            (**rbx_1)(rbx_1)
                            int32_t temp5_1 = *(rbx_1 + 0xc)
                            *(rbx_1 + 0xc) -= 1
                            
                            if (temp5_1 == 1)
                                (*(*rbx_1 + 8))(rbx_1, 1)
                        
                        result = 0
                else
                    uint64_t rax_55 = zx.q(rsi_1 - 0x201)
                    int32_t var_c0_2 = rax_55.d
                    
                    if (rax_55.d u> 0xdf)
                        goto label_140d8217e
                    
                    int64_t* var_d0
                    int64_t* var_c8_2
                    float zmm0[0x4]
                    uint128_t y
                    uint128_t zmm2
                    
                    switch (rax_55)
                        case 0, 1, 2, 3, 4, 5, 6, 7, 8, 0xa, 0xb, 0xc
                            point.x = sx.d(hTouchInput.w)
                            point.y = sx.d((hTouchInput u>> 0x10).w)
                            ClientToScreen(hWnd, &point)
                            int32_t rdx_16 = 5
                            y = zx.o(point.y)
                            uint64_t rax_60 = zx.q(var_c0_2)
                            zmm0 = _mm_cvtepi32_ps(zx.o(point.x))
                            y = _mm_cvtepi32_ps(y)
                            hWnd.d = zmm0[0]
                            hWnd:4.d = y.d
                            
                            if (rax_60.d u> 0xc)
                                goto label_140d81be9
                            
                            int64_t* var_70_5
                            int64_t* rcx_58
                            int32_t rdx_17
                            
                            switch (rax_60)
                                case 0
                                    rdx_16 = 0
                                label_140d81be9:
                                    var_78 = r14_1
                                    var_70_5 = rbx_1
                                    
                                    if (rbx_1 != 0)
                                        rbx_1[1].d += 1
                                    
                                    int64_t* rcx_59 = arg1[3]
                                    (*(*rcx_59 + 0x30))(rcx_59, &var_78, zx.q(rdx_16), hWnd)
                                label_140d81c13:
                                    
                                    if (var_70_5 != 0)
                                        var_70_5[1].d -= 1
                                        
                                        if (var_70_5[1].d == 1)
                                            (**var_70_5)(var_70_5)
                                            int32_t temp21_1 = *(var_70_5 + 0xc)
                                            *(var_70_5 + 0xc) -= 1
                                            
                                            if (temp21_1 == 1)
                                                (*(*var_70_5 + 8))(var_70_5, 1)
                                case 1
                                    rcx_58 = arg1[3]
                                    result_1.b = (*(*rcx_58 + 0x40))(rcx_58, 0, hWnd) == 0
                                case 2
                                    rdx_17 = 0
                                label_140d81b85:
                                    var_78 = r14_1
                                    var_70_5 = rbx_1
                                    
                                    if (rbx_1 != 0)
                                        rbx_1[1].d += 1
                                    
                                    int64_t* rcx_57 = arg1[3]
                                    (*(*rcx_57 + 0x50))(rcx_57, &var_78, zx.q(rdx_17), hWnd)
                                    goto label_140d81c13
                                case 3
                                    rdx_16 = 2
                                    goto label_140d81be9
                                case 4
                                    rcx_58 = arg1[3]
                                    result_1.b = (*(*rcx_58 + 0x40))(rcx_58, 2, hWnd) == 0
                                case 5
                                    rdx_17 = 2
                                    goto label_140d81b85
                                case 6
                                    rdx_16 = 1
                                    goto label_140d81be9
                                case 7
                                    rcx_58 = arg1[3]
                                    result_1.b = (*(*rcx_58 + 0x40))(rcx_58, 1, hWnd) == 0
                                case 8
                                    rdx_17 = 1
                                    goto label_140d81b85
                                case 9
                                    goto label_140d81be9
                                case 0xa
                                    uint32_t rdx_24
                                    rdx_24.w = not.w((r13_1 u>> 0x10).w)
                                    rdx_16 = (rdx_24 & 1) + 3
                                    goto label_140d81be9
                                case 0xb
                                    uint32_t rdx_22
                                    rdx_22.w = not.w((r13_1 u>> 0x10).w)
                                    rcx_58 = arg1[3]
                                    result_1.b =
                                        (*(*rcx_58 + 0x40))(rcx_58, zx.q((rdx_22 & 1) + 3), hWnd)
                                        == 0
                                case 0xc
                                    uint32_t rdx_19
                                    rdx_19.w = not.w((r13_1 u>> 0x10).w)
                                    rdx_17 = (rdx_19 & 1) + 3
                                    goto label_140d81b85
                            
                            goto label_140d81f29
                        case 9
                            int64_t rdx_27 = *arg1[3]
                            zmm0 = _mm_cvtepi32_ps(zx.o(sx.d(hTouchInput.w)))
                            zmm2 = _mm_cvtepi32_ps(zx.o(sx.d((hTouchInput u>> 0x10).w)))
                            y = _mm_cvtepi32_ps(zx.o(sx.d((r13_1 u>> 0x10).w)))
                            zmm0 = _mm_unpacklo_ps(zmm0, zmm2.q)
                            y.d = y.d f* 0.00833333377f
                            result_1.b = (*(rdx_27 + 0x60))(zmm0, y, zmm0[0].q) == 0
                            goto label_140d81f29
                        case 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 
                                0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x24, 
                                0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f, 
                                0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x3b, 0x3c, 
                                0x3d, 0x3e, 0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 
                                0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f, 0x50, 0x51, 0x52, 0x53, 
                                0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5a, 0x5b, 0x5c, 0x5d, 0x5e, 
                                0x5f, 0x60, 0x61, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 0x69, 
                                0x6a, 0x6b, 0x6c, 0x6d, 0x6e, 0x6f, 0x70, 0x71, 0x72, 0x73, 0x74, 
                                0x75, 0x76, 0x77, 0x78, 0x79, 0x7a, 0x7b, 0x7c, 0x7d, 0x7e, 0x7f, 
                                0x82, 0x83, 0x84, 0x86, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 
                                0x8f, 0x90, 0x91, 0x92, 0x93, 0x94, 0x95, 0x96, 0x97, 0x98, 0x99, 
                                0x9a, 0x9b, 0x9c, 0x9d, 0x9e, 0x9f, 0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 
                                0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf, 
                                0xb0, 0xb1, 0xb2, 0xb3, 0xb4, 0xb5, 0xb6, 0xb7, 0xb8, 0xb9, 0xba, 
                                0xbb, 0xbc, 0xbd, 0xbe, 0xbf, 0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 
                                0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf, 0xd0, 
                                0xd1, 0xd2, 0xd3, 0xd4, 0xd5, 0xd6, 0xd7, 0xd8, 0xd9, 0xda, 0xdb, 
                                0xdc, 0xdd, 0xde
                            goto label_140d8217e
                        case 0x13
                            if (r14_1 == 0)
                                goto label_140d8217e
                            
                            if (rbx_1 != 0)
                                rbx_1[1].d += 1
                            
                            var_d0 = r14_1
                            var_c8_2 = rbx_1
                            
                            if (rbx_1 != 0)
                                rbx_1[1].d += 1
                            
                            int64_t* rcx_83 = arg1[3]
                            (*(*rcx_83 + 0x118))(rcx_83, &var_d0)
                        label_140d8211e:
                            rdi_3 = var_c8_2
                        label_140d82125:
                            
                            if (rdi_3 != 0)
                                rdi_3[1].d -= 1
                                
                                if (rdi_3[1].d == 1)
                                    (**rdi_3)(rdi_3)
                                    int32_t temp30_1 = *(rdi_3 + 0xc)
                                    *(rdi_3 + 0xc) -= 1
                                    
                                    if (temp30_1 == 1)
                                        (*(*rdi_3 + 8))(rdi_3, 1)
                            
                            if (rbx_1 != 0)
                                rbx_1[1].d -= 1
                                
                                if (rbx_1[1].d == 1)
                                    (**rbx_1)(rbx_1)
                                    int32_t temp31_1 = *(rbx_1 + 0xc)
                                    *(rbx_1 + 0xc) -= 1
                                    
                                    if (temp31_1 == 1)
                                        (*(*rbx_1 + 8))(rbx_1, 1)
                                
                                goto label_140d8217e
                            
                            result = 0
                        case 0x30
                            if (r14_1 == 0)
                                goto label_140d8217e
                            
                            if (rbx_1 != 0)
                                rbx_1[1].d += 1
                            
                            var_d0 = r14_1
                            var_c8_2 = rbx_1
                            
                            if (rbx_1 != 0)
                                rbx_1[1].d += 1
                            
                            int64_t* rcx_84 = arg1[3]
                            (*(*rcx_84 + 0x120))(rcx_84, &var_d0)
                            goto label_140d8211e
                        case 0x31
                            if (r14_1 == 0)
                                goto label_140d8217e
                            
                            if (rbx_1 != 0)
                                rbx_1[1].d += 1
                            
                            var_d0 = r14_1
                            var_c8_2 = rbx_1
                            
                            if (rbx_1 != 0)
                                rbx_1[1].d += 1
                            
                            int64_t* rcx_85 = arg1[3]
                            (*(*rcx_85 + 0x128))(rcx_85, &var_d0)
                            goto label_140d8211e
                        case 0x3f
                            uint64_t rsi_7 = zx.q(r13_1.w)
                            
                            if (rsi_7.d == 0)
                                goto label_140d8217e
                            
                            var_c0_2.q = rsi_7
                            uint64_t count = 0x30 * rsi_7
                            
                            if (mulu.dp.q(0x30, rsi_7) u>> 0x40 != zx.o(0))
                                count = -1
                            
                            int64_t rax_72 = j_sub_140a82f30(count)
                            point.x = rax_72.d
                            point.y = rax_72:4.d
                            TOUCHINPUT* pInputs
                            
                            if (rax_72 == 0)
                                pInputs = nullptr
                                __builtin_memset(&point, 0, 8)
                            else
                                memset(rax_72, 0, count)
                                pInputs.d = point.x
                                pInputs:4.d = point.y
                            
                            if (GetTouchInputInfo(hTouchInput, rsi_7.d, pInputs, 0x30) == 0)
                                j_sub_140a74f90(pInputs)
                                goto label_140d8217e
                            
                            if (rsi_7.d != 0)
                                void* r15_9
                                r15_9.d = point.x
                                r15_9:4.d = point.y
                                int64_t i
                                
                                do
                                    zmm2 = *(r15_9 + 0x10)
                                    int64_t rax_74 = *r15_9
                                    int40_t var_98_1 = zmm2.5
                                    int32_t var_b8_2 = zmm2.d
                                    uint128_t zmm0_1
                                    zmm0_1.d = _mm_cvtepi32_ps(zx.o(rax_74.d)).d f* 0.00999999978f
                                    hWnd.d = zmm0_1.d
                                    zmm0_1.d = _mm_cvtepi32_ps(zx.o((rax_74 u>> 0x20).d)).d
                                        f* 0.00999999978f
                                    hWnd:4.d = zmm0_1.d
                                    int32_t var_100
                                    
                                    if (((zmm2.q u>> 0x20).b & 2) == 0)
                                        char rax_88 = var_98_1:4.b
                                        
                                        if ((rax_88 & 1) != 0)
                                            int32_t rax_89 = sub_140d7d860(arg1, zmm2.d)
                                            
                                            if (rax_89 s>= 0)
                                                int64_t* rcx_74 = arg1[3]
                                                var_108.d = 0
                                                int64_t r8_16 = *rcx_74
                                                (*(r8_16 + 0xc8))(rcx_74, &hWnd, r8_16, 
                                                    zx.q(rax_89), var_108, var_100)
                                        else if ((rax_88 & 4) != 0)
                                            int32_t rax_90 = sub_140d7d860(arg1, zmm2.d)
                                            int64_t r10_3 = sx.q(rax_90)
                                            
                                            if (rax_90 s>= 0)
                                                void* r8_17 = arg1[0x3a] + (r10_3 << 3)
                                                
                                                if (&var_78 != r8_17 && *(r8_17 + 4) != 0)
                                                    *(r8_17 + 4) = 0
                                                
                                                int64_t* rcx_77 = arg1[3]
                                                (*(*rcx_77 + 0xd8))(rcx_77, &hWnd, zx.q(r10_3.d), 
                                                    0, var_108, var_100)
                                    else if (sub_140d7d860(arg1, zmm2.d) == 0xffffffff)
                                        int32_t rcx_67 = arg1[0x3b].d
                                        int64_t rsi_8 = 0
                                        
                                        if (rcx_67 s<= 0)
                                        label_140d81dc0:
                                            rsi_8 = sx.q(arg1[0x3b].d)
                                            int32_t rax_81 = (rsi_8 + 1).d
                                            arg1[0x3b].d = rax_81
                                            
                                            if (rax_81 s> *(arg1 + 0x1dc))
                                                sub_1405a4d70(&arg1[0x3a])
                                            
                                            *(arg1[0x3a] + (rsi_8 << 3) + 4) = 0
                                        else
                                            char* rax_80 = arg1[0x3a] + 4
                                            
                                            while (*rax_80 != 0)
                                                rsi_8 = zx.q(rsi_8.d + 1)
                                                rax_80 = &rax_80[8]
                                                
                                                if (rsi_8.d s>= rcx_67)
                                                    goto label_140d81dc0
                                        
                                        int32_t* rdx_31 = arg1[0x3a] + (sx.q(rsi_8.d) << 3)
                                        
                                        if (&var_78 != rdx_31)
                                            *rdx_31 = var_b8_2
                                            rdx_31[1].b = 1
                                        
                                        var_d0 = r14_1
                                        
                                        if (rbx_1 != 0)
                                            rbx_1[1].d += 1
                                        
                                        int64_t* rcx_70 = arg1[3]
                                        var_100 = 0
                                        int512_t zmm3
                                        zmm3.o = 0x3f800000
                                        var_108.d = rsi_8.d
                                        (*(*rcx_70 + 0xb8))(rcx_70, &var_d0, &hWnd, zmm3, var_108, 
                                            var_100)
                                        
                                        if (rbx_1 != 0)
                                            rbx_1[1].d -= 1
                                            
                                            if (rbx_1[1].d == 1)
                                                (**rbx_1)(rbx_1)
                                                int32_t temp34_1 = *(rbx_1 + 0xc)
                                                *(rbx_1 + 0xc) -= 1
                                                
                                                if (temp34_1 == 1)
                                                    (*(*rbx_1 + 8))(rbx_1, 1)
                                    r15_9 += 0x30
                                    i = var_c0_2.q
                                    var_c0_2.q -= 1
                                while (i != 1)
                                pInputs.d = point.x
                                pInputs:4.d = point.y
                            
                            CloseTouchInputHandle(hTouchInput)
                            j_sub_140a74f90(pInputs)
                            goto label_140d81f29
                        case 0x80, 0x81, 0x85, 0x87
                            goto label_140d81a9b
                        case 0xdf
                            if (r14_1 == 0)
                                goto label_140d8217e
                            
                            if (rbx_1 != 0)
                                rbx_1[1].d += 1
                            
                            var_d0 = r14_1
                            
                            if (rbx_1 != 0)
                                rbx_1[1].d += 1
                            
                            int64_t* rcx_86 = arg1[3]
                            (*(*rcx_86 + 0x138))(rcx_86, &var_d0)
                            
                            if (rbx_1 != 0)
                                rbx_1[1].d -= 1
                                
                                if (rbx_1[1].d == 1)
                                    (**rbx_1)(rbx_1)
                                    int32_t temp23_1 = *(rbx_1 + 0xc)
                                    *(rbx_1 + 0xc) -= 1
                                    
                                    if (temp23_1 == 1)
                                        (*(*rbx_1 + 8))(rbx_1, 1)
                            
                            if (rbx_1 != 0)
                                rbx_1[1].d -= 1
                                
                                if (rbx_1[1].d == 1)
                                    (**rbx_1)(rbx_1)
                                    int32_t temp27_1 = *(rbx_1 + 0xc)
                                    *(rbx_1 + 0xc) -= 1
                                    
                                    if (temp27_1 == 1)
                                        (*(*rbx_1 + 8))(rbx_1, 1)
                            
                            if ((*(*r14_1 + 0x108))(r14_1) != 0)
                                goto label_140d8217e
                            
                            int64_t rdx_41 = *r14_1
                            _mm_cvtepi32_ps(zx.o(r13_1.w))
                            (*(rdx_41 + 0x100))(r14_1, rdx_41)
                            int32_t Y = *(hTouchInput + 4)
                            int32_t X = *hTouchInput
                            var_108.d = *(hTouchInput + 8) - X
                            SetWindowPos(hWnd, nullptr, X, Y, var_108.d, *(hTouchInput + 0xc) - Y, 
                                0x14)
                            
                            if (rbx_1 != 0)
                                rbx_1[1].d += 1
                            
                            var_d0 = r14_1
                            var_c8_2 = rbx_1
                            
                            if (rbx_1 != 0)
                                rbx_1[1].d += 1
                            
                            int64_t* rcx_96 = arg1[3]
                            (*(*rcx_96 + 0x130))(rcx_96, &var_d0)
                            goto label_140d8211e
            else
                if (rsi_1 == 0x200)
                label_140d81a36:
                    uint32_t rax_54 = 0
                    
                    if (*(arg1 + 0x91) == 0)
                        int64_t* rcx_49 = arg1[3]
                        rax_54 = zx.d((*(*rcx_49 + 0x70))(rcx_49))
                    
                    result_1.b = rax_54 == 0
                    goto label_140d81f29
                
                uint64_t rax_40 = zx.q(rsi_1 - 0x100)
                
                if (rax_40.d u> 0xf)
                    goto label_140d8217e
                
                switch (rax_40)
                    case 0, 4
                        int32_t rcx_35 = r13_1.d
                        uint32_t rsi_5 = r13_1.d
                        uint8_t r14_3 = (hTouchInput u>> 0x1e).b & 1
                        
                        if (rcx_35 == 0x10)
                            uint32_t rax_45 =
                                MapVirtualKeyW(zx.d((hTouchInput s>> 0x10).b), MAPVK_VSC_TO_VK_EX)
                            rsi_5 = rax_45
                            
                            if (rax_45 != 0xa0)
                                r14_3 = *(arg1 + 0xfa)
                                *(arg1 + 0xfa) = 1
                            else
                                r14_3 = *(arg1 + 0xf9)
                                *(arg1 + 0xf9) = 1
                        else if (rcx_35 == 0x11)
                            if (test_bit(hTouchInput, 0x18))
                                r14_3 = *(arg1 + 0xfc)
                                rsi_5 = 0xa3
                                *(arg1 + 0xfc) = 1
                            else
                                r14_3 = *(arg1 + 0xfb)
                                rsi_5 = 0xa2
                                *(arg1 + 0xfb) = 1
                        else if (rcx_35 == 0x12)
                            if (test_bit(hTouchInput, 0x18))
                                r14_3 = *(arg1 + 0xfe)
                                rsi_5 = 0xa5
                                *(arg1 + 0xfe) = 1
                            else
                                r14_3 = *(arg1 + 0xfd)
                                rsi_5 = 0xa4
                                *(arg1 + 0xfd) = 1
                        else if (rcx_35 == 0x14)
                            *(arg1 + 0xff) = GetKeyState(0x14) & 1
                        
                        uint32_t rax_46 = MapVirtualKeyW(r13_1.d, MAPVK_VK_TO_CHAR)
                        int64_t* rcx_41 = arg1[3]
                        
                        if ((*(*rcx_41 + 0x18))(rcx_41, zx.q(rsi_5), zx.q(rax_46), zx.q(r14_3)) != 0
                                || rsi_1 != 0x104)
                            goto label_140d81f29
                        
                        goto label_140d8217e
                    case 1, 5
                        int32_t rcx_42 = r13_1.d
                        uint32_t rsi_6 = r13_1.d
                        
                        if (rcx_42 == 0x10)
                            uint32_t rax_49 =
                                MapVirtualKeyW(zx.d((hTouchInput s>> 0x10).b), MAPVK_VSC_TO_VK_EX)
                            rsi_6 = rax_49
                            
                            if (rax_49 != 0xa0)
                                *(arg1 + 0xfa) = 0
                            else
                                *(arg1 + 0xf9) = 0
                        else if (rcx_42 == 0x11)
                            if (test_bit(hTouchInput, 0x18))
                                rsi_6 = 0xa3
                                *(arg1 + 0xfc) = 0
                            else
                                rsi_6 = 0xa2
                                *(arg1 + 0xfb) = 0
                        else if (rcx_42 == 0x12)
                            if (test_bit(hTouchInput, 0x18))
                                rsi_6 = 0xa5
                                *(arg1 + 0xfe) = 0
                            else
                                rsi_6 = 0xa4
                                *(arg1 + 0xfd) = 0
                        else if (rcx_42 == 0x14)
                            *(arg1 + 0xff) = GetKeyState(0x14) & 1
                        
                        uint32_t rax_50 = MapVirtualKeyW(r13_1.d, MAPVK_VK_TO_CHAR)
                        int64_t* rcx_48 = arg1[3]
                        
                        if ((*(*rcx_48 + 0x20))(rcx_48, zx.q(rsi_6), zx.q(rax_50), 0) != 0
                                || rsi_1 != 0x105)
                            goto label_140d81f29
                        
                        goto label_140d8217e
                    case 2
                        int64_t* rcx_34 = arg1[3]
                        (*(*rcx_34 + 0x10))(rcx_34, zx.q(r13_1.w), 
                            zx.q((hTouchInput u>> 0x1e).b) & 1)
                        goto label_140d81f29
                    case 3, 6, 7, 8, 9, 0xa, 0xb, 0xc
                        goto label_140d8217e
                    case 0xd, 0xe, 0xf
                        goto label_140d81a9b

__security_check_cookie(rax_1 ^ &var_128)
return result
