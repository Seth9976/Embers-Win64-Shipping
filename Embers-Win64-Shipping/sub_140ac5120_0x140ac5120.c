// 函数: sub_140ac5120
// 地址: 0x140ac5120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
int32_t* result
char* rcx_4

if (*(arg1 + 0x878) == *(arg1 + 0x8a4))
label_140ac51e0:
    TEB* gsbase
    
    if (data_143dba358
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143dba358)
        
        if (data_143dba358 == 0xffffffff)
            sub_140b58260(&data_143dba350, u"BootGlobal", 1)
            _Init_thread_footer(&data_143dba358)
    
    int64_t rbx_1 = data_143dba350
    result = zx.q(*(arg1 + 0x878))
    arg_18 = rbx_1
    
    if (result.d != *(arg1 + 0x8a4))
        int32_t rax_8 = sub_140b5ead0(rbx_1.d) + arg_18:4.d
        void* r8_2 = arg1 + 0x8a8
        void* rcx_8 = *(r8_2 + 8)
        
        if (rcx_8 != 0)
            r8_2 = rcx_8
        
        result = zx.q(*(r8_2 + (((sx.q(*(arg1 + 0x8b8)) - 1) & sx.q(rax_8)) << 2)))
        
        if (result.d != 0xffffffff)
            int64_t r8_3 = *(arg1 + 0x870)
            int64_t rdx_7
            
            while (true)
                rdx_7 = sx.q(result.d)
                int64_t rcx_9 = rdx_7 * 5
                
                if (*(r8_3 + (rcx_9 << 2)) == rbx_1)
                    break
                
                result = zx.q(*(r8_3 + (rcx_9 << 2) + 0xc))
                
                if (result.d == 0xffffffff)
                    goto label_140ac52a9
            
            if (result.d != 0xffffffff)
                result = rdx_7 * 5
                void* rcx_10 = r8_3 + (result << 2)
                
                if (rcx_10 != 0)
                    rcx_4 = rcx_10 + 8
                    
                    if (rcx_10 != -8)
                        goto label_140ac5281
else
    int32_t rax_2 = sub_140b5ead0(arg3.d) + arg_18:4.d
    void* r8 = arg1 + 0x8a8
    void* rcx_1 = *(r8 + 8)
    
    if (rcx_1 != 0)
        r8 = rcx_1
    
    int32_t rax_4 = *(r8 + (((sx.q(*(arg1 + 0x8b8)) - 1) & sx.q(rax_2)) << 2))
    
    if (rax_4 == 0xffffffff)
        goto label_140ac51e0
    
    int64_t r8_1 = *(arg1 + 0x870)
    int64_t rdx_3
    
    while (true)
        rdx_3 = sx.q(rax_4)
        int64_t rcx_2 = rdx_3 * 5
        
        if (*(r8_1 + (rcx_2 << 2)) == arg3)
            break
        
        rax_4 = *(r8_1 + (rcx_2 << 2) + 0xc)
        
        if (rax_4 == 0xffffffff)
            goto label_140ac51e0
    
    if (rax_4 == 0xffffffff)
        goto label_140ac51e0
    
    result = rdx_3 * 5
    void* rcx_3 = r8_1 + (result << 2)
    
    if (rcx_3 == 0)
        goto label_140ac51e0
    
    rcx_4 = rcx_3 + 8
    
    if (rcx_3 == -8)
        goto label_140ac51e0
    
label_140ac5281:
    uint8_t r9_1 = *rcx_4
    uint8_t rcx_11 = arg2[3]
    uint8_t r8_4 = r9_1 & 0xf
    arg2[2] = r9_1
    uint8_t rdx_8 = r8_4
    
    if (rcx_11 u<= r8_4)
        rdx_8 = rcx_11
    
    arg2[1] = r9_1 u>> 7
    *arg2 = rdx_8
label_140ac52a9:
char rbx_2 = *arg2

if (rbx_2 == 0)
    return result

int32_t var_18
sub_140a9e570(arg1 + 0x8c0, &var_18)
int64_t* var_10
var_10[1].b = rbx_2
*var_10 = arg3
*(var_10 + 0xc) = 0xffffffff
return sub_14095c550(arg1 + 0x8c0, &arg_18, (arg3 u>> 0x20).d + sub_140b5ead0(arg3.d), var_10, 
    var_18, nullptr)
