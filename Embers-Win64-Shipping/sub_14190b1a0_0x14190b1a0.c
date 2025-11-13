// 函数: sub_14190b1a0
// 地址: 0x14190b1a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rdi = nullptr
uint32_t i_10
void* arg_18
void* rax

if (*(arg1 + 0x822) != 0)
    void* r15_1 = *(*(arg1 + 0x570) + 0x88)
    
    if (data_143f01c92 != 0)
        sub_140a80f40()
    
    void* r15_2 = *(r15_1 + 0x38)
    void* var_58_1 = r15_2
    
    if (r15_2 != 0)
        rax = arg1 + 0x580
        uint32_t i_5 = zx.d(*(arg1 + 0x822)) & *(r15_2 + 0x58)
        int32_t j = 0
        i_10 = i_5
        void* r12_1 = nullptr
        arg_18 = rax
        uint32_t i
        
        do
            i = i_5
            
            if ((i_5.b & 1) != 0)
                void* r13_1 = *rax
                int64_t rcx = *(r15_2 + 0xa0)
                uint64_t rax_1 = zx.q(*(r12_1 + rcx))
                
                if (rax_1.d != 0)
                    int64_t r14_1 = *(r13_1 + 0x40)
                    int32_t rcx_1 = *(rcx + (rax_1 << 2))
                    int32_t* rdi_2 = rcx + (rax_1 << 2) + 4
                    
                    do
                        sub_1419052d0(arg1, zx.d(rcx_1.b), *(r14_1 + (zx.q((rcx_1 u>> 8).w) << 3)))
                        rcx_1 = *rdi_2
                        rdi_2 = &rdi_2[1]
                    while (rcx_1 u>> 0x18 == j)
                
                int64_t rcx_3 = *(r15_2 + 0x60)
                uint64_t rax_6 = zx.q(*(r12_1 + rcx_3))
                
                if (rax_6.d != 0)
                    int64_t rbp_2 = *(r13_1 + 0x40)
                    int32_t rcx_4 = *(rcx_3 + (rax_6 << 2))
                    int32_t* r14_3 = rcx_3 + (rax_6 << 2) + 4
                    
                    do
                        uint32_t r15_3 = zx.d(rcx_4.b)
                        void* rdi_3 = *(rbp_2 + (zx.q((rcx_4 u>> 8).w) << 3))
                        void* const r10_1
                        
                        if (rdi_3 == 0)
                            r10_1 = nullptr
                        else
                            if (data_143f01c92 != 0)
                                sub_140a80f40()
                            
                            r10_1 = *(rdi_3 + 0x20)
                        
                        int32_t r9_1 = *(r10_1 + 0x20)
                        int32_t r8_3 = *(r10_1 + 0x10)
                        int64_t rcx_6 = sx.q(data_1439c7494 + r15_3) * 5
                        int64_t rax_11 = *(arg1 + 0x150)
                        *(rax_11 + (rcx_6 << 3) + 0x10) = *(r10_1 + 0x14)
                        *(rax_11 + (rcx_6 << 3)) = 0
                        *(rax_11 + (rcx_6 << 3) + 8) = r10_1
                        *(rax_11 + (rcx_6 << 3) + 0x14) = r8_3
                        *(rax_11 + (rcx_6 << 3) + 0x18) = r9_1
                        *(rax_11 + (rcx_6 << 3) + 0x1c) = 1
                        *(rax_11 + (rcx_6 << 3) + 0x20) = 0
                        *(*(arg1 + 0x158) + (sx.q(data_1439c7494 + r15_3) << 3)) = *(arg1 + 0x8a0)
                        rcx_4 = *r14_3
                        r14_3 = &r14_3[1]
                    while (rcx_4 u>> 0x18 == j)
                    
                    i_5 = i_10
                    r15_2 = var_58_1
                
                int64_t rcx_10 = *(r15_2 + 0x70)
                uint64_t rax_15 = zx.q(*(r12_1 + rcx_10))
                
                if (rax_15.d != 0)
                    int64_t r10_2 = *(r13_1 + 0x40)
                    int32_t rcx_11 = *(rcx_10 + (rax_15 << 2))
                    void* r9_3 = rcx_10 + (rax_15 << 2) + 4
                    
                    do
                        r9_3 += 4
                        *(*(arg1 + 0x158) + (sx.q(zx.d(rcx_11.b) + data_1439c7494) << 3)) =
                            *(r10_2 + (zx.q((rcx_11 u>> 8).w) << 3))
                        rcx_11 = *(r9_3 - 4)
                    while (rcx_11 u>> 0x18 == j)
                
                int64_t rcx_13 = *(r15_2 + 0x80)
                uint64_t rax_23 = zx.q(*(r12_1 + rcx_13))
                
                if (rax_23.d == 0)
                    rdi = nullptr
                else
                    int64_t r11_1 = *(r13_1 + 0x40)
                    int32_t rcx_14 = *(rcx_13 + (rax_23 << 2))
                    void* r10_4 = rcx_13 + (rax_23 << 2) + 4
                    rdi = nullptr
                    
                    do
                        r10_4 += 4
                        void* rdx_5 = *(r11_1 + (zx.q((rcx_14 u>> 8).w) << 3))
                        int32_t r8_5 = *(rdx_5 + 0x18)
                        uint64_t r9_4 = zx.q(rcx_14.b) * 0x14
                        *(r9_4 + *(arg1 + 0x160)) = *(rdx_5 + 0x20)
                        *(r9_4 + *(arg1 + 0x160) + 4) = r8_5
                        *(r9_4 + *(arg1 + 0x160) + 0xc) = 0
                        *(r9_4 + *(arg1 + 0x160) + 0x10) = 0
                        *(r9_4 + *(arg1 + 0x160) + 8) = 0x88b9
                        rcx_14 = *(r10_4 - 4)
                    while (rcx_14 u>> 0x18 == j)
                
                rax = arg_18
            
            rax += 8
            i_5 u>>= 1
            j += 1
            arg_18 = rax
            r12_1 += 4
            i_10 = i_5
        while (i u>= 2)

void* arg_20

if (*(arg1 + 0x828) != 0)
    void* r12_2 = *(*(arg1 + 0x570) + 0x90)
    
    if (data_143f01c92 != 0)
        sub_140a80f40()
    
    void* r12_3 = *(r12_2 + 0x38)
    arg_20 = r12_3
    
    if (r12_3 != 0)
        rax = arg1 + 0x6d0
        uint32_t i_6 = zx.d(*(arg1 + 0x828)) & *(r12_3 + 0x58)
        int32_t j_1 = 0
        i_10 = i_6
        void* r15_4 = nullptr
        arg_18 = rax
        uint32_t i_1
        
        do
            i_1 = i_6
            
            if ((i_6.b & 1) != 0)
                int64_t rcx_17 = *(r12_3 + 0xa0)
                void* r13_2 = *rax
                uint64_t rax_35 = zx.q(*(r15_4 + rcx_17))
                
                if (rax_35.d != 0)
                    int64_t r14_4 = *(r13_2 + 0x40)
                    int32_t rcx_18 = *(rcx_17 + (rax_35 << 2))
                    int32_t* rdi_5 = rcx_17 + (rax_35 << 2) + 4
                    
                    do
                        sub_141905080(arg1, zx.d(rcx_18.b), 
                            *(r14_4 + (zx.q((rcx_18 u>> 8).w) << 3)))
                        rcx_18 = *rdi_5
                        rdi_5 = &rdi_5[1]
                    while (rcx_18 u>> 0x18 == j_1)
                    
                    rdi = nullptr
                
                int64_t rcx_20 = *(r12_3 + 0x60)
                uint64_t rax_40 = zx.q(*(r15_4 + rcx_20))
                
                if (rax_40.d != 0)
                    int32_t rbp_4 = *(rcx_20 + (rax_40 << 2))
                    int64_t r12_4 = *(r13_2 + 0x40)
                    int32_t* r14_6 = rcx_20 + (rax_40 << 2) + 4
                    
                    do
                        rdi = *(r12_4 + (zx.q((rbp_4 u>> 8).w) << 3))
                        void* const r11_2
                        
                        if (rdi == 0)
                            r11_2 = rdi
                        else
                            if (data_143f01c92 != 0)
                                sub_140a80f40()
                            
                            r11_2 = *(rdi + 0x20)
                            rdi = nullptr
                        
                        int64_t rax_44 = *(arg1 + 0x150)
                        int32_t r9_5 = *(r11_2 + 0x20)
                        int32_t r8_8 = *(r11_2 + 0x10)
                        int32_t rdx_7 = *(r11_2 + 0x14)
                        uint64_t r10_5 = zx.q(rbp_4.b)
                        uint64_t rcx_21 = r10_5 * 5
                        *(rax_44 + (rcx_21 << 3)) = rdi
                        *(rax_44 + (rcx_21 << 3) + 8) = r11_2
                        *(rax_44 + (rcx_21 << 3) + 0x10) = rdx_7
                        *(rax_44 + (rcx_21 << 3) + 0x14) = r8_8
                        *(rax_44 + (rcx_21 << 3) + 0x18) = r9_5
                        *(rax_44 + (rcx_21 << 3) + 0x1c) = 1
                        *(rax_44 + (rcx_21 << 3) + 0x20) = rdi.d
                        *(*(arg1 + 0x158) + (r10_5 << 3)) = *(arg1 + 0x8a0)
                        rbp_4 = *r14_6
                        r14_6 = &r14_6[1]
                    while (rbp_4 u>> 0x18 == j_1)
                    
                    i_6 = i_10
                    r12_3 = arg_20
                
                int64_t rcx_23 = *(r12_3 + 0x70)
                uint64_t rax_48 = zx.q(*(r15_4 + rcx_23))
                
                if (rax_48.d != 0)
                    int64_t r9_6 = *(r13_2 + 0x40)
                    int32_t rcx_24 = *(rcx_23 + (rax_48 << 2))
                    void* r8_10 = rcx_23 + (rax_48 << 2) + 4
                    
                    do
                        r8_10 += 4
                        *(*(arg1 + 0x158) + (zx.q(rcx_24.b) << 3)) =
                            *(r9_6 + (zx.q((rcx_24 u>> 8).w) << 3))
                        rcx_24 = *(r8_10 - 4)
                    while (rcx_24 u>> 0x18 == j_1)
                
                void* rcx_26 = *(r12_3 + 0x80)
                uint64_t rax_55 = zx.q(*(rcx_26 + r15_4))
                
                if (rax_55.d != 0)
                    int64_t r11_3 = *(r13_2 + 0x40)
                    int32_t rcx_27 = *(rcx_26 + (rax_55 << 2))
                    void* r10_7 = rcx_26 + (rax_55 << 2) + 4
                    
                    do
                        r10_7 += 4
                        void* rdx_9 = *(r11_3 + (zx.q((rcx_27 u>> 8).w) << 3))
                        int32_t r8_11 = *(rdx_9 + 0x18)
                        uint64_t r9_7 = zx.q(rcx_27.b) * 0x14
                        *(r9_7 + *(arg1 + 0x160)) = *(rdx_9 + 0x20)
                        *(r9_7 + *(arg1 + 0x160) + 4) = r8_11
                        *(r9_7 + *(arg1 + 0x160) + 0xc) = rdi.d
                        *(r9_7 + *(arg1 + 0x160) + 0x10) = 0
                        *(r9_7 + *(arg1 + 0x160) + 8) = 0x88b9
                        rcx_27 = *(r10_7 - 4)
                    while (rcx_27 u>> 0x18 == j_1)
                
                rax = arg_18
            
            rax += 8
            i_6 u>>= 1
            j_1 += 1
            arg_18 = rax
            r15_4 += 4
            i_10 = i_6
        while (i_1 u>= 2)

if (*(arg1 + 0x824) != 0)
    void* rdi_6 = *(*(arg1 + 0x570) + 0xa0)
    
    if (rdi_6 != 0)
        if (data_143f01c92 != 0)
            sub_140a80f40()
        
        void* r12_5 = *(rdi_6 + 0x38)
        arg_20 = r12_5
        
        if (r12_5 != 0)
            rax = arg1 + 0x5f0
            uint32_t i_8 = zx.d(*(arg1 + 0x824)) & *(r12_5 + 0x58)
            i_10 = i_8
            int32_t j_2 = 0
            arg_18 = rax
            int64_t rbp_5 = 0
            uint32_t i_2
            
            do
                i_2 = i_8
                
                if ((i_8.b & 1) != 0)
                    void* rcx_30 = *(r12_5 + 0xa0)
                    void* r13_3 = *rax
                    uint64_t rax_67 = zx.q(*(rcx_30 + rbp_5))
                    
                    if (rax_67.d != 0)
                        int64_t r14_7 = *(r13_3 + 0x40)
                        int32_t rcx_31 = *(rcx_30 + (rax_67 << 2))
                        void* rdi_8 = rcx_30 + (rax_67 << 2) + 4
                        
                        do
                            sub_141904dc0(arg1, zx.d(rcx_31.b), 
                                *(r14_7 + (zx.q((rcx_31 u>> 8).w) << 3)))
                            rcx_31 = *rdi_8
                            rdi_8 += 4
                        while (rcx_31 u>> 0x18 == j_2)
                    
                    void* rcx_33 = *(r12_5 + 0x60)
                    uint64_t rax_72 = zx.q(*(rcx_33 + rbp_5))
                    
                    if (rax_72.d != 0)
                        int64_t r12_6 = *(r13_3 + 0x40)
                        int32_t rcx_34 = *(rcx_33 + (rax_72 << 2))
                        void* r14_9 = rcx_33 + (rax_72 << 2) + 4
                        
                        do
                            uint32_t r15_6 = zx.d(rcx_34.b)
                            void* rdi_9 = *(r12_6 + (zx.q((rcx_34 u>> 8).w) << 3))
                            void* const r10_8
                            
                            if (rdi_9 == 0)
                                r10_8 = nullptr
                            else
                                if (data_143f01c92 != 0)
                                    sub_140a80f40()
                                
                                r10_8 = *(rdi_9 + 0x20)
                            
                            int32_t r9_8 = *(r10_8 + 0x20)
                            int32_t r8_14 = *(r10_8 + 0x10)
                            int64_t rcx_36 =
                                sx.q(data_1439c74a0 + r15_6 + data_1439c749c + data_1439c7494) * 5
                            int64_t rax_79 = *(arg1 + 0x150)
                            *(rax_79 + (rcx_36 << 3) + 0x10) = *(r10_8 + 0x14)
                            *(rax_79 + (rcx_36 << 3)) = 0
                            *(rax_79 + (rcx_36 << 3) + 8) = r10_8
                            *(rax_79 + (rcx_36 << 3) + 0x14) = r8_14
                            *(rax_79 + (rcx_36 << 3) + 0x18) = r9_8
                            *(rax_79 + (rcx_36 << 3) + 0x1c) = 1
                            *(rax_79 + (rcx_36 << 3) + 0x20) = 0
                            *(*(arg1 + 0x158) + (
                                sx.q(data_1439c74a0 + r15_6 + data_1439c749c + data_1439c7494)
                                << 3)) = *(arg1 + 0x8a0)
                            rcx_34 = *r14_9
                            r14_9 += 4
                        while (rcx_34 u>> 0x18 == j_2)
                        
                        i_8 = i_10
                        r12_5 = arg_20
                    
                    void* rcx_42 = *(r12_5 + 0x70)
                    uint64_t rax_83 = zx.q(*(rcx_42 + rbp_5))
                    
                    if (rax_83.d != 0)
                        int64_t r10_9 = *(r13_3 + 0x40)
                        int32_t rcx_43 = *(rcx_42 + (rax_83 << 2))
                        void* r9_10 = rcx_42 + (rax_83 << 2) + 4
                        
                        do
                            r9_10 += 4
                            *(*(arg1 + 0x158) + (sx.q(zx.d(rcx_43.b) + data_1439c74a0
                                + data_1439c749c + data_1439c7494) << 3)) =
                                *(r10_9 + (zx.q((rcx_43 u>> 8).w) << 3))
                            rcx_43 = *(r9_10 - 4)
                        while (rcx_43 u>> 0x18 == j_2)
                    
                    void* rcx_45 = *(r12_5 + 0x80)
                    uint64_t rax_93 = zx.q(*(rcx_45 + rbp_5))
                    
                    if (rax_93.d == 0)
                        rax = arg_18
                    else
                        int64_t r11_4 = *(r13_3 + 0x40)
                        int32_t rcx_46 = *(rcx_45 + (rax_93 << 2))
                        void* r10_11 = rcx_45 + (rax_93 << 2) + 4
                        
                        do
                            r10_11 += 4
                            void* rdx_14 = *(r11_4 + (zx.q((rcx_46 u>> 8).w) << 3))
                            int32_t r8_16 = *(rdx_14 + 0x18)
                            uint64_t r9_11 = zx.q(rcx_46.b) * 0x14
                            *(r9_11 + *(arg1 + 0x160)) = *(rdx_14 + 0x20)
                            *(r9_11 + *(arg1 + 0x160) + 4) = r8_16
                            *(r9_11 + *(arg1 + 0x160) + 0xc) = 0
                            *(r9_11 + *(arg1 + 0x160) + 0x10) = 0
                            *(r9_11 + *(arg1 + 0x160) + 8) = 0x88b9
                            rcx_46 = *(r10_11 - 4)
                        while (rcx_46 u>> 0x18 == j_2)
                        
                        rax = arg_18
                
                rax += 8
                i_8 u>>= 1
                j_2 += 1
                arg_18 = rax
                rbp_5 += 4
                i_10 = i_8
            while (i_2 u>= 2)

if (*(arg1 + 0x826) != 0)
    void* rdi_10 = *(*(arg1 + 0x570) + 0xa8)
    
    if (rdi_10 != 0)
        if (data_143f01c92 != 0)
            sub_140a80f40()
        
        void* r15_7 = *(rdi_10 + 0x38)
        arg_20 = r15_7
        
        if (r15_7 != 0)
            rax = arg1 + 0x660
            uint32_t i_7 = zx.d(*(arg1 + 0x826)) & *(r15_7 + 0x58)
            i_10 = i_7
            int32_t j_3 = 0
            arg_18 = rax
            void* r12_7 = nullptr
            uint32_t i_3
            
            do
                i_3 = i_7
                
                if ((i_7.b & 1) != 0)
                    int64_t rcx_49 = *(r15_7 + 0xa0)
                    void* r13_4 = *rax
                    uint64_t rax_105 = zx.q(*(r12_7 + rcx_49))
                    
                    if (rax_105.d != 0)
                        int64_t r14_10 = *(r13_4 + 0x40)
                        int32_t rcx_50 = *(rcx_49 + (rax_105 << 2))
                        int32_t* rdi_12 = rcx_49 + (rax_105 << 2) + 4
                        
                        do
                            sub_141904f10(arg1, zx.d(rcx_50.b), 
                                *(r14_10 + (zx.q((rcx_50 u>> 8).w) << 3)))
                            rcx_50 = *rdi_12
                            rdi_12 = &rdi_12[1]
                        while (rcx_50 u>> 0x18 == j_3)
                    
                    int64_t rcx_52 = *(r15_7 + 0x60)
                    uint64_t rax_110 = zx.q(*(r12_7 + rcx_52))
                    
                    if (rax_110.d != 0)
                        int64_t rbp_7 = *(r13_4 + 0x40)
                        int32_t rcx_53 = *(rcx_52 + (rax_110 << 2))
                        int32_t* r14_12 = rcx_52 + (rax_110 << 2) + 4
                        
                        do
                            uint32_t r15_8 = zx.d(rcx_53.b)
                            void* rdi_13 = *(rbp_7 + (zx.q((rcx_53 u>> 8).w) << 3))
                            void* const r10_12
                            
                            if (rdi_13 == 0)
                                r10_12 = nullptr
                            else
                                if (data_143f01c92 != 0)
                                    sub_140a80f40()
                                
                                r10_12 = *(rdi_13 + 0x20)
                            
                            int32_t r9_12 = *(r10_12 + 0x20)
                            int32_t r8_19 = *(r10_12 + 0x10)
                            int64_t rcx_55 = sx.q(data_1439c74a4 + r15_8 + data_1439c74a0
                                + data_1439c749c + data_1439c7494) * 5
                            int64_t rax_118 = *(arg1 + 0x150)
                            *(rax_118 + (rcx_55 << 3) + 0x10) = *(r10_12 + 0x14)
                            *(rax_118 + (rcx_55 << 3)) = 0
                            *(rax_118 + (rcx_55 << 3) + 8) = r10_12
                            *(rax_118 + (rcx_55 << 3) + 0x14) = r8_19
                            *(rax_118 + (rcx_55 << 3) + 0x18) = r9_12
                            *(rax_118 + (rcx_55 << 3) + 0x1c) = 1
                            *(rax_118 + (rcx_55 << 3) + 0x20) = 0
                            *(*(arg1 + 0x158) + (sx.q(data_1439c74a4 + r15_8 + data_1439c74a0
                                + data_1439c749c + data_1439c7494) << 3)) = *(arg1 + 0x8a0)
                            rcx_53 = *r14_12
                            r14_12 = &r14_12[1]
                        while (rcx_53 u>> 0x18 == j_3)
                        
                        i_7 = i_10
                        r15_7 = arg_20
                    
                    int64_t rcx_62 = *(r15_7 + 0x70)
                    uint64_t rax_122 = zx.q(*(r12_7 + rcx_62))
                    
                    if (rax_122.d != 0)
                        int64_t r10_13 = *(r13_4 + 0x40)
                        int32_t rcx_63 = *(rcx_62 + (rax_122 << 2))
                        void* r9_14 = rcx_62 + (rax_122 << 2) + 4
                        
                        do
                            r9_14 += 4
                            *(*(arg1 + 0x158) + (sx.q(zx.d(rcx_63.b) + data_1439c74a4
                                + data_1439c74a0 + data_1439c749c + data_1439c7494) << 3)) =
                                *(r10_13 + (zx.q((rcx_63 u>> 8).w) << 3))
                            rcx_63 = *(r9_14 - 4)
                        while (rcx_63 u>> 0x18 == j_3)
                    
                    int64_t rcx_65 = *(r15_7 + 0x80)
                    uint64_t rax_133 = zx.q(*(r12_7 + rcx_65))
                    
                    if (rax_133.d == 0)
                        rax = arg_18
                    else
                        int64_t r11_5 = *(r13_4 + 0x40)
                        int32_t rcx_66 = *(rcx_65 + (rax_133 << 2))
                        void* r10_15 = rcx_65 + (rax_133 << 2) + 4
                        
                        do
                            r10_15 += 4
                            void* rdx_19 = *(r11_5 + (zx.q((rcx_66 u>> 8).w) << 3))
                            int32_t r8_21 = *(rdx_19 + 0x18)
                            uint64_t r9_15 = zx.q(rcx_66.b) * 0x14
                            *(r9_15 + *(arg1 + 0x160)) = *(rdx_19 + 0x20)
                            *(r9_15 + *(arg1 + 0x160) + 4) = r8_21
                            *(r9_15 + *(arg1 + 0x160) + 0xc) = 0
                            *(r9_15 + *(arg1 + 0x160) + 0x10) = 0
                            *(r9_15 + *(arg1 + 0x160) + 8) = 0x88b9
                            rcx_66 = *(r10_15 - 4)
                        while (rcx_66 u>> 0x18 == j_3)
                        
                        rax = arg_18
                
                rax += 8
                i_7 u>>= 1
                j_3 += 1
                arg_18 = rax
                r12_7 += 4
                i_10 = i_7
            while (i_3 u>= 2)

if (*(arg1 + 0x82a) != 0)
    void* rdi_14 = *(*(arg1 + 0x570) + 0x98)
    
    if (rdi_14 != 0)
        if (data_143f01c92 != 0)
            sub_140a80f40()
        
        void* r12_8 = *(rdi_14 + 0x38)
        arg_20 = r12_8
        
        if (r12_8 != 0)
            rax = arg1 + 0x740
            uint32_t i_9 = zx.d(*(arg1 + 0x82a)) & *(r12_8 + 0x58)
            i_10 = i_9
            int32_t j_4 = 0
            arg_18 = rax
            int64_t rbp_8 = 0
            uint32_t i_4
            
            do
                i_4 = i_9
                
                if ((i_9.b & 1) != 0)
                    void* rcx_69 = *(r12_8 + 0xa0)
                    void* r13_5 = *rax
                    uint64_t rax_145 = zx.q(*(rcx_69 + rbp_8))
                    
                    if (rax_145.d != 0)
                        int64_t r14_13 = *(r13_5 + 0x40)
                        int32_t rcx_70 = *(rcx_69 + (rax_145 << 2))
                        void* rdi_16 = rcx_69 + (rax_145 << 2) + 4
                        
                        do
                            sub_141905190(arg1, zx.d(rcx_70.b), 
                                *(r14_13 + (zx.q((rcx_70 u>> 8).w) << 3)))
                            rcx_70 = *rdi_16
                            rdi_16 += 4
                        while (rcx_70 u>> 0x18 == j_4)
                    
                    void* rcx_72 = *(r12_8 + 0x60)
                    uint64_t rax_150 = zx.q(*(rcx_72 + rbp_8))
                    
                    if (rax_150.d != 0)
                        int64_t r12_9 = *(r13_5 + 0x40)
                        int32_t rcx_73 = *(rcx_72 + (rax_150 << 2))
                        void* r14_15 = rcx_72 + (rax_150 << 2) + 4
                        
                        do
                            uint32_t r15_10 = zx.d(rcx_73.b)
                            void* rdi_17 = *(r12_9 + (zx.q((rcx_73 u>> 8).w) << 3))
                            void* const r10_16
                            
                            if (rdi_17 == 0)
                                r10_16 = nullptr
                            else
                                if (data_143f01c92 != 0)
                                    sub_140a80f40()
                                
                                r10_16 = *(rdi_17 + 0x20)
                            
                            int32_t r9_16 = *(r10_16 + 0x20)
                            int32_t r8_24 = *(r10_16 + 0x10)
                            int64_t rcx_75 = sx.q(data_1439c749c + r15_10 + data_1439c7494) * 5
                            int64_t rax_156 = *(arg1 + 0x150)
                            *(rax_156 + (rcx_75 << 3) + 0x10) = *(r10_16 + 0x14)
                            *(rax_156 + (rcx_75 << 3)) = 0
                            *(rax_156 + (rcx_75 << 3) + 8) = r10_16
                            *(rax_156 + (rcx_75 << 3) + 0x14) = r8_24
                            *(rax_156 + (rcx_75 << 3) + 0x18) = r9_16
                            *(rax_156 + (rcx_75 << 3) + 0x1c) = 1
                            *(rax_156 + (rcx_75 << 3) + 0x20) = 0
                            *(*(arg1 + 0x158)
                                + (sx.q(data_1439c749c + r15_10 + data_1439c7494) << 3)) =
                                *(arg1 + 0x8a0)
                            rcx_73 = *r14_15
                            r14_15 += 4
                        while (rcx_73 u>> 0x18 == j_4)
                        
                        i_9 = i_10
                        r12_8 = arg_20
                    
                    void* rcx_80 = *(r12_8 + 0x70)
                    uint64_t rax_160 = zx.q(*(rcx_80 + rbp_8))
                    
                    if (rax_160.d != 0)
                        int64_t r10_17 = *(r13_5 + 0x40)
                        int32_t rcx_81 = *(rcx_80 + (rax_160 << 2))
                        void* r9_18 = rcx_80 + (rax_160 << 2) + 4
                        
                        do
                            r9_18 += 4
                            *(*(arg1 + 0x158)
                                + (sx.q(zx.d(rcx_81.b) + data_1439c749c + data_1439c7494) << 3)) =
                                *(r10_17 + (zx.q((rcx_81 u>> 8).w) << 3))
                            rcx_81 = *(r9_18 - 4)
                        while (rcx_81 u>> 0x18 == j_4)
                    
                    void* rcx_83 = *(r12_8 + 0x80)
                    uint64_t rax_169 = zx.q(*(rcx_83 + rbp_8))
                    
                    if (rax_169.d == 0)
                        rax = arg_18
                    else
                        int64_t r11_6 = *(r13_5 + 0x40)
                        int32_t rcx_84 = *(rcx_83 + (rax_169 << 2))
                        void* r10_19 = rcx_83 + (rax_169 << 2) + 4
                        
                        do
                            r10_19 += 4
                            void* rdx_24 = *(r11_6 + (zx.q((rcx_84 u>> 8).w) << 3))
                            int32_t r8_26 = *(rdx_24 + 0x18)
                            uint64_t r9_19 = zx.q(rcx_84.b) * 0x14
                            *(r9_19 + *(arg1 + 0x160)) = *(rdx_24 + 0x20)
                            *(r9_19 + *(arg1 + 0x160) + 4) = r8_26
                            *(r9_19 + *(arg1 + 0x160) + 0xc) = 0
                            *(r9_19 + *(arg1 + 0x160) + 0x10) = 0
                            *(r9_19 + *(arg1 + 0x160) + 8) = 0x88b9
                            rcx_84 = *(r10_19 - 4)
                        while (rcx_84 u>> 0x18 == j_4)
                        
                        rax = arg_18
                
                rax += 8
                i_9 u>>= 1
                j_4 += 1
                arg_18 = rax
                rbp_8 += 4
                i_10 = i_9
            while (i_4 u>= 2)

*(arg1 + 0x820) = 0
*(arg1 + 0x822) = 0
*(arg1 + 0x82a) = 0
