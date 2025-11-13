// 函数: sub_140cce1f0
// 地址: 0x140cce1f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce7ea0(arg1, arg2, arg3)
int64_t* rax = *(arg1 + 0x78)
int64_t rdi = 0
int64_t arg_8
int64_t rax_1

if (rax == 0)
    arg_8 = 0
    rax_1 = 0
else
    rax_1 = *rax

arg_8 = rax_1
int64_t result = (*(*arg2 + 0x140))(arg2, &arg_8)

if ((arg2[5].b & 1) != 0)
    int32_t rcx_1
    rcx_1.b = sub_140b5b8a0(arg_8.d, 0).b == 0
    result.b = arg_8:4.d != 0
    result.b |= rcx_1.b
    
    if (result.b != 0)
        int64_t rbx_1 = arg_8
        result = sub_140cbcdf0()
        
        if (data_143e1b278.d != data_143e1b2a4)
            int32_t rax_4 = sub_140b5ead0(rbx_1.d) + rbx_1:4.d
            void* r8_1 = &data_143e1b2a8
            void* rcx_4 = data_143e1b2b0
            
            if (rcx_4 != 0)
                r8_1 = rcx_4
            
            result = zx.q(*(r8_1 + (((sx.q(data_143e1b2b8) - 1) & sx.q(rax_4)) << 2)))
            
            if (result.d != 0xffffffff)
                int64_t r8_2 = data_143e1b270
                int64_t rdx_4
                
                while (true)
                    rdx_4 = sx.q(result.d)
                    int64_t rcx_5 = rdx_4 * 3
                    
                    if (*(r8_2 + (rcx_5 << 3)) == rbx_1)
                        break
                    
                    result = zx.q(*(r8_2 + (rcx_5 << 3) + 0x10))
                    
                    if (result.d == 0xffffffff)
                        *(arg1 + 0x78) = 0
                        return result
                
                if (result.d != 0xffffffff)
                    result = rdx_4 * 3
                    void* rcx_6 = r8_2 + (result << 3)
                    
                    if (rcx_6 != 0)
                        rdi = *(rcx_6 + 8)
    
    *(arg1 + 0x78) = rdi

return result
