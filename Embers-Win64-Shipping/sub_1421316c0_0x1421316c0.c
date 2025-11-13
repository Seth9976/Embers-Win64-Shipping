// 函数: sub_1421316c0
// 地址: 0x1421316c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
int64_t result_1 = 0
int64_t var_50 = 0
int128_t zmm6 = arg4
int64_t result = (*(*arg1 + 0x2a0))(arg1, &result_1, 3, 0, 4, 1, result_1, var_50)

if (var_50.d s> 0)
    int64_t* rsi_1 = nullptr
    TEB* gsbase
    void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
    uint64_t r15_1 = zx.q(data_14401b1a0)
    int128_t zmm7 = zx.o(0)
    
    do
        result = result_1
        int64_t* rbx_1 = *(rsi_1 + result)
        
        if (rbx_1 != 0)
            void* rax_1 = sub_1425b3af0()
            void* rdx_1 = rbx_1[2]
            result = sx.q(*(rax_1 + 0x38))
            
            if (result.d s<= *(rdx_1 + 0x38))
                int64_t result_2 = result
                result = *(rdx_1 + 0x30)
                
                if (*(result + (result_2 << 3)) == rax_1 + 0x30)
                    result, zmm6 = sub_142397530(rbx_1, zmm6, arg5)
                    
                    if (arg2 != 0)
                        *(rbx_1 + 0x3d) &= 0xdf
                        result.b = arg3 << 5
                        *(rbx_1 + 0x3d) |= result.b
                    
                    if (arg6 != 0 && (zmm6.d f> zmm7.d || (*(rbx_1 + 0x3d) & 0x20) != 0))
                        int32_t rax_3
                        
                        if (data_143f4bfa8 s> *(0x14 + *(ThreadLocalStoragePointer + (r15_1 << 3))))
                            int64_t r8_4
                            rax_3, r8_4 = _Init_thread_header(&data_143f4bfa8)
                            
                            if (data_143f4bfa8 == 0xffffffff)
                                int64_t* rcx_5 = data_143db18d0
                                
                                if (rcx_5 == 0)
                                    sub_140a53c40()
                                    rcx_5 = data_143db18d0
                                
                                r8_4.b = 1
                                data_143f4bfa0 =
                                    (*(*rcx_5 + 0xb0))(rcx_5, r.Streaming.AllowFastForceResident", 
                                    r8_4)
                                _Init_thread_footer(&data_143f4bfa8)
                        
                        int64_t* rcx_1 = data_143f4bfa0
                        
                        if (rcx_1 != 0)
                            rax_3 = (*(*rcx_1 + 0x90))(rcx_1)
                        
                        if (rcx_1 == 0 || rax_3 == 0)
                            rax_3.b = 0
                        else
                            rax_3.b = 0x40
                        
                        *(rbx_1 + 0x3d) &= 0xbf
                        *(rbx_1 + 0x3d) |= rax_3.b
                        void*** rax_5
                        rax_5, zmm6, zmm7 = sub_141f88540()
                        result = (*rax_5)[0x13](rax_5)
                        
                        if (result.b != 0)
                            void*** rax_6
                            rax_6, zmm6, zmm7 = sub_141f88540()
                            int64_t* rax_7 = sub_140963350(rax_6)
                            int64_t r8_3 = *rax_7
                            result = (*(r8_3 + 0xa0))(rax_7, rbx_1, r8_3)
        
        i += 1
        rsi_1 = &rsi_1[1]
    while (i s< var_50.d)

int64_t result_3 = result_1

if (result_3 == 0)
    return result

return sub_140a74f90(result_3)
