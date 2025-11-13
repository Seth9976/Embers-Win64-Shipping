// 函数: sub_1409e7800
// 地址: 0x1409e7800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rsi = arg1
TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
*arg3 = data_143a1c6b4
void* rbp = *(ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
void* arg_18 = rbp

if (data_143ceed80 s> *(0x14 + rbp))
    _Init_thread_header(&data_143ceed80)
    
    if (data_143ceed80 == 0xffffffff)
        data_143ceed70 = 0
        data_143ceed78.q = 0
        atexit(sub_142cb79e0)
        _Init_thread_footer(&data_143ceed80)

int32_t rax_3 = data_143ceed7c
int32_t result_1 = 0
data_143ceed78 = 0

if (rax_3 s< 0 && rax_3 != 0)
    sub_1405dadb0(&data_143ceed70, 0)
    result_1 = data_143ceed78

uint64_t r12 = *arg2
int64_t r13 = r12 + (sx.q(arg2[1].d) << 2)
int32_t* r14_1

if (r12 != r13)
    do
        int32_t rbx_2 = *r12
        
        if (data_143ceed98 s> *(0x14 + rbp))
            _Init_thread_header(&data_143ceed98)
            
            if (data_143ceed98 == 0xffffffff)
                data_143ceed88 = 0
                data_143ceed90.q = 0
                atexit(sub_142cb8060)
                _Init_thread_footer(&data_143ceed98)
        
        sub_1409c46d0(rsi, rbx_2, &data_143ceed88)
        int64_t rbp_1 = 0
        int32_t* rsi_1 = data_143ceed88
        result_1 = data_143ceed78
        uint64_t r15_2 = sx.q(data_143ceed90) << 2 u>> 2
        
        if (rsi_1 u> &rsi_1[sx.q(data_143ceed90)])
            r15_2 = 0
        
        r14_1 = data_143ceed70
        
        if (r15_2 != 0)
            do
                int32_t i = *rsi_1
                int32_t* rcx_1 = r14_1
                void* rdx_1 = &r14_1[sx.q(result_1)]
                
                if (r14_1 != rdx_1)
                    while (*rcx_1 != i)
                        rcx_1 = &rcx_1[1]
                        
                        if (rcx_1 == rdx_1)
                            goto label_1409e7a2f
                
                if (r14_1 == rdx_1 || ((rcx_1 - r14_1) s>> 2).d == 0xffffffff)
                label_1409e7a2f:
                    bool cond:2_1 = result_1 + 1 s<= data_143ceed7c
                    data_143ceed78 = result_1 + 1
                    
                    if (not(cond:2_1))
                        sub_1405a4cf0(&data_143ceed70)
                        r14_1 = data_143ceed70
                    
                    r14_1[sx.q(result_1)] = i
                    result_1 = data_143ceed78
                    r14_1 = data_143ceed70
                
                rsi_1 = &rsi_1[1]
                rbp_1 += 1
            while (rbp_1 != r15_2)
        
        rsi = arg1
        r12 += 4
        rbp = arg_18
    while (r12 != r13)
else
    r14_1 = data_143ceed70

int64_t result = sx.q(result_1)
r12.b = 0
void* r13_1 = &r14_1[result]

if (r14_1 != r13_1)
    int32_t r10_1 = data_143ceeda8
    
    while (true)
        int64_t rbx_1 = sx.q(*r14_1)
        
        if (data_143ceedb0 s> *(0x14 + rbp))
            _Init_thread_header(&data_143ceedb0)
            
            if (data_143ceedb0 == 0xffffffff)
                data_143ceeda0 = 0
                data_143ceeda8.q = 0
                atexit(sub_142cb9620)
                _Init_thread_footer(&data_143ceedb0)
            
            r10_1 = data_143ceeda8
        
        void* rdi = rsi[5]
        int64_t rsi_2 = rbx_1 * 5
        int64_t r11_1 = sx.q(*(*(rdi + 0xe0) + (rsi_2 << 3) + 8))
        
        if (r11_1.d s> r10_1)
            bool cond:4_1 = r11_1.d s<= data_143ceedac
            r10_1 = r11_1.d
            data_143ceeda8 = r11_1.d
            
            if (not(cond:4_1))
                sub_1405a4cf0(&data_143ceeda0)
                r10_1 = data_143ceeda8
        else if (r11_1.d s< r10_1)
            int32_t rbx_4 = r10_1 - r11_1.d
            
            if (r10_1 != r11_1.d)
                int32_t rax_13 = r10_1 - rbx_4
                
                if (rax_13 != r11_1.d)
                    int64_t r9_1 = data_143ceeda0
                    memmove(r9_1 + (r11_1 << 2), r9_1 + (sx.q(rbx_4 + r11_1.d) << 2), 
                        (rax_13 - r11_1.d) << 2)
                    r10_1 = data_143ceeda8
                
                data_143ceeda8 = r10_1 - rbx_4
                sub_1405dac90(&data_143ceeda0)
                r10_1 = data_143ceeda8
        
        int64_t rax_16 = *(rdi + 0xe0)
        int64_t r8_2 = 0
        int32_t* r9_2 = *(rax_16 + (rsi_2 << 3))
        uint64_t r11_3 = sx.q(*(rax_16 + (rsi_2 << 3) + 8)) << 2 u>> 2
        
        if (r9_2 u> &r9_2[sx.q(*(rax_16 + (rsi_2 << 3) + 8))])
            r11_3 = 0
        
        if (r11_3 != 0)
            do
                int64_t rax_19 = sx.q(*r9_2)
                r9_2 = &r9_2[1]
                *(data_143ceeda0 + (r8_2 << 2)) = *(*(rdi + 0x38) + rax_19 * 0x18)
                r8_2 += 1
            while (r8_2 != r11_3)
            
            r10_1 = data_143ceeda8
        
        int32_t rbx_5 = -1
        char rsi_3 = 1
        int32_t rdi_1 = -1
        int32_t* rbp_2 = *arg2
        int32_t* rdx_6 = rbp_2
        void* r8_4 = &rbp_2[sx.q(arg2[1].d)]
        
        if (rbp_2 == r8_4)
        label_1409e7be6:
            r9_2.b = 0
        else
            while (*rdx_6 != *(data_143ceeda0 + (sx.q(r10_1) << 2) - 4))
                rdx_6 = &rdx_6[1]
                
                if (rdx_6 == r8_4)
                    goto label_1409e7be6
            
            r9_2 = 1
        
        int32_t rdx_7 = 0
        
        if (r10_1 s<= 0)
        label_1409e7c67:
            
            if (r9_2.b != 0)
                rbx_5 = 0
                rdi_1 = r10_1
        else
            int32_t* r11_4 = data_143ceeda0
            
            do
                int32_t* rax_24 = rbp_2
                
                if (rbp_2 == r8_4)
                label_1409e7c1d:
                    rax_24.b = 0
                else
                    while (*rax_24 != *r11_4)
                        rax_24 = &rax_24[1]
                        
                        if (rax_24 == r8_4)
                            goto label_1409e7c1d
                    
                    rax_24 = 1
                
                if (r9_2.b != 0)
                    if (rax_24.b == 0)
                        if (rdi_1 != 0xffffffff)
                            rsi_3 = 0
                        else
                            rdi_1 = rdx_7
                else if (rax_24.b != 0)
                    if (rbx_5 != 0xffffffff)
                        rsi_3 = 0
                    else
                        rbx_5 = rdx_7
                
                rdx_7 += 1
                r11_4 = &r11_4[1]
                r9_2 = zx.q(rax_24.b)
            while (rdx_7 s< r10_1)
            
            if (rbx_5 == 0xffffffff && rdi_1 == rbx_5)
                goto label_1409e7c67
        
        int32_t rcx_11 = 0
        r12 = zx.q(r12.b)
        
        if (rdi_1 s< rbx_5)
            rcx_11 = r10_1
        
        result = zx.q(r10_1 - (rcx_11 - rbx_5 + rdi_1) + 1)
        
        if (result.d s>= 3)
            r12 = 1
        
        if (rsi_3 == 0)
            break
        
        rsi = arg1
        r14_1 = &r14_1[1]
        rbp = arg_18
        
        if (r14_1 == r13_1)
            if (r12.b == 0)
                break
            
            void*** r13_2 = rsi
            void* arg_20
            sub_14090aa40(&rsi[5][0x2a], &arg_20, data_143f35cc8)
            void* r14_2 = rbp
            
            if (data_143ceedc8 s> *(rbp + 0x14))
                _Init_thread_header(&data_143ceedc8)
                
                if (data_143ceedc8 == 0xffffffff)
                    data_143ceedb8 = 0
                    data_143ceedc0 = 0
                    atexit(sub_142cb8f00)
                    _Init_thread_footer(&data_143ceedc8)
            
            if (data_143ceede0 s> *(rbp + 0x14))
                _Init_thread_header(&data_143ceede0)
                
                if (data_143ceede0 == 0xffffffff)
                    data_143ceedd0 = 0
                    data_143ceedd8.q = 0
                    atexit(sub_142cba7a0)
                    _Init_thread_footer(&data_143ceede0)
            
            int64_t r8_6 = sx.q(data_143ceedd8)
            
            if (r8_6.d s< 1)
                int32_t i_13 = 1 - r8_6.d
                int64_t rbx_6 = r8_6
                r8_6 = zx.q(r8_6.d + i_13)
                bool cond:7_1 = r8_6.d s<= data_143ceeddc
                data_143ceedd8 = r8_6.d
                
                if (not(cond:7_1))
                    sub_1405a4df0(&data_143ceedd0)
                    r8_6 = zx.q(data_143ceedd8)
                
                int64_t* rdx_10 = data_143ceedd0 + rbx_6 * 0x18
                
                if (i_13 != 0)
                    int32_t i_1
                    
                    do
                        *rdx_10 = 0
                        rdx_10[1] = 0
                        rdx_10 = &rdx_10[3]
                        rdx_10[-1].d = data_143a1c6b4
                        i_1 = i_13
                        i_13 -= 1
                    while (i_1 != 1)
                    r8_6 = zx.q(data_143ceedd8)
            else if (r8_6.d s> 1)
                int32_t i_14 = (r8_6 - 1).d
                
                if (i_14 != 0)
                    int32_t i_9 = i_14
                    int64_t* rbx_8 = data_143ceedd0 + 0x18
                    int32_t i_2
                    
                    do
                        int64_t rcx_17 = *rbx_8
                        
                        if (rcx_17 != 0)
                            sub_140a74f90(rcx_17)
                        
                        rbx_8 = &rbx_8[3]
                        i_2 = i_9
                        i_9 -= 1
                    while (i_2 != 1)
                    int32_t rax_31 = data_143ceedd8
                    int32_t rcx_19 = rax_31 - i_14
                    
                    if (rcx_19 != 1)
                        int64_t rcx_22 = data_143ceedd0
                        memmove(rcx_22 + 0x18, rcx_22 + sx.q(i_14 + 1) * 0x18, (rcx_19 - 1) * 0x18)
                        rax_31 = data_143ceedd8
                    
                    data_143ceedd8 = rax_31 - i_14
                    sub_1405fde90(&data_143ceedd0)
                    r8_6 = zx.q(data_143ceedd8)
            
            int64_t* r12_1 = arg2
            int128_t zmm6 = data_142d3f660
            int64_t rax_37 = data_143ceedd0
            char var_a8_1 = 2
            int64_t var_68_1 = 0
            int64_t rdx_12 = sx.q((r8_6 - 1).d) * 3
            int64_t rdi_2 = sx.q(*(rax_37 + (rdx_12 << 3) + 8))
            int64_t* rbx_9 = rax_37 + (rdx_12 << 3)
            int64_t r8_9 = **(arg_20 + 0x18)
            int64_t rcx_27 = sx.q(*(*r12_1 + (sx.q(r12_1[1].d) << 2) - 4)) * 3
            int32_t var_80_1 = *(r8_9 + (rcx_27 << 2) + 8)
            int32_t rax_41 = (rdi_2 + 1).d
            uint64_t var_88_1 = *(r8_9 + (rcx_27 << 2))
            rbx_9[1].d = rax_41
            
            if (rax_41 s> *(rbx_9 + 0xc))
                sub_14090a6a0(rbx_9)
            
            int64_t r8_10 = *rbx_9
            int64_t rax_42 = data_143f35cc8
            int64_t rcx_30 = rdi_2 * 0x60
            *(rcx_30 + r8_10 + 0x10) = var_a8_1.o
            *(rcx_30 + r8_10) = rax_42
            *(rcx_30 + r8_10 + 0x20) = zmm6
            *(rcx_30 + r8_10 + 8) = 0
            *(rcx_30 + r8_10 + 0x30) = var_88_1.o
            int128_t var_78
            *(rcx_30 + r8_10 + 0x40) = var_78
            *(rcx_30 + r8_10 + 0x50) = var_68_1.o
            sub_1409b5680(r13_2, &data_143ceedd0, &data_143ceedb8)
            
            if (data_143ceedf8 s> *(rbp + 0x14))
                _Init_thread_header(&data_143ceedf8)
                
                if (data_143ceedf8 == 0xffffffff)
                    data_143ceede8 = 0
                    data_143ceedf0.q = 0
                    atexit(sub_142cb9890)
                    _Init_thread_footer(&data_143ceedf8)
            
            int32_t rsi_4 = data_143ceed78
            int32_t rax_44 = data_143ceedf4
            int32_t i_10 = data_143ceedf0
            
            if (rsi_4 s> rax_44)
                if (i_10 != 0)
                    int64_t* rbx_13 = data_143ceede8 + 8
                    int32_t i_3
                    
                    do
                        sub_1408464b0(rbx_13)
                        rbx_13 = &rbx_13[4]
                        i_3 = i_10
                        i_10 -= 1
                    while (i_3 != 1)
                    rax_44 = data_143ceedf4
                
                data_143ceedf0 = 0
                
                if (rax_44 != rsi_4)
                    sub_1405a51b0(&data_143ceede8, rsi_4)
            else
                if (i_10 != 0)
                    int64_t* rbx_11 = data_143ceede8 + 8
                    int32_t i_4
                    
                    do
                        sub_1408464b0(rbx_11)
                        rbx_11 = &rbx_11[4]
                        i_4 = i_10
                        i_10 -= 1
                    while (i_4 != 1)
                
                data_143ceedf0 = 0
            
            if (data_143ceee10 s> *(rbp + 0x14))
                _Init_thread_header(&data_143ceee10)
                
                if (data_143ceee10 == 0xffffffff)
                    data_143ceee00 = 0
                    data_143ceee08.q = 0
                    atexit(sub_142cb7b80)
                    _Init_thread_footer(&data_143ceee10)
            
            int32_t rax_46 = data_143ceee0c
            int32_t i_11 = data_143ceee08
            
            if (rax_46 s< 0)
                if (i_11 != 0)
                    int64_t* rbx_17 = data_143ceee00 + 8
                    int32_t i_5
                    
                    do
                        int64_t rcx_35 = *rbx_17
                        
                        if (rcx_35 != 0)
                            sub_140a74f90(rcx_35)
                        
                        rbx_17 = &rbx_17[3]
                        i_5 = i_11
                        i_11 -= 1
                    while (i_5 != 1)
                    rax_46 = data_143ceee0c
                
                data_143ceee08 = 0
                
                if (rax_46 != 0)
                    sub_1405a5130(&data_143ceee00, 0)
            else
                if (i_11 != 0)
                    int64_t* rbx_15 = data_143ceee00 + 8
                    int32_t i_6
                    
                    do
                        int64_t rcx_34 = *rbx_15
                        
                        if (rcx_34 != 0)
                            sub_140a74f90(rcx_34)
                        
                        rbx_15 = &rbx_15[3]
                        i_6 = i_11
                        i_11 -= 1
                    while (i_6 != 1)
                
                data_143ceee08 = 0
            
            void* rcx_36 = data_143ceed70
            int64_t rax_47 = sx.q(data_143ceed78)
            arg_20 = rcx_36
            void* rax_48 = rcx_36 + (rax_47 << 2)
            
            if (rcx_36 != rax_48)
                uint64_t r9_3 = zx.q(data_143ceee20)
                
                do
                    int64_t rbx_18 = sx.q(*rcx_36)
                    int64_t rbp_3 = rbx_18 * 5
                    int64_t var_f8_1 = rbp_3
                    int64_t r15_3 = sx.q(*(r13_2[5][0x1c] + (rbp_3 << 3) + 8))
                    
                    if (data_143ceee28 s> *(r14_2 + 0x14))
                        _Init_thread_header(&data_143ceee28)
                        
                        if (data_143ceee28 == 0xffffffff)
                            data_143ceee18 = 0
                            data_143ceee20.q = 0
                            atexit(sub_142cb95e0)
                            _Init_thread_footer(&data_143ceee28)
                        
                        r9_3 = zx.q(data_143ceee20)
                    
                    if (data_143ceee40 s> *(r14_2 + 0x14))
                        _Init_thread_header(&data_143ceee40)
                        
                        if (data_143ceee40 == 0xffffffff)
                            data_143ceee30 = 0
                            data_143ceee38 = 0
                            atexit(sub_142cb9330)
                            _Init_thread_footer(&data_143ceee40)
                        
                        r9_3 = zx.q(data_143ceee20)
                    
                    void* rsi_5 = r13_2[5]
                    int64_t r10_3 = sx.q(*(*(rsi_5 + 0xe0) + (rbp_3 << 3) + 8))
                    
                    if (r10_3.d s> r9_3.d)
                        bool cond:10_1 = r10_3.d s<= data_143ceee24
                        data_143ceee20 = r10_3.d
                        
                        if (not(cond:10_1))
                            sub_1405a4cf0(&data_143ceee18)
                    else if (r10_3.d s< r9_3.d)
                        int32_t rdi_3 = r9_3.d
                        int32_t rdi_4 = rdi_3 - r10_3.d
                        
                        if (rdi_3 != r10_3.d)
                            int32_t rax_54 = r9_3.d - rdi_4
                            
                            if (rax_54 != r10_3.d)
                                int64_t r9_4 = data_143ceee18
                                memmove(r9_4 + (r10_3 << 2), r9_4 + (sx.q(rdi_4 + r10_3.d) << 2), 
                                    (rax_54 - r10_3.d) << 2)
                                r9_3 = zx.q(data_143ceee20)
                            
                            data_143ceee20 = r9_3.d - rdi_4
                            sub_1405dac90(&data_143ceee18)
                    
                    int64_t rax_57 = *(rsi_5 + 0xe0)
                    int64_t r8_13 = 0
                    int32_t* r9_6 = *(rax_57 + (rbp_3 << 3))
                    uint64_t r10_5 = sx.q(*(rax_57 + (rbp_3 << 3) + 8)) << 2 u>> 2
                    
                    if (r9_6 u> &r9_6[sx.q(*(rax_57 + (rbp_3 << 3) + 8))])
                        r10_5 = 0
                    
                    if (r10_5 != 0)
                        do
                            int64_t rax_60 = sx.q(*r9_6)
                            r9_6 = &r9_6[1]
                            *(data_143ceee18 + (r8_13 << 2)) = *(*(rsi_5 + 0x38) + rax_60 * 0x18)
                            r8_13 += 1
                        while (r8_13 != r10_5)
                    
                    sub_1409c3b80(r13_2, rbx_18.d, &data_143ceee30)
                    int32_t* rbx_19 = *r12_1
                    int32_t i_8 = -1
                    int32_t i_12 = -1
                    r9_3 = sx.q(data_143ceee20)
                    int32_t* rdx_20 = rbx_19
                    int64_t rax_63 = r13_2[5][0x1c]
                    void* r8_14 = &rbx_19[sx.q(r12_1[1].d)]
                    uint32_t r10_6
                    
                    if (rbx_19 == r8_14)
                    label_1409e8383:
                        r10_6.b = 0
                    else
                        while (*rdx_20 != *(data_143ceee18 + (r9_3 << 2) - 4))
                            rdx_20 = &rdx_20[1]
                            
                            if (rdx_20 == r8_14)
                                goto label_1409e8383
                        
                        r10_6.b = 1
                    
                    int32_t i_7 = 0
                    
                    if (r9_3.d s<= 0)
                    label_1409e83ef:
                        
                        if (r10_6.b != 0)
                            i_8 = 0
                            i_12 = r9_3.d
                    else
                        int32_t* r11_5 = data_143ceee18
                        
                        do
                            int32_t* rax_66 = rbx_19
                            
                            if (rbx_19 == r8_14)
                            label_1409e83ae:
                                rax_66.b = 0
                            else
                                while (*rax_66 != *r11_5)
                                    rax_66 = &rax_66[1]
                                    
                                    if (rax_66 == r8_14)
                                        goto label_1409e83ae
                                
                                rax_66.b = 1
                            
                            if (r10_6.b != 0)
                                if (rax_66.b == 0 && i_12 == 0xffffffff)
                                    i_12 = i_7
                            else if (rax_66.b != 0 && i_8 == 0xffffffff)
                                i_8 = i_7
                            
                            i_7 += 1
                            r11_5 = &r11_5[1]
                            r10_6 = zx.d(rax_66.b)
                        while (i_7 s< r9_3.d)
                        
                        if (i_8 == 0xffffffff && i_12 == i_8)
                            goto label_1409e83ef
                    
                    int32_t rcx_44 = 0
                    
                    if (i_12 s< i_8)
                        rcx_44 = r9_3.d
                    
                    if (r9_3.d - (rcx_44 - i_8 + i_12) + 1 s>= 3)
                        int64_t rbx_20 = sx.q(data_143ceedf0)
                        int32_t rax_70 = (rbx_20 + 1).d
                        bool cond:11_1 = rax_70 s<= data_143ceedf4
                        data_143ceedf0 = rax_70
                        
                        if (not(cond:11_1))
                            sub_1405c4e40(&data_143ceede8)
                        
                        int64_t rbx_21 = 0
                        int32_t* rcx_49 = (rbx_20 << 5) + data_143ceede8
                        *rcx_49 = data_143a1c6c4
                        *(rcx_49 + 8) = 0
                        *(rcx_49 + 0x10) = 0
                        rcx_49[6] = data_143a1c6c8
                        rcx_49[7].b = 0
                        int32_t* r14_5 = (sx.q(data_143ceedf0 - 1) << 5) + data_143ceede8
                        int32_t rax_76 = *(r13_2[5][0x1c] + (rbp_3 << 3) + 0x20)
                        rbp_3.b = i_12 s< i_8
                        *r14_5 = rax_76
                        
                        if (r15_3.d s> 0)
                            do
                                if (rbp_3.b == 0)
                                    goto label_1409e84c1
                                
                                if (rbx_21 == sx.q(i_12))
                                    rbp_3.b = 0
                                label_1409e84c1:
                                    int64_t rsi_6 = sx.q(r14_5[4])
                                    int32_t rax_77 = (rsi_6 + 1).d
                                    r14_5[4] = rax_77
                                    
                                    if (rax_77 s> r14_5[5])
                                        sub_1405a4df0(&r14_5[2])
                                    
                                    int64_t rcx_52 = rsi_6 * 3
                                    int64_t rdx_23 = *(r14_5 + 8)
                                    *(rdx_23 + (rcx_52 << 3)) = data_143a1c6b8
                                    *(rdx_23 + (rcx_52 << 3) + 4) = data_143a1c6b4
                                    *(rdx_23 + (rcx_52 << 3) + 8) = 0
                                    *(rdx_23 + (rcx_52 << 3) + 0x10) = 0
                                    int64_t r8_15 = *(r14_5 + 8)
                                    int64_t r9_7 = sx.q(r14_5[4]) * 3
                                    int32_t rcx_53
                                    
                                    if (rbx_21 != sx.q(i_8))
                                        rcx_53 = *(data_143ceee18 + (rbx_21 << 2))
                                    else
                                        rbp_3.b = 1
                                        rcx_53 = *data_143ceedb8
                                    
                                    *(r8_15 + (r9_7 << 3) - 0x14) = rcx_53
                                    int32_t var_c0_1 =
                                        *(*(rax_63 + (var_f8_1 << 3)) + (rbx_21 << 2))
                                    int128_t var_d8 = (r8_15 - 0x10 + (r9_7 << 3)).o
                                    sub_14099a420(&arg1[5][0x35], &var_d8)
                                    int64_t rdi_5 = sx.q(data_143ceee08)
                                    int32_t rax_86 = (rdi_5 + 1).d
                                    bool cond:14_1 = rax_86 s<= data_143ceee0c
                                    data_143ceee08 = rax_86
                                    
                                    if (not(cond:14_1))
                                        sub_1405a4df0(&data_143ceee00)
                                    
                                    int64_t rax_87 = data_143ceee00
                                    int64_t rcx_57 = rdi_5 * 3
                                    *(rax_87 + (rcx_57 << 3)) = 0
                                    *(rax_87 + (rcx_57 << 3) + 8) = 0
                                    *(rax_87 + (rcx_57 << 3) + 0x10) = 0
                                    int32_t var_b0_1 = *(data_143ceee30 + (rbx_21 << 2))
                                    var_d8 =
                                        (data_143ceee00 + sx.q(data_143ceee08 - 1) * 0x18 + 8).o
                                    sub_14099a640(&arg1[5][0x40], &var_d8)
                                
                                rbx_21 += 1
                            while (rbx_21 s< r15_3)
                            
                            r13_2 = arg1
                        
                        r12_1 = arg2
                        r14_2 = arg_18
                        r9_3 = zx.q(data_143ceee20)
                    
                    rcx_36 = arg_20 + 4
                    arg_20 = rcx_36
                while (rcx_36 != rax_48)
            
            void* r14_7 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
            
            if (data_143ceee58 s> *(r14_7 + 0x14))
                _Init_thread_header(&data_143ceee58)
                
                if (data_143ceee58 == 0xffffffff)
                    data_143ceee48 = 0
                    data_143ceee50.q = 0
                    atexit(sub_142cb8c20)
                    _Init_thread_footer(&data_143ceee58)
            
            if (data_143ceee70 s> *(r14_7 + 0x14))
                _Init_thread_header(&data_143ceee70)
                
                if (data_143ceee70 == 0xffffffff)
                    data_143ceee60 = 0
                    data_143ceee68 = 0
                    atexit(sub_142cb8aa0)
                    _Init_thread_footer(&data_143ceee70)
            
            sub_1409b4ab0(r13_2, &data_143ceede8, &data_143ceee48, &data_143ceee60)
            int32_t* rsi_8 = data_143ceee48
            void* rbp_4 = &rsi_8[sx.q(data_143ceee50)]
            
            if (rsi_8 != rbp_4)
                int64_t rdi_6 = 0
                
                do
                    int32_t rbx_22 = *rsi_8
                    
                    if (data_143ceee88 s> *(r14_7 + 0x14))
                        _Init_thread_header(&data_143ceee88)
                        
                        if (data_143ceee88 == 0xffffffff)
                            data_143ceee78 = 0
                            data_143ceee80.q = 0
                            atexit(sub_142cb8be0)
                            _Init_thread_footer(&data_143ceee88)
                    
                    sub_1409c3b80(r13_2, rbx_22, &data_143ceee78)
                    int32_t* r9_8 = data_143ceee78
                    int64_t r10_7 = 0
                    void* rcx_66 = &r9_8[sx.q(data_143ceee80)]
                    uint64_t r11_9 = (rcx_66 - r9_8 + 3) u>> 2
                    
                    if (r9_8 u> rcx_66)
                        r11_9 = 0
                    
                    if (r11_9 != 0)
                        int64_t r8_19 = rdi_6 * 0x18
                        
                        do
                            int32_t rcx_67 = *r9_8
                            r8_19 += 0x18
                            r9_8 = &r9_8[1]
                            rdi_6 += 1
                            r10_7 += 1
                            *(r8_19 + data_143ceee00 - 0x18) = rcx_67
                        while (r10_7 != r11_9)
                    
                    rsi_8 = &rsi_8[1]
                while (rsi_8 != rbp_4)
            
            sub_1409dc390(r13_2, &data_143ceee00)
            return sub_1409b6930(r13_2, &data_143ceed70, 1, 1, 1, 0)

return result
