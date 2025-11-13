// 函数: sub_141da9520
// 地址: 0x141da9520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x41].d s<= 1 || arg1[0x4b].d != 1 || arg1[0x3e].d == 0)
    void* rcx_30 = &arg1[0x3d]
    *(rcx_30 + 8) = 0
    
    if (*(rcx_30 + 0xc) != 0)
        sub_1405c5510(rcx_30, 0)
else
    int64_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    int64_t* rax_1 = sub_141802500()
    int64_t r8_1 = *rax_1
    int64_t* var_28
    (*(r8_1 + 0x40))(rax_1, &var_28, r8_1)
    int64_t* rcx_2 = var_28
    sub_141da4560((*(*rcx_2 + 0x90))(rcx_2), arg1, sub_141dad480)
    int16_t* const r8_2 = &data_142d40450
    int64_t* rdi_1 = var_28
    
    if (arg1[0x41].d != 0)
        arg1[0x40]
    
    if (arg1[0x46].d != 0)
        r8_2 = arg1[0x45]
    
    int32_t rdx_3 = arg1[0x50].d
    int32_t var_58_1 = arg1[0x47].d
    int32_t var_60_1 = rdx_3
    int32_t var_68_1 = rdx_3
    int64_t var_38
    sub_140a2e390(&var_38, 
        %sreplay/%s/event?group=checkpoint&time1=%i&time2=%i&meta=%i&incrementSize=false", r8_2)
    (*(*rdi_1 + 0x50))(rdi_1, &var_38)
    int64_t rcx_6 = var_38
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    int64_t var_48 = 0
    int32_t var_40_1 = 0
    sub_1405947f0(&var_48, 5)
    int32_t rax_6 = var_40_1 + 5
    var_40_1 = rax_6
    
    if (rax_6 s> 0)
        sub_140594770(&var_48)
    
    UnDecorator::getReferenceType(var_48, u"POST", 0xa)
    int64_t* rcx_10 = var_28
    (*(*rcx_10 + 0x48))(rcx_10, &var_48)
    int64_t rcx_11 = var_48
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)
    
    var_38 = 0
    int32_t var_30_1 = 0
    sub_1405947f0(&var_38, 0x19)
    int32_t rax_8 = var_30_1 + 0x19
    var_30_1 = rax_8
    
    if (rax_8 s> 0)
        sub_140594770(&var_38)
    
    UnDecorator::getReferenceType(var_38, u"application/octet-stream", 0x32)
    var_48 = 0
    int32_t var_40_2 = 0
    sub_1405947f0(&var_48, 0xd)
    int32_t rax_9 = var_40_2 + 0xd
    var_40_2 = rax_9
    
    if (rax_9 s> 0)
        sub_140594770(&var_48)
    
    UnDecorator::getReferenceType(var_48, u"Content-Type", 0x1a)
    int64_t* rcx_18 = var_28
    (*(*rcx_18 + 0x78))(rcx_18, &var_48, &var_38)
    int64_t rcx_19 = var_48
    
    if (rcx_19 != 0)
        sub_140a74f90(rcx_19)
    
    int64_t rcx_20 = var_38
    
    if (rcx_20 != 0)
        sub_140a74f90(rcx_20)
    
    uint128_t zmm0_1 = var_28.o
    var_38.o = zmm0_1
    void* rax_11 = _mm_bsrli_si128(zmm0_1, 8).q
    
    if (rax_11 != 0)
        *(rax_11 + 8) += 1
    
    int64_t* var_20
    
    if ((*(*arg1 + 0x1d0))(arg1, &var_38, &arg1[0x3d]) == 0)
        (*(*arg1 + 0x198))(arg1)
        *(arg1 + 0x29c) = 1
        
        if (var_20 != 0)
            var_20[1].d -= 1
            
            if (var_20[1].d == 1)
                (**var_20)(var_20)
                int32_t temp2_1 = *(var_20 + 0xc)
                *(var_20 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*var_20 + 8))(var_20, 1)
        
        QueryPerformanceCounter(&performanceCount)
        return 
    
    zmm0_1 = var_28.o
    var_38.o = zmm0_1
    void* rax_18 = _mm_bsrli_si128(zmm0_1, 8).q
    
    if (rax_18 != 0)
        *(rax_18 + 8) += 1
    
    sub_141da6730(arg1, 0xa, &var_38, 2, 0x40000000)
    
    if (var_20 != 0)
        var_20[1].d -= 1
        
        if (var_20[1].d == 1)
            (**var_20)(var_20)
            int32_t temp3_1 = *(var_20 + 0xc)
            *(var_20 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*var_20 + 8))(var_20, 1)
    
    QueryPerformanceCounter(&performanceCount)
    arg1[0x3e].d = 0
    
    if (*(arg1 + 0x1f4) != 0)
        sub_1405c5510(&arg1[0x3d], 0)

arg1[0x3f].d = 0
