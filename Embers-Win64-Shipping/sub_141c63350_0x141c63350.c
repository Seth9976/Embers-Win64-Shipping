// 函数: sub_141c63350
// 地址: 0x141c63350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* performanceCount = arg1
int64_t* performanceCount_1 = arg1

if (data_143de5480 != 0)
    GetCurrentThreadId()

int64_t* rcx = performanceCount_1[0xfe]

if (rcx != 0 && (*(*rcx + 0x38))(rcx) != 0)
    int64_t* rax_2 = sub_142475900()
    void* rcx_1 = rax_2[0x23]
    
    if (rcx_1 == 0)
        int64_t rdx_1 = *rax_2
        (*(rdx_1 + 0x390))(rax_2, rdx_1)
        rcx_1 = rax_2[0x23]
    
    performanceCount_1[0x11a].b = *(rcx_1 + 0x129)
    *(performanceCount_1 + 0x8d1) = *(rcx_1 + 0x128)
    int64_t rax_5
    int64_t* zmm6_1
    int128_t zmm7_1
    rax_5, zmm6_1, zmm7_1 = sub_1423ddb40(data_143f5b298)
    rax_5.b = performanceCount_1 == rax_5
    int64_t* rcx_5 = performanceCount_1[0xfe] + 0x10
    performanceCount_1[0xf7].b = rax_5.b
    (**rcx_5)(rcx_5)
    int64_t* rcx_6 = performanceCount_1[0xfe]
    int32_t rax_8 = (*(*rcx_6 + 0xd0))(rcx_6, zx.q(*(performanceCount_1 + 0x14)))
    int32_t rcx_7 = performanceCount_1[3].d
    void* rsi_1 = &performanceCount_1[0x11b]
    *(performanceCount_1 + 0x14) = rax_8
    *(performanceCount_1 + 0x8dc) = rax_8
    performanceCount_1[0x11e].d = *(performanceCount_1 + 0xc)
    performanceCount_1[0x11c].d = rcx_7
    performanceCount_1[0x11d] = &performanceCount_1[0xf6]
    *rsi_1 = 0xffffffff
    int32_t rax_11 = sub_141e7e7a0(performanceCount_1)
    int64_t* rcx_9 = performanceCount_1[0xfe]
    performanceCount_1[0x11f].d = rax_11
    int16_t* var_e8
    (*(*rcx_9 + 0x108))(rcx_9, &var_e8)
    int64_t r12_1 = 0
    int32_t var_e0
    int32_t var_d8
    int16_t* var_a8
    int16_t* var_98
    int64_t var_78
    
    if (var_e0 s> 1)
    label_141c63649:
        int64_t* rcx_19 = performanceCount_1[0xfe]
        performanceCount.d = 0
        (*(*rcx_19 + 0x60))(rcx_19, &performanceCount)
        int32_t rbx_6 = 0
        
        if (performanceCount.d u> 0)
            while (true)
                sub_141c4d6a0(&var_a8)
                int64_t* rcx_21 = performanceCount_1[0xfe]
                (*(*rcx_21 + 0x68))(rcx_21, zx.q(rbx_6), &var_a8)
                int16_t* const rdx_12 = &data_142d40450
                int16_t* const rcx_22 = &data_142d40450
                
                if (var_e0 != 0)
                    rdx_12 = var_e8
                
                int32_t var_a0
                
                if (var_a0 != 0)
                    rcx_22 = var_a8
                
                if (sub_140a54510(rcx_22, rdx_12) != 0)
                    int16_t* const rdx_13 = &data_142d40450
                    int16_t* const rcx_23 = &data_142d40450
                    
                    if (var_e0 != 0)
                        rdx_13 = var_e8
                    
                    int32_t var_90
                    
                    if (var_90 != 0)
                        rcx_23 = var_98
                    
                    if (sub_140a54510(rcx_23, rdx_13) != 0)
                        if (var_78 != 0)
                            sub_140a74f90(var_78)
                        
                        if (var_98 != 0)
                            sub_140a74f90(var_98)
                        
                        int16_t* rcx_26 = var_a8
                        
                        if (rcx_26 != 0)
                            sub_140a74f90(rcx_26)
                        
                        rbx_6 += 1
                        
                        if (rbx_6 u>= performanceCount.d)
                            break
                        
                        continue
                
                *rsi_1 = rbx_6
                *(performanceCount_1 + 0x8f4) = 1
                
                if (var_78 != 0)
                    sub_140a74f90(var_78)
                
                if (var_98 != 0)
                    sub_140a74f90(var_98)
                
                int16_t* rcx_29 = var_a8
                
                if (rcx_29 != 0)
                    sub_140a74f90(rcx_29)
                
                break
    else
        if (sub_141e76980() != 0)
            TEB* gsbase
            void* rsi_2 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
            
            if (data_143cd5b60 s> *(rsi_2 + 0x14))
                _Init_thread_header(&data_143cd5b60)
                
                if (data_143cd5b60 == 0xffffffff)
                    zmm6_1 = sub_140b58260(&data_143cd5b58, &data_142d408a8, 1)
                    _Init_thread_footer(&data_143cd5b60)
            
            int64_t rbx_2 = data_143cd5b58
            sub_140a387e0()
            
            if ((*(data_14399e720 + 8))(&data_14399e720, rbx_2) s> 0)
                if (data_143cd5b60 s> *(rsi_2 + 0x14))
                    _Init_thread_header(&data_143cd5b60)
                    
                    if (data_143cd5b60 == 0xffffffff)
                        sub_140b58260(&data_143cd5b58, &data_142d408a8, 1)
                        _Init_thread_footer(&data_143cd5b60)
                
                int64_t rbx_3 = data_143cd5b58
                sub_140a387e0()
                void** arg_18 = &data_14399e720
                int64_t* var_b8 = nullptr
                void** r14_1 = &data_14399e720
                int32_t var_ac_1 = 0
                void* r8_1 = data_14399e720
                int64_t* r13_1 = nullptr
                int32_t rsi_3 = 0
                int32_t rax_18 = (*(r8_1 + 8))(&data_14399e720, rbx_3, r8_1)
                int32_t r15_1 = 0
                
                if (rax_18 s> 0)
                    int32_t rdi = 0
                    
                    do
                        void* r9_2 = *r14_1
                        int64_t rax_19 = (*(r9_2 + 0x10))(r14_1, rbx_3, zx.q(r15_1), r9_2)
                        
                        if (rax_19 != 0)
                            r12_1 = rax_19 - 8
                        
                        int64_t r14_2 = sx.q(rsi_3)
                        rsi_3 = (r14_2 + 1).d
                        
                        if (rsi_3 s> rdi)
                            sub_1405a4d70(&var_b8)
                            r13_1 = var_b8
                            rdi = var_ac_1
                        
                        r13_1[r14_2] = r12_1
                        r15_1 += 1
                        r12_1 = 0
                        r14_1 = arg_18
                    while (r15_1 s< rax_18)
                    
                    performanceCount_1 = performanceCount
                
                zmm6_1, zmm7_1 = sub_1405ea950(r13_1, rsi_3, performanceCount.b)
                int64_t* rbx_4 = *r13_1
                sub_140a74f90(r13_1)
                int64_t* rax_21 = (*(*rbx_4 + 0x70))(rbx_4, &var_d8)
                
                if (&var_e8 != rax_21)
                    int16_t* rcx_16 = var_e8
                    
                    if (rcx_16 != 0)
                        sub_140a74f90(rcx_16)
                    
                    var_e8 = *rax_21
                    *rax_21 = 0
                    var_e0 = rax_21[1].d
                    int32_t var_dc_1 = *(rax_21 + 0xc)
                    rax_21[1] = 0
                
                int64_t rcx_18 = var_d8.q
                
                if (rcx_18 != 0)
                    sub_140a74f90(rcx_18)
            
            rsi_1 = &performanceCount_1[0x11b]
        
        if (var_e0 s> 1)
            goto label_141c63649
    
    int64_t* rcx_30 = performanceCount_1[0xfe]
    
    if ((*(*rcx_30 + 0x90))(rcx_30, rsi_1) != 0)
        int64_t* rcx_31 = performanceCount_1[0xfe]
        int64_t* var_48_1 = zmm6_1
        int128_t var_58_1 = zmm7_1
        sub_141c51870(&performanceCount_1[0x127], (*(*rcx_31 + 0xb8))(rcx_31, &var_a8))
        
        if (var_78 != 0)
            sub_140a74f90(var_78)
        
        if (var_98 != 0)
            sub_140a74f90(var_98)
        
        int16_t* rcx_35 = var_a8
        
        if (rcx_35 != 0)
            sub_140a74f90(rcx_35)
        
        sub_141c62d20(performanceCount_1, zx.q(performanceCount_1[0x12b].d))
        int32_t rax_31 = sub_141e7e7a0(performanceCount_1)
        performanceCount.d = rax_31
        performanceCount:4.d = 4
        sub_141c608b0(performanceCount_1[0x152], &performanceCount)
        int64_t rdx_19 = zx.q(*(performanceCount_1 + 0x8dc))
        int64_t rcx_39 = zx.q(performanceCount_1[0x11e].d)
        int32_t rax_32 = *(performanceCount_1 + 0xc)
        int32_t var_d4_1 = 0
        var_d8 = rax_31
        int32_t var_d0_1 = rax_32
        int32_t var_cc_1 = rdx_19.d
        int128_t zmm7_2 = var_d8.o
        performanceCount_1[0x121] = 0
        int64_t* rcx_40 = performanceCount_1[6]
        performanceCount_1[0x120] = float.d(rdx_19) / float.d(rcx_39)
        
        if (rcx_40 != 0)
            var_d8.o = zmm7_2
            int64_t* performanceCount_2 = performanceCount_1
            (*(*rcx_40 + 0x68))(rcx_40, &var_d8)
        
        int64_t* rcx_41 = performanceCount_1[0xa]
        
        if (rcx_41 != 0)
            var_d8.o = zmm7_2
            int64_t* performanceCount_3 = performanceCount_1
            (*(*rcx_41 + 8))(rcx_41, &var_d8)
        
        int64_t* rcx_42 = performanceCount_1[8]
        
        if (rcx_42 != 0)
            var_d8.o = zmm7_2
            int64_t* performanceCount_4 = performanceCount_1
            (*(*rcx_42 + 8))(rcx_42, &var_d8)
        
        (*(*performanceCount_1 + 0x50))(performanceCount_1)
        sub_141c48a40(performanceCount_1[0xfe])
        QueryPerformanceCounter(&performanceCount)
        int64_t* rcx_46 = performanceCount_1[0xfe]
        double zmm0_1 = float.d(performanceCount) f* data_143d796f8
        performanceCount_1[0x124] = 0
        performanceCount_1[0x125] = 0
        performanceCount_1[0x123] = zmm0_1 + 16777216.0
        char result = (*(*rcx_46 + 0xa0))(rcx_46)
        int16_t* rcx_47 = var_e8
        
        if (rcx_47 != 0)
            sub_140a74f90(rcx_47)
        
        return result
    
    int16_t* rcx_48 = var_e8
    
    if (rcx_48 != 0)
        sub_140a74f90(rcx_48)

return 0
