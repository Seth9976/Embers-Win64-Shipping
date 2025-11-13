// 函数: sub_1429c1960
// 地址: 0x1429c1960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject

if (arg3 s< 0x80)
    sub_14297ab20(&exceptionObject, 
        "Error choosing Huffman decoder implementation (insufficient number of bits).")
    _CxxThrowException(&exceptionObject, &data_1439465c8)
    noreturn

void* r8 = &arg2[0x10]
int32_t r10_1 = arg3 - 0x80
int32_t r11 = 0x40
uint64_t r9_14 = (((
    (((zx.q(*arg2) << 8 | zx.q(arg2[1])) << 8 | zx.q(arg2[2])) << 8 | zx.q(arg2[3])) << 8
    | zx.q(arg2[4])) << 8 | zx.q(arg2[5])) << 8 | zx.q(arg2[6])) << 8 | zx.q(arg2[7])
int32_t rbx = 0x40
int32_t r14 = 0
uint64_t result = (((
    (((zx.q(arg2[8]) << 8 | zx.q(arg2[9])) << 8 | zx.q(arg2[0xa])) << 8 | zx.q(arg2[0xb])) << 8
    | zx.q(arg2[0xc])) << 8 | zx.q(arg2[0xd])) << 8 | zx.q(arg2[0xe])) << 8 | zx.q(arg2[0xf])

if (arg5 s> 0)
    do
        uint32_t i_1
        int32_t rdi_1
        
        if (*(arg1 + 0x53c8) u> r9_14)
            if (r11 s< 0x40)
                r9_14 |= result u>> r11.b
                int32_t rdi_2 = 0x40 - r11
                
                if (rbx s< rdi_2)
                    rdi_2 -= rbx
                    
                    if (r10_1 s< 0x40)
                        result = 0
                        int64_t r11_1 = 0x38
                        bool cond:1_1 = r10_1 s< 0
                        
                        if (r10_1 s> 0)
                            uint64_t i_5 = zx.q(((r10_1 - 1) u>> 3) + 1)
                            r10_1 += neg.d(((r10_1 - 1) u>> 3) + 1) << 3
                            uint64_t i
                            
                            do
                                uint64_t rdx_3 = zx.q(*r8) << r11_1.b
                                r8 += 1
                                result |= rdx_3
                                r11_1 -= 8
                                i = i_5
                                i_5 -= 1
                            while (i != 1)
                            cond:1_1 = r10_1 s< 0
                        
                        if (cond:1_1)
                            r10_1 = 0
                    else
                        uint64_t rcx_17 = zx.q(*(r8 + 7))
                        uint64_t rax_35 = ((((
                            ((zx.q(*(r8 + 1)) | zx.q(*r8) << 8) << 8 | zx.q(*(r8 + 2))) << 8
                            | zx.q(*(r8 + 3))) << 8 | zx.q(*(r8 + 4))) << 8 | zx.q(*(r8 + 5))) << 8
                            | zx.q(*(r8 + 6))) << 8
                        r8 += 8
                        result = rax_35 | rcx_17
                        r10_1 -= 0x40
                    
                    rbx = 0x40
                    r9_14 |= result u>> (0x40 - rdi_2.b)
                
                uint64_t result_1 = result << rdi_2.b
                result = 0
                int32_t temp0_1 = rbx
                rbx -= rdi_2
                r11 = 0x40
                
                if (temp0_1 != rdi_2)
                    result = result_1
            
            void* rcx_25 = &arg1[0x20]
            i_1 = 0xd
            int64_t rdi_3 = 0xd
            
            if (*rcx_25 u> r9_14)
                while (i_1 s<= zx.d(*(arg1 + 9)))
                    rcx_25 += 8
                    i_1 += 1
                    rdi_3 += 1
                    
                    if (*rcx_25 u<= r9_14)
                        break
            
            if (i_1 s> zx.d(*(arg1 + 9)))
                sub_14297ab20(&exceptionObject, "Huffman decode error (Decoded an invalid symbol).")
                _CxxThrowException(&exceptionObject, &data_1439465c8)
                noreturn
            
            int64_t rsi_4 = (r9_14 u>> (0x40 - i_1.b)) + *(arg1 + (rdi_3 << 3) + 0x1f0)
            
            if (rsi_4 u>= sx.q(arg1[1]))
                sub_14297ab20(&exceptionObject, "Huffman decode error (Decoded an invalid symbol).")
                _CxxThrowException(&exceptionObject, &data_1439465c8)
                noreturn
            
            rdi_1 = *(*(arg1 + 0x10) + (rsi_4 << 2))
        else
            uint64_t rcx_8 = r9_14 u>> 0x34
            i_1 = zx.d(*(rcx_8 + arg1 + 0x43c8))
            rdi_1 = arg1[rcx_8 + 0xf2]
        
        r11 -= i_1
        r9_14 <<= i_1.b
        
        if (rdi_1 != *arg1)
            int64_t rcx_50 = sx.q(r14)
            r14 += 1
            *(arg4 + (rcx_50 << 1)) = rdi_1.w
        else
            if (r11 s< 8)
                r9_14 |= result u>> r11.b
                int32_t rdi_4 = 0x40 - r11
                
                if (rbx s< rdi_4)
                    rdi_4 -= rbx
                    
                    if (r10_1 s< 0x40)
                        result = 0
                        int64_t r11_2 = 0x38
                        bool cond:5_1 = r10_1 s< 0
                        
                        if (r10_1 s> 0)
                            uint64_t i_6 = zx.q(((r10_1 - 1) u>> 3) + 1)
                            r10_1 += neg.d(((r10_1 - 1) u>> 3) + 1) << 3
                            uint64_t i_2
                            
                            do
                                uint64_t rdx_10 = zx.q(*r8) << r11_2.b
                                r8 += 1
                                result |= rdx_10
                                r11_2 -= 8
                                i_2 = i_6
                                i_6 -= 1
                            while (i_2 != 1)
                            cond:5_1 = r10_1 s< 0
                        
                        if (cond:5_1)
                            r10_1 = 0
                    else
                        uint64_t rcx_39 = zx.q(*(r8 + 7))
                        uint64_t rax_48 = ((((
                            ((zx.q(*(r8 + 1)) | zx.q(*r8) << 8) << 8 | zx.q(*(r8 + 2))) << 8
                            | zx.q(*(r8 + 3))) << 8 | zx.q(*(r8 + 4))) << 8 | zx.q(*(r8 + 5))) << 8
                            | zx.q(*(r8 + 6))) << 8
                        r8 += 8
                        result = rax_48 | rcx_39
                        r10_1 -= 0x40
                    
                    rbx = 0x40
                    r9_14 |= result u>> (0x40 - rdi_4.b)
                
                uint64_t result_2 = result << rdi_4.b
                result = 0
                int32_t temp2_1 = rbx
                rbx -= rdi_4
                r11 = 0x40
                
                if (temp2_1 != rdi_4)
                    result = result_2
            
            uint32_t i_9 = (r9_14 u>> 0x38).d
            
            if (r14 s< 1)
                sub_14297ab20(&exceptionObject, 
                    "Huffman decode error (RLE code with no previous symbol).")
                _CxxThrowException(&exceptionObject, &data_1439465c8)
                noreturn
            
            int32_t r15_1 = i_9 + r14
            
            if (r15_1 s> arg5)
                sub_14297ab20(&exceptionObject, 
                    "Huffman decode error (Symbol run beyond expected output buffer length).")
                _CxxThrowException(&exceptionObject, &data_1439465c8)
                noreturn
            
            if (i_9 == 0)
                sub_14297ab20(&exceptionObject, "Huffman decode error (Invalid RLE length)")
                _CxxThrowException(&exceptionObject, &data_1439465c8)
                noreturn
            
            uint64_t i_8 = zx.q(i_9)
            int16_t* rdx_14 = arg4 + (sx.q(r14) << 1)
            uint64_t i_3
            
            do
                *rdx_14 = rdx_14[-1]
                rdx_14 = &rdx_14[1]
                i_3 = i_8
                i_8 -= 1
            while (i_3 != 1)
            r9_14 <<= 8
            r11 -= 8
            r14 = r15_1
        
        if (r11 s< 0xc)
            r9_14 |= result u>> r11.b
            int32_t rdi_5 = 0x40 - r11
            
            if (rbx s< rdi_5)
                rdi_5 -= rbx
                
                if (r10_1 s< 0x40)
                    result = 0
                    int64_t r11_3 = 0x38
                    bool cond:4_1 = r10_1 s< 0
                    
                    if (r10_1 s> 0)
                        uint64_t i_7 = zx.q(((r10_1 - 1) u>> 3) + 1)
                        r10_1 += neg.d(((r10_1 - 1) u>> 3) + 1) << 3
                        uint64_t i_4
                        
                        do
                            uint64_t rdx_18 = zx.q(*r8) << r11_3.b
                            r8 += 1
                            result |= rdx_18
                            r11_3 -= 8
                            i_4 = i_7
                            i_7 -= 1
                        while (i_4 != 1)
                        cond:4_1 = r10_1 s< 0
                    
                    if (cond:4_1)
                        r10_1 = 0
                else
                    uint64_t rcx_59 = zx.q(*(r8 + 7))
                    uint64_t rax_61 = ((((
                        ((zx.q(*(r8 + 1)) | zx.q(*r8) << 8) << 8 | zx.q(*(r8 + 2))) << 8
                        | zx.q(*(r8 + 3))) << 8 | zx.q(*(r8 + 4))) << 8 | zx.q(*(r8 + 5))) << 8
                        | zx.q(*(r8 + 6))) << 8
                    r8 += 8
                    result = rax_61 | rcx_59
                    r10_1 -= 0x40
                
                rbx = 0x40
                r9_14 |= result u>> (0x40 - rdi_5.b)
            
            uint64_t result_3 = result << rdi_5.b
            result = 0
            int32_t temp4_1 = rbx
            rbx -= rdi_5
            r11 = 0x40
            
            if (temp4_1 != rdi_5)
                result = result_3
    while (r14 s< arg5)

if (r10_1 == 0)
    __security_check_cookie(rax_1 ^ &var_c8)
    return result

sub_14297ab20(&exceptionObject, 
    "Huffman decode error (Compressed data remains after filling expected output buffer).")
_CxxThrowException(&exceptionObject, &data_1439465c8)
noreturn
