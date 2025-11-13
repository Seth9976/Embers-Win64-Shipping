// 函数: sub_141ebe460
// 地址: 0x141ebe460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_998
int64_t rax_1 = __security_cookie ^ &var_998
int64_t i_3 = sx.q(arg1)
void** r12 = arg2
char* var_940 = arg3
int32_t rbx = i_3.d + arg4[1].d

if (rbx s> *(arg4 + 0xc))
    sub_1405a5130(arg4, rbx)
    arg3 = var_940

uint64_t rsi
rsi.b = 0
int64_t i_2 = i_3
uint64_t result
void** var_968
int64_t var_960
int64_t var_958

if (rbx s>= data_143a2d644)
    int64_t var_10c_1 = 0x40
    void* var_118_1 = nullptr
    int32_t var_110_1 = 0
    int64_t var_100_1 = 0
    int32_t var_f8_1 = 0
    int32_t var_f4_1 = 0x40
    int32_t var_104_1 = 0
    int32_t var_f0_1 = 0xffffffff
    int32_t var_ec_1 = 0
    void* var_68_1 = nullptr
    int32_t var_60_1 = 0
    void var_918
    
    if (rbx s> 0)
        sub_141ec9690(&var_918, rbx)
        int32_t rdx_2 = 0x20
        uint32_t rax_4 = rbx u>> 1
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rax_4)
        int32_t rcx_2
        
        if (rax_4 == 0)
            rcx_2 = 0x20
        else
            rcx_2 = 0x1f - temp0_1
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_4 - 1)
        char r8
        
        if (rax_4 == 1)
            r8 = 0x20
        else
            r8 = 0x1f - temp0_3
        
        int32_t r8_1 = 1 << ((not.d(rcx_2 << 0x1a s>> 0x1f)).b & (0x20 - r8))
        
        if (r8_1 u>= 0x20)
            if (rbx u< 4)
                r8_1 = 0x20
            
            rdx_2 = r8_1
        
        if (var_60_1 == 0 || var_60_1 s< rdx_2)
            var_60_1 = rdx_2
            sub_141ec9010(&var_918)
    
    int32_t i = 0
    int32_t var_948
    int64_t var_938
    int32_t var_930
    int32_t var_928
    int128_t* var_920
    
    if (arg4[1].d s> 0)
        int64_t r12_1 = 0
        
        do
            void* rbx_1 = *arg4
            int64_t rax_8 = sub_140d3c6e0(rbx_1 + 8 + r12_1)
            var_930 = *(rbx_1 + r12_1 + 0x10)
            var_938 = rax_8
            sub_141eb90f0(&var_918, &var_928)
            i += 1
            char* var_970_1 = nullptr
            *var_920 = var_938.o
            var_920[1].d = i
            *(var_920 + 0x18) = 0xffffffff
            uint32_t rcx_13 = (*var_920 u>> 4).d
            int32_t rdx_5 = (0x9e3779b9 - rcx_13) ^ rcx_13 << 8
            int32_t r8_4 = neg.d(rdx_5 + rcx_13) ^ rdx_5 u>> 0xd
            int32_t rcx_16 = (rcx_13 - rdx_5 - r8_4) ^ r8_4 u>> 0xc
            int32_t rdx_8 = (rdx_5 - r8_4 - rcx_16) ^ rcx_16 << 0x10
            int32_t r8_7 = (r8_4 - rdx_8 - rcx_16) ^ rdx_8 u>> 5
            int32_t rcx_19 = (rcx_16 - rdx_8 - r8_7) ^ r8_7 u>> 3
            int32_t rdx_11 = (rdx_8 - r8_7 - rcx_19) ^ rcx_19 << 0xa
            sub_141ec1980(&var_918, &var_948, 
                (r8_7 - rdx_11 - rcx_19) ^ rdx_11 u>> 0xf ^ *(var_920 + 8), var_920, var_928, 
                var_970_1)
            r12_1 += 0x18
        while (i s< arg4[1].d)
        
        r12 = arg2
    
    if (i_2 s> 0)
        int64_t i_1
        
        do
            void* rdx_14 = *r12
            int64_t* rcx_21 = r12[1]
            __builtin_memset(&var_960, 0, 0x18)
            sub_141ebfa20(rcx_21, rdx_14, &var_960, var_940)
            uint32_t rsi_1 = zx.d(rsi.b)
            int64_t var_950
            
            if ((var_950:4.b & 1) != 0)
                rsi_1 = 1
            
            var_968.d = rsi_1
            int64_t rax_24 = sub_140d3c6e0(&var_958)
            int32_t r10_1 = var_950.d
            var_928.q = rax_24
            uint32_t rdx_16 = (rax_24 u>> 4).d
            var_920.d = r10_1
            int32_t r8_14 = (0x9e3779b9 - rdx_16) ^ rdx_16 << 8
            int32_t rsi_4 = neg.d(r8_14 + rdx_16) ^ r8_14 u>> 0xd
            int32_t rdx_19 = (rdx_16 - r8_14 - rsi_4) ^ rsi_4 u>> 0xc
            int32_t r8_17 = (r8_14 - rdx_19 - rsi_4) ^ rdx_19 << 0x10
            int32_t rsi_7 = (rsi_4 - r8_17 - rdx_19) ^ r8_17 u>> 5
            int32_t rdx_22 = (rdx_19 - r8_17 - rsi_7) ^ rsi_7 u>> 3
            int32_t r8_20 = (r8_17 - rdx_22 - rsi_7) ^ rdx_22 << 0xa
            int32_t rsi_11 = (rsi_7 - r8_20 - rdx_22) ^ r8_20 u>> 0xf ^ r10_1
            int64_t* rbx_2
            
            if (var_110_1 == var_ec_1)
            label_141ebe81e:
                sub_141eb90f0(&var_918, &var_938)
                int64_t* r9_5 = var_930.q
                int32_t rax_43 = var_938.d
                char* var_970_2 = nullptr
                *r9_5 = var_928.o
                r9_5[2].d = 0
                r9_5[3].d = 0xffffffff
                sub_141ec1980(&var_918, &var_948, rsi_11, r9_5, rax_43, var_970_2)
                void* rbx_3 = &var_918
                
                if (var_118_1 != 0)
                    rbx_3 = var_118_1
                
                rbx_2 = rbx_3 + (sx.q(var_948) << 5)
            else
                void var_e8
                void* rax_41 = &var_e8
                
                if (var_68_1 != 0)
                    rax_41 = var_68_1
                
                int32_t rax_42 = *(rax_41 + ((sx.q(var_60_1 - 1) & sx.q(rsi_11)) << 2))
                
                if (rax_42 == 0xffffffff)
                    goto label_141ebe81e
                
                void* rdx_24 = &var_918
                
                if (var_118_1 != 0)
                    rdx_24 = var_118_1
                
                while (true)
                    int64_t rcx_29 = sx.q(rax_42) << 5
                    rbx_2 = rcx_29 + rdx_24
                    
                    if (*(rcx_29 + rdx_24 + 8) != r10_1 || *rbx_2 != rax_24)
                        rcx_29.b = 0
                    else
                        rcx_29.b = 1
                    
                    if (rcx_29.b != 0)
                        break
                    
                    rax_42 = rbx_2[3].d
                    
                    if (rax_42 == 0xffffffff)
                        goto label_141ebe81e
                
                if (rax_42 == 0xffffffff || rbx_2 == 0)
                    goto label_141ebe81e
            
            int64_t rax_47 = sx.q(rbx_2[2].d)
            
            if (rax_47.d != 0)
                int64_t rcx_34 = rax_47 * 3
                int64_t rax_49 = *arg4
                
                if ((*(rax_49 + (rcx_34 << 3) - 4) & 1) == 0 && (var_950:4.b & 1) != 0)
                    *(rax_49 + (rcx_34 << 3) - 0x18) = var_960.o
                    *(rax_49 + (rcx_34 << 3) - 8) = var_950
            else
                int64_t rsi_12 = sx.q(arg4[1].d)
                int32_t r14 = (rsi_12 + 1).d
                arg4[1].d = r14
                
                if (r14 s> *(arg4 + 0xc))
                    sub_1405a4df0(arg4)
                
                int64_t rax_48 = *arg4
                int64_t rcx_33 = rsi_12 * 3
                *(rax_48 + (rcx_33 << 3)) = var_960.o
                *(rax_48 + (rcx_33 << 3) + 0x10) = var_950
                rbx_2[2].d = r14
            
            rsi = zx.q(var_968.d)
            r12 = &r12[4]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    int32_t var_60_2 = 0
    
    if (var_68_1 != 0)
        sub_140a74f90(var_68_1)
    
    sub_141eb66a0(&var_918)
    result = zx.q(rsi.b)
else if (i_3.d s<= 0)
    result = zx.q(rsi.b)
else
    while (true)
        void* rdx_29 = *r12
        int64_t* rcx_39 = r12[1]
        __builtin_memset(&var_960, 0, 0x18)
        sub_141ebfa20(rcx_39, rdx_29, &var_960, arg3)
        int32_t r14_1 = 0
        char rax_50 = rsi.b
        int64_t var_950_1
        
        if ((var_950_1:4.b & 1) != 0)
            rax_50 = 1
        
        int32_t rbx_4 = arg4[1].d
        var_968.b = rax_50
        
        if (rbx_4 s<= 0)
        label_141ebe9e3:
            arg4[1].d = rbx_4 + 1
            
            if (rbx_4 + 1 s> *(arg4 + 0xc))
                sub_1405a4df0(arg4)
            
            int64_t rcx_42 = sx.q(rbx_4) * 3
            int64_t rax_55 = *arg4
            *(rax_55 + (rcx_42 << 3)) = var_960.o
            *(rax_55 + (rcx_42 << 3) + 0x10) = var_950_1
        else
            int64_t rsi_13 = 0
            
            while (true)
                int128_t* rbx_6 = *arg4 + rsi_13
                
                if (rbx_6[1].d == var_950_1.d && sub_14077a170(rbx_6 + 8, &var_958) != 0)
                    if ((*(rbx_6 + 0x14) & 1) == 0 && (var_950_1:4.b & 1) != 0)
                        *rbx_6 = var_960.o
                        rbx_6[1].q = var_950_1
                    
                    break
                
                rbx_4 = arg4[1].d
                r14_1 += 1
                rsi_13 += 0x18
                
                if (r14_1 s>= rbx_4)
                    goto label_141ebe9e3
        
        arg3 = var_940
        r12 = &r12[4]
        int64_t i_4 = i_2
        i_2 -= 1
        
        if (i_4 == 1)
            break
        
        rsi = zx.q(var_968.d)
    
    result = zx.q(var_968.b)
__security_check_cookie(rax_1 ^ &var_998)
return result
