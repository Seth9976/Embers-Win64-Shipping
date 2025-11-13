// 函数: sub_14294d5c0
// 地址: 0x14294d5c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
__chkstk(0x98)
int32_t rbx = 0
int64_t* r15 = nullptr
int64_t* rax = sub_142891590(arg1)
int64_t* var_80 = nullptr
int64_t* var_70 = nullptr
void* var_90 = nullptr
int64_t rax_1 = sub_14294d440(rax)
int32_t rax_2 = sub_1428916c0(arg2)
int128_t* rdi_1 = nullptr
int64_t* rsi = nullptr
char* r14_1

if (rax_1 == 0 || rax_2 s<= 0)
    r14_1 = nullptr
    memset(arg5, 0, *arg6)
else
    memset(arg5, 0xff, *arg6)
    int64_t* rax_3 = sub_1428c41c0(nullptr, &arg_18, arg4, &data_143545ef0)
    var_70 = rax_3
    int32_t var_b8_1
    int32_t rcx_3
    int32_t rdx_1
    int32_t r8_3
    
    if (rax_3 != 0)
        int32_t* rcx_12 = rax_3[2]
        
        if (*rcx_12 != rax_2)
            rdx_1 = 0x66
            var_b8_1 = 0x12a
            rcx_3 = 0x35
            r8_3 = 0x68
            goto label_14294d69c
        
        int32_t* rax_6 = rax_3[3]
        int64_t rcx_13 = *(rcx_12 + 8)
        int64_t r14_2 = *(rax_6 + 8)
        int64_t rbp_1 = sx.q(*rax_6)
        int64_t* rax_7 = sub_1428d8d60()
        r15 = rax_7
        
        if (rax_7 == 0)
            var_b8_1 = 0x134
            rdx_1 = (rax_7 + 0x66).d
            rcx_3 = (rax_7 + 0x35).d
            r8_3 = (rax_7 + 0x41).d
            goto label_14294d69c
        
        sub_1428d8e50(r15)
        int64_t* rax_8 = sub_1428d8ba0(r15)
        int64_t* rax_9 = sub_1428d8ba0(r15)
        
        if (rax_9 == 0)
            var_b8_1 = 0x13d
            rdx_1 = (rax_9 + 0x66).d
            rcx_3 = (rax_9 + 0x35).d
            r8_3 = (rax_9 + 3).d
            goto label_14294d69c
        
        rdi_1 = sub_1428a6a70(rbp_1)
        var_90 = sub_1428a6a70(rax_1 * 2)
        char* rax_13 = sub_1428a6a70(sx.q(rax_2))
        int32_t var_b8_2
        int32_t r8_11
        
        if (rdi_1 == 0 || var_90 == 0 || rax_13 == 0)
            var_b8_2 = 0x146
        label_14294d880:
            r8_11 = 0x41
        label_14294d895:
            sub_1428a5670(0x35, 0x66, r8_11, "crypto\sm2\sm2_crypt.c", var_b8_2)
            r14_1 = rax_13
            memset(arg5, 0, *arg6)
        else
            int64_t* rax_14 = sub_1428bfa80(rax)
            var_80 = rax_14
            
            if (rax_14 == 0)
                var_b8_2 = 0x14c
                goto label_14294d880
            
            int32_t var_b8
            var_b8.q = r15
            var_70[1]
            
            if (sub_1428bfc10(rax, rax_14, *var_70) == 0)
            label_14294dbbb:
                var_b8_2 = 0x155
                r8_11 = 0x10
                goto label_14294d895
            
            int64_t* var_b0_1 = r15
            var_b8.q = sub_142896660(arg1)
            
            if (sub_1428bfa20(rax, var_80, nullptr, var_80, var_b8) == 0)
                goto label_14294dbbb
            
            var_b8.q = r15
            
            if (sub_1428bf6e0(rax, var_80, rax_8, rax_9, var_b8) == 0)
                goto label_14294dbbb
            
            if (sub_14288fbc0(rax_8, var_90, rax_1.d) s< 0)
            label_14294dba8:
                var_b8_2 = 0x15d
                r8_11 = 0x44
                goto label_14294d895
            
            void* rax_22 = var_90 + rax_1
            
            if (sub_14288fbc0(rax_9, rax_22, rax_1.d) s< 0)
                goto label_14294dba8
            
            if (sub_14294c550(rdi_1, rbp_1, var_90, rax_1 * 2, 0, 0, arg2) == 0)
                goto label_14294dba8
            
            int32_t r9_4 = 0
            
            if (rbp_1.d != 0 && rbp_1.d u>= 0x40)
                int64_t rcx_29 = sx.q((rbp_1 - 1).d)
                int64_t rdx_14 = rcx_29 + arg5
                
                if ((arg5 u> rcx_29 + rdi_1 || rdx_14 u< rdi_1)
                        && (arg5 u> rcx_29 + r14_2 || rdx_14 u< r14_2))
                    int32_t rax_30 = rbp_1.d & 0x8000003f
                    
                    if (rax_30 s< 0)
                        rax_30 = ((rax_30 - 1) | 0xffffffc0) + 1
                    
                    int128_t* rdx_16 = r14_2 - rdi_1
                    int128_t* rcx_30 = rdi_1
                    int128_t* r8_18 = arg5 - rdi_1
                    
                    do
                        r9_4 += 0x40
                        int128_t zmm2_1 = *(rdx_16 + rcx_30 + 0x10)
                        int128_t zmm0_1 = rcx_30[1]
                        *(r8_18 + rcx_30) = *(rdx_16 + rcx_30) ^ *rcx_30
                        int128_t zmm1_1 = *(rdx_16 + rcx_30 + 0x20)
                        zmm2_1 ^= zmm0_1
                        zmm0_1 = rcx_30[2]
                        *(r8_18 + rcx_30 + 0x10) = zmm2_1
                        zmm2_1 = *(rdx_16 + rcx_30 + 0x30)
                        zmm1_1 ^= zmm0_1
                        zmm0_1 = rcx_30[3]
                        *(r8_18 + rcx_30 + 0x20) = zmm1_1
                        *(r8_18 + rcx_30 + 0x30) = zmm2_1 ^ zmm0_1
                        rcx_30 = &rcx_30[4]
                    while (rcx_30 - rdi_1 != sx.q(rbp_1.d - rax_30))
            
            int64_t rax_35 = sx.q(r9_4)
            
            if (rax_35 != rbp_1)
                void* rcx_31 = rax_35 + rdi_1
                int64_t i_1 = rbp_1 - rax_35
                int64_t i
                
                do
                    *(arg5 - rdi_1 + rcx_31) = *(r14_2 - rdi_1 + rcx_31) ^ *rcx_31
                    rcx_31 += 1
                    i = i_1
                    i_1 -= 1
                while (i != 1)
            
            int64_t* rax_37 = sub_142891ee0()
            rsi = rax_37
            
            if (rax_37 == 0)
                var_b8_2 = 0x166
                goto label_14294d880
            
            if (sub_142891980(rsi, arg2) == 0)
            label_14294db7e:
                r14_1 = rax_13
                sub_1428a5670(0x35, 0x66, 6, "crypto\sm2\sm2_crypt.c", 0x16f)
                memset(arg5, 0, *arg6)
            else
                if (sub_142891c10(rsi, var_90, rax_1) == 0)
                    goto label_14294db7e
                
                if (sub_142891c10(rsi, arg5, rbp_1) == 0)
                    goto label_14294db7e
                
                r14_1 = rax_13
                
                if (sub_142891c10(rsi, rax_22, rax_1) == 0)
                    sub_1428a5670(0x35, 0x66, 6, "crypto\sm2\sm2_crypt.c", 0x16f)
                    memset(arg5, 0, *arg6)
                else if (sub_1428917e0(rsi, r14_1, nullptr) == 0)
                    sub_1428a5670(0x35, 0x66, 6, "crypto\sm2\sm2_crypt.c", 0x16f)
                    memset(arg5, 0, *arg6)
                else if (sub_1428bc500(r14_1, rcx_13, sx.q(rax_2)) == 0)
                    rbx = 1
                    *arg6 = rbp_1
                else
                    sub_1428a5670(0x35, 0x66, 0x66, "crypto\sm2\sm2_crypt.c", 0x174)
                    memset(arg5, 0, *arg6)
    else
        var_b8_1 = 0x125
        rdx_1 = 0x66
        rcx_3 = 0x35
        r8_3 = 0x64
    label_14294d69c:
        sub_1428a5670(rcx_3, rdx_1, r8_3, "crypto\sm2\sm2_crypt.c", var_b8_1)
        r14_1 = nullptr
        memset(arg5, 0, *arg6)

sub_1428a6780(rdi_1)
sub_1428a6780(var_90)
sub_1428a6780(r14_1)
sub_1428bf6a0(var_80)
sub_1428d8ae0(r15)
sub_1428c3d60(var_70, &data_143545ef0)
sub_142891ea0(rsi)
return zx.q(rbx)
