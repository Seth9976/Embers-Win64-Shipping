// 函数: sub_142112ce0
// 地址: 0x142112ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = (*(*(arg1 - 0x28) + 0x260))(arg1 - 0x28)
void* result_2 = result

if (result != 0 && result[0x2a].b == 4 && *(arg2 + 8) != 0)
    int64_t arg_8 = 0
    int512_t zmm1_1
    int128_t zmm6_1
    result, zmm1_1, zmm6_1 = sub_14212e1f0(arg2 + 0xde0, result, &arg_8)
    int64_t* rcx_11
    
    if (result != 0)
        rcx_11 = *result
        return sub_14212e730(rcx_11, rcx_11, arg1 - 0x28, zmm6_1, zmm1_1)
    
    int64_t* rcx_2 = *(arg2 + 8)
    result = (*(*rcx_2 + 0x28))(rcx_2, arg1 - 0x28)
    
    if (result != 0)
        void* result_3 = arg1 - 0x28
        
        if (zmm6_1.d f< 1f)
            result_3 = result_2
        
        zmm1_1, zmm6_1 = sub_1421218c0(result, result_3, *(arg2 + 0x1548))
        int32_t rcx_4 = *(result_2 + 0x214)
        uint32_t var_4c_1 = zx.d(*(result_2 + 0x20c))
        char var_44_1 = *(result_2 + 0x218) & 1
        int64_t* result_1 = result
        char var_50_1 = 1
        TEB* gsbase
        
        if (data_143e903d8
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143e903d8)
            
            if (data_143e903d8 == 0xffffffff)
                zmm1_1, zmm6_1 = sub_140b58260(&data_143e903d0, u"FPostProcessMaterialNode", 1)
                _Init_thread_footer(&data_143e903d8)
        
        int64_t rcx_7 = sx.q(*(arg2 + 0x1518))
        int64_t rbx_1 = data_143e903d0
        int32_t rax_8
        int32_t rdx_3
        rdx_3:rax_8 = sx.o(*(arg2 + 0x1510) + 0x14 + rcx_7)
        int32_t rdx_4 = rdx_3 & 7
        uint64_t rbp_2 = zx.q(8 - (((rax_8 + rdx_4) & 7) - rdx_4))
        
        if (rbp_2.d == 8)
            rbp_2 = 0
        
        result = zx.q((rcx_7 + 0x2c).d + rbp_2.d)
        *(arg2 + 0x1518) = result.d
        
        if (result.d s> *(arg2 + 0x151c))
            result = sub_1405daba0(arg2 + 0x1510)
        
        void* rcx_10 = *(arg2 + 0x1510) + rcx_7
        zmm1_1.o = zx.o(rcx_4.q)
        *rcx_10 = 0x3f800000
        *(rcx_10 + 4) = rbx_1
        *(rcx_10 + 0xc) = 0x18
        *(rcx_10 + 0x10) = rbp_2.d
        *(rbp_2 + rcx_10 + 0x14) = result_1.o
        *(rbp_2 + rcx_10 + 0x24) = (zmm1_1.o).q
        
        if (not(zmm6_1.d f>= 1f) && arg1 - 0x28 != result_2)
            void* rax_14 = zx.q(*(rcx_10 + 0x10)) + 0x14
            result = rax_14 + rcx_10
            
            if (rax_14 != neg.q(rcx_10))
                rcx_11 = *result
                return sub_14212e730(rcx_11, rcx_11, arg1 - 0x28, zmm6_1, zmm1_1)

return result
