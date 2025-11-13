// 函数: sub_14126d570
// 地址: 0x14126d570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x1590)
void var_1598
int64_t rax_1 = __security_cookie ^ &var_1598
sub_141986d90(arg2)
sub_140b33630("InitViews_Scene")
void* r13 = nullptr
int32_t var_1254 = 0x80
int128_t var_1288
__builtin_memset(&var_1288, 0, 0x34)
int32_t var_1250 = 0xffffffff
int32_t var_124c = 0
int64_t var_1240 = 0
int32_t var_1238 = 0
int64_t var_1230
__builtin_memset(&var_1230, 0, 0x20)
void* var_1c8 = nullptr
int32_t var_1c0 = 0
int32_t var_1bc = 4
void var_be8
sub_141296630(&var_be8, *(arg1 + 0xa8), 1)
sub_14145c580(arg1, arg2)
int64_t* var_1568 = &data_143e8efe0
int64_t* var_1570 = &data_143e8efd0
void* var_1578 = &data_143e8efc0
sub_141448b90(arg1, arg2, 0x22, &var_be8, var_1578, var_1570, var_1568)

if (sub_1414e0700(*(arg1 + 8), arg1 + 0x38) != 0)
    sub_1414cd8b0(arg1, arg2)

sub_14145ac90(arg1, &var_1288)
char rax_3 = sub_1422eb710()
char rax_5
void* rcx_7

if (rax_3 != 0)
    rcx_7 = *(*(arg1 + 8) + 0x10)
    
    if (rcx_7 != 0)
        rax_5 = *(rcx_7 + 0x11a)

int64_t rsi

if (rax_3 == 0 || (rcx_7 != 0 && (rax_5 == 4 || rax_5 == 7)))
    rsi.b = 0
else
    rsi.b = 1

int32_t i = 0

if (*(arg1 + 0xa8) s> 0)
    int64_t rdx_7 = *(arg1 + 0xa0)
    int64_t rbx_1 = 0
    
    do
        char rax_7
        int32_t rcx_10
        
        if (rsi.b != 0)
            rax_7 = sub_1412e8bd0(sx.q(i) * 0x5240 + rdx_7)
            rcx_10 = 0x800
        
        if (rsi.b == 0 || rax_7 == 0)
            rcx_10 = 0
        
        int64_t rax_8 = *(arg1 + 0xa0)
        i += 1
        *(rax_8 + rbx_1 + 0x497c) &= 0xfffff7ff
        *(rax_8 + rbx_1 + 0x497c) |= rcx_10
        rdx_7 = *(arg1 + 0xa0)
        int32_t rax_9 = *(rbx_1 + rdx_7 + 0x497c)
        rbx_1 += 0x5240
        *(arg1 + 0x3d9) |= (rax_9 u>> 0xb).b & 1
    while (i s< *(arg1 + 0xa8))

char rax_12

if ((*(arg1 + 0x3c) & 1) != 0)
    int32_t rcx_11 = *(arg1 + 0x3b4)
    int32_t var_14b8_1 = rcx_11
    rax_12 = sub_1419a4830(rcx_11)

if ((*(arg1 + 0x3c) & 1) == 0 || rax_12 != 0)
    sub_14128c8e0(arg1)
else
    sub_14148d900(arg1, arg2)

int32_t rax_19 = *(arg1 + 0xa8)
int32_t var_1524 = 0
void* var_1560
int32_t var_1558
int64_t* var_1550
int32_t var_1548
int64_t* var_1540
int64_t var_1538
int64_t* var_1530

if (rax_19 s> 0)
    int64_t r12_1 = 0
    int32_t rcx_19
    
    do
        void* rsi_1 = &var_be8
        void* r14_2 = *(arg1 + 0xa0) + r13
        
        if (var_1c8 != 0)
            rsi_1 = var_1c8
        
        void* rsi_2 = rsi_1 + r12_1
        int64_t* rax_15 = data_143e8e858(*(arg1 + 8), r14_2, 0)
        var_1530 = rsi_2 + 0xf0
        var_1538 = data_143e8e8c8(*(arg1 + 8), r14_2, 0)
        var_1540 = rsi_2 + 0x10
        var_1548 = *(rsi_2 + 0x124)
        var_1550 = rsi_2 + 0x178
        var_1558 = *(r14_2 + 0x1704)
        var_1560 = r14_2 + 0x1da0
        var_1568 = r14_2 + 0x1d70
        var_1570 = rax_15
        var_1578.d = 0x22
        sub_141267b30(r14_2 + 0x2910, *(arg1 + 8), r14_2, 1, var_1578.d, var_1570, var_1568, 
            var_1560, var_1558, var_1550, var_1548, var_1540, var_1538, var_1530)
        r13 += 0x5240
        rax_19 = *(arg1 + 0xa8)
        rcx_19 = var_1524 + 1
        r12_1 += 0x288
        var_1524 = rcx_19
    while (rcx_19 s< rax_19)
    r13 = nullptr

if (var_1288.q != 0)
    int64_t rdx_13 = *(arg1 + 8)
    sub_141225a40(rdx_13 + 0x1150, rdx_13, arg1, &var_1288)
    rax_19 = *(arg1 + 0xa8)

int32_t i_4 = 0
int32_t i_1 = 0
char var_1528
int64_t var_1520

if (rax_19 s> 0)
    int64_t rax_20 = 0
    var_1520 = 0
    
    do
        void* rdx_15 = *(arg1 + 0xa0)
        void* rcx_21 = *(rax_20 + rdx_15 + 0x15a8)
        void* rbx_2 = sx.q(i_1) * 0x5240
        
        if (rcx_21 != 0)
            sub_141325d40(rcx_21, rdx_15 + rbx_2)
            rdx_15 = *(arg1 + 0xa0)
        
        sub_141420f20(rbx_2 + rdx_15)
        var_1528 = *(arg1 + 0x3c) & 1
        int64_t* r12_3 = *(arg1 + 0xa0) + rbx_2
        void var_1b8
        int128_t* rax_23 = sub_1422d6b50(&var_1b8)
        int64_t* rcx_24 = data_143f0f180
        var_1570.d = 1
        var_1578.d = 1
        void* var_14e8
        (*(*rcx_24 + 0xf8))(rcx_24, &var_14e8, rax_23, &data_143f558b0, var_1578, var_1570, 
            var_1568, var_1560, var_1558, var_1550, var_1548, var_1540, var_1538, var_1530, 
            var_1528, var_1520)
        void* rax_24 = var_14e8
        void* var_14e0 = rax_24
        
        if (rax_24 != 0)
            *(rax_24 + 8) += 1
        
        sub_1405d1550(&var_14e8)
        sub_1405d1600(&r12_3[3], &var_14e0)
        sub_1405d1550(&var_14e0)
        
        for (int32_t j = 0; j u< 3; )
            void var_1208
            sub_1422d6b50(&var_1208)
            int32_t k_1 = *(arg1 + 0x2f8)
            int64_t* rbx_3 = *(arg1 + 0x2f0)
            int64_t var_14c8 = 0
            int32_t k_2 = k_1
            
            if (k_1 != 0)
                sub_141295500(&var_14c8, k_1, 0)
                void* rsi_4 = var_14c8 - rbx_3
                int32_t k
                
                do
                    sub_14125cad0(rbx_3 + rsi_4, rbx_3)
                    rbx_3 = &rbx_3[0xe]
                    k = k_1
                    k_1 -= 1
                while (k != 1)
            else
                int32_t var_14bc_1 = 0
            
            var_1578.b = var_1528
            sub_141299520(*(arg1 + 8), r12_3, &var_14c8, j, var_1578.d, (&var_1208).b)
            int64_t* rcx_32 = data_143f0f180
            var_1570.d = 1
            var_1578.d = 1
            void* var_14d8
            (*(*rcx_32 + 0xf8))(rcx_32, &var_14d8, &var_1208, &data_143f558b0, var_1578, var_1570)
            void* rax_27 = var_14d8
            void* var_14d0 = rax_27
            
            if (rax_27 != 0)
                *(rax_27 + 8) += 1
            
            sub_1405d1550(&var_14d8)
            j += 1
            sub_1405d1600(&r12_3[sx.q(j) + 3], &var_14d0)
            sub_1405d1550(&var_14d0)
        
        i_1 = i_4 + 1
        rax_20 = var_1520 + 0x5240
        i_4 = i_1
        var_1520 = rax_20
    while (i_1 s< *(arg1 + 0xa8))

int128_t zmm6 = sub_1411a4a10(arg2, *(arg1 + 8))
int32_t i_2 = 0

if (*(arg1 + 0xa8) s> 0)
    do
        zmm6 = sub_1411a4a60(arg2, *(arg1 + 8), sx.q(i_2) * 0x5240 + *(arg1 + 0xa0))
        i_2 += 1
    while (i_2 s< *(arg1 + 0xa8))

int32_t r11_2 = (data_1439b6c78).d
int32_t var_1504 = 1
int32_t rcx_38 = 0
int32_t var_1508 = 0
void* var_1500 = &data_1439b6c60
int32_t r8_9 = 0
int32_t var_14f8 = 0xffffffff
int64_t var_14f4 = 0
int32_t var_1518

if (r11_2 != 0)
    void* rax_32 = data_1439b6c70
    void* r10_3 = &data_1439b6c60
    
    if (rax_32 != 0)
        r10_3 = rax_32
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(r11_2 - 1)
    int32_t rdx_27 = *r10_3
    
    if (rdx_27 != 0)
    label_14126dbf6:
        int32_t rax_39 = ((rdx_27 - 1) & rdx_27) ^ rdx_27
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rax_39)
        int32_t var_1504_1 = rax_39
        var_1518 = temp0_1
        int32_t rax_40
        
        if (rax_39 == 0)
            rax_40 = 0x20
        else
            rax_40 = 0x1f - temp0_1
        
        var_14f4.d = r8_9 - rax_40 + 0x1f
        
        if (r8_9 - rax_40 + 0x1f s> r11_2)
            var_14f4.d = r11_2
    else
        while (true)
            int64_t rdx_28 = sx.q(rcx_38)
            r8_9 += 0x20
            rcx_38 += 1
            var_14f4:4.d = r8_9
            var_1508 = rcx_38
            
            if (rdx_28.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                break
            
            rdx_27 = *(r10_3 + (rdx_28 << 2) + 4)
            var_14f8 = 0xffffffff
            
            if (rdx_27 != 0)
                goto label_14126dbf6
        
        var_14f4.d = r11_2

int128_t var_1458 = var_1508.o
int128_t var_1448 = 0xffffffff
int32_t var_1424 = r11_2
int64_t temp0_2 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_1488 = (&data_1439b6c50).o
int128_t var_1478 = var_1458
int64_t var_1468 = temp0_2

while (true)
    int64_t rcx_42 = sx.q(var_1478:0xc.d)
    int64_t* rax_42 = var_1488.q
    
    if (rcx_42.d == ((0xffffffff << (r11_2.b & 0x1f)).q u>> 0x20).d && var_1478.q == &data_1439b6c60
            && rax_42 == &data_1439b6c50)
        if (*(arg1 + 0xa8) s> 0)
            int64_t* rbx_4 = *(arg1 + 0xa0)
            sub_141405870(*(arg1 + 8) + 0x20, rbx_4, 0)
            int128_t var_13a8
            __builtin_memset(&var_13a8, 0, 0x120)
            sub_1413aab70(&data_143ec4c60, rbx_4[0x2a9].d, 0, &var_13a8)
            int64_t* rcx_50 = data_143f0f180
            int64_t r9_7 = *rcx_50
            (*(r9_7 + 0x100))(rcx_50, *(*(arg1 + 8) + 0x30), &var_13a8, r9_7, var_1578, var_1570, 
                var_1568, var_1560, var_1558, var_1550, var_1548, var_1540, var_1538, var_1530, 
                var_1528, var_1520, var_1518, arg2, var_1508, var_1500, var_14f8)
            void var_10a8
            sub_14125c7e0(&var_10a8)
            sub_141299420(arg2, rbx_4, 0, &var_10a8)
            int64_t* rcx_53 = data_143f0f180
            int64_t r9_9 = *rcx_53
            (*(r9_9 + 0x100))(rcx_53, *(*(arg1 + 8) + 0xd0), &var_10a8, r9_9)
            void var_e48
            sub_14125c7e0(&var_e48)
            sub_141299420(arg2, rbx_4, 1, &var_e48)
            int64_t* rcx_56 = data_143f0f180
            int64_t r9_11 = *rcx_56
            (*(r9_11 + 0x100))(rcx_56, *(*(arg1 + 8) + 0xd8), &var_e48, r9_11)
            zmm6 = sub_1412e5450(arg1, arg2, rbx_4)
            int128_t var_1418
            __builtin_memset(&var_1418, 0, 0x60)
            int128_t var_13b8_1 = data_142d3f660
            sub_1411465d0(arg2, rbx_4, &var_1418)
            int64_t* rcx_59 = data_143f0f180
            int64_t r9_12 = *rcx_59
            (*(r9_12 + 0x100))(rcx_59, *(*(arg1 + 8) + 0xe8), &var_1418, r9_12)
        
        void* rdx_41 = *(arg1 + 8)
        
        if (*(rdx_41 + 0x1050) == 0)
            void* rcx_60 = *(rdx_41 + 0xf80)
            
            if (rcx_60 != 0 && *(*(rcx_60 + 8) + 0x10) != 0 && (*(rcx_60 + 0x20) & 4) == 0)
                r13 = rcx_60
        
        int64_t* rbx_5 = data_143f11688
        int128_t zmm0 = zx.o(0)
        int128_t var_1498 = zx.o(0)
        int128_t zmm1 = zx.o(0)
        
        if (r13 != 0)
            int64_t* rax_53 = *(r13 + 8)
            
            if (rax_53 != 0)
                rbx_5 = rax_53
                int128_t var_48_1 = zmm6
                zmm6.d = float.s(zx.q((*(*rax_53 + 0x40))(rbx_5)))
                TEB* gsbase
                
                if (data_143cda914 s> *
                        (0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                    _Init_thread_header(&data_143cda914)
                    
                    if (data_143cda914 == 0xffffffff)
                        data_143cda910 = 0x3fb8aa3b
                        _Init_thread_footer(&data_143cda914)
                
                zmm0.d = logf(zmm6.d).d f* data_143cda910
                rdx_41 = *(arg1 + 8)
                zmm1 = *(r13 + 0x24)
        
        int64_t* rcx_64 = data_143f0f180
        int32_t var_14a8 = zmm1.d
        int32_t var_14a4 = zmm0.d
        int64_t var_14a0 = 0
        var_1498.q = rbx_5[2]
        var_1498:8.q = rbx_5[3]
        (*(*rcx_64 + 0x100))(rcx_64, *(rdx_41 + 0x110), &var_14a8)
        sub_141431590(arg1)
        sub_141422330(arg1)
        
        if (var_1c8 != 0)
            sub_140a74f90(var_1c8)
        
        int64_t var_1220
        
        if (var_1220 != 0)
            sub_140a74f90(var_1220)
        
        int64_t rcx_69 = var_1230
        
        if (rcx_69 != 0)
            sub_140a74f90(rcx_69)
        
        sub_14100e1e0(&var_1288:8)
        int64_t* rcx_71 = var_1288.q
        
        if (rcx_71 != 0)
            rcx_71[9].d -= 1
            
            if (rcx_71[9].d == 1)
                sub_140a2f6e0(rcx_71)
        
        int64_t result = sub_140b37f60("InitViews_Scene")
        __security_check_cookie(rax_1 ^ &var_1598)
        return result
    
    int64_t* rdi_2 = *(*rax_42 + rcx_42 * 0x10)
    (**rdi_2)(rdi_2)
    int32_t i_3 = 0
    
    if (*(arg1 + 0xa8) s> 0)
        do
            int64_t r8_11 = *rdi_2
            (*(r8_11 + 8))(rdi_2, sx.q(i_3) * 0x5240 + *(arg1 + 0xa0), r8_11)
            i_3 += 1
        while (i_3 s< *(arg1 + 0xa8))
    
    var_1478:8.d &= not.d(var_1488:0xc.d)
    sub_14059bdd0(&var_1488:8)
