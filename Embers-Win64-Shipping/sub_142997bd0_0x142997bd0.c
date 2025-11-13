// 函数: sub_142997bd0
// 地址: 0x142997bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_b0 = -2
void var_188
int64_t rax_1 = __security_cookie ^ &var_188
int64_t* r15 = arg3
int64_t* i_2 = arg2
int64_t* i_3 = arg2
int64_t* var_a8 = arg2
int32_t r14 = 0
int32_t var_130 = 0
int128_t var_150 = zx.o(0)
var_150.q = sub_1429974c0()
int128_t var_110
__builtin_memset(&var_110, 0, 0x18)
int32_t r12 = 0
int32_t var_12c = 0
void* var_158
sub_14297bd10(i_3, &var_158)
int64_t var_138
int64_t rax_4 = *std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
    i_3, &var_138)

if (var_158 != rax_4)
    int64_t rax_6
    
    do
        r12 += 1
        sub_14297bb00(&var_158)
        rax_6 = *std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
            i_3, &var_138)
    while (var_158 != rax_6)
    var_12c = r12
    
    if (r12 != 0)
        sub_1429926e0(r15, zx.q(r12), r15)

int32_t rsi = 0
sub_14297bd10(i_3, &var_158)
int64_t* rax_7 = std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
    i_3, &var_138)
int64_t r8_1 = -1
void* rax_8 = var_158
char var_a0

if (rax_8 != *rax_7)
    while (true)
        int64_t var_90_1 = 0
        int64_t var_88_1 = 0xf
        var_a0 = 0
        
        do
            r8_1 += 1
        while ((rax_8 + 0x1c)[r8_1] != 0)
        
        sub_14058ad40(&var_a0, rax_8 + 0x1c, r8_1)
        int64_t rdi_1 = zx.q(rsi) * 0x98
        int64_t* rbx_2 = *r15 + rdi_1
        
        if (rbx_2 != &var_a0)
            int64_t rdx_7 = rbx_2[3]
            
            if (rdx_7 u>= 0x10)
                void* rcx_9 = *rbx_2
                
                if (rdx_7 + 1 u>= 0x1000)
                    void* r8_2 = *(rcx_9 - 8)
                    
                    if (rcx_9 - r8_2 - 8 u> 0x1f)
                        _invalid_parameter_noinfo_noreturn()
                        noreturn
                    
                    rcx_9 = r8_2
                
                j_sub_140a74f90(rcx_9)
            
            *rbx_2 = var_a0.o
            *(rbx_2 + 0x10) = var_90_1.o
        else if (var_88_1 u>= 0x10)
            void* rcx_11 = var_a0.q
            void* rax_11 = rcx_11
            
            if (var_88_1 + 1 u>= 0x1000)
                rcx_11 = *(rcx_11 - 8)
                
                if (rax_11 - rcx_11 - 8 u> 0x1f)
                    _invalid_parameter_noinfo_noreturn()
                    noreturn
            
            j_sub_140a74f90(rcx_11)
        
        *(rdi_1 + *r15 + 0x20) = 0
        *(rdi_1 + *r15 + 0x24) = *(var_158 + 0x120)
        *(rdi_1 + *r15 + 0x28) = *(var_158 + 0x124)
        *(rdi_1 + *r15 + 0x2c) = *(var_158 + 0x11c)
        *(rdi_1 + *r15 + 0x30) = *(var_158 + 0x128)
        rsi += 1
        sub_14297bb00(&var_158)
        int64_t* rax_23 = std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
            i_3, &var_138)
        rax_8 = var_158
        
        if (rax_8 == *rax_23)
            break
        
        r8_1 = -1

var_158.d = 0
void var_c8

if (r12 != 0)
    int64_t rbx_3 = 0
    var_138 = 0
    int32_t rdi_12
    
    do
        uint64_t count_6 = 0
        int64_t var_48_1 = 0xf
        char var_60 = 0
        sub_14058ad40(&var_60, &data_1437020ab, 0)
        int64_t rcx_20 = rbx_3 * 0x98
        void** rbx_5 = *r15 + rcx_20
        int64_t var_70_1 = 0
        int64_t var_68_1 = 0
        void* count_8 = rbx_5[2]
        
        if (rbx_5[3] u>= 0x10)
            rbx_5 = *rbx_5
        
        int64_t var_118_1
        int128_t var_80
        int64_t rdi_2
        
        if (count_8 u>= 0x10)
            rdi_2 = count_8 | 0xf
            
            if (rdi_2 u> 0x7fffffffffffffff)
                rdi_2 = 0x7fffffffffffffff
            
            var_118_1 = rdi_2
            void* const rax_27
            
            if (rdi_2 + 1 u>= 0x1000)
                int64_t rcx_21 = rdi_2 + 0x28
                
                if (rcx_21 u<= rdi_2 + 1)
                    rcx_21 = -1
                
                int64_t rax_25 = j_sub_140a82f30(rcx_21)
                
                if (rax_25 == 0)
                    _invalid_parameter_noinfo_noreturn()
                    noreturn
                
                rax_27 = (rax_25 + 0x27) & 0xffffffffffffffe0
                *(rax_27 - 8) = rax_25
            else if (rdi_2 == -1)
                rax_27 = nullptr
            else
                rax_27 = j_sub_140a82f30(rdi_2 + 1)
            
            var_80.q = rax_27
            memcpy(rax_27, rbx_5, count_8.d + 1)
        else
            var_80 = *rbx_5
            rdi_2 = 0xf
            var_118_1 = 0xf
        
        void* count = count_8
        int128_t* rcx_25 = &var_80
        
        if (rdi_2 u>= 0x10)
            rcx_25 = var_80.q
        
        void* count_20
        
        if (count_8 == 0)
        label_142997f98:
            count_20 = -ffffffffffffffff
        else
            void* rbx_6 = -ffffffffffffffff
            
            if (count_8 - 1 u< -1)
                rbx_6 = count_8 - 1
            
            void* rbx_7 = rbx_6 + rcx_25
            
            while (*rbx_7 != 0x2e)
                if (rbx_7 == rcx_25)
                    goto label_142997f98
                
                rbx_7 -= 1
            
            count_20 = rbx_7 - rcx_25
        
        if (count_20 != -1)
            int64_t var_90_2 = 0
            int64_t var_88_2 = 0xf
            var_a0 = 0
            void* count_17 = count_20
            
            if (count_8 u< count_20)
                count_17 = count_8
            
            int128_t* rdx_13 = &var_80
            
            if (rdi_2 u>= 0x10)
                rdx_13 = var_80.q
            
            sub_14058ad40(&var_a0, rdx_13, count_17)
            
            if (var_48_1 u>= 0x10)
                void* rcx_27 = var_60.q
                void* rax_29 = rcx_27
                
                if (var_48_1 + 1 u>= 0x1000)
                    rcx_27 = *(rcx_27 - 8)
                    
                    if (rax_29 - rcx_27 - 8 u> 0x1f)
                        _invalid_parameter_noinfo_noreturn()
                        noreturn
                
                j_sub_140a74f90(rcx_27)
            
            var_60.o = var_a0.o
            count_6.o = var_90_2.o
            int64_t var_90_3 = 0
            int64_t var_88_3 = 0xf
            var_a0 = 0
            
            if (count u< count_20 + 1)
                sub_14058b100()
                noreturn
            
            void* rax_33 = count - (count_20 + 1)
            void* r8_4 = -ffffffffffffffff
            
            if (rax_33 u< -1)
                r8_4 = rax_33
            
            int128_t* rdx_16 = &var_80
            
            if (rdi_2 u>= 0x10)
                rdx_16 = var_80.q
            
            sub_14058ad40(&var_a0, rdx_16 + count_20 + 1, r8_4)
            var_130 = var_130 | 1 | 2
            
            if (rdi_2 u>= 0x10)
                void* rcx_29 = var_80.q
                void* rax_34 = rcx_29
                
                if (rdi_2 + 1 u>= 0x1000)
                    rcx_29 = *(rcx_29 - 8)
                    
                    if (rax_34 - rcx_29 - 8 u> 0x1f)
                        _invalid_parameter_noinfo_noreturn()
                        noreturn
                
                j_sub_140a74f90(rcx_29)
            
            var_80 = var_a0.o
            count.o = var_90_3.o
            var_118_1 = rdi_2
        
        void** count_21 = var_150.q
        void** count_9 = count_21[1]
        void** count_13 = count_9
        void** count_14 = count_9
        int64_t r13 = var_48_1
        int64_t rdi_8
        char* r15_1
        
        if (*(count_9 + 0x19) != 0)
        label_1429981cc:
            r15_1 = var_60.q
        label_1429981d7:
            int64_t var_c0_1 = -1
            void** count_15 = var_150.q
            
            if (*(count_9 + 0x19) != 0)
            label_1429982a3:
                count_13 = &var_60
                int64_t* rax_45 = sub_142991340(&var_150, &data_1435b4a40, &count_13)
                void** count_18
                sub_142992170(&var_150, &count_18, count_15, &rax_45[4], rax_45)
                count_15 = count_18
            else
                do
                    char* buffer2_2 = &var_60
                    
                    if (r13 u>= 0x10)
                        buffer2_2 = r15_1
                    
                    void* buffer1_2 = &count_9[4]
                    
                    if (count_9[7] u>= 0x10)
                        buffer1_2 = count_9[4]
                    
                    uint64_t count_10 = count_9[6]
                    uint64_t count_3 = count_10
                    
                    if (count_6 u< count_10)
                        count_3 = count_6
                    
                    int32_t rax_41 = memcmp(buffer1_2, buffer2_2, count_3)
                    
                    if (rax_41 == 0)
                        if (count_10 u>= count_6)
                            rax_41.b = count_10 u> count_6
                        else
                            rax_41 = -1
                    
                    if ((rax_41 u>> 0x1f).b == 0)
                        count_15 = count_9
                        count_9 = *count_9
                    else
                        count_9 = count_9[2]
                while (*(count_9 + 0x19) == 0)
                
                if (count_15 == var_150.q)
                    goto label_1429982a3
                
                void* buffer2_3 = &count_15[4]
                
                if (count_15[7] u>= 0x10)
                    buffer2_3 = count_15[4]
                
                char* buffer1_3 = &var_60
                
                if (r13 u>= 0x10)
                    buffer1_3 = r15_1
                
                uint64_t count_11 = count_15[6]
                uint64_t count_4 = count_6
                
                if (count_11 u< count_6)
                    count_4 = count_11
                
                int32_t rax_43 = memcmp(buffer1_3, buffer2_3, count_4)
                
                if (rax_43 == 0)
                    if (count_6 u>= count_11)
                        rax_43.b = count_6 u> count_11
                    else
                        rax_43 = -1
                
                if ((rax_43 u>> 0x1f).b != 0)
                    goto label_1429982a3
            
            count_15[8] = var_c0_1
            count_15[9].d = 0xffffffff
            r13 = var_48_1
            rdi_8 = rdi_2
        else
            char* buffer2_6 = var_60.q
            
            do
                char* buffer2 = &var_60
                
                if (r13 u>= 0x10)
                    buffer2 = buffer2_6
                
                void* buffer1 = &count_14[4]
                
                if (count_14[7] u>= 0x10)
                    buffer1 = count_14[4]
                
                uint64_t count_12 = count_14[6]
                uint64_t count_1 = count_12
                
                if (count_6 u< count_12)
                    count_1 = count_6
                
                int32_t rax_37 = memcmp(buffer1, buffer2, count_1)
                
                if (rax_37 == 0)
                    if (count_12 u>= count_6)
                        rax_37.b = count_12 u> count_6
                    else
                        rax_37 = -1
                
                if ((rax_37 u>> 0x1f).b == 0)
                    count_21 = count_14
                    count_14 = *count_14
                else
                    count_14 = count_14[2]
            while (*(count_14 + 0x19) == 0)
            
            rdi_8 = var_118_1
            count_9 = count_13
            
            if (count_21 == var_150.q)
                goto label_1429981cc
            
            void* buffer2_1 = &count_21[4]
            
            if (count_21[7] u>= 0x10)
                buffer2_1 = count_21[4]
            
            char* buffer1_1 = &var_60
            r15_1 = var_60.q
            
            if (r13 u>= 0x10)
                buffer1_1 = r15_1
            
            uint64_t count_7 = count_21[6]
            uint64_t count_2 = count_6
            
            if (count_7 u< count_6)
                count_2 = count_7
            
            int32_t rax_39 = memcmp(buffer1_1, buffer2_1, count_2)
            
            if (rax_39 == 0)
                if (count_6 u>= count_7)
                    rax_39.b = count_6 u> count_7
                else
                    rax_39 = -1
            
            if ((rax_39 u>> 0x1f).b != 0)
                goto label_1429981d7
        int64_t* i = *(arg1 + 0x70)
        r15 = arg3
        
        if (i != *(arg1 + 0x78))
            int32_t r12_2 = var_158.d
            
            do
                int64_t r14_2 = rcx_20
                
                if (*(i + 0x24) == *(r14_2 + *r15 + 0x2c))
                    if (*(i + 0x2c) == 0)
                        int64_t* buffer2_5 = i
                        
                        if (i[3] u>= 0x10)
                            buffer2_5 = *i
                        
                        int128_t* buffer1_5 = &var_80
                        
                        if (rdi_8 u>= 0x10)
                            buffer1_5 = var_80.q
                        
                        if (count != i[2])
                            count_9.b = 0
                        else if (memcmp(buffer1_5, buffer2_5, count) != 0)
                            count_9.b = 0
                        else
                            count_9.b = 1
                    else
                        int64_t var_90_4 = 0
                        int64_t var_88_4 = 0
                        count_9 = count
                        int128_t* r14_3 = &var_80
                        
                        if (rdi_8 u>= 0x10)
                            r14_3 = var_80.q
                        
                        int64_t rdi_9
                        
                        if (count_9 u>= 0x10)
                            rdi_9 = count_9 | 0xf
                            
                            if (rdi_9 u> 0x7fffffffffffffff)
                                rdi_9 = 0x7fffffffffffffff
                            
                            void* const rax_50
                            
                            if (rdi_9 + 1 u>= 0x1000)
                                int64_t rcx_33 = rdi_9 + 0x28
                                
                                if (rcx_33 u<= rdi_9 + 1)
                                    rcx_33 = -1
                                
                                int64_t rax_48 = j_sub_140a82f30(rcx_33)
                                
                                if (rax_48 == 0)
                                    _invalid_parameter_noinfo_noreturn()
                                    noreturn
                                
                                rax_50 = (rax_48 + 0x27) & 0xffffffffffffffe0
                                *(rax_50 - 8) = rax_48
                            else if (rdi_9 == -1)
                                rax_50 = nullptr
                            else
                                rax_50 = j_sub_140a82f30(rdi_9 + 1)
                            
                            var_a0.q = rax_50
                            memcpy(rax_50, r14_3, count_9.d + 1)
                        else
                            var_a0.o = *r14_3
                            rdi_9 = 0xf
                        
                        char* r9_1 = &var_a0
                        char* rcx_37 = var_a0.q
                        
                        if (rdi_9 u>= 0x10)
                            r9_1 = rcx_37
                        
                        char* r8_8 = &var_a0
                        
                        if (rdi_9 u>= 0x10)
                            r8_8 = rcx_37
                        
                        char* rdx_22 = &var_a0
                        
                        if (rdi_9 u>= 0x10)
                            rdx_22 = rcx_37
                        
                        sub_142995790(&var_c8, rdx_22, r8_8 + count_9, r9_1, tolower)
                        int64_t* buffer2_4 = i
                        
                        if (i[3] u>= 0x10)
                            buffer2_4 = *i
                        
                        char* buffer1_4 = &var_a0
                        char* buffer1_6 = var_a0.q
                        
                        if (rdi_9 u>= 0x10)
                            buffer1_4 = buffer1_6
                        
                        uint64_t count_5 = count_9
                        int32_t rax_51
                        
                        if (count_5 == i[2])
                            rax_51 = memcmp(buffer1_4, buffer2_4, count_5)
                        
                        if (count_5 != i[2] || rax_51 != 0)
                            count_9.b = 0
                        else
                            count_9.b = 1
                        
                        if (rdi_9 u>= 0x10)
                            char* buffer1_7 = buffer1_6
                            
                            if (rdi_9 + 1 u>= 0x1000)
                                buffer1_6 = *(buffer1_6 - 8)
                                
                                if (buffer1_7 - buffer1_6 - 8 u> 0x1f)
                                    _invalid_parameter_noinfo_noreturn()
                                    noreturn
                            
                            j_sub_140a74f90(buffer1_6)
                        
                        rdi_8 = rdi_2
                        r14_2 = rcx_20
                    
                    if (count_9.b != 0)
                        *(r14_2 + *r15 + 0x20) = i[4].d
                        
                        if (i[5].d s>= 0)
                            void** count_22 = var_150.q
                            void** count_16 = count_22
                            count_9 = count_22[1]
                            
                            if (*(count_9 + 0x19) != 0)
                            label_142998553:
                                count_13 = &var_60
                                int64_t* rax_60 =
                                    sub_142991340(&var_150, &data_1435b4a40, &count_13)
                                void** count_19
                                sub_142992170(&var_150, &count_19, count_16, &rax_60[4], rax_60)
                                count_16 = count_19
                            else
                                do
                                    if ((sub_140611000(&count_9[4], &var_60) u>> 0x1f).b == 0)
                                        count_16 = count_9
                                        count_9 = *count_9
                                    else
                                        count_9 = count_9[2]
                                while (*(count_9 + 0x19) == 0)
                                
                                if (count_16 == count_22)
                                    goto label_142998553
                                
                                if ((sub_140611000(&var_60, &count_16[4]) u>> 0x1f).b != 0)
                                    goto label_142998553
                            
                            *(count_16 + (sx.q(i[5].d) << 2) + 0x40) = r12_2
                        
                        rdi_8 = rdi_2
                
                i = &i[6]
            while (i != *(arg1 + 0x78))
            
            r13 = var_48_1
        
        if (rdi_8 u>= 0x10)
            void* rcx_45 = var_80.q
            void* rax_62 = rcx_45
            
            if (rdi_8 + 1 u>= 0x1000)
                rcx_45 = *(rcx_45 - 8)
                
                if (rax_62 - rcx_45 - 8 u> 0x1f)
                    _invalid_parameter_noinfo_noreturn()
                    noreturn
            
            j_sub_140a74f90(rcx_45)
            r13 = var_48_1
        
        r14 = 0
        int64_t var_70_2 = 0
        int64_t var_68_3 = 0xf
        var_80.b = 0
        
        if (r13 u>= 0x10)
            std::allocator<char>::deallocate(&var_60, var_60.q, r13 + 1)
        
        rdi_12 = var_158.d + 1
        var_158.d = rdi_12
        rbx_3 = var_138 + 1
        var_138 = rbx_3
    while (rdi_12 u< var_12c)
    i_3 = i_2

int64_t** r12_3 = var_150.q
int64_t* i_1 = *r12_3
i_2 = i_1
uint64_t* rbx_10 = var_110:8.q

if (i_1 != r12_3)
    int64_t var_100
    int64_t r12_4 = var_100
    
    do
        int64_t r10_1 = sx.q(i_1[8].d)
        int64_t rcx_47 = sx.q(*(i_1 + 0x44))
        int64_t r9_3 = sx.q(i_1[9].d)
        
        if (r10_1.d s>= 0 && rcx_47.d s>= 0 && r9_3.d s>= 0)
            int64_t rdx_29 = *r15
            void* r11_2 = rcx_47 * 0x98 + rdx_29
            int64_t rdi_13 = r10_1 * 0x98
            int32_t rsi_1 = *(rdi_13 + rdx_29 + 0x24)
            int32_t r10_2 = *(r11_2 + 0x24)
            
            if (rsi_1 == r10_2)
                void* r9_5 = r9_3 * 0x98 + rdx_29
                int32_t rax_65 = *(r9_5 + 0x24)
                
                if (rsi_1 == rax_65 && r10_2 == rax_65)
                    int32_t rdx_30 = *(rdi_13 + rdx_29 + 0x28)
                    int32_t rcx_48 = *(r11_2 + 0x28)
                    
                    if (rdx_30 == rcx_48)
                        int32_t rax_66 = *(r9_5 + 0x28)
                        
                        if (rdx_30 == rax_66 && rcx_48 == rax_66)
                            if (r12_4 == rbx_10)
                                sub_142991830(&var_110, rbx_10, &i_1[8])
                                rbx_10 = var_110:8.q
                                r12_4 = var_100
                            else
                                *rbx_10 = i_1[8]
                                rbx_10[1].d = i_1[9].d
                                rbx_10 += 0xc
                                var_110:8.q = rbx_10
        
        sub_14297bb00(&i_2)
        i_1 = i_2
    while (i_1 != var_150.q)

int64_t rdi_14 = var_110.q
int64_t rax_68
int64_t rdx_32
rdx_32:rax_68 = muls.dp.q(0x2aaaaaaaaaaaaaab, rbx_10 - rdi_14)
int64_t rbx_13 = rdx_32 s>> 1
int64_t rbx_14 = (rbx_10 - rdi_14) s/ 0xc

if (rbx_13 != neg.q(rbx_13 u>> 0x3f))
    sub_142992580(arg4, rbx_14)

if (rbx_14 != 0)
    uint64_t rax_71 = 0
    
    do
        int64_t rcx_52 = rax_71 * 0xc
        uint64_t* rdx_34 = *arg4
        *(rdx_34 + rcx_52) = *(rcx_52 + rdi_14)
        *(rdx_34 + rcx_52 + 8) = *(rcx_52 + rdi_14 + 8)
        r14 += 1
        rax_71 = zx.q(r14)
    while (rax_71 u< rbx_14)

sub_142996e30(&var_110)
int64_t* r9_6 = var_150.q
sub_14299a680(&var_150, &var_c8, *r9_6, r9_6)
j_sub_140a74f90(var_150.q)
sub_1429978b0(i_3)
int64_t result = j_sub_140a74f90(*i_3)
__security_check_cookie(rax_1 ^ &var_188)
return result
