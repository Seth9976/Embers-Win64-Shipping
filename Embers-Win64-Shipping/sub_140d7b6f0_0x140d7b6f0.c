// 函数: sub_140d7b6f0
// 地址: 0x140d7b6f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_7a8
int64_t rax_1 = __security_cookie ^ &var_7a8
int32_t i_2 = arg1[1].d
int32_t r14 = 0
void* rbx = *arg1
DISPLAY_DEVICEW displayDevice_1
displayDevice_1.cb = 0x348
uint32_t iDevNum = 0
uint32_t iDevNum_3 = 0
int64_t r13 = 0

if (i_2 != 0)
    int32_t i
    
    do
        int64_t rcx = *(rbx + 0x10)
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        int64_t rcx_1 = *rbx
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        rbx += 0x50
        i = i_2
        i_2 -= 1
    while (i != 1)

arg1[1].d = 0

if (*(arg1 + 0xc) != 2)
    sub_1405a5310(arg1, 2)

BOOL i_1 = EnumDisplayDevicesW(nullptr, 0, &displayDevice_1, 0)

if (i_1 != 0)
    uint128_t zmm6 = 0x3f000000
    
    do
        var_394
        
        if ((displayDevice_1.StateFlags.b & 1) u> 0)
            var_6e4
            memset(&var_6e4, 0, 0x344)
            DISPLAY_DEVICEW displayDevice
            displayDevice.cb = 0x348
            uint32_t iDevNum_2 = 0
            uint32_t iDevNum_1 = 0
            
            if (EnumDisplayDevicesW(&var_394, 0, &displayDevice, 0) != 0)
                BOOL j
                
                do
                    uint8_t StateFlags = (displayDevice.StateFlags).b
                    
                    if ((StateFlags & 1) != 0 && (StateFlags & 8) == 0)
                        bool cond:1_1 = var_394.w == 0
                        int32_t rcx_5 = 0
                        int32_t var_75c_1
                        __builtin_memset(&var_75c_1, 0, 0x14)
                        int64_t dwData = 0
                        int32_t var_71c = 0
                        int32_t rbx_2
                        
                        if (cond:1_1)
                            rbx_2 = 0
                        else
                            int64_t rbx_1 = -1
                            
                            do
                                rbx_1 += 1
                            while (*(&var_394 + (rbx_1 << 1)) != 0)
                            
                            rbx_2 = rbx_1.d + 1
                        
                        int32_t rdx_1 = 0
                        int32_t var_760_1 = 0
                        
                        if (rbx_2 != 0)
                            sub_1405947f0(&dwData, rbx_2)
                            rcx_5 = var_75c_1
                            rdx_1 = var_760_1
                        
                        int32_t rax_3 = rbx_2 + rdx_1
                        int32_t var_760_2 = rax_3
                        
                        if (rax_3 s> rcx_5)
                            sub_140594770(&dwData)
                        
                        if (rbx_2 != 0)
                            memcpy(dwData, &var_394, rbx_2 * 2)
                        
                        EnumDisplayMonitors(nullptr, nullptr, sub_140d7fc80, &dwData)
                        int16_t* var_708
                        var_5a0
                        sub_140a2e390(&var_708, u"%s", &var_5a0)
                        int16_t* var_758
                        int16_t* rcx_10 = var_758
                        
                        if (rcx_10 != 0)
                            sub_140a74f90(rcx_10)
                        
                        var_758 = var_708
                        int64_t var_750_1
                        int32_t var_700
                        var_750_1.d = var_700
                        int32_t var_6fc
                        var_750_1:4.d = var_6fc
                        var_700.q = 0
                        var_708 = nullptr
                        int32_t rax_7 = sub_140a23cf0(&var_758, &(*U"{}[\nt")[3], 0, 0, 9)
                        int64_t dwData_3 = 0
                        int32_t rdi = 0
                        
                        if (rax_7 - 8 s>= 0)
                            int32_t r8_5 = var_750_1.d
                            int32_t rbx_3 = r8_5 - 1
                            
                            if (r8_5 == 0)
                                rbx_3 = 0
                            
                            int32_t rdx_4 = rbx_3
                            
                            if (rbx_3 s> 8)
                                rdx_4 = 8
                            
                            int64_t r9_2 = sx.q(rdx_4)
                            
                            if (sx.q(rax_7 - 8) + 8 s< r9_2)
                                rbx_3 = rdx_4
                            else if (sx.q(rax_7 - 8) + 8 s< sx.q(rbx_3))
                                rbx_3 = rax_7
                            
                            int64_t dwData_4 = 0
                            int16_t* const rax_10 = &data_142d40450
                            int64_t var_770_1 = 0
                            
                            if (r8_5 != 0)
                                rax_10 = var_758
                            
                            dwData_3 = 0
                            int32_t rbx_4 = rbx_3 - rdx_4
                            rdi = 0
                            r14 = 0
                            void* r15_1 = &rax_10[r9_2]
                            
                            if (r15_1 != 0 && *r15_1 != 0 && rbx_4 s> 0)
                                if (rbx_4 + 1 s> 0)
                                    sub_1405947f0(&dwData_4, rbx_4 + 1)
                                    r14 = var_770_1:4.d
                                    rdi = var_770_1.d
                                    dwData_3 = dwData_4
                                
                                rdi = rdi + 1 + rbx_4
                                var_770_1.d = rdi
                                
                                if (rdi s> r14)
                                    sub_140594770(&dwData_4)
                                    r14 = var_770_1:4.d
                                    rdi = var_770_1.d
                                    dwData_3 = dwData_4
                                
                                UnDecorator::getReferenceType(dwData_3, r15_1, rbx_4 * 2)
                                *(dwData_3 + (sx.q(rdi) << 1) - 2) = 0
                            
                            iDevNum_1 = iDevNum_2
                            dwData_4 = 0
                            int64_t var_770_2 = 0
                        
                        int64_t dwData_1 = dwData
                        
                        if (dwData_1 != 0)
                            sub_140a74f90(dwData_1)
                        
                        dwData = dwData_3
                        int32_t var_760_3 = rdi
                        int32_t var_75c_2 = r14
                        int32_t var_748
                        int32_t var_744
                        
                        if (sub_140d7ca20(&dwData, &var_748, &var_744, &var_71c) != 0)
                            if (var_758 != &var_5a0)
                                int32_t rbx_6
                                
                                if (var_5a0.w == 0)
                                    rbx_6 = 0
                                else
                                    int64_t rbx_5 = -1
                                    
                                    do
                                        rbx_5 += 1
                                    while (*(&var_5a0 + (rbx_5 << 1)) != 0)
                                    
                                    rbx_6 = rbx_5.d + 1
                                
                                int32_t rcx_18 = var_750_1:4.d
                                int32_t rdx_9 = 0
                                var_750_1.d = 0
                                
                                if (rcx_18 != rbx_6)
                                    sub_1405947f0(&var_758, rbx_6)
                                    rcx_18 = var_750_1:4.d
                                    rdx_9 = var_750_1.d
                                
                                int32_t rax_13 = rbx_6 + rdx_9
                                var_750_1.d = rax_13
                                
                                if (rax_13 s> rcx_18)
                                    sub_140594770(&var_758)
                                
                                if (rbx_6 != 0)
                                    memcpy(var_758, &var_5a0, rbx_6 * 2)
                            
                            bool cond:4_1 = (displayDevice_1.StateFlags.b & 4) u> 0
                            int32_t var_740
                            int32_t var_730
                            
                            if (var_71c - 0x60 u> 0xcc)
                                int32_t rdi_2 = 0x60
                                
                                if (data_1439ae430 != 0)
                                    if (data_143e203b0 == 0)
                                        HDC rax_23 = GetDC(nullptr)
                                        rdi_2 = GetDeviceCaps(rax_23, 0x58)
                                        ReleaseDC(nullptr, rax_23)
                                    else
                                        RECT lprc
                                        lprc.left = var_740
                                        int32_t var_73c
                                        lprc.top = var_73c
                                        int32_t var_738
                                        lprc.right = var_738
                                        int32_t var_734
                                        lprc.bottom = var_734
                                        HMONITOR rax_21 =
                                            MonitorFromRect(&lprc, MONITOR_DEFAULTTONEAREST)
                                        
                                        if (rax_21 != 0)
                                            int32_t var_718 = 0
                                            int32_t var_70c = 0
                                            
                                            if (data_143e203b0(rax_21, 0, &var_718, &var_70c) s>= 0)
                                                rdi_2 = var_718
                                
                                var_71c = rdi_2
                            else
                                int32_t var_728
                                uint128_t zmm0_1
                                zmm0_1.d = _mm_cvtepi32_ps(zx.o(var_728 + var_730)).d f* zmm6.d
                                int32_t var_72c
                                int32_t var_724
                                uint128_t zmm1_1
                                zmm1_1.d = _mm_cvtepi32_ps(zx.o(var_72c + var_724)).d f* zmm6.d
                                float zmm0_2
                                zmm0_2, zmm6 = sub_140d7ade0(zmm0_1.d, zmm1_1.d, zmm6)
                                zmm1_1.d = _mm_cvtepi32_ps(zx.o(var_71c)).d f* zmm0_2
                                var_71c = int.d(zmm1_1.d)
                            
                            int64_t rbx_8 = sx.q(arg1[1].d)
                            int32_t rax_25 = (rbx_8 + 1).d
                            arg1[1].d = rax_25
                            
                            if (rax_25 s> *(arg1 + 0xc))
                                sub_1405c5060(arg1)
                            
                            int64_t* rbx_11 = rbx_8 * 0x50 + *arg1
                            sub_140596d10(rbx_11, &dwData)
                            sub_140596d10(&rbx_11[2], &var_758)
                            rbx_11[4].d = var_748
                            *(rbx_11 + 0x24) = var_744
                            *(rbx_11 + 0x28) = var_740.o
                            *(rbx_11 + 0x38) = var_730.o
                            rbx_11[9].b = cond:4_1
                            *(rbx_11 + 0x4c) = var_71c
                            
                            if (r13 == 0 && cond:4_1 != r13.b)
                                r13 = sx.q(arg1[1].d - 1) * 0x50 + *arg1
                        
                        int16_t* rcx_32 = var_758
                        
                        if (rcx_32 != 0)
                            sub_140a74f90(rcx_32)
                        
                        int64_t dwData_2 = dwData
                        
                        if (dwData_2 != 0)
                            sub_140a74f90(dwData_2)
                        
                        r14 = 0
                    
                    iDevNum_1 += 1
                    iDevNum_2 = iDevNum_1
                    memset(&var_6e4, 0, 0x344)
                    displayDevice.cb = 0x348
                    j = EnumDisplayDevicesW(&var_394, iDevNum_1, &displayDevice, 0)
                while (j != 0)
                iDevNum = iDevNum_3
        
        memset(&var_394, 0, 0x344)
        iDevNum += 1
        displayDevice_1.cb = 0x348
        iDevNum_3 = iDevNum
        i_1 = EnumDisplayDevicesW(nullptr, iDevNum, &displayDevice_1, 0)
    while (i_1 != 0)

__security_check_cookie(rax_1 ^ &var_7a8)
return i_1
