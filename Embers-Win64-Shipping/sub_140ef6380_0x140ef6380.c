// 函数: sub_140ef6380
// 地址: 0x140ef6380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_7f8
int64_t rax_1 = __security_cookie ^ &var_7f8
*(arg1 + 0x428) = 0

if (*(arg1 + 0x42c) != 0)
    sub_140f15240(arg1 + 0x3f0, 0)

void var_618
sub_140de1590(arg1 + 0x390, sub_140d91ed0(&var_618))
int128_t zmm0 = sub_140d952d0(&var_618)
int32_t i = 0
void* var_658

if (*(arg1 + 0x448) s> 0)
    do
        char var_7d8_1 = 0
        uint128_t zmm2
        zmm2.d = _mm_cvtepi32_ps(zx.o(i)).d f* 0.0500000007f
        void** rax_3 = sub_140d986d0(arg1 + 0x390, &var_658, zmm2.q, 0x3fc00000.d, var_7d8_1)
        int64_t rsi_1 = sx.q(*(arg1 + 0x428))
        int32_t rcx_5 = (rsi_1 + 1).d
        *(arg1 + 0x428) = rcx_5
        
        if (rcx_5 s> *(arg1 + 0x42c))
            sub_140f151c0(arg1 + 0x3f0, rsi_1.d)
        
        void* rcx_7 = *(arg1 + 0x420)
        void* rdx_3 = arg1 + 0x3f0
        zmm0 = *rax_3
        
        if (rcx_7 != 0)
            rdx_3 = rcx_7
        
        i += 1
        *(rdx_3 + rsi_1 * 0x10) = zmm0
    while (i s< *(arg1 + 0x448))

int64_t* rcx_8 = *(arg1 + 0x10)
void* rdx_4 = nullptr

if (rcx_8 != 0)
    int32_t rax_6 = rcx_8[1].d
    
    if (rax_6 != 0)
        rcx_8[1].d = rax_6 + 1
        rax_6.b = 1
    
    if (rax_6.b == 0)
        rcx_8 = nullptr
    
    if (rcx_8 != 0)
        rdx_4 = *(arg1 + 8)

void* var_7c0 = rdx_4
sub_140db7a20(arg1 + 0x390, &var_7c0, 1, zx.o(0), zmm0.q, 1)

if (rcx_8 != 0)
    rcx_8[1].d -= 1
    
    if (rcx_8[1].d == 1)
        (**rcx_8)(rcx_8)
        int32_t temp1_1 = *(rcx_8 + 0xc)
        *(rcx_8 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rcx_8 + 8))(rcx_8, 1)

int64_t (* result)(void* arg1) = sub_140de8fc0(*(arg1 + 0x430))
int32_t i_1 = 0

if (*(arg1 + 0x448) s> 0)
    TEB* gsbase
    void* r15_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
    
    do
        int64_t (* var_698_1)(void* arg1) = sub_140f02400
        int32_t var_690_1 = 0
        int32_t* (* var_678_1)(void* arg1, uint128_t* arg2, int32_t arg3, uint128_t arg4 @ zmm0) =
            sub_140f02410
        int32_t var_670_1 = 0
        float* (* var_688_1)(void* arg1, float* arg2, int32_t arg3, uint128_t arg4 @ zmm0) =
            sub_140f02490
        int32_t var_680_1 = 0
        
        if (data_143e24588 s> *(r15_1 + 0x14))
            _Init_thread_header(&data_143e24588)
            
            if (data_143e24588 == 0xffffffff)
                sub_140ddaa70(&data_143e24500, &data_143dbb1f0)
                atexit(sub_142ccae40)
                _Init_thread_footer(&data_143e24588)
        
        int64_t* var_648_1 = &data_143e24500
        char var_640_1 = 1
        int64_t var_638 = 0
        int32_t var_630_1 = 0
        void var_270
        int64_t* rax_11 = sub_140e4fb70(&var_270)
        int128_t var_7a8 = var_698_1.o
        int64_t* var_788
        int64_t* rax_12 = sub_140e45b90(&var_788, arg1, &var_7a8)
        int64_t var_738_1 = 0
        char var_730_1 = 1
        int64_t var_728 = 0
        int32_t var_720_1 = 0
        sub_140692f90(&var_728, rax_12)
        rax_11[0x34] = var_738_1
        rax_11[0x35].b = var_730_1
        sub_1407473e0(&rax_11[0x36], &var_728)
        sub_140745b20(&var_728)
        int32_t var_780
        int64_t* rax_16
        
        if (var_780 == 0)
            rax_16 = var_788
        label_140ef6690:
            
            if (rax_16 != 0)
                sub_140a74f90(rax_16)
        else
            int64_t* rcx_19 = var_788
            
            if (rcx_19 != 0)
                (*(*rcx_19 + 0x38))(rcx_19, 0)
                rax_16 = var_788
                
                if (rax_16 != 0)
                    rax_16 = sub_140a84c80(rax_16, 0, 0)
                    var_788 = rax_16
                
                var_780 = 0
                goto label_140ef6690
        void*** rax_17 = sub_140e48c50()
        void* var_6e0 = &rax_17[2]
        sub_140918950(&var_6e0, &rax_17[2])
        char var_7d8_2
        var_7d8_2.q = 0x3a8
        void var_7c8
        void* var_6d0_1 = &var_7c8
        void** rax_18 =
            sub_140e56930(&var_6e0, &var_658, rax_11, sub_140e23ed0(&rax_17[2], "SImage"))
        int64_t* rbx_3 = rax_18[1]
        void* rdi_1 = *rax_18
        
        if (rbx_3 != 0)
            rbx_3[1].d += 1
        
        void var_5b8
        int64_t* rax_19 = sub_14068c640(&var_5b8)
        rax_19[0x44] = &data_143e24500
        rax_19[0x45].b = 1
        sub_140692f90(&rax_19[0x46], &var_638)
        var_7a8 = var_688_1.o
        int64_t* var_778
        int64_t* rax_20 = sub_140edfd80(&var_778, arg1, &var_7a8, i_1)
        char var_710_1 = 1
        int64_t var_708 = 0
        int32_t var_700_1 = 0
        sub_140692f90(&var_708, rax_20)
        int32_t var_718
        rax_19[0x48].d = var_718
        int32_t var_714
        *(rax_19 + 0x244) = var_714
        rax_19[0x49].b = var_710_1
        sub_1407473e0(&rax_19[0x4a], &var_708)
        sub_140745b20(&var_708)
        int32_t var_770
        int64_t* rax_23
        
        if (var_770 == 0)
            rax_23 = var_778
        label_140ef67ef:
            
            if (rax_23 != 0)
                sub_140a74f90(rax_23)
        else
            int64_t* rcx_31 = var_778
            
            if (rcx_31 != 0)
                (*(*rcx_31 + 0x38))(rcx_31, 0)
                rax_23 = var_778
                
                if (rax_23 != 0)
                    rax_23 = sub_140a84c80(rax_23, 0, 0)
                    var_778 = rax_23
                
                var_770 = 0
                goto label_140ef67ef
        var_7a8 = var_678_1.o
        int64_t* var_768
        int64_t* rax_24 = sub_140edfc40(&var_768, arg1, &var_7a8, i_1)
        char var_6b8_1 = 1
        int64_t var_6b0 = 0
        int32_t var_6a8_1 = 0
        sub_140692f90(&var_6b0, rax_24)
        rax_19[0x52].b = var_6b8_1
        int128_t var_6c8
        *(rax_19 + 0x280) = var_6c8
        sub_1407473e0(&rax_19[0x53], &var_6b0)
        sub_140745b20(&var_6b0)
        int32_t var_760
        int64_t* rax_27
        
        if (var_760 == 0)
            rax_27 = var_768
        label_140ef689e:
            
            if (rax_27 != 0)
                sub_140a74f90(rax_27)
        else
            int64_t* rcx_38 = var_768
            
            if (rcx_38 != 0)
                (*(*rcx_38 + 0x38))(rcx_38, 0)
                rax_27 = var_768
                
                if (rax_27 != 0)
                    rax_27 = sub_140a84c80(rax_27, 0, 0)
                    var_768 = rax_27
                
                var_760 = 0
                goto label_140ef689e
        var_7c0 = rdi_1
        int64_t* rdi_2 = rbx_3
        rax_19[0x36].d = 2
        *(rax_19 + 0x1b4) = 2
        
        if (rbx_3 != 0)
            rbx_3[1].d += 1
        
        if (&var_7c0 != &rax_19[0x34])
            var_7c0.o = *(rax_19 + 0x1a0)
            rdi_2 = rbx_3
            *(rax_19 + 0x1a0) = var_7c0.o
        
        if (rdi_2 != 0)
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                (**rdi_2)(rdi_2)
                int32_t temp4_1 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rdi_2 + 8))(rdi_2, 1)
        
        if (rbx_3 != 0)
            rbx_3[1].d -= 1
            
            if (rbx_3[1].d == 1)
                (**rbx_3)(rbx_3)
                int32_t temp5_1 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*rbx_3 + 8))(rbx_3, 1)
        
        void*** rax_33 = j_sub_140a82f30(0x4c8)
        void*** rdi_3 = rax_33
        
        if (rax_33 == 0)
            rdi_3 = nullptr
        else
            rax_33[1].d = 1
            *(rax_33 + 0xc) = 1
            *rdi_3 = &data_142d8c5a0
            
            if (rdi_3 != -0x10)
                sub_140f20640(&rdi_3[2])
        
        void* var_6f8 = &rdi_3[2]
        sub_14065fa30(&var_6f8, &rdi_3[2])
        var_7d8_2.q = 0x4b8
        void var_7c7
        void* var_6e8_1 = &var_7c7
        void* var_628
        void** rax_34 =
            sub_140695920(&var_6f8, &var_628, rax_19, sub_140e23ed0(&rdi_3[2], "SBorder"))
        int64_t* rbx_5 = rax_34[1]
        void* var_668 = *rax_34
        int64_t* var_660_1 = rbx_5
        
        if (rbx_5 != 0)
            rbx_5[1].d += 1
        
        int64_t* rsi_3 = *(arg1 + 0x430)
        void*** rax_35 = j_sub_140a82f30(0x88)
        void*** rdi_4 = rax_35
        
        if (rax_35 == 0)
            rdi_4 = nullptr
        else
            sub_14068e490(rax_35)
            *rdi_4 = &data_142d8add0
        
        sub_140de6520(&rsi_3[0x55], rdi_4)
        sub_140e19ef0(rsi_3, 1)
        var_7a8.d = 0
        var_7a8:4.b = 1
        var_7a8:8.q = 0
        int32_t var_798_1 = 0
        int32_t var_758_1 = 0
        int32_t var_750_1 = 0
        char var_74c_1 = 1
        int64_t var_748 = 0
        int32_t var_740_1 = 0
        sub_140692f90(&var_748, &var_7a8:8)
        sub_140745b20(&var_7a8:8)
        rdi_4[5].d = var_758_1
        *(rdi_4 + 0x34) = var_74c_1
        rdi_4[6].d = var_750_1
        sub_140692f90(&rdi_4[7], &var_748)
        sub_140745b20(&var_748)
        sub_140693600(rdi_4, &var_668)
        
        if (rbx_5 != 0)
            rbx_5[1].d -= 1
            
            if (rbx_5[1].d == 1)
                (**rbx_5)(rbx_5)
                int32_t temp8_1 = *(rbx_5 + 0xc)
                *(rbx_5 + 0xc) -= 1
                
                if (temp8_1 == 1)
                    (*(*rbx_5 + 8))(rbx_5, 1)
        
        int64_t* var_620
        
        if (var_620 != 0)
            var_620[1].d -= 1
            
            if (var_620[1].d == 1)
                (**var_620)(var_620)
                int32_t temp10_1 = *(var_620 + 0xc)
                *(var_620 + 0xc) -= 1
                
                if (temp10_1 == 1)
                    (*(*var_620 + 8))(var_620, 1)
        
        if (rdi_3 != 0)
            rdi_3[1].d -= 1
            
            if (rdi_3[1].d == 1)
                (**rdi_3)(rdi_3)
                int32_t temp12_1 = *(rdi_3 + 0xc)
                *(rdi_3 + 0xc) -= 1
                
                if (temp12_1 == 1)
                    (*rdi_3)[1](rdi_3, 1)
        
        void var_288
        sub_140745b20(&var_288)
        void var_2a0
        sub_140745b20(&var_2a0)
        int64_t* var_2b0
        
        if (var_2b0 != 0)
            var_2b0[1].d -= 1
            
            if (var_2b0[1].d == 1)
                (**var_2b0)(var_2b0)
                int32_t temp14_1 = *(var_2b0 + 0xc)
                *(var_2b0 + 0xc) -= 1
                
                if (temp14_1 == 1)
                    (*(*var_2b0 + 8))(var_2b0, 1)
        
        void var_2e0
        sub_140745b20(&var_2e0)
        int64_t* var_2f0
        
        if (var_2f0 != 0)
            var_2f0[1].d -= 1
            
            if (var_2f0[1].d == 1)
                (**var_2f0)(var_2f0)
                int32_t temp16_1 = *(var_2f0 + 0xc)
                *(var_2f0 + 0xc) -= 1
                
                if (temp16_1 == 1)
                    (*(*var_2f0 + 8))(var_2f0, 1)
        
        void var_320
        sub_140745b20(&var_320)
        void var_348
        sub_140745b20(&var_348)
        void var_368
        sub_140745b20(&var_368)
        void var_388
        sub_140745b20(&var_388)
        void var_3a8
        sub_140745b20(&var_3a8)
        void var_3b8
        sub_140745b20(&var_3b8)
        void var_3c8
        sub_140745b20(&var_3c8)
        void var_3d8
        sub_140745b20(&var_3d8)
        void var_3e8
        sub_140745b20(&var_3e8)
        int64_t* var_410
        
        if (var_410 != 0)
            var_410[1].d -= 1
            
            if (var_410[1].d == 1)
                (**var_410)(var_410)
                int32_t temp18_1 = *(var_410 + 0xc)
                *(var_410 + 0xc) -= 1
                
                if (temp18_1 == 1)
                    (*(*var_410 + 8))(var_410, 1)
        
        sub_140660250(&var_5b8)
        int64_t* var_650
        
        if (var_650 != 0)
            var_650[1].d -= 1
            
            if (var_650[1].d == 1)
                (**var_650)(var_650)
                int32_t temp20_1 = *(var_650 + 0xc)
                *(var_650 + 0xc) -= 1
                
                if (temp20_1 == 1)
                    (*(*var_650 + 8))(var_650, 1)
        
        if (rax_17 != 0)
            rax_17[1].d -= 1
            
            if (rax_17[1].d == 1)
                (**rax_17)(rax_17)
                int32_t temp22_1 = *(rax_17 + 0xc)
                *(rax_17 + 0xc) -= 1
                
                if (temp22_1 == 1)
                    (*rax_17)[1](rax_17, 1)
        
        void var_68
        sub_140745b20(&var_68)
        void var_80
        sub_140745b20(&var_80)
        int64_t* var_90
        
        if (var_90 != 0)
            var_90[1].d -= 1
            
            if (var_90[1].d == 1)
                (**var_90)(var_90)
                int32_t temp23_1 = *(var_90 + 0xc)
                *(var_90 + 0xc) -= 1
                
                if (temp23_1 == 1)
                    (*(*var_90 + 8))(var_90, 1)
        
        void var_c0
        sub_140745b20(&var_c0)
        sub_140ddea30(&var_270)
        sub_140745b20(&var_638)
        i_1 += 1
        result = sub_140f02400
    while (i_1 s< *(arg1 + 0x448))

__security_check_cookie(rax_1 ^ &var_7f8)
return result
