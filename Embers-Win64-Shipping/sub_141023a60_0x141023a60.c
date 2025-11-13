// 函数: sub_141023a60
// 地址: 0x141023a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
uint64_t rcx = *(arg2 + 0x58)
char result

if (rcx == 0)
label_141023b7c:
    void* rbx_2 = *(arg2 + 0x30)
    uint64_t rax_9 = zx.q(*(arg2 + 0x44) << 3)
    uint64_t var_48 = rax_9
    int64_t var_40_1 = rax_9 + 8
    int64_t* rcx_10 = *(rbx_2 + 0x20)
    uint64_t* var_70_1 = &var_48
    void* var_68_1 = &data_143e2c388
    int32_t var_78_1 = 0
    int64_t var_60 = 0
    int32_t rax_12 = (*(*rcx_10 + 0x40))(rcx_10, 0, &var_48, &var_60)
    
    if (rax_12 s< 0)
        void* rcx_11 = *(rbx_2 + 0x10)
        int64_t var_90 = 0
        int64_t var_88_1 = 0
        int64_t* var_b0_1 = &var_90
        sub_14106a020(rax_12, 
            "pResource->Map(Subresource, pReadRange, reinterpret_cast<void**>(&pData))", 
            "d:\build\++ue4\sync\engine\source\runtime\d3d12rhi\private\D3D12RHIPrivate.h", 0x480, 
            *(*(rcx_11 + 0x20) + 0x18))
    
    *(arg2 + 0x38) = *(var_60 + (zx.q(*(arg2 + 0x44)) << 3))
    (*(*rcx_10 + 0x48))(rcx_10, zx.q(var_78_1), var_68_1)
    result = 1
else
    result = sub_1410270d0(rcx, *(arg2 + 0x60))
    
    if (result != 0)
        goto label_141023b7c
    
    if (arg3 != 0)
        int64_t performanceCount_1
        QueryPerformanceCounter(&performanceCount_1)
        
        if (*(arg2 + 0x60) == *(*(arg2 + 0x58) + 0x60))
            void* rbx_1 = nullptr
            
            if (data_143f01c92 != 0)
                void* rdi_1 = &data_143f02b98
                
                if (sub_141989210() == 0)
                    rdi_1 = nullptr
                
                rbx_1 = rdi_1
            
            void** var_58
            sub_141022330(**(arg1 + 0x6d8), &var_58, 0)
            int64_t* var_50
            
            if (var_50 != 0)
                int32_t rax_5 = *(var_50 + 0x14)
                *(var_50 + 0x14) -= 1
                
                if (rax_5 == 1)
                    sub_141011360(var_50, rax_5.b)
            
            if (rbx_1 != 0)
                _initp_eh_hooks()
        
        sub_141037f50(arg2 + 0x50)
        int64_t performanceCount
        QueryPerformanceCounter(&performanceCount)
        data_143f138cc += performanceCount.d - performanceCount_1.d
        data_143f138d8:4.d += 1
        goto label_141023b7c

__security_check_cookie(rax_1 ^ &var_d8)
return result
