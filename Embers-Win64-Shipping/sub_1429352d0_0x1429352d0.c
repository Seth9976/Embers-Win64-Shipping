// 函数: sub_1429352d0
// 地址: 0x1429352d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xa0)
void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
uint64_t r15 = zx.q(arg3)
char* r8 = arg2
int32_t var_90 = arg4

if (r15.d == 0xffffffff)
    r15 = -1
    
    do
        r15 += 1
    while (r8[r15] != 0)

int32_t rbx = arg5

if (rbx == 0)
    rbx = 0x2806

uint32_t var_98
uint64_t result
int32_t rax_2
uint64_t r13_2

if (arg4 == 0x1000)
    r13_2 = 0
    int32_t i = r15.d
    char* rsi_1 = r8
    rax_2 = 0
    
    if (r15.d != 0)
        do
            int32_t rax_3 = sub_1429342f0(rsi_1, i, &var_98)
            
            if (rax_3 s< 0)
                sub_1428a5670(0xd, 0x7a, 0x86, "crypto\asn1\a_mbstr.c", 0x55)
                result = 0xffffffff
                goto label_142935993
            
            i -= rax_3
            rsi_1 = &rsi_1[sx.q(rax_3)]
            r13_2 = zx.q(r13_2.d + 1)
            rax_2 = r13_2.d
        while (i != 0)
        
        arg4 = var_90
        r8 = arg2
    
    goto label_1429353dc

if (arg4 == 0x1001)
    r13_2 = zx.q(r15.d)
    rax_2 = r15.d
label_1429353dc:
    void var_68
    
    if (arg6 s> 0 && rax_2 s< arg6)
        sub_1428a5670(0xd, 0x7a, 0x98, "crypto\asn1\a_mbstr.c", 0x64)
        sub_1428b7080(&var_68, 0x20, "%ld", zx.q(arg6))
        sub_1428a4880(2)
        result = 0xffffffff
    else if (arg7 s<= 0 || rax_2 s<= arg7)
        int32_t r12_1 = r15.d
        char* rdi_1 = r8
        
        if (r15.d == 0)
        label_14293569d:
            int32_t rdi_2 = 0x1001
            int32_t result_1
            
            if ((rbx.b & 1) != 0)
                result_1 = 0x12
            else if ((rbx.b & 2) != 0)
                result_1 = 0x13
            else if ((rbx.b & 0x10) != 0)
                result_1 = 0x16
            else if ((rbx.b & 4) != 0)
                result_1 = 0x14
            else if (test_bit(rbx, 0xb))
                rdi_2 = 0x1002
                result_1 = 0x1e
            else if (not(test_bit(rbx, 8)))
                rdi_2 = 0x1000
                result_1 = 0xc
            else
                rdi_2 = 0x1004
                result_1 = 0x1c
            
            if (arg1 == 0)
                result = zx.q(result_1)
            else
                int32_t* rsi_5 = *arg1
                char var_94_1
                
                if (rsi_5 == 0)
                    var_94_1 = 1
                    int32_t* rax_16 = sub_1428f2e90(result_1)
                    rsi_5 = rax_16
                    
                    if (rax_16 != 0)
                        *arg1 = rax_16
                        goto label_1429357b6
                    
                    sub_1428a5670(0xd, 0x7a, 0x41, "crypto\asn1\a_mbstr.c", 0x98)
                    result = 0xffffffff
                else
                    var_94_1 = 0
                    sub_1428a6780(*(rsi_5 + 8))
                    rsi_5[1] = result_1
                    *(rsi_5 + 8) = 0
                    *rsi_5 = 0
                label_1429357b6:
                    
                    if (var_90 != rdi_2)
                        int64_t (* rbx_2)(int32_t arg1, int64_t* arg2)
                        
                        if (rdi_2 == 0x1000)
                            char* rbx_3 = arg2
                            r13_2 = 0
                            int32_t i_1 = r15.d
                            
                            if (r15.d != 0)
                                do
                                    uint32_t r8_5
                                    
                                    if (var_90 == 0x1001)
                                        r8_5 = zx.d(*rbx_3)
                                        rbx_3 = &rbx_3[1]
                                        i_1 -= 1
                                        var_98 = r8_5
                                    else if (var_90 == 0x1002)
                                        uint32_t rax_19 = zx.d(*rbx_3) << 8
                                        var_98 = rax_19
                                        uint32_t r8_6 = zx.d(rbx_3[1])
                                        rbx_3 = &rbx_3[2]
                                        r8_5 = r8_6 | rax_19
                                        var_98 = r8_5
                                        i_1 -= 2
                                    else if (var_90 != 0x1004)
                                        int32_t rax_25 = sub_1429342f0(rbx_3, i_1, &var_98)
                                        
                                        if (rax_25 s< 0)
                                            break
                                        
                                        r8_5 = var_98
                                        i_1 -= rax_25
                                        rbx_3 = &rbx_3[sx.q(rax_25)]
                                    else
                                        uint32_t rax_21 = zx.d(*rbx_3) << 0x18
                                        var_98 = rax_21
                                        uint32_t rcx_19 = zx.d(rbx_3[1]) << 0x10 | rax_21
                                        var_98 = rcx_19
                                        uint32_t rax_24 = zx.d(rbx_3[2]) << 8 | rcx_19
                                        var_98 = rax_24
                                        uint32_t r8_7 = zx.d(rbx_3[3])
                                        rbx_3 = &rbx_3[4]
                                        r8_5 = r8_7 | rax_24
                                        var_98 = r8_5
                                        i_1 -= 4
                                    
                                    r13_2 = zx.q(r13_2.d + sub_142934620(nullptr, 0xffffffff, r8_5))
                                while (i_1 != 0)
                            
                            rbx_2 = sub_142935a10
                        else if (rdi_2 == 0x1001)
                            rbx_2 = sub_1429359b0
                        else if (rdi_2 == 0x1002)
                            r13_2 = zx.q(r13_2.d * 2)
                            rbx_2 = sub_1429359c0
                        else if (rdi_2 != 0x1004)
                            r13_2 = 0
                            rbx_2 = nullptr
                        else
                            r13_2 = zx.q((r13_2 << 2).d)
                            rbx_2 = sub_1429359e0
                        
                        int64_t rax_29 = sub_1428a6730(sx.q((r13_2 + 1).d))
                        int64_t var_80 = rax_29
                        
                        if (rax_29 != 0)
                            *rsi_5 = r13_2.d
                            *(rsi_5 + 8) = var_80
                            int32_t var_a8
                            var_a8.q = &var_80
                            *(sx.q(r13_2.d) + var_80) = 0
                            sub_142935a50(arg2, r15.d, var_90, rbx_2, var_a8)
                            result = zx.q(result_1)
                        else
                            if (var_94_1 != rax_29.b)
                                sub_1428f2c80(rsi_5)
                            
                            sub_1428a5670(0xd, 0x7a, 0x41, "crypto\asn1\a_mbstr.c", 0xc0)
                            result = 0xffffffff
                    else if (sub_1428f2d50(rsi_5, arg2, r15.d) != 0)
                        result = zx.q(result_1)
                    else
                        sub_1428a5670(0xd, 0x7a, 0x41, "crypto\asn1\a_mbstr.c", 0xa0)
                        result = 0xffffffff
        else
            while (true)
                uint32_t rsi_2
                
                if (arg4 != 0x1001)
                    if (arg4 == 0x1002)
                        uint32_t rax_6 = zx.d(*rdi_1) << 8
                        var_98 = rax_6
                        uint32_t rsi_3 = zx.d(rdi_1[1])
                        rdi_1 = &rdi_1[2]
                        rsi_2 = rsi_3 | rax_6
                        var_98 = rsi_2
                        r12_1 -= 2
                        goto label_142935615
                    
                    if (arg4 == 0x1004)
                        uint32_t rax_8 = zx.d(*rdi_1) << 0x18
                        var_98 = rax_8
                        uint32_t rcx_10 = zx.d(rdi_1[1]) << 0x10 | rax_8
                        var_98 = rcx_10
                        uint32_t rax_11 = zx.d(rdi_1[2]) << 8 | rcx_10
                        var_98 = rax_11
                        uint32_t rsi_4 = zx.d(rdi_1[3])
                        rdi_1 = &rdi_1[4]
                        rsi_2 = rsi_4 | rax_11
                        var_98 = rsi_2
                        r12_1 -= 4
                        goto label_142935615
                    
                    int32_t rax_12 = sub_1429342f0(rdi_1, r12_1, &var_98)
                    
                    if (rax_12 s>= 0)
                        rsi_2 = var_98
                        r12_1 -= rax_12
                        rdi_1 = &rdi_1[sx.q(rax_12)]
                        goto label_142935615
                else
                    rsi_2 = zx.d(*rdi_1)
                    rdi_1 = &rdi_1[1]
                    r12_1 -= 1
                    var_98 = rsi_2
                label_142935615:
                    uint32_t r14_1 = rsi_2
                    
                    if (rsi_2 u> 0x7fffffff)
                        r14_1 = 0x7fffffff
                    
                    if ((rbx.b & 1) != 0 && sub_1428e4710(r14_1, 4) == 0 && r14_1 != 0x20)
                        rbx &= 0xfffffffe
                    
                    if ((rbx.b & 2) != 0 && sub_1428e4710(r14_1, 0x800) == 0)
                        rbx &= 0xfffffffd
                    
                    if ((rbx.b & 0x10) != 0 && (r14_1 & 0xffffff80) != 0)
                        rbx &= 0xffffffef
                    
                    if ((rbx.b & 4) != 0 && rsi_2 u> 0xff)
                        rbx &= 0xfffffffb
                    
                    if (test_bit(rbx, 0xb) && rsi_2 u> 0xffff)
                        rbx &= 0xfffff7ff
                    
                    if (rbx != 0)
                        arg4 = var_90
                        
                        if (r12_1 == 0)
                            goto label_14293569d
                        
                        continue
                sub_1428a5670(0xd, 0x7a, 0x7c, "crypto\asn1\a_mbstr.c", 0x73)
                result = 0xffffffff
                break
    else
        sub_1428a5670(0xd, 0x7a, 0x97, "crypto\asn1\a_mbstr.c", 0x6b)
        sub_1428b7080(&var_68, 0x20, "%ld", zx.q(arg7))
        sub_1428a4880(2)
        result = 0xffffffff
else if (arg4 == 0x1002)
    if ((r15.b & 1) == 0)
        r13_2 = zx.q(r15.d s>> 1)
    label_1429353d7:
        rax_2 = r13_2.d
        goto label_1429353dc
    
    sub_1428a5670(0xd, 0x7a, 0x81, "crypto\asn1\a_mbstr.c", 0x41)
    result = 0xffffffff
else if (arg4 == 0x1004)
    if ((r15.b & 3) == 0)
        r13_2 = zx.q(r15.d s>> 2)
        goto label_1429353d7
    
    sub_1428a5670(0xd, 0x7a, 0x85, "crypto\asn1\a_mbstr.c", 0x4a)
    result = 0xffffffff
else
    sub_1428a5670(0xd, 0x7a, 0xa0, "crypto\asn1\a_mbstr.c", 0x5f)
    result = 0xffffffff

label_142935993:
__security_check_cookie(rax_1 ^ &var_c8)
return result
