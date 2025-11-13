// 函数: sub_14102b7c0
// 地址: 0x14102b7c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = arg1[0x25]
int64_t* r14 = arg1
int32_t rbx = 1 << (data_1439c7a34).b
int32_t i_4 = rbx - 1
int32_t i_6 = i_4

if (rbx != 1)
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = _bit_scan_forward(i_4)
    int32_t rdi_1 = temp0_1
    int32_t var_9c_1 = rdi_1
    int32_t i
    
    do
        sub_1410161a0(*(rsi + (zx.q(rdi_1) << 3) + 0x4a0) + 0x10)
        i = not.d(1 << rdi_1.b) & i_4
        i_4 = i
        
        if (i != 0)
            uint64_t rflags_2
            int32_t temp0_2
            temp0_2, rflags_2 = _bit_scan_forward(i)
            rdi_1 = temp0_2
            int32_t var_98_1 = rdi_1
        else
            rdi_1 = 0x20
    while (i != 0)

int64_t zmm2
double zmm6[0x2]
zmm2, zmm6 = sub_141059b40(rsi + 0x500, 0, 0)
int32_t i_7 = r14[0x26].d
int32_t i_3 = i_7
int32_t rax_4

if (i_7 != 0)
    uint64_t rflags_3
    int32_t temp0_3
    temp0_3, rflags_3 = _bit_scan_forward(i_7)
    rax_4 = temp0_3
    int32_t var_94_1 = rax_4
else
    rax_4 = i_7 + 0x20

char arg_10 = rax_4.b
int128_t zmm7

if (i_7 != 0)
    int32_t i_1
    
    do
        void* r14_1 = *(r14[0x25] + (zx.q(rax_4) << 3) + 0x9d8)
        void* var_b0_1 = r14_1
        void* rdi_2 = **(r14_1 + 0x6d8)
        void* rbx_1 = *(rdi_2 + 0x1c8)
        int32_t rdx_1 = *(rbx_1 + 0x128)
        int64_t* rcx_6 = *(rbx_1 + 0x30)
        
        if (rdx_1 != 0)
            (*(*rcx_6 + 0xd0))(rcx_6, rdx_1, *(rbx_1 + 0x120))
            *(rbx_1 + 0x128) = 0
        
        int64_t rsi_1 = *(rdi_2 + 0x1d0)
        
        if (rsi_1 != 0)
            EnterCriticalSection(rdi_2 + 0x210)
            int64_t* rax_8 = j_sub_140a82f30(0x10)
            
            if (rax_8 != 0)
                *rax_8 = 0
                rax_8[1] = rsi_1
                int64_t** rcx_8 = *(rdi_2 + 0x200)
                *(rdi_2 + 0x200) = rax_8
                *rcx_8 = rax_8
            
            if (rdi_2 != -0x210)
                LeaveCriticalSection(rdi_2 + 0x210)
            
            *(rdi_2 + 0x1d0) = 0
        
        sub_1410177f0(rdi_2)
        void** var_60
        zmm2, zmm6, zmm7 = sub_141022330(rdi_2, &var_60, 0)
        var_60 = &data_142efcd90
        int64_t* var_58
        
        if (var_58 != 0)
            int32_t rax_9 = *(var_58 + 0x14)
            *(var_58 + 0x14) -= 1
            
            if (rax_9 == 1)
                sub_141011360(var_58, rax_9.b)
        
        if (data_1439c79e0 != 0)
            void* rdi_3 = **(r14_1 + 0x720)
            int64_t rsi_2 = *(rdi_3 + 0x1d0)
            
            if (rsi_2 != 0)
                EnterCriticalSection(rdi_3 + 0x210)
                int64_t* rax_11 = j_sub_140a82f30(0x10)
                
                if (rax_11 != 0)
                    *rax_11 = 0
                    rax_11[1] = rsi_2
                    int64_t** rdx_4 = *(rdi_3 + 0x200)
                    *(rdi_3 + 0x200) = rax_11
                    *rdx_4 = rax_11
                
                if (rdi_3 != -0x210)
                    LeaveCriticalSection(rdi_3 + 0x210)
                
                *(rdi_3 + 0x1d0) = 0
            
            zmm6 = sub_1410177f0(rdi_3)
        
        int32_t rbp_1 = *(r14_1 + 0x6e0)
        int32_t rsi_3 = 0
        int32_t var_b8_1 = rbp_1
        int32_t arg_18 = 0
        
        if (rbp_1 != 0)
            do
                void* r13_1 = *(*(r14_1 + 0x6d8) + (sx.q(rsi_3) << 3))
                
                if (*(r13_1 + 0x3488) != 0)
                    int64_t* rdi_5 = *(r13_1 + 0x3270) + 0x330
                    EnterCriticalSection(&rdi_5[0x1a])
                    void* rcx_19 = r13_1 + 0x3480
                    int128_t* r14_2 = *rcx_19
                    void* r12_2 = sx.q(*(rcx_19 + 8)) * 0xb0 + r14_2
                    
                    if (r14_2 != r12_2)
                        do
                            void var_90
                            
                            if (*sub_1410212c0(&rdi_5[0xf], &var_90, r14_2) == 0xffffffff)
                                int32_t rsi_4 = *r14_2
                                int32_t rax_16
                                int64_t r9_2
                                rax_16, r9_2 = (*(*rdi_5 + 0x18))(rdi_5)
                                
                                if (rsi_4 != 0 && rsi_4 u> rax_16)
                                    sub_140af98a0("Unknown", 0x3b6, u"Unable to reserve slot", r9_2)
                                    sub_140afbb40()
                                
                                if (rsi_4 == 0 || rdi_5[0xa].d + rsi_4 u<= rax_16)
                                    int32_t rsi_5 = *r14_2
                                    int32_t rax_20 = (*(*rdi_5 + 0x18))(rdi_5)
                                    
                                    if (rsi_5 u<= rax_20)
                                        int32_t r15 = rdi_5[0xa].d
                                        int32_t r9_3 = r15 + rsi_5
                                        
                                        if (rdi_5[0xe].b != 0 && r9_3 u> rax_20)
                                            bool cond:6_1 = rdi_5[0xc].d != 1
                                            r15 = 0
                                            r9_3 = rsi_5
                                            *(rdi_5 + 0x54) = rsi_5
                                            
                                            if (not(cond:6_1))
                                                void* r8_3 = rdi_5[4]
                                                int32_t j = 0
                                                
                                                if (*(r8_3 + 0x208) s> 0)
                                                    int64_t rcx_23 = 0
                                                    
                                                    do
                                                        rcx_23 += 0x30
                                                        j += 1
                                                        *(rcx_23 + *(r8_3 + 0x200) - 0x30) = 0
                                                    while (j s< *(r8_3 + 0x208))
                                        
                                        rdi_5[0xa].d = r9_3
                                        
                                        if (r15 != 0xffffffff)
                                            void* rax_22 = *(r13_1 + 0x3270)
                                            int64_t var_70 = zx.q(rdi_5[7].d * r15) + rdi_5[8]
                                            int64_t* rcx_28 = *(*(rax_22 + 0x20) + 0x18)
                                            (*(*rcx_28 + 0xb8))(rcx_28, 1, &var_70, r14_2, *r14_2, 
                                                r14_2 + 0x28, 0, 1, var_b8_1, var_b0_1)
                                            *(r14_2 + 0xa8) = zx.q(rdi_5[7].d * r15) + rdi_5[9]
                                            void var_8c
                                            sub_141000c60(&rdi_5[0xf], &var_8c, r14_2, nullptr)
                                            rdi_5[0x19].b = 1
                            
                            r14_2 = &r14_2[0xb]
                        while (r14_2 != r12_2)
                        
                        rsi_3 = arg_18
                        rcx_19 = r13_1 + 0x3480
                        rbp_1 = var_b8_1
                    
                    *(rcx_19 + 8) = 0
                    
                    if (*(rcx_19 + 0xc) != 0)
                        sub_140a05f70(rcx_19, 0)
                    
                    if (rdi_5 != -0xd0)
                        LeaveCriticalSection(&rdi_5[0x1a])
                    
                    r14_1 = var_b0_1
                
                if (*(r13_1 + 0x135) == 0)
                    int64_t rdi_6 = *(r13_1 + 0x1d0)
                    
                    if (rdi_6 != 0)
                        EnterCriticalSection(r13_1 + 0x210)
                        int64_t* rax_25 = j_sub_140a82f30(0x10)
                        
                        if (rax_25 != 0)
                            *rax_25 = 0
                            rax_25[1] = rdi_6
                            int64_t** rcx_35 = *(r13_1 + 0x200)
                            *(r13_1 + 0x200) = rax_25
                            *rcx_35 = rax_25
                        
                        if (r13_1 != -0x210)
                            LeaveCriticalSection(r13_1 + 0x210)
                        
                        *(r13_1 + 0x1d0) = 0
                
                rsi_3 += 1
                arg_18 = rsi_3
            while (rsi_3 u< rbp_1)
        
        int32_t rbp_3 = *(r14_1 + 0x728)
        int32_t rsi_6 = 0
        int32_t var_b8_2 = rbp_3
        arg_18 = 0
        
        if (rbp_3 != 0)
            do
                void* r13_2 = *(*(r14_1 + 0x720) + (sx.q(rsi_6) << 3))
                
                if (*(r13_2 + 0x3488) != 0)
                    int64_t* rdi_8 = *(r13_2 + 0x3270) + 0x330
                    EnterCriticalSection(&rdi_8[0x1a])
                    void* rcx_39 = r13_2 + 0x3480
                    int128_t* r14_3 = *rcx_39
                    void* r12_4 = sx.q(*(rcx_39 + 8)) * 0xb0 + r14_3
                    
                    if (r14_3 != r12_4)
                        do
                            void var_88
                            
                            if (*sub_1410212c0(&rdi_8[0xf], &var_88, r14_3) == 0xffffffff)
                                int32_t rsi_7 = *r14_3
                                int32_t rax_30
                                int64_t r9_5
                                rax_30, r9_5 = (*(*rdi_8 + 0x18))(rdi_8)
                                
                                if (rsi_7 != 0 && rsi_7 u> rax_30)
                                    sub_140af98a0("Unknown", 0x3b6, u"Unable to reserve slot", r9_5)
                                    sub_140afbb40()
                                
                                if (rsi_7 == 0 || rdi_8[0xa].d + rsi_7 u<= rax_30)
                                    int32_t rsi_8 = *r14_3
                                    int32_t rax_34 = (*(*rdi_8 + 0x18))(rdi_8)
                                    
                                    if (rsi_8 u<= rax_34)
                                        int32_t r15_1 = rdi_8[0xa].d
                                        int32_t r9_6 = r15_1 + rsi_8
                                        
                                        if (rdi_8[0xe].b != 0 && r9_6 u> rax_34)
                                            bool cond:7_1 = rdi_8[0xc].d != 1
                                            r15_1 = 0
                                            r9_6 = rsi_8
                                            *(rdi_8 + 0x54) = rsi_8
                                            
                                            if (not(cond:7_1))
                                                void* r8_7 = rdi_8[4]
                                                int32_t j_1 = 0
                                                
                                                if (*(r8_7 + 0x208) s> 0)
                                                    int64_t rax_35 = 0
                                                    
                                                    do
                                                        rax_35 += 0x30
                                                        j_1 += 1
                                                        *(rax_35 + *(r8_7 + 0x200) - 0x30) = 0
                                                    while (j_1 s< *(r8_7 + 0x208))
                                        
                                        rdi_8[0xa].d = r9_6
                                        
                                        if (r15_1 != 0xffffffff)
                                            void* rax_36 = *(r13_2 + 0x3270)
                                            int64_t var_68 = zx.q(r15_1 * rdi_8[7].d) + rdi_8[8]
                                            int64_t* rcx_48 = *(*(rax_36 + 0x20) + 0x18)
                                            (*(*rcx_48 + 0xb8))(rcx_48, 1, &var_68, r14_3, *r14_3, 
                                                r14_3 + 0x28, 0, 1, var_b8_2, var_b0_1)
                                            *(r14_3 + 0xa8) = zx.q(r15_1 * rdi_8[7].d) + rdi_8[9]
                                            void var_84
                                            sub_141000c60(&rdi_8[0xf], &var_84, r14_3, nullptr)
                                            rdi_8[0x19].b = 1
                            
                            r14_3 = &r14_3[0xb]
                        while (r14_3 != r12_4)
                        
                        rsi_6 = arg_18
                        rcx_39 = r13_2 + 0x3480
                        rbp_3 = var_b8_2
                    
                    *(rcx_39 + 8) = 0
                    
                    if (*(rcx_39 + 0xc) != 0)
                        sub_140a05f70(rcx_39, 0)
                    
                    if (rdi_8 != -0xd0)
                        LeaveCriticalSection(&rdi_8[0x1a])
                    
                    r14_1 = var_b0_1
                
                if (*(r13_2 + 0x135) == 0)
                    int64_t rdi_9 = *(r13_2 + 0x1d0)
                    
                    if (rdi_9 != 0)
                        EnterCriticalSection(r13_2 + 0x210)
                        int64_t* rax_41 = j_sub_140a82f30(0x10)
                        
                        if (rax_41 != 0)
                            *rax_41 = 0
                            rax_41[1] = rdi_9
                            int64_t** rcx_52 = *(r13_2 + 0x200)
                            *(r13_2 + 0x200) = rax_41
                            *rcx_52 = rax_41
                        
                        if (r13_2 != -0x210)
                            LeaveCriticalSection(r13_2 + 0x210)
                        
                        *(r13_2 + 0x1d0) = 0
                
                rsi_6 += 1
                arg_18 = rsi_6
            while (rsi_6 u< rbp_3)
        
        sub_141016530(r14_1 + 0x848)
        void* rbx_8 = r14_1 + 0x6c0
        int64_t rsi_9 = 3
        int64_t rdi_10 = 0
        
        if (rbx_8 u> rbx_8 + 0x18)
            rsi_9 = 0
        
        if (rbx_8 u<= rbx_8 + 0x18)
            do
                void* rcx_55 = *rbx_8
                
                if (rcx_55 != 0)
                    sub_1410161a0(*(rcx_55 + 0x10))
                
                rbx_8 += 8
                rdi_10 += 1
            while (rdi_10 != rsi_9)
        
        EnterCriticalSection(r14_1 + 0x810)
        
        if (*(r14_1 + 0x800) s> data_1439b4ae0)
            int64_t rax_45 = sub_141037da0(*(*(*(r14_1 + 0x7d0) + 0x20) + 0x4e8))
            int32_t j_2 = 0
            
            if (*(r14_1 + 0x800) s> 0)
                int64_t* rdx_9 = nullptr
                
                do
                    int32_t rax_46 = 0
                    void* rbx_9 = *(rdx_9 + *(r14_1 + 0x7f8))
                    void* rcx_61 = *(rbx_9 + 8)
                    
                    if (0 == *(rcx_61 + 8))
                        *(rcx_61 + 8) = 0
                    else
                        rax_46 = *(rcx_61 + 8)
                    
                    if (rax_46 == 1 && *(rbx_9 + 0x20) + 0xa u<= rax_45)
                        int32_t rcx_62 = *(r14_1 + 0x800)
                        int32_t rax_50 = rcx_62 - j_2
                        
                        if (rax_50 != 1)
                            int64_t r9_8 = *(r14_1 + 0x7f8)
                            memmove(r9_8 + (sx.q(j_2) << 3), r9_8 + (sx.q(j_2 + 1) << 3), 
                                (rax_50 - 1) << 3)
                            rcx_62 = *(r14_1 + 0x800)
                        
                        *(r14_1 + 0x800) = rcx_62 - 1
                        sub_1405c53d0(r14_1 + 0x7f8)
                        int64_t* rcx_65 = *(rbx_9 + 8)
                        
                        if (rcx_65 != 0)
                            rcx_65[1].d -= 1
                            
                            if (rcx_65[1].d == 1 && rcx_65 != 0)
                                (**rcx_65)(rcx_65, 1)
                        
                        j_sub_140a74f90(rbx_9)
                        break
                    
                    j_2 += 1
                    rdx_9 = &rdx_9[1]
                while (j_2 s< *(r14_1 + 0x800))
        
        LeaveCriticalSection(r14_1 + 0x810)
        i_1 = not.d(1 << arg_10) & i_3
        i_3 = i_1
        
        if (i_1 != 0)
            uint64_t rflags_4
            int32_t temp0_6
            temp0_6, rflags_4 = _bit_scan_forward(i_1)
            rax_4 = temp0_6
            int32_t var_80_1 = rax_4
        else
            rax_4 = 0x20
        
        r14 = arg1
        arg_10 = rax_4.b
    while (i_1 != 0)
    int32_t i_5 = r14[0x26].d
    
    if (i_5 != 0)
        uint64_t rflags_5
        int32_t temp0_7
        temp0_7, rflags_5 = _bit_scan_forward(i_5)
        int32_t rsi_10 = temp0_7
        int32_t var_7c_1 = rsi_10
        int32_t i_2
        
        do
            void* rdi_12 = *(*(r14[0x25] + (zx.q(rsi_10) << 3) + 0x9d8) + 0x38)
            int64_t rbp_5 = *(rdi_12 + 0xe0)
            
            if (rbp_5 != 0)
                EnterCriticalSection(rdi_12 + 0xb0)
                int64_t* rax_58 = j_sub_140a82f30(0x10)
                
                if (rax_58 != 0)
                    *rax_58 = 0
                    rax_58[1] = rbp_5
                    int64_t** rdx_13 = *(rdi_12 + 0xa0)
                    *(rdi_12 + 0xa0) = rax_58
                    *rdx_13 = rax_58
                
                if (rdi_12 != -0xb0)
                    LeaveCriticalSection(rdi_12 + 0xb0)
                
                *(rdi_12 + 0xe0) = 0
            
            i_2 = not.d(1 << rsi_10.b) & i_5
            i_5 = i_2
            
            if (i_2 != 0)
                uint64_t rflags_6
                int32_t temp0_8
                temp0_8, rflags_6 = _bit_scan_forward(i_2)
                rsi_10 = temp0_8
                int32_t var_78_1 = rsi_10
            else
                rsi_10 = 0x20
        while (i_2 != 0)

(*(*r14 + 0x2f8))(r14)
void* rdx_14 = r14[0x25]
return sub_14104a910(rdx_14 + 0x830, *(rdx_14 + 0x10), zmm2, zmm6, zmm7) __tailcall
