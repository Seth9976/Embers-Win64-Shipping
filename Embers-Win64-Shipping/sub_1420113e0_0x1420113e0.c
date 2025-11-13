// 函数: sub_1420113e0
// 地址: 0x1420113e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r13 = arg3
int128_t zmm6 = arg2
int64_t r9
int512_t zmm0
int512_t zmm1
r9, zmm0, zmm1 = sub_140b33630("EngineTickMisc")
zmm0.o = zx.o(0)

if (not(zmm6.d f>= 0f))
    sub_140af98a0("Unknown", 0x62c, 
        Negative delta time! Please see https://udn.epicgames.com/lists/showpost."
    "php?list=ue3bugs&id=4364", r9)
    sub_140afbb40()

int32_t rax = data_14401b1a0
TEB* gsbase

if (data_143de5426 == 0)
    if (data_143cd80cc s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(rax) << 3))))
        _Init_thread_header(&data_143cd80cc)
        
        if (data_143cd80cc == 0xffffffff)
            sub_140af2b60()
            data_143cd80c8 = sub_140b21a10(&data_143dbb3f0, u"nullrhi")
            _Init_thread_footer(&data_143cd80cc)
    
    if ((data_143cd80cc s<= *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(rax) << 3)))
            || data_143de5426 == 0 || data_143de5427 != 0) && data_143cd80c8 == 0)
        sub_1423d4270(arg1)
    
    rax = data_14401b1a0

int64_t rdx

if (data_143de5429 != 0 && arg1[0xf1] == 0
        && data_143cd80cc s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(rax) << 3))))
    rdx, zmm0 = _Init_thread_header(&data_143cd80cc)
    
    if (data_143cd80cc == 0xffffffff)
        sub_140af2b60()
        data_143cd80c8 = sub_140b21a10(&data_143dbb3f0, u"nullrhi")
        rdx, zmm0 = _Init_thread_footer(&data_143cd80cc)

if (data_143de5429 != 0 && arg1[0xf1] == 0 && (data_143de5426 == 0 || data_143de5427 != 0)
        && data_143cd80c8 == 0)
    sub_140b721f0(0)
else
    int64_t* rcx_3 = arg1[0xf1]
    
    if (rcx_3 != 0)
        zmm1.o = zmm6
        (*(*rcx_3 + 0x2c8))(rcx_3, zmm1)
    
    zmm0.o = zmm6
    int128_t zmm2
    zmm2.d = data_143a2d8bc.d f* 0.00100000005f
    rdx.b = data_143f3bc40 != 0
    sub_140d303f0()
    int32_t* rcx_4 = data_143f3efe8
    int512_t zmm0_1
    
    if (rcx_4 != 0)
        zmm0_1, zmm6 = sub_142010f10(rcx_4, zmm6.d)
    
    zmm0_1.o = zmm6
    int32_t r9_1 = arg1[0x188].d
    int64_t* rsi_1 = nullptr
    uint64_t r15
    r15.b = 0
    int32_t var_a4_1 = 0
    int32_t var_a0_1 = r15.d
    int32_t rbx_1 = 0
    int32_t var_a8_1 = 0
    int32_t rdx_1 = 0
    
    if (r9_1 s> 0)
        int64_t* r10_1 = arg1[0x187]
        int64_t* r8_2 = r10_1
        
        do
            if (*(*r8_2 + 0x278) == data_143f5e920)
                var_a8_1.q = *(r10_1[sx.q(rdx_1)] + 0xb0)
                rbx_1 = 0
                break
            
            rdx_1 += 1
            r8_2 = &r8_2[1]
        while (rdx_1 s< r9_1)
    
    int32_t i_1 = 0
    int32_t i = 0
    int16_t var_c8
    int16_t* var_90
    int64_t* var_78
    char arg_20
    
    if (r9_1 s> 0)
        int64_t r14_1 = 0
        int64_t var_98_1 = 0
        
        do
            char* r13_1 = *(arg1[0x187] + r14_1)
            void* rax_10 = *(r13_1 + 0x278)
            
            if (rax_10 != 0 && (*(rax_10 + 0x11e) & 0x10) != 0)
                data_143f5e920 = rax_10
                (*(*arg1 + 0x448))(arg1, r13_1, zmm6)
                
                if (arg3 == 0)
                    *(arg1 + 0x7a4) = 0
                    sub_1420f0560(*(r13_1 + 0x278), 2, zmm6)
                
                if (data_143de5426 == 0 && sub_14242d3d0(*(r13_1 + 0x278)) != 0)
                    sub_141f76b30(*(r13_1 + 0x278))
                    sub_141f4e980(*(r13_1 + 0x278), 0, 0)
                
                void* rdx_9 = *(r13_1 + 0x278)
                char rax_13 = *(rdx_9 + 0x11b)
                
                if ((rax_13 & 1) != 0)
                    *(rdx_9 + 0x11b) = rax_13 & 0xfe
                    void* rax_14 = sub_142411ce0(&r13_1[0xd0], u"causeevent=", nullptr)
                    void* rcx_13 = *(r13_1 + 0x218)
                    int64_t* rax_15
                    
                    if (rcx_13 == 0)
                        rax_15 = nullptr
                    else
                        rax_15 = sub_142029870(rcx_13)
                    
                    var_78 = rax_15
                    
                    if (rax_14 != 0 && rax_15 != 0)
                        int16_t* var_b8 = nullptr
                        int64_t var_b0_1 = 0
                        sub_1405947f0(&var_b8, 0xc)
                        int32_t rax_16 = var_b0_1:4.d
                        arg_20.d = rax_16
                        int32_t r14_2 = var_b0_1.d + 0xc
                        var_b0_1.d = r14_2
                        
                        if (r14_2 s> rax_16)
                            sub_140594770(&var_b8)
                            r14_2 = var_b0_1.d
                            arg_20.d = var_b0_1:4.d
                        
                        int16_t* rdi_1 = var_b8
                        var_90 = rdi_1
                        var_c8 = 0x3f
                        sub_1405a7220(rdi_1, 0xc, "CAUSEEVENT ", 0xc, 0x3f)
                        
                        if (*rax_14 == 0)
                            var_b8 = nullptr
                            int64_t var_b0_3 = 0
                        else
                            int64_t rdi_2 = -1
                            
                            do
                                rdi_2 += 1
                            while (*(rax_14 + (rdi_2 << 1)) != 0)
                            
                            int32_t rax_18
                            
                            if (r14_2 == 0)
                                rax_18 = r14_2 + 1
                            
                            if (r14_2 != 0 || rdi_2.d == 0)
                                rax_18 = 0
                            
                            int16_t* var_88 = var_90
                            int32_t rdx_5 = rax_18 + r14_2 + rdi_2.d
                            int32_t rcx_18 = arg_20.d
                            var_b8 = nullptr
                            int32_t var_7c_1 = rcx_18
                            int64_t var_b0_2 = 0
                            
                            if (rdx_5 s> rcx_18)
                                sub_1405947f0(&var_88, rdx_5)
                            
                            sub_140a20ba0(&var_88, rax_14, rdi_2.d)
                            rdi_1 = var_88
                            var_90 = rdi_1
                            var_88 = nullptr
                            int32_t var_80_1
                            var_80_1.q = 0
                        
                        int64_t* rsi_2 = var_78
                        int16_t* const r15_2 = &data_142d40450
                        
                        if (r14_2 != 0)
                            r15_2 = rdi_1
                        
                        int64_t r14_3 = rsi_2[5]
                        sub_140b19e60()
                        int64_t rdx_7 = *rsi_2
                        (*(r14_3 + 8))(&rsi_2[5], (*(rdx_7 + 0x150))(rsi_2, rdx_7), r15_2, 
                            &data_1439a8bd0)
                        int16_t* rcx_23 = var_90
                        
                        if (rcx_23 != 0)
                            sub_140a74f90(rcx_23)
                        
                        r14_1 = var_98_1
                        rsi_1 = nullptr
                        i = i_1
                    
                    void* rax_20 = *(r13_1 + 0x278)
                    r15 = zx.q(var_a0_1)
                    *(rax_20 + 0x11b) |= 2
                    rdx_9 = *(r13_1 + 0x278)
                
                sub_1423f5510(arg1, rdx_9)
                void* rdx_10 = *(r13_1 + 0x278)
                
                if ((*(rdx_10 + 0x11c) & 0x40) != 0)
                    sub_1423d25f0(arg1, rdx_10)
                    void* rax_21 = *(r13_1 + 0x278)
                    *(rax_21 + 0x11c) &= 0xbf
                
                if (data_143de542a == 1)
                    sub_14244a470(*(r13_1 + 0x278))
                
                arg1[0xf4].d = 0
                zmm6 = sub_1423d54c0(arg1, r13_1)
                
                if (*r13_1 != 4)
                    char rax_22
                    rax_22, zmm6 = sub_1420e6500(*(r13_1 + 0x278))
                    r15 = zx.q(r15.b)
                    
                    if (rax_22 == 0)
                        r15 = 1
                    
                    var_a0_1 = r15.d
            
            i += 1
            r14_1 += 8
            i_1 = i
            var_98_1 = r14_1
        while (i s< arg1[0x188].d)
        
        rbx_1 = var_a8_1
        r13 = arg3
    
    sub_1423cadb0(nullptr, 2, 0, zmm6)
    int32_t rcx_29
    rcx_29.b = sub_140b5b8a0(rbx_1, 0) == 0
    
    if ((var_a4_1 != 0 | rcx_29.b) != 0)
        data_143f5e920 = *(sub_1423de3e0(arg1, var_a8_1.q) + 0x278)
    
    if (data_143f40488
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143f40488)
        
        if (data_143f40488 == 0xffffffff)
            sub_140b58260(&data_143f40480, u"Media", 1)
            _Init_thread_footer(&data_143f40488)
    
    int64_t rbx_2 = data_143f40480
    j_sub_140b3db50()
    int64_t* rax_27
    int64_t rdx_14
    uint128_t zmm0_2
    float zmm6_1
    rax_27, rdx_14, zmm0_2, zmm6_1 = sub_140b407e0(&data_143de7d78, rbx_2)
    
    if (rax_27 != 0)
        int64_t rdx_15 = *rax_27
        (*(rdx_15 + 0xa0))(rax_27, rdx_15)
    
    int64_t* rcx_35 = arg1[0xf1]
    
    if (rcx_35 != 0 && r13 == 0)
        (*(*rcx_35 + 0x2b0))(rcx_35, zmm6_1)
    
    if (data_143a2e070 != 0)
        data_143a2e070 = 0
        sub_140d7dfe0()
        
        if (arg1[0x1be] != 0)
            int64_t* rbx_3 = arg1[0x1bf]
            
            if (rbx_3 != 0)
                int32_t rcx_36 = rbx_3[1].d
                
                if (rcx_36 s> 0)
                    if (*(data_143e29f28 + 0x172) == 0)
                        if (rbx_3 != 0)
                            uint64_t rax_29
                            
                            if (rcx_36 != 0)
                                rbx_3[1].d = rcx_36 + 1
                                rax_29.b = 1
                            else
                                rax_29.b = 0
                            
                            if (rax_29.b == 0)
                                rbx_3 = nullptr
                            
                            if (rbx_3 != 0)
                                rsi_1 = arg1[0x1be]
                        
                        zmm0_2 = sub_140e25670(rsi_1, zmm0_2)
                        
                        if (rbx_3 != 0)
                            rbx_3[1].d -= 1
                            
                            if (rbx_3[1].d == 1)
                                (**rbx_3)(rbx_3)
                                int32_t temp2_1 = *(rbx_3 + 0xc)
                                *(rbx_3 + 0xc) -= 1
                                
                                if (temp2_1 == 1)
                                    (*(*rbx_3 + 8))(rbx_3, 1)
                    
                    var_78 = arg1[0x1c2]
                    void* rax_33 = arg1[0x1c3]
                    void* var_70_1 = rax_33
                    
                    if (rax_33 != 0)
                        *(rax_33 + 8) += 1
                    
                    rdx_14, zmm6_1 = sub_140e83c40(data_143e29f28, &var_78, zmm0_2)
    
    if (r13 == 0 && data_143de5426 == r13 && sub_1405948d0() != 0)
        rdx_14.b = 1
        (*(*arg1 + 0x458))(arg1, rdx_14)
        int64_t* rax_36 = data_143f3f3b0
        
        if (rax_36 == 0)
            int64_t rbx_4 = *sub_140b58260(&var_90, u"Renderer", 1)
            j_sub_140b3db50()
            rax_36, zmm6_1 = j_sub_140b407e0(&data_143de7d78, rbx_4)
            data_143f3f3b0 = rax_36
        
        int64_t rdx_18 = *rax_36
        (*(rdx_18 + 0x120))(rax_36, rdx_18)
    
    if (data_143de5429 != 0)
        void*** rax_38
        rax_38, zmm6_1 = sub_141f88540()
        void** r9_2 = *rax_38
        r9_2[1](rax_38, zmm6_1, 0, r9_2, var_c8)
    
    void* rax_39 = sub_1423dcff0(data_143f5b298)
    
    if (rax_39 != 0)
        zmm6_1 = sub_141e8b0f0(rax_39, r15.b)
    
    char rbx_5 = data_143f0fdf0
    float arg_24 = zmm6_1
    
    if (sub_140a80f40() == 0)
        uint32_t rax_41
        
        if (data_143f138f4 == 0 && data_143de5480 != 0)
            rax_41.b = GetCurrentThreadId() == data_143de5470
        
        if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_41.b == 0))
            void var_68
            int64_t* rax_43 = sub_1420013c0(&var_68, nullptr, 0xff)
            *(*rax_43 + 0x10) = rbx_5.q
            void* rcx_49 = *rax_43
            int32_t r8_5 = rax_43[2].d
            int64_t* rdx_21 = rax_43[1]
            void* rbx_6 = *(rcx_49 + 0x20)
            arg_20.q = rbx_6
            int32_t* rdi_3 = rbx_6 + 0x48
            
            if (rbx_6 != 0)
                *rdi_3 += 1
                rbx_6 = arg_20.q
            
            sub_1405a5630(rcx_49, rdx_21, r8_5, 1)
            
            if (rbx_6 != 0)
                int32_t r14_4 = *rdi_3
                *rdi_3 -= 1
                
                if (r14_4 == 1)
                    sub_140a2f6e0(arg_20.q)
        else if (rbx_5 != 0)
            sub_1419b9f70(&data_1439c9260)
            sub_1419b9e30()
        else
            zmm0_2 = rbx_5.q:4.d
            float zmm1_2 = data_143f13d4c f+ zmm0_2.d
            data_143f13d48 = zmm0_2.d
            data_143f13d4c = zmm1_2
            sub_1419b9f70(&data_1439c9260)
            sub_1419b9e30()
    else
        if (rbx_5 == 0)
            zmm0_2.d = data_143f13d4c.d f+ zmm6_1
            data_143f13d48 = zmm6_1
            data_143f13d4c = zmm0_2.d
        
        sub_1419b9f70(&data_1439c9260)
        sub_1419b9e30()

return sub_140b37f60("EngineTickMisc") __tailcall
