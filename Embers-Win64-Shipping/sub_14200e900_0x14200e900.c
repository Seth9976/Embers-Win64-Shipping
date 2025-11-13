// 函数: sub_14200e900
// 地址: 0x14200e900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int32_t rdi = 0
int128_t* rbx = arg3
int64_t performanceCount
performanceCount.d = 0
char r12 = 0

if (*arg1 != 0)
    int64_t* rax = j_sub_140a82f30(0x18)
    int64_t* rsi_1 = rax
    int64_t var_90
    
    if (rax == 0)
        rsi_1 = nullptr
    else
        int32_t rax_1 = 0
        var_90 = 0
        int64_t var_88_1 = 0
        
        if (arg2 != 0 && *arg2 != 0)
            int64_t rbx_1 = -1
            
            do
                rbx_1 += 1
            while (arg2[rbx_1] != 0)
            
            if (rbx_1.d + 1 s> 0)
                sub_1405947f0(&var_90, rbx_1.d + 1)
                rax_1 = var_88_1:4.d
                rdi = var_88_1.d
            
            rdi += rbx_1.d + 1
            var_88_1.d = rdi
            
            if (rdi s> rax_1)
                sub_140594770(&var_90)
                rdi = var_88_1.d
            
            UnDecorator::getReferenceType(var_90, arg2, (rbx_1.d + 1) * 2)
            rbx = arg3
        
        QueryPerformanceCounter(&performanceCount)
        int128_t zmm6
        zmm6.q = float.d(performanceCount)
        zmm6.q = zmm6.q f* data_143d796f8
        zmm6.q = zmm6.q f+ 16777216.0
        zmm6.q = zmm6.q f- data_143de5880
        *rsi_1 = 0
        rsi_1[1].d = rdi
        
        if (rdi != 0)
            sub_1405a4c70(rsi_1, rdi, 0)
            memcpy(*rsi_1, var_90, rdi * 2)
        else
            *(rsi_1 + 0xc) = 0
        
        rsi_1[2] = zmm6.q
        r12 = 1
    
    int64_t r14_1 = *arg1
    int128_t* var_80 = nullptr
    int32_t var_78_1 = 1
    sub_1405a4f90(&var_80)
    int64_t rbx_3 = sx.q(var_78_1)
    int128_t* rdi_1 = var_80
    *rdi_1 = *rbx
    uint64_t var_70 = 0
    int32_t var_68_1 = rbx_3.d
    int32_t var_64
    
    if (rbx_3.d != 0)
        sub_1405a4be0(&var_70, rbx_3.d, 0)
        memcpy(var_70, rdi_1, (rbx_3 << 4).d)
    else
        __builtin_memset(&var_64, 0, 0x14)
    int64_t var_98 = 0
    int64_t arg_20 = 0x2bca2875f4373fff
    int64_t* var_a0_1 = &arg_20
    int64_t* var_a8_1 = &var_98
    int128_t var_60
    sub_14200dcd0(r14_1, rsi_1, sub_141cbc2e0(), 0, &var_60, &var_70)
    int64_t* var_58
    
    if (var_58 != 0)
        var_58[1].d -= 1
        
        if (var_58[1].d == 1)
            (**var_58)(var_58)
            int32_t r15_1 = *(var_58 + 0xc)
            *(var_58 + 0xc) -= 1
            
            if (r15_1 == 1)
                (*(*var_58 + 8))(var_58, zx.q(r15_1))
        
        rdi_1 = var_80
    
    uint64_t rcx_12 = var_70
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)
    
    result = sub_140a74f90(rdi_1)
    
    if ((r12 & 1) != 0)
        int64_t rcx_14 = var_90
        
        if (rcx_14 != 0)
            return sub_140a74f90(rcx_14)

return result
