// 函数: sub_140ab4300
// 地址: 0x140ab4300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_268
int64_t rax_1 = __security_cookie ^ &var_268
int64_t* r13 = arg1
int64_t* var_1c8 = arg1
int64_t var_1c0 = 0
int64_t var_1b8 = 0

if ((*(*arg2 + 0x28))(arg2) u>= 0x10)
    sub_1409ac860(arg2, &var_1c0, arg5)

int32_t rsi = 1
int32_t rcx_4 = (var_1c0.d ^ data_14399eb88) | (var_1c0:4.d ^ data_14399eb8c)
char var_238 = 0

if ((rcx_4 | (var_1b8.d ^ data_14399eb90) | (var_1b8:4.d ^ data_14399eb94)) != 0)
    (*(*arg2 + 0x178))(arg2, 0)
else
    int64_t* rcx_7 = arg2[1]
    char* rdx_1 = *rcx_7
    
    if (&rdx_1[1] u> rcx_7[1])
        (*(*arg2 + 0x150))(arg2, &var_238, 1)
    else
        var_238 = *rdx_1
        *rcx_7 += 1

uint32_t result

if (var_238 u<= 2)
    int16_t* r12_1 = nullptr
    int32_t i_3 = 0
    int16_t* var_228 = nullptr
    int32_t i_4 = 0
    int64_t var_220 = 0
    int32_t var_234
    int16_t* const var_218
    int64_t var_210
    int64_t var_1f8
    
    if (var_238 u>= 1)
        int64_t* rcx_10 = arg2[1]
        var_1f8 = -1
        int64_t* rdx_3 = *rcx_10
        
        if (&rdx_3[1] u> rcx_10[1])
            int64_t* rdx_4 = &var_1f8
            
            if ((*(arg2 + 0x29) & 0x20) != 0)
                sub_140b540d0(arg2, rdx_4, arg5)
            else
                (*(*arg2 + 0x150))(arg2, rdx_4, 8)
        else
            var_1f8 = *rdx_3
            *rcx_10 += 8
        
        if (var_1f8 != -1)
            int64_t rdx_5 = *(*arg2 + 0x20)
            
            if (var_238 u< 2)
                var_218 = nullptr
                var_210 = 0
                int64_t rax_18 = rdx_5(arg2)
                int64_t r8_2 = *arg2
                (*(r8_2 + 0x178))(arg2, var_1f8, r8_2)
                arg5 = sub_140a3cdd0(arg2, &var_218, arg5)
                int64_t r8_3 = *arg2
                (*(r8_3 + 0x178))(arg2, rax_18, r8_3)
                int64_t rsi_1 = sx.q(var_210.d)
                
                if (rsi_1.d s> 0)
                    sub_1405a5130(&var_228, rsi_1.d)
                    i_3 = var_220.d
                    r12_1 = var_228
                    i_4 = i_3
                
                int16_t* const r13_1 = var_218
                void* i = &r13_1[rsi_1 * 8]
                
                if (r13_1 != i)
                    void* rdi_3 = &r13_1[6]
                    
                    do
                        int64_t r12_2 = *(rdi_3 - 0xc)
                        *(rdi_3 - 0xc) = 0
                        int32_t rax_19 = *(rdi_3 - 4)
                        var_234 = *rdi_3
                        *(rdi_3 - 4) = 0
                        i_4 = i_3 + 1
                        var_220.d = i_3 + 1
                        
                        if (i_3 + 1 s> var_220:4.d)
                            sub_1405a4df0(&var_228)
                            i_4 = var_220.d
                        
                        int64_t i_5 = sx.q(i_3)
                        rdi_3 += 0x10
                        i_3 = i_4
                        int64_t rcx_21 = i_5 * 3
                        *(var_228 + (rcx_21 << 3)) = r12_2
                        r12_1 = var_228
                        *(r12_1 + (rcx_21 << 3) + 8) = rax_19
                        *(r12_1 + (rcx_21 << 3) + 0xc) = var_234
                        *(r12_1 + (rcx_21 << 3) + 0x10) = 0xffffffff
                    while (rdi_3 - 0xc != i)
                
                int16_t* const rdi_4 = r13_1
                
                if (rsi_1.d != 0)
                    int32_t i_1
                    
                    do
                        int64_t rcx_22 = *rdi_4
                        
                        if (rcx_22 != 0)
                            arg5 = sub_140a74f90(rcx_22)
                        
                        rdi_4 = &rdi_4[8]
                        i_1 = rsi_1.d
                        rsi_1 = zx.q(rsi_1.d - 1)
                    while (i_1 != 1)
                
                if (r13_1 != 0)
                    arg5 = sub_140a74f90(r13_1)
                
                r13 = var_1c8
                rsi = 1
                i_3 = i_4
            else
                int64_t rax_17 = rdx_5(arg2)
                int64_t r8 = *arg2
                (*(r8 + 0x178))(arg2, var_1f8, r8)
                arg5 = sub_140a99f80(arg2, &var_228, arg5)
                int64_t r8_1 = *arg2
                (*(r8_1 + 0x178))(arg2, rax_17, r8_1)
                i_3 = var_220.d
                r12_1 = var_228
                i_4 = i_3
    
    if (var_238 u>= 2)
        int64_t* rcx_24 = arg2[1]
        int32_t* rdx_14 = *rcx_24
        
        if (&rdx_14[1] u> rcx_24[1])
            int32_t* rdx_15 = &var_234
            
            if ((*(arg2 + 0x29) & 0x20) != 0)
                sub_140b54070(arg2, rdx_15, arg5)
            else
                (*(*arg2 + 0x150))(arg2, rdx_15, 4)
        else
            var_234 = *rdx_14
            *rcx_24 += 4
        
        int32_t rcx_27 = r13[1].d - *(r13 + 0x34)
        int32_t rdi_6 = var_234 + rcx_27
        
        if (rdi_6 s> rcx_27)
            sub_140ac06c0(r13, rdi_6)
            
            if (rdi_6 u>= 4)
                uint32_t rdi_7 = rdi_6 u>> 1
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rdi_7 + 8)
                int32_t rcx_29
                
                if (rdi_7 == 0xfffffff8)
                    rcx_29 = 0x20
                else
                    rcx_29 = 0x1f - temp0_2
                
                int32_t rcx_31 = rcx_29 << 0x1a s>> 0x1f
                uint64_t rflags_2
                char temp0_3
                temp0_3, rflags_2 = _bit_scan_reverse(rdi_7 + 7)
                char r8_4
                
                if (rcx_31 == 0)
                    r8_4 = 0x20
                else
                    r8_4 = 0x1f - temp0_3
                
                rsi = 1 << ((not.d(rcx_31)).b & (0x20 - r8_4))
            
            int32_t rax_32 = r13[9].d
            
            if (rax_32 == 0 || rax_32 s< rsi)
                r13[9].d = rsi
                arg5 = sub_140abf6d0(r13)
    
    int64_t* rcx_35 = arg2[1]
    uint32_t* rdx_18 = *rcx_35
    uint32_t var_204
    
    if (&rdx_18[1] u> rcx_35[1])
        uint32_t* rdx_19 = &var_204
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, rdx_19, arg5)
        else
            (*(*arg2 + 0x150))(arg2, rdx_19, 4)
    else
        var_204 = *rdx_18
        *rcx_35 += 4
    
    uint32_t result_1 = 0
    
    if (var_204 u> 0)
        do
            bool cond:11_1 = var_238 u< 2
            var_218 = &data_142d40450
            var_210.d = 0
            void var_168
            
            if (cond:11_1)
                arg5 = sub_140ac3950(&var_218, arg2, arg5)
            else
                int64_t* rcx_37 = arg2[1]
                int32_t* rdx_20 = *rcx_37
                int64_t r8_5 = rcx_37[1]
                
                if ((arg2[5].b & 1) != 0)
                    if (&rdx_20[1] u> r8_5)
                        int32_t* rdx_21 = &var_210
                        
                        if ((*(arg2 + 0x29) & 0x20) != 0)
                            sub_140b54070(arg2, rdx_21, arg5)
                        else
                            (*(*arg2 + 0x150))(arg2, rdx_21, 4)
                    else
                        var_210.d = *rdx_20
                        *rcx_37 += 4
                    
                    void* var_68_1 = nullptr
                    int32_t var_60_1 = 0
                    int32_t var_5c_1 = 0x80
                    arg5 = sub_140ab4fe0(arg2, &var_168, arg5)
                    
                    if (var_60_1 s> 1)
                        void* rsi_2 = &var_168
                        
                        if (var_68_1 != 0)
                            rsi_2 = var_68_1
                        
                        arg5 =
                            sub_140aab880(sub_140ab2000(), rsi_2, var_60_1 - 1, var_210.d, &var_218)
                    else
                        var_210.d = 0
                        var_218 = &data_142d40450
                    
                    if (var_68_1 != 0)
                        arg5 = sub_140a74f90(var_68_1)
                else if (&rdx_20[1] u> r8_5)
                    int32_t* rdx_25 = &var_210
                    
                    if ((*(arg2 + 0x29) & 0x20) != 0)
                        sub_140b54070(arg2, rdx_25, arg5)
                        arg5 = sub_140ac18f0(arg2, var_218, arg5)
                    else
                        (*(*arg2 + 0x150))(arg2, rdx_25, 4)
                        arg5 = sub_140ac18f0(arg2, var_218, arg5)
                else
                    var_210.d = *rdx_20
                    *rcx_37 += 4
                    arg5 = sub_140ac18f0(arg2, var_218, arg5)
            
            int64_t* rcx_47 = arg2[1]
            int32_t* rdx_29 = *rcx_47
            
            if (&rdx_29[1] u> rcx_47[1])
                int32_t* rdx_30 = &var_234
                
                if ((*(arg2 + 0x29) & 0x20) != 0)
                    sub_140b54070(arg2, rdx_30, arg5)
                else
                    (*(*arg2 + 0x150))(arg2, rdx_30, 4)
            else
                var_234 = *rdx_29
                *rcx_47 += 4
            
            int32_t r15_3 = 0
            
            if (var_234 u> 0)
                do
                    bool cond:18_1 = var_238 u< 2
                    var_228 = &data_142d40450
                    var_220.d = 0
                    
                    if (cond:18_1)
                        arg5 = sub_140ac3950(&var_228, arg2, arg5)
                    else
                        int64_t* rcx_49 = arg2[1]
                        int32_t* rdx_31 = *rcx_49
                        int64_t r8_7 = rcx_49[1]
                        
                        if ((arg2[5].b & 1) != 0)
                            if (&rdx_31[1] u> r8_7)
                                int32_t* rdx_32 = &var_220
                                
                                if ((*(arg2 + 0x29) & 0x20) != 0)
                                    sub_140b54070(arg2, rdx_32, arg5)
                                else
                                    (*(*arg2 + 0x150))(arg2, rdx_32, 4)
                            else
                                var_220.d = *rdx_31
                                *rcx_49 += 4
                            
                            void* var_68_2 = nullptr
                            int32_t var_60_2 = 0
                            int32_t var_5c_2 = 0x80
                            arg5 = sub_140ab4fe0(arg2, &var_168, arg5)
                            
                            if (var_60_2 s> 1)
                                void* rsi_3 = &var_168
                                
                                if (var_68_2 != 0)
                                    rsi_3 = var_68_2
                                
                                arg5 = sub_140aab880(sub_140ab2000(), rsi_3, var_60_2 - 1, 
                                    var_220.d, &var_228)
                            else
                                var_220.d = 0
                                var_228 = &data_142d40450
                            
                            if (var_68_2 != 0)
                                arg5 = sub_140a74f90(var_68_2)
                        else if (&rdx_31[1] u> r8_7)
                            int32_t* rdx_36 = &var_220
                            
                            if ((*(arg2 + 0x29) & 0x20) != 0)
                                sub_140b54070(arg2, rdx_36, arg5)
                                arg5 = sub_140ac18f0(arg2, var_228, arg5)
                            else
                                (*(*arg2 + 0x150))(arg2, rdx_36, 4)
                                arg5 = sub_140ac18f0(arg2, var_228, arg5)
                        else
                            var_220.d = *rdx_31
                            *rcx_49 += 4
                            arg5 = sub_140ac18f0(arg2, var_228, arg5)
                    
                    int64_t* rcx_59 = arg2[1]
                    uint64_t var_1f0 = 0
                    int64_t var_1e8_1 = 0
                    int128_t var_1e0_1 = *arg3
                    int32_t var_1d0 = 0
                    int32_t* rdx_40 = *rcx_59
                    
                    if (&rdx_40[1] u> rcx_59[1])
                        int32_t* rdx_41 = &var_1d0
                        
                        if ((*(arg2 + 0x29) & 0x20) != 0)
                            sub_140b54070(arg2, rdx_41, arg5)
                        else
                            (*(*arg2 + 0x150))(arg2, rdx_41, 4)
                    else
                        var_1d0 = *rdx_40
                        *rcx_59 += 4
                    
                    if (var_238 u< 1)
                        arg5 = sub_140a1d9d0(arg2, &var_1f0, arg5)
                    else
                        int64_t* rcx_61 = arg2[1]
                        int32_t var_208 = 0xffffffff
                        int32_t* rdx_42 = *rcx_61
                        
                        if (&rdx_42[1] u> rcx_61[1])
                            int32_t* rdx_43 = &var_208
                            
                            if ((*(arg2 + 0x29) & 0x20) != 0)
                                sub_140b54070(arg2, rdx_43, arg5)
                            else
                                (*(*arg2 + 0x150))(arg2, rdx_43, 4)
                        else
                            var_208 = *rdx_42
                            *rcx_61 += 4
                        
                        int64_t rax_60 = sx.q(var_208)
                        
                        if (rax_60.d s>= 0 && rax_60.d s< i_3)
                            int64_t rcx_63 = rax_60 * 3
                            void* rdi_11 = &r12_1[rcx_63 * 4]
                            
                            if (*(r12_1 + (rcx_63 << 3) + 0x10) != 1)
                                if (&var_1f0 != rdi_11)
                                    int32_t rsi_4 = *(rdi_11 + 8)
                                    int64_t r14_1 = *rdi_11
                                    int32_t r8_9 = var_1e8_1:4.d
                                    var_1e8_1.d = rsi_4
                                    
                                    if (rsi_4 != 0 || r8_9 != 0)
                                        sub_1405a4c70(&var_1f0, rsi_4, r8_9)
                                        memcpy(var_1f0, r14_1, rsi_4 * 2)
                                    else
                                        var_1e8_1:4.d = 0
                                    
                                    i_3 = i_4
                                
                                int32_t rax_64 = *(rdi_11 + 0x10)
                                
                                if (rax_64 != 0xffffffff)
                                    *(rdi_11 + 0x10) = rax_64 - 1
                            else
                                if (&var_1f0 != rdi_11)
                                    uint64_t rcx_64 = var_1f0
                                    
                                    if (rcx_64 != 0)
                                        arg5 = sub_140a74f90(rcx_64)
                                    
                                    var_1f0 = *rdi_11
                                    *rdi_11 = 0
                                    var_1e8_1.d = *(rdi_11 + 8)
                                    var_1e8_1:4.d = *(rdi_11 + 0xc)
                                    *(rdi_11 + 8) = 0
                                
                                *(rdi_11 + 0x10) -= 1
                    
                    int128_t var_190 = var_218.o
                    int128_t var_180_1 = var_228.o
                    sub_140aab040(r13, &var_1c8, &var_190)
                    int64_t rax_66 = sx.q(var_1c8.d)
                    void* const rax_69
                    
                    if (rax_66.d == 0xffffffff)
                        rax_69 = nullptr
                    else
                        rax_69 = rax_66 * 0x50 + *r13
                    
                    int64_t* rdi_12 = rax_69 + 0x20
                    
                    if (rax_69 == 0)
                        rdi_12 = nullptr
                    
                    if (rdi_12 == 0)
                        int128_t zmm0_1 = var_218.o
                        int128_t* var_1a0 = &var_190
                        var_190 = zmm0_1
                        uint64_t* var_198_1 = &var_1f0
                        int128_t var_180_2 = var_228.o
                        arg5 = sub_140a91d10(r13, &var_1f8, &var_1a0, nullptr)
                    else if (arg4 s< *(rdi_12 + 0x24))
                        if (rdi_12 != &var_1f0)
                            int64_t rcx_69 = *rdi_12
                            
                            if (rcx_69 != 0)
                                arg5 = sub_140a74f90(rcx_69)
                            
                            *rdi_12 = var_1f0
                            var_1f0 = 0
                            rdi_12[1].d = var_1e8_1.d
                            *(rdi_12 + 0xc) = var_1e8_1:4.d
                            int64_t var_1e8_2 = 0
                        
                        *(rdi_12 + 0x10) = var_1e0_1
                        rdi_12[4].d = var_1d0
                        *(rdi_12 + 0x24) = arg4
                    
                    uint64_t rcx_71 = var_1f0
                    
                    if (rcx_71 != 0)
                        arg5 = sub_140a74f90(rcx_71)
                    
                    r15_3 += 1
                while (r15_3 u< var_234)
            
            result = result_1 + 1
            result_1 = result
        while (result u< var_204)
    
    int16_t* rbx_1 = r12_1
    
    if (i_3 != 0)
        int32_t i_2
        
        do
            int64_t rcx_72 = *rbx_1
            
            if (rcx_72 != 0)
                sub_140a74f90(rcx_72)
            
            rbx_1 = &rbx_1[0xc]
            i_2 = i_3
            i_3 -= 1
        while (i_2 != 1)
    
    if (r12_1 != 0)
        sub_140a74f90(r12_1)
    
    result.b = 1
else
    result.b = 0

__security_check_cookie(rax_1 ^ &var_268)
return result
