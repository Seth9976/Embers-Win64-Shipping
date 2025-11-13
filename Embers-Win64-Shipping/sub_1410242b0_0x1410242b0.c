// 函数: sub_1410242b0
// 地址: 0x1410242b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi
void* arg_20 = rdi
void var_128
int64_t rax_1 = __security_cookie ^ &var_128
char var_f8 = arg2
void* r13 = *(*(arg1 + 0x10) + 0x9d8)
void* var_f0 = r13
void* result

if (data_143f0f161 == 0)
    result = nullptr
else
    int32_t r12_1 = *(arg1 + 0x1c)
    void* result_1 = nullptr
    int32_t r15_1
    
    if (arg2 == 0)
        r15_1 = 1
    
    int64_t* var_108
    int64_t* var_100
    int64_t* var_e8
    int32_t var_e0
    uint64_t* var_d8
    void* var_d0
    
    if (arg2 != 0 || *(arg1 + 0x20) s<= 1)
    label_141024463:
        int32_t rax_12 = *(arg1 + 0x20)
        
        if (rax_12 s> 0 || arg2 != 0)
            if (rax_12 == *(arg1 + 0x18) || arg2 != 0)
                rdi.b = 1
            else
                rdi.b = 0
            
            int64_t performanceCount_1
            QueryPerformanceCounter(&performanceCount_1)
            uint64_t r12_2 = zx.q(r12_1 * 2)
            uint64_t r15_2 = zx.q((r12_2 + 1).d)
            
            if (rdi.b != 0)
                int64_t rdx_7 = *(arg1 + 0x30)
                int64_t rcx_20 = sx.q(r12_2.d)
                void* rdi_3 = rdx_7 + rcx_20 * 0x18
                int64_t rax_16 = (rcx_20 + 1) * 3
                void* r14_4 = rdx_7 + (rax_16 << 3)
                
                if (*(r14_4 + 0x10) == *(*(rdx_7 + (rax_16 << 3) + 8) + 0x60)
                        || *(rdi_3 + 0x10) == *(*(rdi_3 + 8) + 0x60))
                    void** var_68
                    sub_141022330(**(r13 + 0x6d8), &var_68, 0)
                    int64_t* var_60
                    
                    if (var_60 != 0)
                        int32_t rax_19 = *(var_60 + 0x14)
                        *(var_60 + 0x14) -= 1
                        
                        if (rax_19 == 1)
                            sub_141011360(var_60, rax_19.b)
                
                sub_141037f50(rdi_3)
                sub_141037f50(r14_4)
            
            int64_t performanceCount
            QueryPerformanceCounter(&performanceCount)
            data_143f138d8:4.d += 1
            uint64_t r14_5 = r12_2 << 3
            data_143f138cc += performanceCount.d - performanceCount_1.d
            void* rdi_4 = *(arg1 + 0x40)
            uint64_t var_48 = r14_5
            uint64_t var_40_1 = zx.q((r15_2 + 1).d) << 3
            int64_t* rcx_32 = *(rdi_4 + 0x20)
            uint64_t* var_b0_1 = &var_48
            void* var_a8_1 = &data_143e2c398
            int32_t var_b8_1 = 0
            int64_t var_a0 = 0
            int32_t rax_23 = (*(*rcx_32 + 0x40))(rcx_32, 0, &var_48, &var_a0, var_108, var_100, 
                var_f8, var_f0, var_e8, var_e0, var_d8, var_d0)
            
            if (rax_23 s< 0)
                void* rcx_33 = *(rdi_4 + 0x10)
                int64_t var_78 = 0
                int64_t var_70_1 = 0
                var_100 = &var_78
                var_108 = *(*(rcx_33 + 0x20) + 0x18)
                sub_14106a020(rax_23, 
                    "pResource->Map(Subresource, pReadRange, reinterpret_cast<void**>(&pData))", 
                    "d:\build\++ue4\sync\engine\source\runtime\d3d12rhi\private\D3D12RHIPrivate.h", 
                    0x480, var_108)
            
            int64_t rcx_37 = var_a0
            int64_t r14_6 = *(r14_5 + rcx_37)
            int64_t rdi_5 = *(rcx_37 + (r15_2 << 3))
            
            if (rdi_5 u<= r14_6)
                (*(*rcx_32 + 0x48))(rcx_32, zx.q(var_b8_1), var_a8_1)
                result = nullptr
            else
                int64_t rax_24 = sub_141044a80(*(arg1 + 0x10) + 0x830, r14_6, rdi_5)
                int64_t rdi_6 = rdi_5 - r14_6
                
                if (rdi_6 u>= rax_24)
                    result_1 = rdi_6 - rax_24
                
                int64_t r9_4 = *rcx_32
                (*(r9_4 + 0x48))(rcx_32, zx.q(var_b8_1), var_a8_1, r9_4, var_108, var_100)
                result = result_1
        else
            result = nullptr
    else
        while (true)
            int64_t r8_1 = *(arg1 + 0x30)
            uint64_t r14_1 = zx.q(r12_1 * 2)
            int64_t rcx = sx.q(r14_1.d)
            uint64_t r13_1 = zx.q((r14_1 + 1).d)
            rdi = r8_1 + rcx * 0x18
            int64_t* rax_4 = (rcx + 1) * 3
            uint64_t rcx_2 = *(r8_1 + (rax_4 << 3) + 8)
            
            if (rcx_2 != 0)
                rax_4 = sub_1410270d0(rcx_2, *(r8_1 + (rax_4 << 3) + 0x10))
            
            if (rcx_2 == 0 || rax_4.b != 0)
                uint64_t rcx_3 = *(rdi + 8)
                
                if (rcx_3 == 0)
                    rax_4.b = 1
                else
                    rax_4 = sub_1410270d0(rcx_3, *(rdi + 0x10))
                
                if (rax_4.b != 0)
                    void* rdi_1 = *(arg1 + 0x40)
                    uint64_t r14_2 = r14_1 << 3
                    uint64_t var_50_1 = zx.q((r13_1 + 1).d) << 3
                    uint64_t var_58 = r14_2
                    int64_t* rcx_6 = *(rdi_1 + 0x20)
                    var_d8 = &var_58
                    var_d0 = &data_143e2c398
                    var_e8 = rcx_6
                    var_e0 = 0
                    int64_t var_c8 = 0
                    int32_t rax_6 = (*(*rcx_6 + 0x40))(rcx_6, 0, &var_58, &var_c8, var_108, 
                        var_100, var_f8, var_f0, var_e8, var_e0, var_d8, var_d0, var_c8)
                    
                    if (rax_6 s< 0)
                        void* rcx_7 = *(rdi_1 + 0x10)
                        int64_t var_88 = 0
                        int64_t var_80_1 = 0
                        var_100 = &var_88
                        var_108 = *(*(rcx_7 + 0x20) + 0x18)
                        sub_14106a020(rax_6, 
                            "pResource->Map(Subresource, pReadRange, reinterpret_cast<void**>(&pData))", 
                            "d:\build\++ue4\sync\engine\source\runtime\d3d12rhi\private\D3D12RHIPrivate.h", 
                            0x480, var_108)
                    
                    int64_t rcx_11 = var_c8
                    int64_t r14_3 = *(r14_2 + rcx_11)
                    rdi = *(rcx_11 + (r13_1 << 3))
                    
                    if (rdi u> r14_3)
                        int64_t rax_13 = sub_141044a80(*(arg1 + 0x10) + 0x830, r14_3, rdi)
                        void* rdi_2 = rdi - r14_3
                        
                        if (rdi_2 u>= rax_13)
                            result_1 = rdi_2 - rax_13
                        
                        (*(*var_e8 + 0x48))(var_e8, zx.q(var_e0), var_d0)
                        result = result_1
                        break
                    
                    (*(*var_e8 + 0x48))(var_e8, zx.q(var_e0), var_d0)
            
            int32_t rcx_13 = *(arg1 + 0x18)
            r15_1 += 1
            r12_1 = mods.dp.d(sx.q(rcx_13 - 1 + r12_1), rcx_13)
            
            if (r15_1 s>= *(arg1 + 0x20))
                arg2 = var_f8
                r13 = var_f0
                goto label_141024463

__security_check_cookie(rax_1 ^ &var_128)
return result
