// 函数: sub_1418ef580
// 地址: 0x1418ef580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14 = arg1
TEB* gsbase

if (data_143efb610 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143efb610)
    
    if (data_143efb610 == 0xffffffff)
        int64_t* rcx_77 = data_143db18d0
        
        if (rcx_77 == 0)
            sub_140a53c40()
            rcx_77 = data_143db18d0
        
        int64_t r8_13
        r8_13.b = 1
        data_143efb608 = (*(*rcx_77 + 0xb0))(rcx_77, u"r.ProfileGPU.ShowTransitions", r8_13)
        _Init_thread_footer(&data_143efb610)

int64_t* rcx = data_143efb608
(*(*rcx + 0x90))(rcx)
void** result
void* var_98
int64_t* var_88
int64_t var_78
int64_t* var_68
bool arg_10
int32_t arg_18
int32_t arg_20

if (arg2[0x16] s<= 0)
    void* rax_38 = *(r14 + 0x140)
    
    if (*(rax_38 + 0x1578) == 0)
        arg_10 = true
    else
        arg_10 = r14 != *(rax_38 + 0x1a58)
    
    void* r15_9 = *(r14 + 0x240)
    
    if (*(r15_9 + 0x78) != 0)
        sub_1418c86c0(r15_9, 0, 0)
    
    void* r15_10 = *(r15_9 + 0x70)
    var_98 = nullptr
    int32_t var_90_1 = 0
    var_78 = 0
    int32_t var_70_1 = 0
    result = sub_1418e14b0(arg2, r14 + 0x248, &var_98, &var_78)
    
    if (result.b != 0)
        void* rdx_16 = *(r14 + 0x140)
        void* rdi_7
        
        if (*(rdx_16 + 0x1578) != 0)
            rdi_7 = *(rdx_16 + 0x1a58)
        
        if (*(rdx_16 + 0x1578) != 0 && (r14 == rdi_7 || (*(arg2 + 0x90) != 0 && arg2[0x26] u<= 1)))
            void* rdx_17 = *(rdx_16 + 0x1a50)
            int32_t r14_2 = arg2[0x26]
            var_68 = &var_78
            void** var_60_1 = &var_98
            void* rbx_4 = *(rdx_17 + 0x240)
            bool cond:0_1 = *(rbx_4 + 0x78) == 0
            arg_18 = *(*(*(rdx_17 + 0x140) + 0x1558) + 8)
            arg_20 = *(*(*(rdi_7 + 0x140) + 0x1560) + 8)
            
            if (not(cond:0_1))
                sub_1418c86c0(rbx_4, 0, 0)
            
            int64_t* rbx_5 = *(rdi_7 + 0x240)
            var_88 = *(rbx_4 + 0x70)
            
            if (rbx_5[0xe] == 0)
                sub_1418c2ee0(rbx_5)
                rbx_5 = *(rdi_7 + 0x240)
            
            if (rbx_5[0xf] != 0)
                sub_1418c86c0(rbx_5, 0, 0)
            
            int64_t* r9_4 = rbx_5[0xe]
            int32_t rdx_18 = arg_20
            int32_t r8_10 = arg_18
            int32_t rcx_60 = 0x8000
            int64_t* rax_44 = var_88
            int32_t rsi_3 = 0x800
            
            if (r14_2 != 1)
                rcx_60 = 0x800
            
            if (r14_2 != 1)
                rax_44 = r9_4
            
            if (r14_2 != 1)
                r9_4 = var_88
            
            if (r14_2 != 1)
                rsi_3 = 0x8000
            
            if (r14_2 != 1)
                r8_10 = rdx_18
            
            if (r14_2 != 1)
                rdx_18 = arg_18
            
            int32_t var_f8
            var_f8.q = rax_44
            result = sub_1418d7bf0(&var_68, rdx_18, r8_10, r9_4, var_f8, rsi_3, rcx_60)
        else
            int32_t rcx_62 = arg2[0x26]
            int32_t rdi_8 = 0x10000
            int32_t rsi_4 = 0x10000
            
            if (rcx_62 == 0)
                rdi_8 = 0x8000
                rsi_4 = 0x800
            else if (rcx_62 == 1)
                rdi_8 = 0x800
                rsi_4 = 0x8000
            else if (rcx_62 == 2)
                rdi_8 = 0x8000
                rsi_4 = 0x8000
            else if (rcx_62 == 3)
                rdi_8 = 0x800
                rsi_4 = 0x8800
            
            if (var_90_1 != 0 && *(r14 + 0x410) != 0)
                sub_1418bdeb0(r15_10)
                *(r14 + 0x410) = 0
                
                if (data_143efb2f8 != 0)
                    sub_1418c8030(*(r14 + 0x240), nullptr)
                    sub_1418c2ee0(*(r14 + 0x240))
                    r15_10 = sub_1418e1a70(*(r14 + 0x240))
            
            result = data_143efba60(*(r15_10 + 0x40), zx.q(rdi_8), zx.q(rsi_4), 0, 0, 0, var_90_1, 
                var_98, var_70_1, var_78)
    
    void* rcx_74 = *(arg2 + 0x90)
    
    if (rcx_74 != 0)
        result = sub_141904c40(rcx_74, *(r15_10 + 0x40), zx.q(arg_10))
    
    int64_t rcx_75 = var_78
    
    if (rcx_75 != 0)
        result = sub_140a74f90(rcx_75)
    
    void* rcx_76 = var_98
    
    if (rcx_76 != 0)
        return sub_140a74f90(rcx_76)
else
    void* rbx_1 = *(r14 + 0x240)
    
    if (*(rbx_1 + 0x78) != 0)
        sub_1418c86c0(rbx_1, 0, 0)
    
    int64_t* rcx_2 = *(rbx_1 + 0x70)
    int32_t rax_3 = *arg2
    var_68 = rcx_2
    int64_t var_c0
    int32_t* var_b8
    
    if (rax_3 == 0 || rax_3 == 5)
        if (*(r14 + 0x410) != 0)
            int32_t r15_5 = 0
            int32_t i = 0
            
            if (arg2[0x16] s> 0)
                int64_t rsi_2 = 0
                
                do
                    void* rax_17 = *(arg2 + 0x50)
                    void* rcx_22 = &arg2[2]
                    
                    if (rax_17 != 0)
                        rcx_22 = rax_17
                    
                    int64_t* rcx_23 = *(rcx_22 + rsi_2)
                    void* rax_19 = (*(*rcx_23 + 0x48))(rcx_23)
                    void* r9_2 = *(r14 + 0x418)
                    int32_t rcx_24 = 0
                    int64_t rdx_8 = *(rax_19 + 0x18)
                    int32_t r8_6 = *(r9_2 + 0x5c)
                    
                    if (r8_6 != 0)
                        void* rax_20 = r9_2 + 0x60
                        
                        do
                            if (*rax_20 == rdx_8)
                                goto label_1418ef8ec
                            
                            rcx_24 += 1
                            rax_20 += 8
                        while (rcx_24 u< r8_6)
                    
                    if (*(r9_2 + 0xe0) == rdx_8)
                    label_1418ef8ec:
                        r15_5 += 1
                        sub_1418e0d30(r14 + 0x248, rdx_8, 0)
                    
                    i += 1
                    rsi_2 += 8
                while (i s< arg2[0x16])
                
                if (r15_5 != 0)
                    sub_1418bdeb0(var_68)
                    *(r14 + 0x410) = 0
                    
                    if (data_143efb2f8 != 0)
                        sub_1418c8030(*(r14 + 0x240), nullptr)
                        sub_1418c2ee0(*(r14 + 0x240))
                        void* rdi_4 = *(r14 + 0x240)
                        
                        if (*(rdi_4 + 0x78) != 0)
                            sub_1418c86c0(rdi_4, 0, 0)
                        
                        var_68 = *(rdi_4 + 0x70)
        
        __builtin_memset(&var_c0, 0, 0x14)
        int64_t var_a8_2 = 0
        int64_t var_a0_2 = 0
        int32_t var_c8_2 = 0
        
        if (arg2[0x16] s> 0)
            var_98 = nullptr
            var_88 = r14 + 0x2e8
            int32_t rcx_30 = arg2[0x26]
            arg_18 = 0
            arg_20 = 0
            
            if (rcx_30 == 1)
                arg_20 = 0x8000
                arg_18 = 0x800
            else if (rcx_30 == 3)
                arg_20 = 0x8800
                arg_18 = 0x800
            
            void* rax_22 = *(arg2 + 0x50)
            void* rcx_32 = &arg2[2]
            
            if (rax_22 != 0)
                rcx_32 = rax_22
            
            int64_t* rcx_33 = *rcx_32
            void* rax_24 = (*(*rcx_33 + 0x48))(rcx_33)
            arg_10.d = 0
            int64_t rax_25 = *(rax_24 + 0x18)
            var_78 = rax_25
            int64_t var_50 = rax_25
            int32_t var_58
            sub_140865c40(r14 + 0x2e8, &var_58, rax_25)
            int64_t rcx_35 = sx.q(var_58)
            int64_t rdx_11
            
            if (rcx_35.d == 0xffffffff)
                rdx_11 = 0
            else
                rdx_11 = *(r14 + 0x2e8) + rcx_35 * 0x18
            
            int64_t r15_7 = rdx_11 + 8
            
            if (rdx_11 == 0)
                r15_7 = 0
            
            if (r15_7 == 0)
                sub_1418ca3c0(var_88, &var_50, &arg_10)
                var_78 = *(rax_24 + 0x18)
            
            int32_t rax_29 = *(rax_24 + 0x78)
            arg_10.d = rax_29
            int32_t rax_32 = *(rax_24 + 0x70)
            int32_t var_b0_1
            int64_t rdi_6 = sx.q(var_b0_1)
            var_50.d = *(rax_24 + 0x58)
            int32_t rax_34 = (rdi_6 + 1).d
            var_b0_1 = rax_34
            
            if (rax_34 s> 0)
                sub_140775520(&var_b8)
            
            int64_t rdx_14 = rdi_6 * 0x48
            __builtin_memset(&var_b8[rdi_6 * 0x12], 0, 0x48)
            int32_t* rax_36 = var_b8
            *(rax_36 + rdx_14 + 0x28) = var_78
            rax_36[rdi_6 * 0x12 + 0xc] = arg_10.d
            rax_36[rdi_6 * 0x12 + 0xe] = rax_32
            rax_36[rdi_6 * 0x12 + 0x10] = var_50.d
            rax_36[rdi_6 * 0x12] = 0x2d
            *(rax_36 + rdx_14 + 0x20) = -1
            jump(&__dos_header.e_magic[zx.q(
                *((sx.q(sbb.d(rax_29, rax_29, (rax_29.b & 6) != 0) + 5) << 2) + 0x1418f0004))])
    else if (rax_3 == 1)
        int32_t i_1 = 0
        __builtin_memset(&var_c0, 0, 0x14)
        int64_t var_a8_1 = 0
        int32_t var_a0_1 = 0
        arg_10.d = 0
        
        if (arg2[0x16] s> 0)
            void* r15_1 = r14 + 0x2e8
            int64_t r14_1 = 0
            var_98 = r15_1
            void* rcx_3 = &arg2[2]
            uint64_t r8_5
            
            do
                void* rax_4 = *(rcx_3 + 0x48)
                
                if (rax_4 != 0)
                    rcx_3 = rax_4
                
                int64_t* rcx_4 = *(rcx_3 + r14_1)
                void* rax_6 = (*(*rcx_4 + 0x48))(rcx_4)
                arg_20 = 0
                int32_t rax_7 = *(rax_6 + 0x78)
                int64_t* r8_2 = *(rax_6 + 0x18)
                var_88 = r8_2
                sub_140865c40(r15_1, &arg_18, r8_2)
                int64_t rcx_6 = sx.q(arg_18)
                void* const rdx_1
                
                if (rcx_6.d == 0xffffffff)
                    rdx_1 = nullptr
                else
                    rdx_1 = *r15_1 + rcx_6 * 0x18
                
                int32_t* r12_1 = rdx_1 + 8
                
                if (rdx_1 == 0)
                    r12_1 = nullptr
                
                if (r12_1 == 0)
                    r12_1 = sub_1418ca3c0(r15_1, &var_88, &arg_20)
                
                r8_5 = zx.q(rax_7)
                int32_t r15_4
                
                if ((r8_5.b & 1) == 0)
                    r15_4 = 3
                else
                    r15_4 = (*(rax_6 + 0x38) & 1) + 1
                
                if (*r12_1 != r15_4)
                    int64_t rdi_2 = sx.q(sub_1418d97d0(&var_c0, *(rax_6 + 0x18), r8_5.d, 
                        *(rax_6 + 0x70), *(rax_6 + 0x58)))
                    int32_t rax_12 = sub_1418e1d20(r15_4)
                    int32_t rax_13 = sub_1418e1d20(*r12_1)
                    void* rdi_3 = &var_b8[rdi_2 * 0x12]
                    int32_t rax_14 = sub_1418bfb90(rax_13, rdi_3 + 0x10, rdi_3 + 0x18)
                    var_c0.d |= rax_14
                    int32_t rax_15 = sub_1418bfb90(rax_12, rdi_3 + 0x14, rdi_3 + 0x1c)
                    var_c0:4.d |= rax_15
                    i_1 = arg_10.d
                    *r12_1 = r15_4
                
                r15_1 = var_98
                rcx_3 = &arg2[2]
                i_1 += 1
                r14_1 += 8
                arg_10.d = i_1
            while (i_1 s< arg2[0x16])
            
            r14 = arg1
            int32_t var_b0
            
            if (var_b0 s> 0)
                if (*(r14 + 0x410) != 0)
                    sub_1418bdeb0(var_68)
                    *(r14 + 0x410) = 0
                
                int64_t* rax_16
                
                if (*(r14 + 0x410) == 0 || data_143efb2f8 == 0)
                    rax_16 = var_68
                else
                    sub_1418c8030(*(r14 + 0x240), nullptr)
                    sub_1418c2ee0(*(r14 + 0x240))
                    void* rbx_2 = *(r14 + 0x240)
                    
                    if (*(rbx_2 + 0x78) != 0)
                        sub_1418c86c0(rbx_2, 0, 0)
                    
                    rax_16 = *(rbx_2 + 0x70)
                
                if (var_b0 s> 0 || var_a0_1 s> 0)
                    r8_5.b = 1
                    sub_1418c1fc0(&var_c0, rax_16)
            
            if (var_a8_1 != 0)
                sub_140a74f90(var_a8_1)
            
            int32_t* rcx_49 = var_b8
            
            if (rcx_49 != 0)
                sub_140a74f90(rcx_49)
    else if (rax_3 == 4 && *(rcx_2 + 0x2c) == 2)
        sub_1418bdeb0(rcx_2)
        *(r14 + 0x410) = 0
        
        if (data_143efb2f8 != 0)
            sub_1418c8030(*(r14 + 0x240), nullptr)
            sub_1418c2ee0(*(r14 + 0x240))
            sub_1418e1a70(*(r14 + 0x240))
    void* rbx_3 = *(r14 + 0x240)
    
    if (*(rbx_3 + 0x78) != 0)
        sub_1418c86c0(rbx_3, 0, 0)
    
    result = *(rbx_3 + 0x70)
    
    if (*(result + 0x2c) == 1 && *(r14 + 0x150) != 0)
        result = sub_1418c21f0(r14)
        void* rcx_52 = *(r14 + 0x240)
        *(r14 + 0x150) = 0
        
        if (*(rcx_52 + 0x78) != 0)
            return sub_1418c86c0(rcx_52, 0, 0)
return result
