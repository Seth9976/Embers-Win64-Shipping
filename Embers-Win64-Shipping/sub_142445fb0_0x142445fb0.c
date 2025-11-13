// 函数: sub_142445fb0
// 地址: 0x142445fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_1423de4f0(data_143f5b298, arg2)
*(arg1 + 0x94) = *(rax + 0xb0)
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
arg1[0x14] = float.d(performanceCount) f* data_143d796f8 f+ 16777216.0

if (*(arg3 + 0x24) == 0)
    int64_t result
    result.b = 0
    return result

sub_140b3ce60()
int64_t var_50
sub_142441630(&var_50, &arg3[5])
int32_t rsi = 0
int128_t* rdx_1 = nullptr

if ((*(arg4 + 0xc) | *(arg4 + 8) | *(arg4 + 4) | *arg4) != 0)
    rdx_1 = arg4

void* rbx

if (sub_140ba1330(&var_50, rdx_1, nullptr, 1) != 0)
    int16_t* const r12_1 = &data_142d40450
    performanceCount.b = 0
    
    if (arg1[0x12].b == 0)
        goto label_1424460f0
    
    int16_t* rdx_2
    
    if (arg3[6].d == 0)
        rdx_2 = &data_142d40450
    else
        rdx_2 = arg3[5]
    
    int16_t* const rcx_5
    
    if (arg1[6].d == 0)
        rcx_5 = &data_142d40450
    else
        rcx_5 = arg1[5]
    
    if (sub_140a54510(rcx_5, rdx_2) != 0)
        sub_14242e880(arg1)
        performanceCount.b = 1
    label_1424460f0:
        arg1[0x10] = arg2
        void* rcx_7 = *(arg2 + 0xf0)
        
        if (rcx_7 != 0 && sub_141fba620(rcx_7) != 0)
            sub_141fbef90(*(arg1[0x10] + 0xf0), &arg3[5])
        
        sub_141fa75e0(arg1, arg3)
        void* rcx_11 = arg1[0x10]
        arg1[0x12].d = 1
        *(arg1 + 0x68) = *arg4
        rbx = *(sub_140d21d80(rcx_11) + 0x18)
        int16_t* rdx_6
        
        if (arg1[6].d == 0)
            rdx_6 = &data_142d40450
        else
            rdx_6 = arg1[5]
        
        int64_t var_a0
        sub_140b58260(&var_a0, rdx_6, 1)
        int64_t* rax_9 = sub_141520bd0()
        void* rax_10 = rax_9[0x23]
        
        if (rax_10 == 0)
            int64_t rdx_7 = *rax_9
            (*(rdx_7 + 0x390))(rax_9, rdx_7)
            rax_10 = rax_9[0x23]
        
        int16_t* var_90 = nullptr
        int32_t var_88_1 = 0
        int16_t* var_70 = nullptr
        int32_t var_68_1 = 0
        sub_1405947f0(&var_70, 2)
        int32_t r14_2 = var_68_1 + 2
        
        if (r14_2 s> 0)
            sub_140594770(&var_70)
        
        int16_t* r13_1 = var_70
        UnDecorator::getReferenceType(r13_1, &data_142d404c4, 4)
        int16_t* var_60
        int64_t* var_58
        
        if (*(rax_10 + 0x38) != 0)
            sub_140b63b70(rax_10 + 0x38, &var_60)
        else
            var_60 = nullptr
            var_58 = nullptr
        
        int16_t* const rdx_10 = &data_142d40450
        
        if (r14_2 != 0)
            rdx_10 = r13_1
        
        int32_t rax_11 = sub_140a23cf0(&var_60, rdx_10, 0, 0, 0xffffffff)
        
        if (rax_11 s>= 0)
            int32_t r14_3 = var_58.d
            int16_t* r13_2
            int32_t r14_4
            
            if (r14_3 == 0)
                r13_2 = &data_142d40450
                r14_4 = 0
            else
                r13_2 = var_60
                r14_4 = r14_3 - 1
            
            int16_t* var_80 = nullptr
            int16_t* r12_2 = nullptr
            int32_t var_78_1 = 0
            
            if (rax_11 s< r14_4)
                r14_4 = rax_11
            
            int32_t r15_2 = 0
            int32_t rax_12 = 0
            int32_t var_74_1 = 0
            
            if (r13_2 != 0 && *r13_2 != 0 && r14_4 s> 0)
                if (r14_4 + 1 s> 0)
                    sub_1405947f0(&var_80, r14_4 + 1)
                    rax_12 = var_74_1
                    r15_2 = var_78_1
                    r12_2 = var_80
                
                r15_2 += r14_4 + 1
                
                if (r15_2 s> rax_12)
                    sub_140594770(&var_80)
                    r12_2 = var_80
                
                UnDecorator::getReferenceType(r12_2, r13_2, r14_4 * 2)
                r12_2[sx.q(r15_2) - 1] = 0
            
            int16_t* rcx_22 = var_90
            
            if (rcx_22 != 0)
                sub_140a74f90(rcx_22)
            
            r13_1 = var_70
            var_90 = r12_2
            r12_1 = &data_142d40450
            var_88_1 = var_74_1
            var_88_1 = r15_2
        
        int16_t* rcx_23 = var_60
        
        if (rcx_23 != 0)
            sub_140a74f90(rcx_23)
        
        if (r13_1 != 0)
            sub_140a74f90(r13_1)
        
        int16_t* rdx_14 = &data_142d40450
        
        if (var_88_1 != 0)
            rdx_14 = var_90
        
        int64_t var_a8
        sub_140b58260(&var_a8, rdx_14, 1)
        int64_t rcx_26 = var_a8
        int64_t rax_15
        
        if (rcx_26 != rbx)
            rax_15 = var_a0
        
        if (rcx_26 == rbx || rcx_26 == rax_15)
            *(arg1 + 0x91) = 1
            
            if (performanceCount.b == 0)
                sub_142445d20(arg1)
            else
                *(arg1 + 0x92) = 0x101
        else
            int32_t rcx_27 = var_88_1
            
            if (rcx_27 s> 1)
                if (rbx == rax_15)
                    void* r15_4 = *(arg1[0x10] + 0x38)
                    
                    if (r15_4 != 0)
                        int32_t i = 0
                        
                        if (*(r15_4 + 0x98) s> 0)
                            int64_t rbx_1 = 0
                            
                            do
                                void* rcx_30 = *(*(r15_4 + 0x90) + rbx_1)
                                
                                if (rcx_30 != 0)
                                    performanceCount = 0
                                    sub_142155520(rcx_30, 0)
                                
                                i += 1
                                rbx_1 += 8
                            while (i s< *(r15_4 + 0x98))
                            
                            rcx_27 = var_88_1
                
                if (rcx_27 != 0)
                    r12_1 = var_90
                
                int64_t performanceCount_2
                sub_140b58260(&performanceCount_2, r12_1, 1)
                uint32_t r14_5 = zx.d(*(arg1[0x10] + 0x11a))
                int64_t performanceCount_1 = performanceCount_2
                performanceCount = performanceCount_1
                rbx = zx.q(sub_140b5ead0(performanceCount_1.d) + performanceCount:4.d)
                void* rax_28
                
                if (data_143a305d8 == data_143a30604)
                label_1424464a4:
                    sub_140a9e570(&data_143a305d0, &var_60)
                    *var_58 = performanceCount_2
                    int32_t rax_30 = var_60.d
                    var_58[1].d = 0
                    *(var_58 + 0xc) = 0xffffffff
                    sub_14093e9e0(&data_143a305d0, &performanceCount, rbx.d, var_58, rax_30, 
                        nullptr)
                    rax_28 = data_143a305d0 + sx.q(performanceCount.d) * 0x14
                else
                    void* rdx_16 = data_143a30610
                    void* rax_26 = &data_143a30608
                    
                    if (rdx_16 != 0)
                        rax_26 = rdx_16
                    
                    int32_t rax_27 = *(rax_26 + ((sx.q(data_143a30618 - 1) & sx.q(rbx.d)) << 2))
                    
                    if (rax_27 == 0xffffffff)
                        goto label_1424464a4
                    
                    int64_t r9_1 = data_143a305d0
                    int64_t r8_3
                    
                    while (true)
                        r8_3 = sx.q(rax_27) * 5
                        
                        if (*(r9_1 + (r8_3 << 2)) == performanceCount_2)
                            break
                        
                        rax_27 = *(r9_1 + (r8_3 << 2) + 0xc)
                        
                        if (rax_27 == 0xffffffff)
                            goto label_1424464a4
                    
                    if (rax_27 == 0xffffffff)
                        goto label_1424464a4
                    
                    rax_28 = r9_1 + (r8_3 << 2)
                    
                    if (rax_28 == 0)
                        goto label_1424464a4
                
                *(rax_28 + 8) = r14_5
                
                if (*(arg1[0x10] + 0x11a) == 3)
                    rsi = 0x100000
                
                sub_140bcb5c0(&var_90, sub_140f63d10(&var_60, arg1, sub_1424432b0), 0, rsi, 
                    *(rax + 0x230))
            else
                void* rax_16 = arg1[0x10]
                performanceCount = 0
                int32_t rcx_28
                
                if (*(rax_16 + 0x11a) != 3)
                    rcx_28 = 0
                else
                    rcx_28 = 3
                
                sub_142444c50(arg1, 0, sub_1424307d0(rcx_28, 0, 0, nullptr, 1, 4))
        
        int16_t* rcx_40 = var_90
        rbx.b = 1
        
        if (rcx_40 != 0)
            sub_140a74f90(rcx_40)
    else
        sub_141fa75e0(arg1, arg3)
        rbx.b = 1
else
    rbx.b = 0

int64_t rcx_41 = var_50

if (rcx_41 != 0)
    sub_140a74f90(rcx_41)

return zx.q(rbx.b)
