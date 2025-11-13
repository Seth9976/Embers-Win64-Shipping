// 函数: sub_1406eb360
// 地址: 0x1406eb360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
uint64_t var_28 = __security_cookie ^ &var_138
uint64_t result
int64_t rcx

if (data_143cdf678 == 0)
    if (sub_140b6e650(u"Discord") != 0)
    label_1406eb3c6:
        wchar16* _String
        
        if (arg1[1].d == 0)
            _String = &data_142d40450
        else
            _String = *arg1
        
        if (sub_1406ea800(_wtoi64(_String), 0, &data_143cdf678).d == 0)
            int64_t* rsi_1 = data_143cdf678
            void** const var_c8 = &data_142d966f0
            void** const* var_90_1 = &var_c8
            sub_1406e8370(&rsi_1[2], nullptr, nullptr)
            int64_t* var_d8_1 = nullptr
            void var_110
            sub_1406ec540(&var_110, &var_c8)
            int32_t var_78 = rsi_1[1].d
            int64_t* var_38_1 = nullptr
            void var_70
            
            if (var_d8_1 != 0)
                if (var_d8_1 != &var_110)
                    var_38_1 = var_d8_1
                    var_d8_1 = nullptr
                else
                    var_38_1 = (*(*var_d8_1 + 8))(var_d8_1, &var_70)
                    
                    if (var_d8_1 != 0)
                        void* rdx_3
                        rdx_3.b = var_d8_1 != &var_110
                        (*(*var_d8_1 + 0x20))(var_d8_1, rdx_3)
                        var_d8_1 = nullptr
            
            sub_1406e8a90(&rsi_1[2], &var_78)
            
            if (var_38_1 != 0)
                void* rdx_5
                rdx_5.b = var_38_1 != &var_70
                (*(*var_38_1 + 0x20))(var_38_1, rdx_5)
            
            rsi_1[1].d += 1
            
            if (var_d8_1 != 0)
                void* rdx_6
                rdx_6.b = var_d8_1 != &var_110
                (*(*var_d8_1 + 0x20))(var_d8_1, rdx_6)
            
            int64_t rax_10 = *rsi_1
            (*(rax_10 + 0x10))(rax_10, 4, &rsi_1[1], sub_1406e82f0)
            
            if (var_90_1 != 0)
                void** const* rdx_7
                rdx_7.b = var_90_1 != &var_c8
                (*var_90_1)[4](var_90_1, rdx_7)
            
            void* rax_12 = sub_1406ea1f0(data_143cdf678)
            void** const var_c0 = &data_142d967b0
            void** const* var_88_1 = &var_c0
            int32_t rax_13 = *rax_12
            int32_t* rdx_8 = *(rax_12 + 0x10)
            var_c8.d = rax_13
            void** const* rcx_13
            
            if (rdx_8 == *(rax_12 + 0x18))
                sub_1406e87c0(rax_12 + 8, rdx_8, &var_c8)
                rcx_13 = var_88_1
            else
                *rdx_8 = rax_13
                *(rdx_8 + 0x40) = 0
                rcx_13 = var_88_1
                
                if (rcx_13 == 0)
                    *(rax_12 + 0x10) += 0x48
                else if (rcx_13 != &var_c0)
                    *(rdx_8 + 0x40) = rcx_13
                    rcx_13 = nullptr
                    int64_t var_88_3 = 0
                    *(rax_12 + 0x10) += 0x48
                else
                    *(rdx_8 + 0x40) = (*rcx_13)[1](rcx_13, &rdx_8[2])
                    rcx_13 = var_88_1
                    
                    if (rcx_13 == 0)
                        *(rax_12 + 0x10) += 0x48
                    else
                        void** const* rdx_10
                        rdx_10.b = rcx_13 != &var_c0
                        (*rcx_13)[4](rcx_13, rdx_10)
                        *(rax_12 + 0x10) += 0x48
                        rcx_13 = nullptr
                        int64_t var_88_2 = 0
            
            if (rcx_13 != 0)
                void** const* rdx_11
                rdx_11.b = rcx_13 != &var_c0
                (*rcx_13)[4](rcx_13, rdx_11)
            
            *rax_12 += 1
            void* rax_18 = sub_1406ea1f0(data_143cdf678)
            var_c0 = &data_142d967e0
            void** const* var_88_4 = &var_c0
            int32_t rax_19 = *(rax_18 + 0x20)
            int32_t* rdx_12 = *(rax_18 + 0x30)
            var_c8.d = rax_19
            void** const* rcx_16
            
            if (rdx_12 == *(rax_18 + 0x38))
                sub_1406e87c0(rax_18 + 0x28, rdx_12, &var_c8)
                rcx_16 = var_88_4
            else
                *rdx_12 = rax_19
                *(rdx_12 + 0x40) = 0
                rcx_16 = var_88_4
                
                if (rcx_16 == 0)
                    *(rax_18 + 0x30) += 0x48
                else if (rcx_16 != &var_c0)
                    *(rdx_12 + 0x40) = rcx_16
                    rcx_16 = nullptr
                    int64_t var_88_6 = 0
                    *(rax_18 + 0x30) += 0x48
                else
                    *(rdx_12 + 0x40) = (*rcx_16)[1](rcx_16, &rdx_12[2])
                    rcx_16 = var_88_4
                    
                    if (rcx_16 == 0)
                        *(rax_18 + 0x30) += 0x48
                    else
                        void** const* rdx_14
                        rdx_14.b = rcx_16 != &var_c0
                        (*rcx_16)[4](rcx_16, rdx_14)
                        *(rax_18 + 0x30) += 0x48
                        rcx_16 = nullptr
                        int64_t var_88_5 = 0
            
            if (rcx_16 != 0)
                void** const* rdx_15
                rdx_15.b = rcx_16 != &var_c0
                (*rcx_16)[4](rcx_16, rdx_15)
            
            *(rax_18 + 0x20) += 1
            void* rax_24 = sub_1406ea1f0(data_143cdf678)
            var_c0 = &data_142d96810
            void** const* var_88_7 = &var_c0
            int32_t rax_25 = *(rax_24 + 0x40)
            int32_t* rdx_16 = *(rax_24 + 0x50)
            var_c8.d = rax_25
            void** const* rcx_19
            
            if (rdx_16 == *(rax_24 + 0x58))
                sub_1406e87c0(rax_24 + 0x48, rdx_16, &var_c8)
                rcx_19 = var_88_7
            else
                *rdx_16 = rax_25
                *(rdx_16 + 0x40) = 0
                rcx_19 = var_88_7
                
                if (rcx_19 == 0)
                    *(rax_24 + 0x50) += 0x48
                else if (rcx_19 != &var_c0)
                    *(rdx_16 + 0x40) = rcx_19
                    rcx_19 = nullptr
                    int64_t var_88_9 = 0
                    *(rax_24 + 0x50) += 0x48
                else
                    *(rdx_16 + 0x40) = (*rcx_19)[1](rcx_19, &rdx_16[2])
                    rcx_19 = var_88_7
                    
                    if (rcx_19 == 0)
                        *(rax_24 + 0x50) += 0x48
                    else
                        void** const* rdx_18
                        rdx_18.b = rcx_19 != &var_c0
                        (*rcx_19)[4](rcx_19, rdx_18)
                        *(rax_24 + 0x50) += 0x48
                        rcx_19 = nullptr
                        int64_t var_88_8 = 0
            
            if (rcx_19 != 0)
                void** const* rdx_19
                rdx_19.b = rcx_19 != &var_c0
                (*rcx_19)[4](rcx_19, rdx_19)
            
            *(rax_24 + 0x40) += 1
            void* rax_30 = sub_1406ea1f0(data_143cdf678)
            var_c0 = &data_142d96840
            void** const* var_88_10 = &var_c0
            result = zx.q(*(rax_30 + 0x60))
            int32_t* rdx_20 = *(rax_30 + 0x70)
            var_c8.d = result.d
            void** const* rcx_22
            
            if (rdx_20 == *(rax_30 + 0x78))
                sub_1406e87c0(rax_30 + 0x68, rdx_20, &var_c8)
                rcx_22 = var_88_10
            else
                *rdx_20 = result.d
                *(rdx_20 + 0x40) = 0
                rcx_22 = var_88_10
                
                if (rcx_22 == 0)
                    *(rax_30 + 0x70) += 0x48
                else if (rcx_22 != &var_c0)
                    *(rdx_20 + 0x40) = rcx_22
                    rcx_22 = nullptr
                    int64_t var_88_12 = 0
                    *(rax_30 + 0x70) += 0x48
                else
                    *(rdx_20 + 0x40) = (*rcx_22)[1](rcx_22, &rdx_20[2])
                    rcx_22 = var_88_10
                    
                    if (rcx_22 == 0)
                        *(rax_30 + 0x70) += 0x48
                    else
                        void** const* rdx_22
                        rdx_22.b = rcx_22 != &var_c0
                        (*rcx_22)[4](rcx_22, rdx_22)
                        *(rax_30 + 0x70) += 0x48
                        rcx_22 = nullptr
                        int64_t var_88_11 = 0
            
            if (rcx_22 != 0)
                void** const* rdx_23
                rdx_23.b = rcx_22 != &var_c0
                (*rcx_22)[4](rcx_22, rdx_23)
            
            *(rax_30 + 0x60) += 1
            rcx = *arg1
            goto label_1406eb86a
    else
        if (sub_140b6e650(u"DiscordPTB") != 0)
            goto label_1406eb3c6
        
        if (sub_140b6e650(u"DiscordCanary").b != 0)
            goto label_1406eb3c6
    
    int64_t rcx_2 = *arg1
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
    
    result.b = 0
else
    rcx = *arg1
label_1406eb86a:
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    result.b = 1
__security_check_cookie(var_28 ^ &var_138)
return result
