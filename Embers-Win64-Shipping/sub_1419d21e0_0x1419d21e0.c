// 函数: sub_1419d21e0
// 地址: 0x1419d21e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = nullptr
int64_t* rdx = arg2[1]
int32_t result_1 = 0
int32_t arg_10 = 0
int32_t* r8 = *rdx

if (&r8[1] u> rdx[1])
    int32_t* rdx_1 = &result_1
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, rdx_1, arg3)
    else
        (*(*arg2 + 0x150))(arg2, rdx_1, 4)
else
    result_1 = *r8
    *rdx += 4

int64_t* rcx_1 = arg2[1]
int32_t* rdx_2 = *rcx_1

if (&rdx_2[1] u> rcx_1[1])
    int32_t* rdx_3 = &arg_10
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, rdx_3, arg3)
    else
        (*(*arg2 + 0x150))(arg2, rdx_3, 4)
else
    arg_10 = *rdx_2
    *rcx_1 += 4

*(arg1 + 0x30) = 0
uint64_t result = zx.q(result_1)

if (result.d s> *(arg1 + 0x34))
    sub_1405c5570(arg1 + 0x28, result.d)
    result = zx.q(result_1)

uint64_t rsi = zx.q(data_14401b1a0)
int32_t r15 = 0
int64_t* var_48
TEB* gsbase

if (result.d s> 0)
    int32_t* r12_2 = *(gsbase->ThreadLocalStoragePointer + (rsi << 3)) + 0x14
    
    do
        int64_t* rcx_4 = arg2[1]
        var_48 = r14
        int64_t* rdx_5 = *rcx_4
        
        if (&rdx_5[1] u> rcx_4[1])
            int64_t* rdx_6 = &var_48
            
            if ((*(arg2 + 0x29) & 0x20) != 0)
                sub_140b540d0(arg2, rdx_6, arg3)
            else
                (*(*arg2 + 0x150))(arg2, rdx_6, 8)
        else
            var_48 = *rdx_5
            *rcx_4 += 8
        
        if (data_143f21344 s> *r12_2)
            _Init_thread_header(&data_143f21344)
            
            if (data_143f21344 == 0xffffffff)
                data_1439c94a0 = r14
                data_1439c94a8.q = 0
                data_1439c94c0 = r14
                data_1439c94c8 = r14.d
                data_1439c94cc = 0x80
                data_1439c94b0 = 0
                data_1439c94b8 = 0
                data_1439c94d0 = 0xffffffff
                data_1439c94d4 = r14.d
                data_1439c94e0 = r14
                data_1439c94e8 = r14.d
                atexit(sub_142cf33b0)
                _Init_thread_footer(&data_143f21344)
        
        int64_t* rcx_7
        
        if (data_1439c94a8 == data_1439c94d4)
        label_1419d23aa:
            rcx_7 = r14
        else
            int64_t* rcx_6 = var_48
            void* rax_16 = &data_1439c94d8
            void* rdx_10 = data_1439c94e0
            
            if (rdx_10 != 0)
                rax_16 = rdx_10
            
            int32_t rax_17 = *(rax_16
                + ((sx.q((rcx_6 u>> 0x20).d * 0x17 + rcx_6.d) & sx.q(data_1439c94e8 - 1)) << 2))
            
            if (rax_17 == 0xffffffff)
            label_1419d23aa_1:
                rcx_7 = r14
            else
                int64_t r9_1 = data_1439c94a0
                int64_t r8_4
                
                while (true)
                    r8_4 = sx.q(rax_17) * 0x18
                    
                    if (*(r8_4 + r9_1) == rcx_6)
                        break
                    
                    rax_17 = *(r8_4 + r9_1 + 0x10)
                    
                    if (rax_17 == 0xffffffff)
                        goto label_1419d23aa_2
                
                rcx_7 = r8_4 + r9_1
                
                if (rax_17 == 0xffffffff)
                label_1419d23aa_2:
                    rcx_7 = r14
        
        int64_t* rax_18 = &rcx_7[1]
        
        if (rcx_7 == 0)
            rax_18 = r14
        
        if (rax_18 != 0)
            r14 = *rax_18
        
        if (rax_18 == 0 || r14 == 0)
            int64_t rsi_2 = sx.q(*(arg1 + 0x30))
            result = zx.q((rsi_2 + 1).d)
            *(arg1 + 0x30) = result.d
            
            if (result.d s> *(arg1 + 0x34))
                result = sub_1405a4d70(arg1 + 0x28)
            
            *(*(arg1 + 0x28) + (rsi_2 << 3)) = r14
        else
            int64_t rsi_1 = sx.q(*(arg1 + 0x30))
            result = zx.q((rsi_1 + 1).d)
            *(arg1 + 0x30) = result.d
            
            if (result.d s> *(arg1 + 0x34))
                result = sub_1405a4d70(arg1 + 0x28)
            
            *(*(arg1 + 0x28) + (rsi_1 << 3)) = r14
            r14 = nullptr
        
        r15 += 1
    while (r15 s< result_1)
    
    rsi = zx.q(data_14401b1a0)

int32_t rcx_13 = arg_10
*(arg1 + 0x60) = r14.d

if (rcx_13 s> *(arg1 + 0x64))
    result = sub_1405c5570(arg1 + 0x58, rcx_13)
    rcx_13 = arg_10

int32_t r15_1 = r14.d

if (rcx_13 s> 0)
    int32_t* r12_4 = *(gsbase->ThreadLocalStoragePointer + (zx.q(rsi.d) << 3)) + 0x14
    
    do
        int64_t* rcx_14 = arg2[1]
        var_48 = r14
        int64_t* rdx_16 = *rcx_14
        
        if (&rdx_16[1] u> rcx_14[1])
            int64_t* rdx_17 = &var_48
            
            if ((*(arg2 + 0x29) & 0x20) != 0)
                sub_140b540d0(arg2, rdx_17, arg3)
            else
                (*(*arg2 + 0x150))(arg2, rdx_17, 8)
        else
            var_48 = *rdx_16
            *rcx_14 += 8
        
        if (data_143f21a94 s> *r12_4)
            _Init_thread_header(&data_143f21a94)
            
            if (data_143f21a94 == 0xffffffff)
                data_1439c9740 = r14
                data_1439c9748.q = 0
                data_1439c9760 = r14
                data_1439c9768 = r14.d
                data_1439c976c = 0x80
                data_1439c9750 = 0
                data_1439c9758 = 0
                data_1439c9770 = 0xffffffff
                data_1439c9774 = r14.d
                data_1439c9780 = r14
                data_1439c9788 = r14.d
                atexit(sub_142cf35b0)
                _Init_thread_footer(&data_143f21a94)
        
        void* rcx_17
        
        if (data_1439c9748 == data_1439c9774)
        label_1419d253f:
            rcx_17 = r14
        else
            int64_t* rcx_16 = var_48
            void* rax_29 = &data_1439c9778
            void* rdx_21 = data_1439c9780
            
            if (rdx_21 != 0)
                rax_29 = rdx_21
            
            int32_t rax_30 = *(rax_29
                + ((sx.q((rcx_16 u>> 0x20).d * 0x17 + rcx_16.d) & sx.q(data_1439c9788 - 1)) << 2))
            
            if (rax_30 == 0xffffffff)
            label_1419d253f_1:
                rcx_17 = r14
            else
                int64_t r9_2 = data_1439c9740
                int64_t r8_8
                
                while (true)
                    int64_t r8_7 = sx.q(rax_30) * 3
                    r8_8 = r8_7 << 3
                    
                    if (*(r9_2 + (r8_7 << 3)) == rcx_16)
                        break
                    
                    rax_30 = *(r9_2 + r8_8 + 0x10)
                    
                    if (rax_30 == 0xffffffff)
                        goto label_1419d253f_2
                
                rcx_17 = r8_8 + r9_2
                
                if (rax_30 == 0xffffffff)
                label_1419d253f_2:
                    rcx_17 = r14
        
        int64_t* rax_31 = rcx_17 + 8
        
        if (rcx_17 == 0)
            rax_31 = r14
        
        if (rax_31 != 0)
            r14 = *rax_31
        
        if (rax_31 == 0 || r14 == 0)
            int64_t rsi_4 = sx.q(*(arg1 + 0x60))
            int32_t rax_33 = (rsi_4 + 1).d
            *(arg1 + 0x60) = rax_33
            
            if (rax_33 s> *(arg1 + 0x64))
                sub_1405a4d70(arg1 + 0x58)
            
            result = *(arg1 + 0x58)
            *(result + (rsi_4 << 3)) = r14
        else
            int64_t rsi_3 = sx.q(*(arg1 + 0x60))
            int32_t rax_32 = (rsi_3 + 1).d
            *(arg1 + 0x60) = rax_32
            
            if (rax_32 s> *(arg1 + 0x64))
                sub_1405a4d70(arg1 + 0x58)
            
            result = *(arg1 + 0x58)
            *(result + (rsi_3 << 3)) = r14
            r14 = nullptr
        
        r15_1 += 1
    while (r15_1 s< arg_10)

return result
