// 函数: sub_1410ec940
// 地址: 0x1410ec940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = &__return_addr

if ((*(arg4 + 0x3c) & 0x40) != 0)
    int64_t* rcx = *(arg2 + 0x80)
    uint64_t rdx = zx.q(*(arg1 + 0x10))
    uint64_t* var_e0 = nullptr
    int64_t* rax_1 = (*(*rcx + 0x40))(rcx, rdx, &var_e0)
    uint64_t* rdi_1 = var_e0
    int64_t* rbx_1 = rax_1
    
    if (rdi_1 == 0)
        rdi_1 = *(arg2 + 0x80)
    
    int32_t rax_3 = (*(*rax_1 + 0x1d8))(rbx_1)
    int32_t var_170 = rax_3
    int32_t r13_1 = rax_3
    int64_t var_d8 = sub_141261c60(arg2)
    int32_t rax_5 = sub_141261c10(arg2, rbx_1, &var_d8)
    int32_t rax_6 = sub_141261bd0(arg2, rbx_1, &var_d8)
    int32_t r12_1
    
    if (sub_14139fc60() == 0)
        *(arg1 + 0x30) = data_1439b5400
        *(arg1 + 0x60) = 0
        r12_1 = *(arg1 + 0x10)
    else
        uint64_t r13_2 = zx.q(*(arg4 + 0x3d))
        TEB* gsbase
        
        if (data_143e543d0
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143e543d0)
            
            if (data_143e543d0 == 0xffffffff)
                data_143e54380 = data_1439b58c0
                data_143e54388 = data_1439b58d8
                data_143e54390 = data_1439b58f0
                data_143e54398 = data_1439b5908
                data_143e543a0 = data_1439b5920
                data_143e543a8 = data_1439b5938
                data_143e543b0 = data_1439b5950
                data_143e543b8 = data_1439b5968
                data_143e543c0 = data_1439b5980
                data_143e543c8 = data_1439b5998
                _Init_thread_footer(&data_143e543d0)
        
        uint64_t rax_8 = zx.q(*(arg4 + 0x3e))
        *(arg1 + 0x60) = r13_2.d
        *(arg1 + 0x30) = (&data_143e54380)[rax_8]
        r12_1 = *(arg1 + 0x10)
        
        if (r12_1 s<= 1)
            int128_t zmm6
            zmm6.d = float.s(r13_2)
            zmm6.d = zmm6.d f* 0.00392156886f
        
        r13_1 = var_170
    
    int128_t var_168
    int128_t var_158
    int128_t var_148
    int128_t var_138
    int128_t var_f8
    int128_t var_d0
    int128_t var_b8
    
    if (r13_1 == 0)
        int64_t* rcx_7 = *(arg2 + 0x78)
        
        if ((*(*rcx_7 + 0x50))(rcx_7) != 0 && sub_14212f090(rbx_1) == 0
                && sub_142134f80(rbx_1, 0) != 0 && r12_1 s> 1)
            int64_t* rax_15
            int512_t zmm0_1
            int512_t zmm1_1
            rax_15, zmm0_1, zmm1_1 = sub_14210f630(0)
            int64_t rdx_5 = *rax_15
            int64_t* rax_16 = (*(rdx_5 + 0x280))(rax_15, rdx_5)
            var_170.q = 0
            int64_t r9 = *rax_16
            int64_t* rax_17 = (*(r9 + 0x40))(rax_16, zx.q(*(arg1 + 0x10)), &var_170, r9)
            int64_t* rcx_12 = *(arg2 + 0x78)
            zmm0_1.o = zx.o(0)
            zmm1_1.o = zx.o(0)
            var_168 = zx.o(0)
            var_158 = zx.o(0)
            var_148 = zx.o(0)
            int64_t rax_18 = *rcx_12
            var_138 = zx.o(0)
            int128_t var_128
            __builtin_memset(&var_128, 0, 0x30)
            var_d0 = zx.o(0)
            void* rax_19
            int128_t* r9_1
            rax_19, r9_1 = (*(rax_18 + 0x40))(zmm0_1, zmm1_1)
            int128_t* var_1b0_1 = &var_d0
            int128_t* var_1b8_1 = &var_138
            char var_1c0_1 = &var_168
            int32_t zmm6_1 = sub_1410e7230(rax_17, rax_19, *(arg1 + 0x10), zmm0_1, r9_1, &var_148)
            void* rdx_8 = *(arg1 + 0x18)
            int32_t var_e8_1 = zmm6_1
            var_f8 = zx.o(0)
            int128_t* var_1c8_1
            var_1c8_1.d = arg5
            sub_141458e70(&var_f8, rdx_8, arg4, arg2, var_1c8_1.d, r13_1.b)
            int64_t rax_21 = sub_141260e50(var_168.q, var_138.q)
            int128_t zmm1_2 = var_158
            var_b8 = var_168
            int128_t var_a8_1 = zmm1_2
            int128_t var_98_1 = var_148
            int128_t var_88_1 = var_138
            int128_t var_78_1 = var_128
            int128_t var_68
            __builtin_memset(&var_68, 0, 0x20)
            return sub_1410e4500(arg1, arg2, arg3, arg4, rax_16, rax_17, arg1 + 0x28, &var_b8, 
                rax_5, rax_6, rax_21, 1, &var_f8)
        
        goto label_1410ecc5a
    
    if (r13_1 == 1)
    label_1410ecc5a:
        int512_t zmm0
        
        if (sub_142134f80(rbx_1, 0) != 0 && (*(*rbx_1 + 0x38))(rbx_1) == 0
                && sub_14212f090(rbx_1) == 0)
            int64_t* rax_29
            rax_29, zmm0 = sub_14210f630(0)
            int64_t rdx_11 = *rax_29
            uint64_t* rax_30 = (*(rdx_11 + 0x280))(rax_29, rdx_11)
            var_170.q = 0
            rdi_1 = rax_30
            uint64_t r9_4 = *rax_30
            rbx_1 = (*(r9_4 + 0x40))(rax_30, zx.q(*(arg1 + 0x10)), &var_170, r9_4)
        
        int64_t* rcx_24 = *(arg2 + 0x78)
        zmm0.o = zx.o(0)
        int128_t zmm1 = zx.o(0)
        var_168 = zmm0.o
        var_148 = zmm0.o
        int128_t var_128_1
        __builtin_memset(&var_128_1, 0, 0x30)
        int64_t rax_32 = *rcx_24
        var_158 = zmm1
        var_138 = zmm1
        var_d0 = zmm1
        void* rax_33 = (*(rax_32 + 0x40))(rcx_24)
        int32_t r8_8 = *(arg1 + 0x10)
        int128_t* var_1b0_3 = &var_d0
        int128_t* var_1b8_3 = &var_138
        int128_t* var_1c0_3 = &var_168
        int128_t* var_1c8_3 = &var_148
        int128_t* r9_5 = &var_158
        
        if (r12_1 s> 1)
            int32_t zmm6_3 = sub_1410e7830(rbx_1, rax_33, r8_8, r9_5, zmm0, var_1c8_3, var_1c0_3, 
                var_1b8_3, var_1b0_3)
            void* rdx_17 = *(arg1 + 0x18)
            var_1c0_3.b = 0
            int32_t var_e8_3 = zmm6_3
            var_f8 = zx.o(0)
            var_1c8_3.d = arg5
            sub_141458e70(&var_f8, rdx_17, arg4, arg2, var_1c8_3.d, var_1c0_3.b)
            int64_t rax_39 = sub_141260e50(var_168.q, var_138.q)
            int128_t zmm1_4 = var_158
            var_b8 = var_168
            int128_t var_a8_3 = zmm1_4
            int128_t var_98_3 = var_148
            int128_t var_88_3 = var_138
            int128_t var_78_3 = var_128_1
            int128_t var_68_2
            __builtin_memset(&var_68_2, 0, 0x20)
            return sub_1410e4500(arg1, arg2, arg3, arg4, rdi_1, rbx_1, arg1 + 0x28, &var_b8, rax_5, 
                rax_6, rax_39, 0, &var_f8)
        
        int32_t zmm6_2 = sub_1410e7450(rbx_1, rax_33, r8_8, r9_5, zmm0, var_1c8_3, var_1c0_3, 
            var_1b8_3, var_1b0_3)
        void* rdx_14 = *(arg1 + 0x18)
        var_1c0_3.b = 0
        int32_t var_e8_2 = zmm6_2
        var_f8 = zx.o(0)
        var_1c8_3.d = arg5
        sub_141458e70(&var_f8, rdx_14, arg4, arg2, var_1c8_3.d, var_1c0_3.b)
        int64_t rax_35 = sub_141260e50(var_168.q, var_138.q)
        int128_t zmm1_3 = var_158
        var_b8 = var_168
        int128_t var_a8_2 = zmm1_3
        int128_t var_98_2 = var_148
        int128_t var_88_2 = var_138
        int128_t var_78_2 = var_128_1
        int128_t var_68_1
        __builtin_memset(&var_68_1, 0, 0x20)
        return sub_1410e4500(arg1, arg2, arg3, arg4, rdi_1, rbx_1, arg1 + 0x28, &var_b8, rax_5, 
            rax_6, rax_35, 0, &var_f8)
    
    result = (*(*rbx_1 + 0x38))(rbx_1)
    
    if (result != 0)
        goto label_1410ecc5a

return result
