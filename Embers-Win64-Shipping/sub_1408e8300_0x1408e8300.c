// 函数: sub_1408e8300
// 地址: 0x1408e8300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = &__return_addr

if (arg1[0x86] != 0 && arg1[0x87].b != 0 && arg1[0x90].b == 0)
    uint32_t zmm0[0x4] = arg1[0x88].d
    int128_t zmm7 = zx.o(0)
    
    if (zmm0[0] f>= 0f)
        zmm0 = __minss_xmmss_memss(zmm0[0], 0x44000000)
    else
        zmm0 = zx.o(0)
    
    arg2 = arg2 f* arg1[0x8f].d f* zmm0[0] f+ arg1[0x89].d
    arg1[0x89].d = arg2
    
    if (not(arg2 >= 0f) && *(arg1 + 0x439) != 0)
        arg1[0x89].d = arg2 f+ *(arg1 + 0x47c)
    
    int64_t rsi
    rsi.b = 0
    int32_t i = 0
    
    if (*(arg1 + 0x444) s> 0)
        do
            result, arg3 = sub_1408e9e40(arg1, i)
            rsi.b |= result.b
            i += 1
        while (i s< *(arg1 + 0x444))
        
        if (rsi.b != 0)
            common_cscanf<char>(arg1)
            result = sub_141ee8690(arg1)
    
    if (arg1[0x87].b != 0)
        zmm7 = arg1[0x88].d
    
    void* rdi_1 = arg1[0x7d]
    
    if (rdi_1 != 0)
        zmm0 = *(arg1 + 0x43c)
        float var_18_1[0x4] = arg3
        arg3 = 0xc6610000
        
        if (not(zmm0[0] f< -14400f))
            arg3 = __minss_xmmss_memss(zmm0[0], 0x46610000)
        
        zmm0 = arg1[0x8f].d
        arg3[0] = arg3[0] f+ arg1[0x89].d
        char rsi_1 = *(arg1 + 0x439)
        zmm0[0] = zmm0[0] f- -1f
        int32_t var_4c_1 = zmm7.d
        float var_58_1 = arg3[0]
        char var_54_1 = rsi_1
        int64_t* rbx
        rbx.b = __andps_xmmxud_memxud(zmm0, data_142d3f770)[0] f<= 9.99999994e-09f
        char var_53_1 = rbx.b
        char rax = sub_140a80f40()
        int512_t zmm6
        
        if (rax != 0)
            result, zmm6 = sub_1408e87b0(rdi_1, arg3[0], rsi_1, rbx.b, zmm7.d)
        else if (data_143f138f4 != rax)
        label_1408e84c4:
            void var_48
            int64_t* rax_2 = sub_1408dfac0(&var_48, nullptr, 0xff)
            void* rcx_5 = *rax_2
            *(rcx_5 + 0x10) = rdi_1.o
            *(rcx_5 + 0x20) = zmm7.d.q
            void* rcx_6 = *rax_2
            int32_t r8_2 = rax_2[2].d
            int64_t* rdx_2 = rax_2[1]
            int64_t* rbx_1 = *(rcx_6 + 0x30)
            int64_t* var_68_1 = rbx_1
            int32_t* rdi_2 = &rbx_1[9]
            
            if (rbx_1 != 0)
                *rdi_2 += 1
                rbx_1 = var_68_1
            
            result, zmm6 = sub_140778000(rcx_6, rdx_2, r8_2, 1)
            
            if (rbx_1 != 0)
                result = *rdi_2
                *rdi_2 -= 1
                
                if (result == 1)
                    result, zmm6 = sub_140a2f6e0(var_68_1)
        else if (data_143de5480 == rax)
            result, zmm6 = sub_1408e87b0(rdi_1, arg3[0], rsi_1, rbx.b, zmm7.d)
        else
            uint32_t rax_1
            rax_1.b = GetCurrentThreadId() == data_143de5470
            
            if (rax_1.b == 0)
                goto label_1408e84c4
            
            result, zmm6 = sub_1408e87b0(rdi_1, arg3[0], rsi_1, rbx.b, zmm7.d)
        
        zmm6.o = var_18_1

return result
