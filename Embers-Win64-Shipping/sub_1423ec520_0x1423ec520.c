// 函数: sub_1423ec520
// 地址: 0x1423ec520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_1 = *(data_143f5b298 + 0x30)
float zmm0 = sub_142005cc0(rax_1)
int32_t r13_1 = data_14399f8d0 - data_14399f8fc
int32_t rcx_1 = int.d(zmm0)
int32_t r8_1 = arg6 + 0x10
arg6 = r8_1
int32_t rcx_3 = rcx_1 * 0x23 + r8_1
uint128_t zmm1
zmm1.d = _mm_cvtepi32_ps(zx.o(r13_1)).d f* 0.0285714287f
zmm1.d = zmm1.d f+ zmm1.d
int32_t i_2 = neg.d(int.d(-0.5f f- zmm1.d) s>> 1)

if (i_2 s<= 0)
    return zx.q(rcx_3)

int32_t rsi = arg5
int32_t r12 = 0
int32_t rcx_4 = 0
int32_t var_90 = 0
uint64_t i_1 = zx.q(i_2)
uint64_t i

do
    int32_t rdi_1 = 0
    int32_t var_94_1 = r8_1
    int32_t var_98_1 = 0
    int32_t rbp_1 = rcx_4
    
    while (rbp_1 s< r13_1)
        char* rax_4 = sub_140ad7aa0(&data_14399f8c0, rbp_1)
        rax_4[1]
        uint32_t var_b0_1 = zx.d(rax_4[3])
        uint32_t var_b8_1 = zx.d(*rax_4)
        int16_t* var_50
        sub_140a2e390(&var_50, u"(R=%i,G=%i,B=%i,A=%i)", zx.q(rax_4[2]))
        int16_t* const rbx_1 = &data_142d40450
        int32_t var_48
        
        if (var_48 != 0)
            rbx_1 = var_50
        
        int64_t* rax_6 = sub_140ad7820(&data_14399f8c0, rbp_1)
        
        if (rax_6[1].d != 0)
            *rax_6
        
        var_b8_1.q = rbx_1
        int16_t* var_60
        sub_140a2e390(&var_60, u"%3i %s %s", zx.q(rbp_1))
        int16_t* const rdi_2 = &data_142d40450
        int16_t* rcx_8 = var_60
        int32_t var_58
        
        if (var_58 != 0)
            rdi_2 = rcx_8
        
        int16_t* r14_1 = nullptr
        int32_t rsi_1 = 0
        int16_t* var_88 = nullptr
        int32_t rax_7 = 0
        int64_t var_80_1 = 0
        
        if (rdi_2 != 0 && *rdi_2 != 0)
            int64_t rbx_2 = -1
            
            do
                rbx_2 += 1
            while (rdi_2[rbx_2] != 0)
            
            if (rbx_2.d + 1 s> 0)
                sub_1405947f0(&var_88, rbx_2.d + 1)
                rax_7 = var_80_1:4.d
                rsi_1 = var_80_1.d
                r14_1 = var_88
            
            rsi_1 += rbx_2.d + 1
            var_80_1.d = rsi_1
            
            if (rsi_1 s> rax_7)
                sub_140594770(&var_88)
                rsi_1 = var_80_1.d
                r14_1 = var_88
            
            UnDecorator::getReferenceType(r14_1, rdi_2, (rbx_2.d + 1) * 2)
            rcx_8 = var_60
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
        
        int16_t* rcx_12 = var_50
        
        if (rcx_12 != 0)
            sub_140a74f90(rcx_12)
        
        int16_t* rdx_6 = &data_142d40450
        
        if (rsi_1 != 0)
            rdx_6 = r14_1
        
        int32_t rax_8 = sub_142006f60(rax_1, rdx_6)
        int16_t* rbx_4 = &data_142d40450
        
        if (var_98_1 s>= rax_8)
            rax_8 = var_98_1
        
        rdi_1 = rax_8
        var_98_1 = rax_8
        
        if (rsi_1 != 0)
            rbx_4 = r14_1
        
        rsi = arg5
        void var_40
        var_b0_1.q = sub_140acc920(&var_40, rax_4)
        uint128_t zmm2_1 = _mm_cvtepi32_ps(zx.o(var_94_1))
        var_b8_1.q = rax_1
        sub_142409910(arg4, _mm_cvtepi32_ps(zx.o(rsi)), zmm2_1, rbx_4, var_b8_1, var_b0_1, 
            &data_14399f5e0)
        var_94_1 += rcx_1
        
        if (r14_1 != 0)
            sub_140a74f90(r14_1)
        
        rbp_1 += 1
        
        if (r12 + rbp_1 s>= 0x23)
            break
    
    rsi += rdi_1
    r8_1 = arg6
    rcx_4 = var_90 + 0x23
    r12 -= 0x23
    arg5 = rsi
    i = i_1
    i_1 -= 1
    var_90 = rcx_4
while (i != 1)
return zx.q(rcx_3)
