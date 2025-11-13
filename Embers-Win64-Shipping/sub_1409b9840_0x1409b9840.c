// 函数: sub_1409b9840
// 地址: 0x1409b9840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** r14 = arg1
int64_t* rsi = arg2
int32_t rax = *(arg4 + 0xc)
arg4[1].d = 0

if (rax s< 0 && rax != 0)
    sub_1405dadb0(arg4, 0)

TEB* gsbase
int32_t* rbx_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143ceea20 s> *rbx_1)
    _Init_thread_header(&data_143ceea20)
    
    if (data_143ceea20 == 0xffffffff)
        atexit(sub_142cb8d80)
        _Init_thread_footer(&data_143ceea20)

int32_t rax_3 = data_143ceea1c
data_143ceea18 = 0

if (rax_3 s< 0 && rax_3 != 0)
    sub_1405dadb0(&data_143ceea10, 0)

if (data_143ceea24 s> *rbx_1)
    _Init_thread_header(&data_143ceea24)
    
    if (data_143ceea24 == 0xffffffff)
        atexit(sub_142cb8f70)
        _Init_thread_footer(&data_143ceea24)

sub_140908eb0(&data_143990f90)

if (data_143ceea38 s> *rbx_1)
    _Init_thread_header(&data_143ceea38)
    
    if (data_143ceea38 == 0xffffffff)
        atexit(sub_142cba5c0)
        _Init_thread_footer(&data_143ceea38)

int64_t* rbx_2 = data_143ceea28
int32_t i_9 = data_143ceea30
int32_t i_13

if (data_143ceea34 s< 0)
    if (i_9 != 0)
        int32_t i
        
        do
            int64_t rcx_3 = *rbx_2
            
            if (rcx_3 != 0)
                sub_140a74f90(rcx_3)
            
            rbx_2 = &rbx_2[3]
            i = i_9
            i_9 -= 1
        while (i != 1)
    
    bool cond:3_1 = data_143ceea34 == 0
    i_13 = 0
    data_143ceea30 = 0
    
    if (not(cond:3_1))
        sub_1405a5130(&data_143ceea28, 0)
        i_13 = data_143ceea30
else
    if (i_9 != 0)
        int32_t i_1
        
        do
            int64_t rcx_2 = *rbx_2
            
            if (rcx_2 != 0)
                sub_140a74f90(rcx_2)
            
            rbx_2 = &rbx_2[3]
            i_1 = i_9
            i_9 -= 1
        while (i_1 != 1)
    
    i_13 = 0
    data_143ceea30 = 0

int32_t rax_6 = rsi[1].d
int32_t rdx = rax_6 * 2

if (rdx s> data_143ceea34)
    sub_1405a5130(&data_143ceea28, rdx)
    rax_6 = rsi[1].d
    i_13 = data_143ceea30

int32_t* r15 = *rsi
int32_t* var_e8 = r15
void* r13 = &r15[sx.q(rax_6)]
int32_t i_8
int32_t j_3
int32_t var_f8
int64_t* var_d8
int32_t var_d0
int128_t var_b8

if (r15 != r13)
    void* r9 = data_143990fd0
    int64_t r8 = data_143990f90
    
    do
        int32_t* rsi_1 = &var_f8
        int64_t i_12 = 2
        int64_t rcx_4 = sx.q(*r15) * 3
        int64_t rax_9 = r14[5][0xe]
        var_f8 = *(rax_9 + (rcx_4 << 3))
        int32_t var_f4_1 = *(rax_9 + (rcx_4 << 3) + 4)
        int64_t i_2
        
        do
            int64_t rbx_3 = sx.q(*rsi_1)
            bool cond:8_1 = data_143990f98 == data_143990fc4
            j_3 = rbx_3.d
            int64_t rax_17
            
            if (cond:8_1)
            label_1409b9a83:
                rax_17 = 0
            else
                void* rax_15 = &data_143990fc8
                
                if (r9 != 0)
                    rax_15 = r9
                
                int32_t rax_16 = *(rax_15 + ((sx.q(data_143990fd8 - 1) & rbx_3) << 2))
                
                if (rax_16 == 0xffffffff)
                label_1409b9a83_1:
                    rax_17 = 0
                else
                    int64_t rcx_8
                    
                    while (true)
                        rcx_8 = sx.q(rax_16) * 2
                        
                        if (*(r8 + (rcx_8 << 3)) == rbx_3.d)
                            break
                        
                        rax_16 = *(r8 + (rcx_8 << 3) + 8)
                        
                        if (rax_16 == 0xffffffff)
                            goto label_1409b9a83_2
                    
                    rax_17 = r8 + (rcx_8 << 3)
                    
                    if (rax_16 == 0xffffffff)
                    label_1409b9a83_2:
                        rax_17 = 0
            
            int64_t rcx_9 = rax_17 + 4
            
            if (rax_17 == 0)
                rcx_9 = 0
            
            if (arg3 == 0 || rcx_9 == 0)
                i_8 = i_13
                bool cond:5_1 = i_13 + 1 s<= data_143ceea34
                data_143ceea30 = i_13 + 1
                
                if (not(cond:5_1))
                    sub_1405a4df0(&data_143ceea28)
                
                int64_t* rdx_5 = data_143ceea28 + sx.q(i_13) * 0x18
                
                if (rdx_5 == 0)
                    rdx_5 = nullptr
                else
                    *rdx_5 = 0
                    rdx_5[1] = 0
                    rdx_5[2].d = data_143a1c6b4
                
                void* rcx_11 = arg1[5]
                var_d8 = rdx_5
                var_d0 = rbx_3.d
                var_b8 = var_d8.o
                sub_140999b70(rcx_11 + 0x150, &var_b8)
                sub_140998bf0(&data_143990f90, &j_3, &i_8)
                r9 = data_143990fd0
                r8 = data_143990f90
                i_13 = data_143ceea30
            
            rsi_1 = &rsi_1[1]
            i_2 = i_12
            i_12 -= 1
        while (i_2 != 1)
        r14 = arg1
        r15 = &var_e8[1]
        var_e8 = r15
    while (r15 != r13)
    
    rsi = arg2

sub_1409b5680(r14, &data_143ceea28, &data_143ceea10)
int32_t* r13_2 = rbx_1

if (data_143ceea50 s> *r13_2)
    _Init_thread_header(&data_143ceea50)
    
    if (data_143ceea50 == 0xffffffff)
        atexit(sub_142cb8630)
        _Init_thread_footer(&data_143ceea50)

int32_t i_10 = data_143ceea48

if (data_143ceea4c s< 0)
    if (i_10 != 0)
        int64_t* rbx_7 = data_143ceea40 + 8
        int32_t i_3
        
        do
            int64_t rcx_15 = *rbx_7
            
            if (rcx_15 != 0)
                sub_140a74f90(rcx_15)
            
            rbx_7 = &rbx_7[4]
            i_3 = i_10
            i_10 -= 1
        while (i_3 != 1)
    
    bool cond:6_1 = data_143ceea4c == 0
    data_143ceea48 = 0
    
    if (not(cond:6_1))
        sub_1405a51b0(&data_143ceea40, 0)
else
    if (i_10 != 0)
        int64_t* rbx_5 = data_143ceea40 + 8
        int32_t i_4
        
        do
            int64_t rcx_14 = *rbx_5
            
            if (rcx_14 != 0)
                sub_140a74f90(rcx_14)
            
            rbx_5 = &rbx_5[4]
            i_4 = i_10
            i_10 -= 1
        while (i_4 != 1)
    
    data_143ceea48 = 0

int32_t rax_23 = rsi[1].d

if (rax_23 s> data_143ceea4c)
    sub_1405a51b0(&data_143ceea40, rax_23)
    rax_23 = rsi[1].d

int32_t* r15_2 = *rsi
void* r12_1 = &r15_2[sx.q(rax_23)]

if (r15_2 != r12_1)
    do
        int64_t rbx_8 = sx.q(*r15_2)
        int64_t rsi_2 = sx.q(data_143ceea48)
        int64_t rax_25 = r14[5][0xe]
        int64_t rcx_16 = rbx_8 * 3
        int64_t rdi = sx.q(*(rax_25 + (rcx_16 << 3)))
        int64_t r14_1 = sx.q(*(rax_25 + (rcx_16 << 3) + 4))
        int32_t rax_26 = (rsi_2 + 1).d
        bool cond:13_1 = rax_26 s<= data_143ceea4c
        data_143ceea48 = rax_26
        
        if (not(cond:13_1))
            sub_1405c4e40(&data_143ceea40)
        
        int64_t r8_3 = rsi_2 << 5
        int32_t* r8_4 = r8_3 + data_143ceea40
        
        if (r8_3 == neg.q(data_143ceea40))
            r8_4 = nullptr
        else
            *r8_4 = data_143a1c6b4
            r8_4[1] = data_143a1c6b4
            *(r8_4 + 8) = 0
            *(r8_4 + 0x10) = 0
            r8_4[6] = data_143a1c6bc
        
        void* rax_35
        
        if (data_143990f98 == data_143990fc4)
        label_1409b9d43:
            rax_35 = nullptr
        else
            void* rcx_17 = data_143990fd0
            void* rax_33 = &data_143990fc8
            
            if (rcx_17 != 0)
                rax_33 = rcx_17
            
            int32_t rax_34 = *(rax_33 + ((sx.q(data_143990fd8 - 1) & rdi) << 2))
            
            if (rax_34 == 0xffffffff)
            label_1409b9d43_1:
                rax_35 = nullptr
            else
                int64_t r9_1 = data_143990f90
                int64_t rcx_19
                
                while (true)
                    rcx_19 = sx.q(rax_34) * 2
                    
                    if (*(r9_1 + (rcx_19 << 3)) == rdi.d)
                        break
                    
                    rax_34 = *(r9_1 + (rcx_19 << 3) + 8)
                    
                    if (rax_34 == 0xffffffff)
                        goto label_1409b9d43_2
                
                rax_35 = r9_1 + (rcx_19 << 3)
                
                if (rax_34 == 0xffffffff)
                label_1409b9d43_2:
                    rax_35 = nullptr
        
        *r8_4 = *(data_143ceea10 + (sx.q(*(rax_35 + 4)) << 2))
        void* rax_42
        
        if (data_143990f98 == data_143990fc4)
        label_1409b9dc3:
            rax_42 = nullptr
        else
            void* rcx_22 = data_143990fd0
            void* rax_40 = &data_143990fc8
            
            if (rcx_22 != 0)
                rax_40 = rcx_22
            
            int32_t rax_41 = *(rax_40 + ((sx.q(data_143990fd8 - 1) & r14_1) << 2))
            
            if (rax_41 == 0xffffffff)
            label_1409b9dc3_1:
                rax_42 = nullptr
            else
                int64_t r9_2 = data_143990f90
                int64_t rcx_24
                
                while (true)
                    rcx_24 = sx.q(rax_41) * 2
                    
                    if (*(r9_2 + (rcx_24 << 3)) == r14_1.d)
                        break
                    
                    rax_41 = *(r9_2 + (rcx_24 << 3) + 8)
                    
                    if (rax_41 == 0xffffffff)
                        goto label_1409b9dc3_2
                
                rax_42 = r9_2 + (rcx_24 << 3)
                
                if (rax_41 == 0xffffffff)
                label_1409b9dc3_2:
                    rax_42 = nullptr
        
        r14 = arg1
        var_d0 = rbx_8.d
        r8_4[1] = *(data_143ceea10 + (sx.q(*(rax_42 + 4)) << 2))
        void* rcx_27 = r14[5]
        var_d8 = &r8_4[2]
        var_b8 = var_d8.o
        sub_14099a640(rcx_27 + 0x200, &var_b8)
        r15_2 = &r15_2[1]
    while (r15_2 != r12_1)
    
    rsi = arg2
    r13_2 = rbx_1

uint64_t* rbx_11 = arg4
sub_1409b37f0(r14, &data_143ceea40, rbx_11)

if (data_143ceea68 s> *r13_2)
    _Init_thread_header(&data_143ceea68)
    
    if (data_143ceea68 == 0xffffffff)
        atexit(sub_142cb9950)
        _Init_thread_footer(&data_143ceea68)

int32_t i_11 = data_143ceea60

if (data_143ceea64 s< 0)
    if (i_11 != 0)
        int64_t* rbx_13 = data_143ceea58 + 8
        int32_t i_5
        
        do
            sub_1408464b0(rbx_13)
            rbx_13 = &rbx_13[4]
            i_5 = i_11
            i_11 -= 1
        while (i_5 != 1)
        rbx_11 = arg4
    
    bool cond:12_1 = data_143ceea64 == 0
    data_143ceea60 = 0
    
    if (not(cond:12_1))
        sub_1405a51b0(&data_143ceea58, 0)
else
    if (i_11 != 0)
        int64_t* rbx_10 = data_143ceea58 + 8
        int32_t i_6
        
        do
            sub_1408464b0(rbx_10)
            rbx_10 = &rbx_10[4]
            i_6 = i_11
            i_11 -= 1
        while (i_6 != 1)
        rbx_11 = arg4
    
    data_143ceea60 = 0

int32_t rdx_18 = rsi[1].d

if (rdx_18 s> data_143ceea64)
    sub_1405a51b0(&data_143ceea58, rdx_18)

i_8 = 0

if (rbx_11[1].d s> 0)
    int64_t r9_3 = 0
    int64_t var_e8_1 = 0
    int32_t i_7
    
    do
        int64_t rdi_1 = sx.q(*(*rsi + r9_3))
        int64_t r8_6 = r14[5][0xe]
        int64_t rbx_14 = sx.q(data_143ceea60)
        int64_t rdx_19 = rdi_1 * 3
        int32_t j_1 = *(r8_6 + (rdx_19 << 3))
        int64_t rcx_33 = sx.q(*(*rbx_11 + r9_3))
        int32_t j_2 = *(r8_6 + (rdx_19 << 3) + 4)
        j_3 = j_1
        int64_t rax_48 = rcx_33 * 3
        int32_t r13_3 = *(r8_6 + (rax_48 << 3))
        var_f8 = *(r8_6 + (rax_48 << 3) + 4)
        int32_t rax_50 = (rbx_14 + 1).d
        bool cond:18_1 = rax_50 s<= data_143ceea64
        data_143ceea60 = rax_50
        
        if (not(cond:18_1))
            sub_1405c4e40(&data_143ceea58)
        
        int64_t rsi_4 = rbx_14 << 5
        int32_t* rsi_5 = rsi_4 + data_143ceea58
        
        if (rsi_4 == neg.q(data_143ceea58))
            rsi_5 = nullptr
        else
            *rsi_5 = data_143a1c6c4
            *(rsi_5 + 8) = 0
            *(rsi_5 + 0x10) = 0
            rsi_5[6] = data_143a1c6c8
            rsi_5[7].b = 0
        
        int32_t rbx_15 = data_143a1c6c8
        int64_t var_78
        int64_t* rax_53 = sub_1409c2bd0(r14[5], &var_78, rdi_1.d)
        int64_t rcx_35 = var_78
        int32_t r14_2 = rax_53[1].d
        
        if (rcx_35 != 0)
            sub_140a74f90(rcx_35)
        
        if (r14_2 s> 0)
            sub_1409c2bd0(arg1[5], &var_d8, rdi_1.d)
            int64_t* rax_55 = &data_143a1c6c8
            int64_t* rcx_37 = var_d8
            
            if (var_d0 s> 0)
                rax_55 = rcx_37
            
            rbx_15 = *rax_55
            
            if (rcx_37 != 0)
                sub_140a74f90(rcx_37)
        
        void* rdx_23 = arg1[5]
        int32_t rax_58
        
        if (rbx_15 != data_143a1c6c8)
            rax_58 = *(*(rdx_23 + 0xe0) + sx.q(rbx_15) * 0x28 + 0x20)
        else
            void* var_68
            
            if (*(rdx_23 + 0x120) - *(rdx_23 + 0x14c) s<= 0)
                rax_58 = data_143a1c6c4
            else
                rax_58 = *(sub_1407453e0(&var_68, rdx_23 + 0x118) + 0x1c)
        
        *rsi_5 = rax_58
        int64_t r14_3 = sx.q(rsi_5[4])
        
        if (r14_3.d s< 4)
            rsi_5[4] = 4
            int32_t j_4 = 4 - r14_3.d
            
            if (rsi_5[5] s< 4)
                sub_1405a4df0(&rsi_5[2])
            
            int32_t* r8_9 = *(rsi_5 + 8) + r14_3 * 0x18
            
            if (j_4 != 0)
                void* rcx_42 = &r8_9[5]
                int32_t j
                
                do
                    rcx_42 += 0x18
                    *r8_9 = data_143a1c6b8
                    r8_9 = &r8_9[6]
                    *(rcx_42 - 0x28) = data_143a1c6b4
                    *(rcx_42 - 0x24) = 0
                    *(rcx_42 - 0x1c) = 0
                    j = j_4
                    j_4 -= 1
                while (j != 1)
                j_1 = j_3
        else if (r14_3.d s> 4)
            sub_1409d8830(&rsi_5[2], 4, (r14_3 - 4).d, 0)
        
        int32_t rcx_44 = var_f8
        r14 = arg1
        *(*(rsi_5 + 8) + 4) = j_2
        *(*(rsi_5 + 8) + 0x1c) = j_1
        *(*(rsi_5 + 8) + 0x34) = r13_3
        *(*(rsi_5 + 8) + 0x4c) = rcx_44
        
        if (rbx_15 != data_143a1c6c8)
            void* r11_1 = r14[5]
            int64_t rdx_28 = *(r11_1 + 0xe0)
            int64_t rcx_45 = sx.q(rbx_15) * 5
            int32_t* r9_4 = *(rdx_28 + (rcx_45 << 3))
            int32_t* r8_11 = r9_4
            void* rdx_29 = &r9_4[sx.q(*(rdx_28 + (rcx_45 << 3) + 8))]
            
            if (r9_4 == rdx_29)
            label_1409ba148:
                r8_11 = nullptr
            else
                while (*(*(r11_1 + 0x38) + sx.q(*r8_11) * 0x18) != j_1)
                    r8_11 = &r8_11[1]
                    
                    if (r8_11 == rdx_29)
                        goto label_1409ba148
            
            int32_t* rax_71 = &data_143a1c6b8
            
            if (r8_11 != 0)
                rax_71 = r8_11
            
            int32_t rdi_2 = *rax_71
            
            if (r9_4 == rdx_29)
            label_1409ba186:
                r9_4 = nullptr
            else
                while (*(*(r11_1 + 0x38) + sx.q(*r9_4) * 0x18) != j_2)
                    r9_4 = &r9_4[1]
                    
                    if (r9_4 == rdx_29)
                        goto label_1409ba186
            
            int32_t* rax_73 = &data_143a1c6b8
            
            if (r9_4 != 0)
                rax_73 = r9_4
            
            int32_t rbx_16 = *rax_73
            int32_t var_a0_1 = rbx_16
            var_f8.o = (*(rsi_5 + 8) + 8).o
            sub_14099a420(r11_1 + 0x1a8, &var_f8)
            int32_t var_90_1 = rdi_2
            var_f8.o = (*(rsi_5 + 8) + 0x20).o
            sub_14099a420(&r14[5][0x35], &var_f8)
            int32_t var_80_1 = rdi_2
            var_f8.o = (*(rsi_5 + 8) + 0x38).o
            sub_14099a420(&r14[5][0x35], &var_f8)
            var_b8.q = *(rsi_5 + 8) + 0x50
            var_b8:8.d = rbx_16
            var_f8.o = var_b8
            sub_14099a420(&r14[5][0x35], &var_f8)
        
        i_7 = i_8 + 1
        rbx_11 = arg4
        r9_3 = var_e8_1 + 4
        rsi = arg2
        i_8 = i_7
        var_e8_1 = r9_3
    while (i_7 s< rbx_11[1].d)
    r13_2 = rbx_1

if (data_143ceea80 s> *r13_2)
    _Init_thread_header(&data_143ceea80)
    
    if (data_143ceea80 == 0xffffffff)
        atexit(sub_142cb8c80)
        _Init_thread_footer(&data_143ceea80)

int32_t rax_83 = data_143ceea7c
data_143ceea78 = 0

if (rax_83 s< 0 && rax_83 != 0)
    sub_1405dadb0(&data_143ceea70, 0)

if (data_143ceea98 s> *r13_2)
    _Init_thread_header(&data_143ceea98)
    
    if (data_143ceea98 == 0xffffffff)
        atexit(&data_142cb8a40)
        _Init_thread_footer(&data_143ceea98)

int32_t rax_85 = data_143ceea94
data_143ceea90 = 0

if (rax_85 s< 0 && rax_85 != 0)
    sub_1405dadb0(&data_143ceea88, 0)

return sub_1409b4ab0(r14, &data_143ceea58, &data_143ceea70, &data_143ceea88) __tailcall
