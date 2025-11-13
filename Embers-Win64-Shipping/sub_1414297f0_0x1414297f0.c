// 函数: sub_1414297f0
// 地址: 0x1414297f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_8 = arg1
int64_t r15 = 0
uint64_t rsi = 0
int32_t rdx = *(*(arg1 + 8) + 8)
int32_t var_68 = rdx
int32_t* r14 = arg2 + 0x1700

if (rdx s>= 3)
    r15 = 0x90

void* r15_1 = r15 + &data_143e8e850
int64_t rax_1 = 0

if (rdx s>= 3)
    rax_1 = 0x48

void* result = rax_1 - arg2 + &data_143e8d280
void* result_1 = result

do
    if ((*(result + r14) & 2) != 0)
        if (rdx s>= 3)
        label_1414298a1:
            int64_t rax_5 = (*r15_1)(*(arg1 + 8), arg2, 0)
            int64_t rbx_1 = rax_5
            uint64_t r12_1 = zx.q(rsi.d)
            int64_t rbp_1 = r12_1 * 0x1d0
            
            if (*(arg_8 + 0x3d4) != 0)
                wchar16 const* const rdi_1
                
                if (rsi.d u> 0x10)
                    rdi_1 = nullptr
                else
                    switch (rsi.d)
                        case 0
                            rdi_1 = u"DepthPass"
                        case 1
                            rdi_1 = u"BasePass"
                        case 2
                            rdi_1 = u"SkyPass"
                        case 3
                            rdi_1 = u"SingleLayerWaterPass"
                        case 4
                            rdi_1 = u"CSMShadowDepth"
                        case 5
                            rdi_1 = u"Distortion"
                        case 6
                            rdi_1 = u"Velocity"
                        case 7
                            rdi_1 = u"TranslucentVelocity"
                        case 8
                            rdi_1 = u"TranslucencyStandard"
                        case 9
                            rdi_1 = u"TranslucencyAfterDOF"
                        case 0xa
                            rdi_1 = u"TranslucencyAfterDOFModulate"
                        case 0xb
                            rdi_1 = u"TranslucencyAll"
                        case 0xc
                            rdi_1 = u"LightmapDensity"
                        case 0xd
                            rdi_1 = u"DebugViewMode"
                        case 0xe
                            rdi_1 = u"CustomDepth"
                        case 0xf
                            rdi_1 = u"MobileBasePassCSM"
                        case 0x10
                            rdi_1 = u"MobileInverseOpacity"
                
                int32_t rdx_5 = 0
                int64_t var_50 = 0
                int32_t rcx_2 = 0
                int64_t var_48_1 = 0
                
                if (rdi_1 != 0 && *rdi_1 != 0)
                    int64_t rbx_2 = -1
                    
                    do
                        rbx_2 += 1
                    while (rdi_1[rbx_2] != 0)
                    
                    if (rbx_2.d + 1 s> 0)
                        sub_1405947f0(&var_50, rbx_2.d + 1)
                        rcx_2 = var_48_1:4.d
                        rdx_5 = var_48_1.d
                    
                    int32_t rax_7 = rbx_2.d + 1 + rdx_5
                    var_48_1.d = rax_7
                    
                    if (rax_7 s> rcx_2)
                        sub_140594770(&var_50)
                    
                    UnDecorator::getReferenceType(var_50, rdi_1, (rbx_2.d + 1) * 2)
                    rbx_1 = rax_5
                
                sub_1412965b0(arg2 + 0x2740 + rbp_1, &var_50)
                int64_t rcx_8 = var_50
                
                if (rcx_8 != 0)
                    sub_140a74f90(rcx_8)
            
            int64_t* rdx_10 = (r12_1 << 4) + arg4
            sub_141267b30(arg2 + 0x2740 + rbp_1, *(arg_8 + 8), arg2, rsi.d, arg3, rbx_1, 
                arg2 + 0x1d70, arg2 + 0x1da0, *r14, &rdx_10[0x2d], *(arg4 + (rsi << 2) + 0x120), 
                rdx_10, 0, nullptr)
            arg1 = arg_8
            rdx = var_68
            result = result_1
        else if (rsi.d != 1 && rsi.d != 0xf)
            goto label_1414298a1
    
    rsi = zx.q(rsi.d + 1)
    r15_1 += 8
    r14 = &r14[1]
while (rsi.d s< 0x12)

return result
