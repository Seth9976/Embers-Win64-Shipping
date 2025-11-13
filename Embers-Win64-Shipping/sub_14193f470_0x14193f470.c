// 函数: sub_14193f470
// 地址: 0x14193f470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const result = nullptr
int64_t r13 = 0
char* r12
char* var_28 = r12
int32_t r14 = 0
void* r15 = data_143eff640
int64_t var_48 = 0
int64_t var_40 = 0
int32_t arg_20 = 0
char arg_18 = 1
int32_t rbx_1

if (r15 != 0)
    char rax_1 = sub_14194ffc0(r15, &arg_20, arg1 + 0x450, &var_48) ^ 1
    arg_18 = rax_1
    
    if (rax_1 != 0)
        sub_141933f90(arg1)
    
    rbx_1 = arg_20
    r14 = var_40.d
    r13 = var_48

if (r15 == 0 || rbx_1 == 0)
    if (data_143eff5c6 == 0)
        TEB* gsbase
        
        if (data_143eff6d8
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143eff6d8)
            
            if (data_143eff6d8 == 0xffffffff)
                data_143eff6c8 = 0
                data_143eff6d0.q = 0
                atexit(sub_142cee5d0)
                _Init_thread_footer(&data_143eff6d8)
        
        int32_t i = data_143eff6d0
        
        if (i == 0)
            do
                int32_t rax_5 = data_143effd80()
                int64_t rbx_3 = sx.q(data_143eff6d0)
                int32_t rcx_7 = (rbx_3 + 1).d
                bool cond:1_1 = rcx_7 s<= data_143eff6d4
                data_143eff6d0 = rcx_7
                
                if (not(cond:1_1))
                    sub_1405a4cf0(&data_143eff6c8)
                
                *(data_143eff6c8 + (rbx_3 << 2)) = rax_5
                i = data_143eff6d0
            while (i s< 0x400)
        
        int64_t r10_1 = data_143eff6c8
        rbx_1 = *(r10_1 + (sx.q(i - 1) << 2))
        
        if (0 != 0)
            memmove(r10_1 + (sx.q(i - 1) << 2), r10_1 + (sx.q(i) << 2), 0 << 2)
            i = data_143eff6d0
        
        data_143eff6d0 = i - 1
        sub_1405dac90(&data_143eff6c8)
        arg_20 = rbx_1
    else
        int64_t rcx_2 = sx.q(data_1439c74d0)
        
        if (0x400 - rcx_2.d s<= 1)
            memcpy(&arg_20, &data_143efdd00 + (rcx_2 << 2), (0x400 - rcx_2.d) << 2)
            data_143f00488(0x400, &data_143efdd00)
            r12 = zx.q(1 - (0x400 - rcx_2.d))
            memcpy(&(&arg_20)[sx.q(0x400 - rcx_2.d)], &data_143efdd00, r12.d << 2)
            rbx_1 = arg_20
            data_1439c74d0 = r12.d
        else
            rbx_1 = *(&data_143efdd00 + (rcx_2 << 2))
            arg_20 = rbx_1
            data_1439c74d0 = (rcx_2 + 1).d

char r15_3 = arg_18

if (r15_3 != 0)
    int32_t rdx_6 = *(arg1 + 0xb0)
    
    if (rdx_6 != 0)
        uint64_t rcx_11 = zx.q(rbx_1)
        
        if (data_143eff5c6 == 0)
            data_143effd60(rcx_11, rdx_6)
        else
            data_143f00470(rcx_11, 1, zx.q(rdx_6))
        
        rbx_1 = arg_20
    
    int32_t rdx_7 = *(arg1 + 0x168)
    
    if (rdx_7 != 0)
        uint64_t rcx_12 = zx.q(rbx_1)
        
        if (data_143eff5c6 == 0)
            data_143effd60(rcx_12, rdx_7)
        else
            data_143f00470(rcx_12, 2, zx.q(rdx_7))
        
        rbx_1 = arg_20
    
    int32_t rdx_8 = *(arg1 + 0x220)
    
    if (rdx_8 != 0)
        uint64_t rcx_13 = zx.q(rbx_1)
        
        if (data_143eff5c6 == 0)
            data_143effd60(rcx_13, rdx_8)
        else
            data_143f00470(rcx_13, 4, zx.q(rdx_8))
        
        rbx_1 = arg_20
    
    int32_t rdx_9 = *(arg1 + 0x2d8)
    
    if (rdx_9 != 0)
        uint64_t rcx_14 = zx.q(rbx_1)
        
        if (data_143eff5c6 == 0)
            data_143effd60(rcx_14, rdx_9)
        else
            data_143f00470(rcx_14, 8, zx.q(rdx_9))
        
        rbx_1 = arg_20
    
    int32_t rdx_10 = *(arg1 + 0x390)
    
    if (rdx_10 != 0)
        uint64_t rcx_15 = zx.q(rbx_1)
        
        if (data_143eff5c6 == 0)
            data_143effd60(rcx_15, rdx_10)
        else
            data_143f00470(rcx_15, 0x10, zx.q(rdx_10))
        
        rbx_1 = arg_20
    
    int32_t rdx_11 = *(arg1 + 0x448)
    
    if (rdx_11 != 0)
        uint64_t rcx_16 = zx.q(rbx_1)
        
        if (data_143eff5c6 == 0)
            data_143effd60(rcx_16, rdx_11)
        else
            data_143f00470(rcx_16, 0x20, zx.q(rdx_11))
        
        rbx_1 = arg_20
    
    if (data_143eff5c6 != 0)
        goto label_14193f8a7
    
    int32_t rax_12 = data_143f0f1a0
    
    if (rax_12 u> 0x18 || not(test_bit(0x100a040, rax_12)))
        if (*(arg1 + 0xb0) != 0)
            sub_141931b40(0x8b31, rbx_1, *(arg1 + 0x98))
            rbx_1 = arg_20
        
        if (*(arg1 + 0x168) != 0)
            sub_141931b40(0x8b30, rbx_1, *(arg1 + 0x150))
            rbx_1 = arg_20
    
    if (data_143eff640 != 0)
        data_143f00468(zx.q(rbx_1), 0x8257, 1)
    else
        sub_14193d1f0()
        
        if (data_1439c77d0 != 0)
            data_143f00468(zx.q(arg_20), 0x8257, 1)
    
    data_143effe50(zx.q(arg_20))
    rbx_1 = arg_20
    goto label_14193f828

label_14193f828:

if (data_143eff5c6 != 0)
    goto label_14193f8a7

arg_18.d = 0
data_143effdd8(zx.q(rbx_1), 0x8b82, &arg_18)
int64_t* var_58

if (arg_18.d == 1)
label_14193f8a1:
    rbx_1 = arg_20
label_14193f8a7:
    
    if (r15_3 == 0)
    label_14193fa80:
        
        if (data_143eff5c6 == 0)
            data_143effe60(zx.q(rbx_1))
        else
            data_143f00478(zx.q(rbx_1))
    else if (data_143eff5c6 != 0)
        data_143f00478(zx.q(rbx_1))
    else
        data_143eff66c += 1
        void* r15_4 = data_143eff640
        
        if (r15_4 != 0 && *(r15_4 + 0x1c8) - 1 u<= 1)
            EnterCriticalSection(&data_143eff810)
            var_58 = *(r15_4 + 0x148)
            
            if (*sub_14193a5e0(r15_4 + 0x90, &arg_18, arg1 + 0x450) == 0xffffffff)
                r12 = data_143eff758
                int64_t rcx_24
                
                if (data_143de5480 == 0)
                    rcx_24 = 0
                else
                    rcx_24.b = GetCurrentThreadId() != data_143de5470
                
                char rax_18
                
                if (*(r12 + (rcx_24 << 2)) == 0)
                    arg_18.d = 0xffffffff
                    data_143effdd8(rbx_1, 0x8741, &arg_18)
                    int32_t rdx_16 = arg_18.d
                    
                    if (rdx_16 s<= 0)
                        rax_18 = 0
                    else
                        if (rdx_16 + 4 s> r14)
                            r14 = rdx_16 + 4
                            var_40.d = rdx_16 + 4
                            
                            if (rdx_16 + 4 s> var_40:4.d)
                                sub_1405daba0(&var_48)
                            label_14193f9dc:
                                rdx_16 = arg_18.d
                                r13 = var_48
                                r14 = var_40.d
                        else if (rdx_16 + 4 s< r14)
                            int32_t rax_21 = r14 - (rdx_16 + 4)
                            
                            if (r14 != rdx_16 + 4)
                                int32_t r14_1 = r14 - rax_21
                                
                                if (r14_1 != rdx_16 + 4)
                                    memmove(sx.q(rdx_16 + 4) + r13, 
                                        sx.q(rax_21 + rdx_16 + 4) + r13, r14_1 - (rdx_16 + 4))
                                
                                var_40.d = r14_1
                                sub_1405dac10(&var_48)
                                goto label_14193f9dc
                        
                        data_143f004d0(zx.q(rbx_1), rdx_16, &arg_18, r13, r13 + 4)
                        rax_18 = 1
                else
                    rax_18 = sub_14193c1f0(rbx_1, &var_48)
                    r14 = var_40.d
                    r13 = var_48
                
                if (rax_18 == 0)
                    sub_140af98a0("Unknown", 0x1296, 
                        AppendProgramBinaryFile Binary program returned 0 bytes!", sub_140926420(
                        &data_143f02598, sub_140b58170(&arg_18, "FailedBinaryProgramWrite", 1)))
                    sub_140afbb40()
                else
                    sub_1419304c0(r15_4, var_58, &var_48, arg1 + 0x450)
                    r14 = var_40.d
                    r13 = var_48
            
            LeaveCriticalSection(&data_143eff810)
            rbx_1 = arg_20
            goto label_14193fa80
        
        data_143effe60(zx.q(rbx_1))
    
    if (*(arg1 + 0x2d8) == 0 || *(arg1 + 0x390) == 0)
        r12.b = 0
    else
        r12.b = 1
    
    void* result_2 = j_sub_140a82f30(0x670)
    void* const result_1 = result_2
    
    if (result_2 == 0)
        result_1 = nullptr
    else
        int32_t rbx_6 = arg_20
        sub_14192a1e0(result_2)
        sub_14194d8f0(result_1, arg1)
        *(result_1 + 0x5e8) = rbx_6
        *(result_1 + 0x5ec) = r12.b
    
    sub_14193d1f0()
    
    if (data_1439c77d0 != 0)
        int64_t rbx_7 = data_143eff770
        int64_t rcx_38
        
        if (data_143de5480 == 0)
            rcx_38 = 0
        else
            rcx_38.b = GetCurrentThreadId() != data_143de5470
        
        if (*(rbx_7 + (rcx_38 << 2)) != 0 && r14 != 0 && result_1 + 0x658 != &var_48)
            int64_t rcx_39 = *(result_1 + 0x658)
            
            if (rcx_39 != 0)
                sub_140a74f90(rcx_39)
            
            *(result_1 + 0x658) = r13
            r13 = 0
            *(result_1 + 0x660) = r14
            *(result_1 + 0x664) = var_40:4.d
    
    sub_141935520(result_1)
    result = result_1
else
    sub_140a2e390(&var_58, Failed to link program. Current total programs:%d", zx.q(data_143eff66c))
    int64_t* rcx_21 = var_58
    
    if (rcx_21 != 0)
        sub_140a74f90(rcx_21)
    
    int64_t rbx_4 = data_143eff788
    int64_t rcx_22
    
    if (data_143de5480 == 0)
        rcx_22 = 0
    else
        rcx_22.b = GetCurrentThreadId() != data_143de5470
    
    if (*(rbx_4 + (rcx_22 << 2)) == 1)
        goto label_14193f8a1

if (r13 != 0)
    sub_140a74f90(r13)

return result
