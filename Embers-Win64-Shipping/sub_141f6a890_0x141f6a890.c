// 函数: sub_141f6a890
// 地址: 0x141f6a890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = arg2

if (*(arg1 + 0x430) != 0)
    void* rax_1 = *(arg1 + 0x5b0)
    
    if (rax_1 != 0)
        int64_t* rdi_1 = ***(rax_1 + 0x40)
        
        if (rdi_1[7].d != 0xffffffff)
            int32_t var_34
            int32_t arg_8
            sub_142337b80(rdi_1, arg3, &arg_8, &var_34)
            uint64_t r9_1 = zx.q(rdi_1[0x15].d)
            uint64_t r8_1 = zx.q(r9_1.d)
            
            if (arg4 u<= r9_1.d)
                r8_1 = zx.q(arg4)
            
            uint64_t rbx_2 = zx.q(var_34 + *(sx.q(arg_8) * 0xe8 + *rdi_1 + 0x10))
            int64_t rcx_4 = rdi_1[0x13]
            uint64_t r15 = zx.q(r8_1.d)
            
            if (rdi_1[0x16].b != 0)
                *result = *(rcx_4 + ((rbx_2 * r9_1 + r15) << 3))
                return result
            
            int64_t rbx_6 = rbx_2 * (r9_1 << 2) + rcx_4
            uint32_t rdi_2 = zx.d(*(rbx_6 + (r8_1 << 2) + 2))
            int32_t rbp_2 = (rdi_2 & 0xffff8000) << 0x10
            int16_t rax_6 = rdi_2.w & 0x7c00
            int32_t var_38
            TEB* gsbase
            int64_t zmm0
            
            if (rax_6 == 0)
                int32_t rdi_3 = rdi_2 & 0x3ff
                
                if (rdi_3 != 0)
                    if (data_143cda914 s> *(0x14
                            + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    zmm0.d = float.s(zx.q(rdi_3))
                    zmm0.d = logf(zmm0.d).d f* data_143cda910
                    var_38 = (rdi_3 << ((0xa - int.d(zmm0.d)).b + 0xd) & 0x7fffff)
                        | ((0x71 - (0xa - int.d(zmm0.d))) << 0x17 & 0x7f800000) | rbp_2
                else
                    var_38 = rbp_2
            else if (rax_6 != 0x7c00)
                var_38 = ((rdi_2 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rdi_2 & 0x3ff) << 0xd | rbp_2
            else
                var_38 = rbp_2 | 0x477fe000
            
            uint32_t rbx_7 = zx.d(*(rbx_6 + (r15 << 2)))
            int32_t rdi_12 = (rbx_7 & 0xffff8000) << 0x10
            int16_t rax_21 = rbx_7.w & 0x7c00
            
            if (rax_21 == 0)
                int32_t rbx_8 = rbx_7 & 0x3ff
                
                if (rbx_8 == 0)
                    arg_8 = rdi_12
                else
                    if (data_143cda914 s> *(0x14
                            + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    zmm0.d = float.s(zx.q(rbx_8))
                    zmm0.d = logf(zmm0.d).d f* data_143cda910
                    arg_8 = (rbx_8 << ((0xa - int.d(zmm0.d)).b + 0xd) & 0x7fffff)
                        | ((0x71 - (0xa - int.d(zmm0.d))) << 0x17 & 0x7f800000) | rdi_12
            else if (rax_21 != 0x7c00)
                arg_8 = ((rbx_7 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_7 & 0x3ff) << 0xd | rdi_12
            else
                arg_8 = rdi_12 | 0x477fe000
            
            *result = arg_8.d
            *(result + 4) = var_38
            return result

*arg2 = data_143dbb1f0
return result
