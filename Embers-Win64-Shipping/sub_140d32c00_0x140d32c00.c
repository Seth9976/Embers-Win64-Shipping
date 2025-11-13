// 函数: sub_140d32c00
// 地址: 0x140d32c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_258
int64_t rax_1 = __security_cookie ^ &var_258
char* rax_2 = *(arg2 + 0x20)
void* r14 = nullptr
*(arg2 + 0x38) = 0
uint32_t rcx = zx.d(*rax_2)
*(arg2 + 0x20) = &rax_2[1]
(&data_143e1cd60)[zx.q(rcx)](*(arg2 + 0x18), arg4, 0, &data_143e1cd60)
void** rsi = *(arg2 + 0x38)

if (rsi == 0)
    TEB* gsbase
    
    if (data_143e1d7e8
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143e1d7e8)
        
        if (data_143e1d7e8 == 0xffffffff)
            void var_180
            int64_t* rax_87 =
                _vfprintf_p_l(&var_180, Attempt to assign variable through None", ScriptCore")
            data_143e1d7c8 = 3
            data_143e1d7d0 = *rax_87
            void* rcx_57 = rax_87[1]
            data_143e1d7d8 = rcx_57
            
            if (rcx_57 != 0)
                *(rcx_57 + 8) += 1
            
            data_143e1d7e0 = rax_87[2].d
            int64_t* var_178
            
            if (var_178 != 0)
                var_178[1].d -= 1
                
                if (var_178[1].d == 1)
                    (**var_178)(var_178)
                    int32_t rax_91 = *(var_178 + 0xc)
                    *(var_178 + 0xc) -= 1
                    
                    if (rax_91 == 1)
                        (*(*var_178 + 8))(var_178, 1)
            
            atexit(sub_142cc3300)
            _Init_thread_footer(&data_143e1d7e8)
    
    sub_140d30680(arg1, arg2, &data_143e1d7c8)
    rsi = *(arg2 + 0x38)

void* const r15_1 = *(arg2 + 0x30)
int64_t rbx_1

if (r15_1 != 0)
    rbx_1 = *(r15_1 + 8)
    sub_140cea1e0()

if (r15_1 == 0 || rbx_1 != &data_143e1b870)
    r15_1 = nullptr

char* rax_7 = *(arg2 + 0x20)
uint32_t rcx_5 = zx.d(*rax_7)
*(arg2 + 0x20) = &rax_7[1]
int32_t var_238
uint64_t result = (&data_143e1cd60)[zx.q(rcx_5)](*(arg2 + 0x18), arg2, &var_238, &data_143e1cd60)

if (r15_1 != 0)
    void* rax_10 = *(r15_1 + 0x78)
    int32_t r9_1 = var_238
    char rdx_2 = (*(r15_1 + 0x80)).b
    int32_t r8_1 = *(rax_10 + 0x3c)
    *(arg2 + 0x30) = rax_10
    int32_t rax_11
    
    if (r9_1 s>= 0)
        rax_11 = rsi[1].d
    
    if (r9_1 s< 0 || r9_1 s>= rax_11)
        *(arg2 + 0x38) = 0
        *(arg2 + 0x30) = 0
        int128_t var_1b0 = zx.o(0)
        int16_t* var_1e0
        sub_140b63b70(r15_1 + 0x28, &var_1e0)
        int16_t* const r15_2 = &data_142d40450
        int32_t rdx_5 = 0
        int64_t var_230 = 0
        int32_t var_1d8
        
        if (var_1d8 != 0)
            r15_2 = var_1e0
        
        int32_t rcx_11 = 0
        int32_t var_228_1 = 0
        int32_t var_224_1 = 0
        
        if (r15_2 != 0 && *r15_2 != 0)
            int64_t rbx_2 = -1
            
            do
                rbx_2 += 1
            while (r15_2[rbx_2] != 0)
            
            if (rbx_2.d + 1 s> 0)
                sub_1405947f0(&var_230, rbx_2.d + 1)
                rcx_11 = var_224_1
                rdx_5 = var_228_1
            
            int32_t rax_18 = rdx_5 + rbx_2.d + 1
            int32_t var_228_2 = rax_18
            
            if (rax_18 s> rcx_11)
                sub_140594770(&var_230)
            
            UnDecorator::getReferenceType(var_230, r15_2, (rbx_2.d + 1) * 2)
        
        int32_t rdx_8 = rsi[1].d
        int128_t var_1c0 = zx.o(0)
        void var_128
        int64_t* rax_19 = sub_140aa10e0(&var_128, rdx_8, nullptr, &var_1b0)
        void var_110
        int64_t* rax_20 = sub_140aae2f0(&var_110, &var_230)
        void var_f8
        int64_t* rax_21 = sub_140aa10e0(&var_f8, var_238, nullptr, &var_1c0)
        void var_150
        char* var_138
        char** rax_23 = sub_140a96390(&var_138, 
            _vfprintf_p_l(&var_150, Attempted to access index {0} from array {1} of length {2}!", 
            ScriptCore"))
        int64_t var_c8_1 = *rax_21
        void* rcx_21 = rax_21[1]
        int32_t var_d8_1 = 4
        void* var_c0_1 = rcx_21
        
        if (rcx_21 != 0)
            *(rcx_21 + 8) += 1
        
        int32_t var_b8_1 = rax_21[2].d
        int64_t var_98_1 = *rax_20
        void* rax_26 = rax_20[1]
        char var_b0_1 = 1
        int32_t var_a8_1 = 4
        void* var_90_1 = rax_26
        
        if (rax_26 != 0)
            *(rax_26 + 8) += 1
        
        int32_t var_88_1 = rax_20[2].d
        int64_t var_68_1 = *rax_19
        void* rax_29 = rax_19[1]
        char var_80_1 = 1
        int32_t var_78_1 = 4
        void* var_60_1 = rax_29
        
        if (rax_29 != 0)
            *(rax_29 + 8) += 1
        
        int32_t var_58_1 = rax_19[2].d
        char var_50_1 = 1
        void* var_218 = nullptr
        int32_t var_210_1 = 3
        sub_1405a4b40(&var_218, 3, 0)
        void var_d0
        void* rdx_12 = &var_d0
        int64_t* rcx_24 = var_218 + 8
        int32_t i_2 = 3
        int32_t i
        
        do
            rcx_24[-1].d = *(rdx_12 - 8)
            *rcx_24 = *rdx_12
            *rcx_24 = *rdx_12
            *rcx_24 = *rdx_12
            *rcx_24 = *rdx_12
            rcx_24[4].b = 0
            
            if (*(rdx_12 + 0x20) != 0)
                rcx_24[1] = *(rdx_12 + 8)
                void* rax_37 = *(rdx_12 + 0x10)
                rcx_24[2] = rax_37
                
                if (rax_37 != 0)
                    *(rax_37 + 8) += 1
                
                rcx_24[3].d = *(rdx_12 + 0x18)
                rcx_24[4].b = 1
            
            rcx_24 = &rcx_24[6]
            rdx_12 += 0x30
            i = i_2
            i_2 -= 1
        while (i != 1)
        char* var_1d0 = *rax_23
        void* rax_40 = rax_23[1]
        void* var_1c8_1 = rax_40
        
        if (rax_40 != 0)
            *(rax_40 + 8) += 1
        
        void var_168
        int64_t* rax_41 = sub_140aac870(&var_168, &var_1d0, &var_218)
        int64_t* r14_2 = rax_41[1]
        int64_t rcx_26 = *rax_41
        
        if (r14_2 != 0)
            r14_2[1].d += 1
        
        int32_t rax_42 = rax_41[2].d
        int64_t* var_160
        
        if (var_160 != 0)
            var_160[1].d -= 1
            
            if (var_160[1].d == 1)
                (**var_160)(var_160)
                int32_t rax_45 = *(var_160 + 0xc)
                *(var_160 + 0xc) -= 1
                
                if (rax_45 == 1)
                    (*(*var_160 + 8))(var_160, 1)
        
        sub_140596f50(&var_218)
        int64_t i_1 = 3
        int64_t __saved_r12
        int64_t* rsi_2 = &__saved_r12
        
        do
            i_1 -= 1
            rsi_2 = &rsi_2[-6]
            
            if (*rsi_2 != 0)
                *rsi_2 = 0
                int64_t* rbx_6 = rsi_2[-2]
                
                if (rbx_6 != 0)
                    rbx_6[1].d -= 1
                    
                    if (rbx_6[1].d == 1)
                        (**rbx_6)(rbx_6)
                        int32_t rax_49 = *(rbx_6 + 0xc)
                        *(rbx_6 + 0xc) -= 1
                        
                        if (rax_49 == 1)
                            (*(*rbx_6 + 8))(rbx_6, 1)
        while (i_1 != 0)
        
        int64_t* rbx_8 = rax_23[1]
        
        if (rbx_8 != 0)
            rbx_8[1].d -= 1
            
            if (rbx_8[1].d == 1)
                (**rbx_8)(rbx_8)
                int32_t rax_53 = *(rbx_8 + 0xc)
                *(rbx_8 + 0xc) -= 1
                
                if (rax_53 == 1)
                    (*(*rbx_8 + 8))(rbx_8, zx.q((i_1 + 1).d))
        
        int64_t* rbx_10 = rax_21[1]
        
        if (rbx_10 != 0)
            rbx_10[1].d -= 1
            
            if (rbx_10[1].d == 1)
                (**rbx_10)(rbx_10)
                int32_t rax_57 = *(rbx_10 + 0xc)
                *(rbx_10 + 0xc) -= 1
                
                if (rax_57 == 1)
                    (*(*rbx_10 + 8))(rbx_10, 1)
        
        int64_t* rbx_11 = rax_20[1]
        
        if (rbx_11 != 0)
            rbx_11[1].d -= 1
            
            if (rbx_11[1].d == 1)
                (**rbx_11)(rbx_11)
                int32_t rax_61 = *(rbx_11 + 0xc)
                *(rbx_11 + 0xc) -= 1
                
                if (rax_61 == 1)
                    (*(*rbx_11 + 8))(rbx_11, 1)
        
        int64_t* rbx_13 = rax_19[1]
        
        if (rbx_13 != 0)
            rbx_13[1].d -= 1
            
            if (rbx_13[1].d == 1)
                (**rbx_13)(rbx_13)
                int32_t rax_65 = *(rbx_13 + 0xc)
                *(rbx_13 + 0xc) -= 1
                
                if (rax_65 == 1)
                    (*(*rbx_13 + 8))(rbx_13, 1)
        
        int64_t var_198_1 = rcx_26
        int32_t var_1a0 = 3
        
        if (r14_2 != 0)
            r14_2[1].d += 1
        
        int32_t var_188_1 = rax_42
        
        if (r14_2 != 0)
            r14_2[1].d -= 1
            
            if (r14_2[1].d == 1)
                (**r14_2)(r14_2)
                int32_t rax_71 = *(r14_2 + 0xc)
                *(r14_2 + 0xc) -= 1
                
                if (rax_71 == 1)
                    (*(*r14_2 + 8))(r14_2, 1)
        
        int64_t* var_148
        
        if (var_148 != 0)
            var_148[1].d -= 1
            
            if (var_148[1].d == 1)
                (**var_148)(var_148)
                int32_t rax_75 = *(var_148 + 0xc)
                *(var_148 + 0xc) -= 1
                
                if (rax_75 == 1)
                    (*(*var_148 + 8))(var_148, 1)
        
        int64_t* rbx_15 = var_1c0:8.q
        
        if (rbx_15 != 0)
            rbx_15[1].d -= 1
            
            if (rbx_15[1].d == 1)
                (**rbx_15)(rbx_15)
                int32_t rax_79 = *(rbx_15 + 0xc)
                *(rbx_15 + 0xc) -= 1
                
                if (rax_79 == 1)
                    (*(*rbx_15 + 8))(rbx_15, 1)
        
        int64_t rcx_46 = var_230
        
        if (rcx_46 != 0)
            sub_140a74f90(rcx_46)
        
        int16_t* rcx_47 = var_1e0
        
        if (rcx_47 != 0)
            sub_140a74f90(rcx_47)
        
        int64_t* rbx_16 = var_1b0:8.q
        
        if (rbx_16 != 0)
            rbx_16[1].d -= 1
            
            if (rbx_16[1].d == 1)
                (**rbx_16)(rbx_16)
                int32_t rax_83 = *(rbx_16 + 0xc)
                *(rbx_16 + 0xc) -= 1
                
                if (rax_83 == 1)
                    (*(*rbx_16 + 8))(rbx_16, 1)
        
        result = sub_140d30680(arg1, arg2, &var_1a0)
        
        if (r14_2 != 0)
            result = zx.q(r14_2[1].d)
            r14_2[1].d -= 1
            
            if (result.d == 1)
                result = (**r14_2)(r14_2)
                int32_t rdi_1 = *(r14_2 + 0xc)
                *(r14_2 + 0xc) -= 1
                
                if (rdi_1 == 1)
                    result = (*(*r14_2 + 8))(r14_2, zx.q(rdi_1))
    else
        rdx_2 = not.b(rdx_2) & 1
        
        if (rax_11 != 0)
            void* rcx_7 = *rsi
            
            if (rdx_2 == 0 && (rcx_7.b & 1) != 0)
                rcx_7 = (rcx_7 s>> 1) + rsi
            
            result = sx.q(r8_1 * r9_1) + rcx_7
        else
            result = 0
        
        *(arg2 + 0x38) = result
        
        if (arg3 != 0)
            if (rsi[1].d != 0)
                void* rax_15 = *rsi
                
                if (rdx_2 == 0 && (rax_15.b & 1) != 0)
                    rax_15 = (rax_15 s>> 1) + rsi
                
                r14 = sx.q(r8_1 * r9_1) + rax_15
            
            int64_t* rcx_9 = *(r15_1 + 0x78)
            result = (*(*rcx_9 + 0xc8))(rcx_9, arg3, r14)
else
    *(arg2 + 0x90) = 1

__security_check_cookie(rax_1 ^ &var_258)
return result
