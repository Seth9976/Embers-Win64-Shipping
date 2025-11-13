// 函数: sub_1425e6960
// 地址: 0x1425e6960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r12 = 0
int64_t performanceCount
performanceCount.d = 0

if (*(arg1 + 0x60) == 0)
    return 

EnterCriticalSection(arg1 + 0x28)

if (*(arg1 + 0x20) s> 0)
    int64_t* rax_1 = j_sub_140a82f30(0x38)
    int64_t* r15_1 = rax_1
    int64_t var_78
    
    if (rax_1 == 0)
        r15_1 = nullptr
    else
        int32_t rsi_1 = 0
        int32_t rax_2 = 0
        var_78 = 0
        int64_t var_70_1 = 0
        
        if (arg2 != 0 && *arg2 != 0)
            int64_t rdi_1 = -1
            
            do
                rdi_1 += 1
            while (arg2[rdi_1] != 0)
            
            if (rdi_1.d + 1 s> 0)
                sub_1405947f0(&var_78, rdi_1.d + 1)
                rax_2 = var_70_1:4.d
                rsi_1 = var_70_1.d
            
            rsi_1 += rdi_1.d + 1
            var_70_1.d = rsi_1
            
            if (rsi_1 s> rax_2)
                sub_140594770(&var_78)
                rsi_1 = var_70_1.d
            
            UnDecorator::getReferenceType(var_78, arg2, (rdi_1.d + 1) * 2)
        
        QueryPerformanceCounter(&performanceCount)
        int128_t zmm7 = data_143de54b0
        int128_t zmm6
        zmm6.q = float.d(performanceCount)
        zmm6.q = zmm6.q f* data_143d796f8
        zmm6.q = zmm6.q f+ 16777216.0
        zmm6.q = zmm6.q f- data_143de5880
        *r15_1 = *arg4
        r15_1[1] = 0
        r15_1[2].d = rsi_1
        
        if (rsi_1 != 0)
            sub_1405a4c70(&r15_1[1], rsi_1, 0)
            memcpy(r15_1[1], var_78, rsi_1 * 2)
        else
            *(r15_1 + 0x14) = 0
        
        r12 = 1
        r15_1[5] = zmm6.q
        *(r15_1 + 0x18) = zmm7
        r15_1[6].b = arg3
    
    void* rsi_2 = *(arg1 + 0x60)
    int64_t var_80 = 0
    int128_t var_68 = zx.o(0)
    int64_t var_88 = 0x2bca2875f4373fff
    int64_t* var_90_1 = &var_88
    int64_t* var_98_1 = &var_80
    sub_14200dcd0(rsi_2, r15_1, sub_1425e1be0(), 0, &var_68, arg1 + 0x18)
    int64_t* rdi_4 = var_68:8.q
    
    if (rdi_4 != 0)
        rdi_4[1].d -= 1
        
        if (rdi_4[1].d == 1)
            (**rdi_4)(rdi_4)
            int32_t rbp_1 = *(rdi_4 + 0xc)
            *(rdi_4 + 0xc) -= 1
            
            if (rbp_1 == 1)
                (*(*rdi_4 + 8))(rdi_4, zx.q(rbp_1))
    
    if ((r12 & 1) != 0)
        int64_t rcx_10 = var_78
        
        if (rcx_10 != 0)
            sub_140a74f90(rcx_10)

if (arg1 != -0x28)
    LeaveCriticalSection(arg1 + 0x28)
