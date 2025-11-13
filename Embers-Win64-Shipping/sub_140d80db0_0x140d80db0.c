// 函数: sub_140d80db0
// 地址: 0x140d80db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int128_t zmm6 = arg2

if (*(arg1 + 0x94) == 0)
    int32_t i_1 = 0
    
    if (arg1[0x1f].b == 0)
        TEB* gsbase
        
        if (data_143e20738
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143e20738)
            
            if (data_143e20738 == 0xffffffff)
                zmm6 = sub_140b58260(&data_143e20730, u"InputDevice", 1)
                _Init_thread_footer(&data_143e20738)
        
        int64_t rbx_1 = data_143e20730
        sub_140a387e0()
        int64_t var_48
        result = sub_140d6fcf0(&data_14399e720, &var_48, rbx_1)
        int32_t i = 0
        int64_t r15_1 = var_48
        
        for (; i s>= 0; i += 1)
            int32_t var_40
            
            if (i s>= var_40)
                break
            
            int64_t* rcx = *(r15_1 + (sx.q(i) << 3))
            (*(*rcx + 0x40))(rcx, &var_48, &arg1[3])
            uint128_t zmm0_1 = var_48.o
            uint128_t var_38 = zmm0_1
            void* rax_4 = _mm_bsrli_si128(zmm0_1, 8).q
            
            if (rax_4 != 0)
                *(rax_4 + 8) += 1
            
            result = (*(*arg1 + 0x128))(arg1, &var_38)
            int64_t* rbx_2 = var_40.q
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    result = (**rbx_2)(rbx_2)
                    int32_t temp1_1 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        result = (*(*rbx_2 + 8))(rbx_2, 1)
        
        arg1[0x1f].b = 1
        
        if (r15_1 != 0)
            result = sub_140a74f90(r15_1)
    
    if (data_143dbb3dc == 0 || data_143dbb3dd != 0)
        int64_t* rcx_5 = arg1[0x1b]
        result = (*(*rcx_5 + 0x10))(rcx_5)
        
        for (; i_1 s>= 0; i_1 += 1)
            if (i_1 s>= arg1[0x1e].d)
                break
            
            int64_t rbx_4 = sx.q(i_1) * 2
            int64_t* rcx_6 = *(arg1[0x1d] + (rbx_4 << 3))
            (*(*rcx_6 + 8))(rcx_6, zmm6)
            int64_t* rcx_7 = *(arg1[0x1d] + (rbx_4 << 3))
            result = (*(*rcx_7 + 0x10))(rcx_7)

return result
