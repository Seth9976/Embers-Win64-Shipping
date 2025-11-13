// 函数: sub_14268d5c0
// 地址: 0x14268d5c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14265fd30(arg1, arg2, arg3)
uint32_t result = sub_142656a30(arg1, arg2)
uint32_t result_1 = result

if (result != 0xffffffff)
    int64_t* r14_1 = arg2[0x23]
    
    if (r14_1 == 0)
        int64_t rdx_1 = *arg2
        (*(rdx_1 + 0x390))(arg2, rdx_1)
        r14_1 = arg2[0x23]
    
    int512_t zmm2
    zmm2.o = r14_1[6].d
    int128_t zmm0_1 = sub_140a54d00(arg1[0x67], zx.q(result_1.b), zmm2)
    void* rbx_1 = arg1[0x67]
    (*(*r14_1 + 0x280))(r14_1)
    zmm2.o = zmm0_1
    result = sub_140a4f980(rbx_1, zx.q(result_1.b), zmm2)

void* rbx_2 = arg1[0x5c]

if (rbx_2 != 0)
    uint32_t result_2 = result_1
    int64_t* var_38 = arg2
    
    if (arg2 != 0)
        void* rbp_1 = arg2[0x23]
        
        if (rbp_1 != 0)
        label_14268d698:
            
            if (result_1 s>= 0)
                int64_t** var_30 = &var_38
                uint32_t* var_28_1 = &result_2
                void arg_20
                sub_140b2c6c0(rbx_2 + 0x220, &arg_20, &var_30, nullptr)
                *(rbx_2 + (sx.q(result_2) << 1) + 0x120) = *(rbp_1 + 0x44)
                TEB* gsbase
                result =
                    *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)))
                
                if (data_143f71964 s> result)
                    result = _Init_thread_header(&data_143f71964)
                    
                    if (data_143f71964 == 0xffffffff)
                        data_143f71960 = data_143f717a0
                        result = _Init_thread_footer(&data_143f71964)
                
                int16_t rdx_5 = data_143f71960
                
                if (rdx_5 != 0)
                    int64_t result_3 = sx.q(result_2)
                    result.w = *(rbx_2 + (result_3 << 1) + 0x120) | rdx_5
                    *(rbx_2 + (result_3 << 1) + 0x1a0) = result.w
        else
            result = (*(*arg2 + 0x390))(arg2)
            rbp_1 = arg2[0x23]
            result_1 = result_2
            
            if (rbp_1 != 0)
                goto label_14268d698

return result
