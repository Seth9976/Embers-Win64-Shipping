// 函数: sub_140b4d950
// 地址: 0x140b4d950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdx = arg2[1]
int32_t var_58 = 0
int32_t arg_18 = 0
int32_t* r8 = *rdx
int32_t arg_10

if (&r8[1] u> rdx[1])
    void* rax_2 = *arg2
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        int64_t r9_1 = *(rax_2 + 0x150)
        
        if ((arg2[5].b & 1) == 0)
            arg_10 = 0
            r9_1(arg2, &arg_10, 4)
        else
            r9_1(arg2, &var_58, 4)
            var_58 = _bswap(var_58)
    else
        (*(rax_2 + 0x150))(arg2, &var_58, 4)
else
    var_58 = *r8
    *rdx += 4

int64_t* rcx_3 = arg2[1]
int32_t* rdx_4 = *rcx_3
uint64_t result

if (&rdx_4[1] u> rcx_3[1])
    void* rax_6 = *arg2
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        int64_t r9_2 = *(rax_6 + 0x150)
        
        if ((arg2[5].b & 1) == 0)
            arg_10 = _bswap(arg_18)
            result = r9_2(arg2, &arg_10, 4)
        else
            r9_2(arg2, &arg_18, 4)
            result = zx.q(_bswap(arg_18))
            arg_18 = result.d
    else
        result = (*(rax_6 + 0x150))(arg2, &arg_18, 4)
else
    result = zx.q(*rdx_4)
    arg_18 = result.d
    *rcx_3 += 4

int32_t r12 = 0
int32_t var_50
uint64_t var_48
int32_t arg_20

if (var_58 u> 0)
    do
        int64_t* rcx_5 = arg2[1]
        var_48 = 0
        arg_10 = 0
        int64_t* rdx_8 = *rcx_5
        
        if (&rdx_8[1] u> rcx_5[1])
            void* rax_12 = *arg2
            
            if ((*(arg2 + 0x29) & 0x20) != 0)
                int64_t r9_3 = *(rax_12 + 0x150)
                
                if ((arg2[5].b & 1) == 0)
                    arg_20.q = 0
                    r9_3(arg2, &arg_20, 8)
                else
                    r9_3(arg2, &var_48, 8)
                    var_48 = _bswap(var_48)
            else
                (*(rax_12 + 0x150))(arg2, &var_48, 8)
        else
            var_48 = *rdx_8
            *rcx_5 += 8
        
        int64_t* rcx_7 = arg2[1]
        int32_t* rdx_12 = *rcx_7
        
        if (&rdx_12[1] u> rcx_7[1])
            void* rax_17 = *arg2
            
            if ((*(arg2 + 0x29) & 0x20) != 0)
                int64_t r9_4 = *(rax_17 + 0x150)
                
                if ((arg2[5].b & 1) == 0)
                    arg_20 = _bswap(arg_10)
                    r9_4(arg2, &arg_20, 4)
                else
                    r9_4(arg2, &arg_10, 4)
                    arg_10 = _bswap(arg_10)
            else
                (*(rax_17 + 0x150))(arg2, &arg_10, 4)
        else
            arg_10 = *rdx_12
            *rcx_7 += 4
        
        uint64_t i = var_48
        result = zx.q((i u/ 0x1105).d * 0x1105)
        void** r14_1 = *(&data_143de9160 + (zx.q(i.d - result.d) << 3))
        
        if (r14_1 == 0)
        label_140b4db96:
            r14_1 = nullptr
        else
            while (r14_1[0xa] != i)
                r14_1 = *r14_1
                
                if (r14_1 == 0)
                    goto label_140b4db96
        
        int32_t r15_1 = 0
        
        if (arg_10 u> 0)
            do
                int64_t* rcx_11 = arg2[1]
                int32_t var_54 = 0
                arg_20 = 0
                int32_t* rdx_18 = *rcx_11
                
                if (&rdx_18[1] u> rcx_11[1])
                    void* rax_25 = *arg2
                    
                    if ((*(arg2 + 0x29) & 0x20) != 0)
                        int64_t r9_5 = *(rax_25 + 0x150)
                        
                        if ((arg2[5].b & 1) == 0)
                            var_50 = 0
                            r9_5(arg2, &var_50, 4)
                        else
                            r9_5(arg2, &var_54, 4)
                            var_54 = _bswap(var_54)
                    else
                        (*(rax_25 + 0x150))(arg2, &var_54, 4)
                else
                    var_54 = *rdx_18
                    *rcx_11 += 4
                
                int64_t* rcx_13 = arg2[1]
                int32_t* rdx_22 = *rcx_13
                
                if (&rdx_22[1] u> rcx_13[1])
                    void* rax_30 = *arg2
                    
                    if ((*(arg2 + 0x29) & 0x20) != 0)
                        int64_t r9_6 = *(rax_30 + 0x150)
                        
                        if ((arg2[5].b & 1) == 0)
                            var_50 = _bswap(arg_20)
                            r9_6(arg2, &var_50, 4)
                        else
                            r9_6(arg2, &arg_20, 4)
                            arg_20 = _bswap(arg_20)
                    else
                        (*(rax_30 + 0x150))(arg2, &arg_20, 4)
                else
                    arg_20 = *rdx_22
                    *rcx_13 += 4
                
                uint64_t* rsi_1 = zx.q(arg_20)
                r15_1 += 1
                result = *(r14_1[9]() + zx.q(var_54))
                *(rsi_1 + arg1) = result
            while (r15_1 u< arg_10)
        
        r12 += 1
    while (r12 u< var_58)

int32_t rsi_2 = 0

if (arg_18 u> 0)
    do
        int64_t rax_36 = *arg2
        var_48 = 0
        arg_10 = 0
        (*(rax_36 + 0x140))(arg2, &var_48)
        int64_t* rcx_16 = arg2[1]
        int32_t* rdx_27 = *rcx_16
        
        if (&rdx_27[1] u> rcx_16[1])
            void* rax_38 = *arg2
            
            if ((*(arg2 + 0x29) & 0x20) != 0)
                int64_t r9_7 = *(rax_38 + 0x150)
                
                if ((arg2[5].b & 1) == 0)
                    arg_20 = _bswap(arg_10)
                    result = r9_7(arg2, &arg_20, 4)
                else
                    r9_7(arg2, &arg_10, 4)
                    result = zx.q(_bswap(arg_10))
                    arg_10 = result.d
            else
                result = (*(rax_38 + 0x150))(arg2, &arg_10, 4)
        else
            result = zx.q(*rdx_27)
            arg_10 = result.d
            *rcx_16 += 4
        
        int32_t rdi_2 = 0
        
        if (arg_10 u> 0)
            do
                int64_t* rcx_18 = arg2[1]
                arg_20 = 0
                int32_t* rdx_31 = *rcx_18
                
                if (&rdx_31[1] u> rcx_18[1])
                    void* rax_44 = *arg2
                    
                    if ((*(arg2 + 0x29) & 0x20) != 0)
                        int64_t r9_8 = *(rax_44 + 0x150)
                        
                        if ((arg2[5].b & 1) == 0)
                            var_50 = 0
                            r9_8(arg2, &var_50, 4)
                        else
                            r9_8(arg2, &arg_20, 4)
                            arg_20 = _bswap(arg_20)
                    else
                        (*(rax_44 + 0x150))(arg2, &arg_20, 4)
                else
                    arg_20 = *rdx_31
                    *rcx_18 += 4
                
                rdi_2 += 1
                result = var_48
                *(zx.q(arg_20) + arg1) = result
            while (rdi_2 u< arg_10)
        
        rsi_2 += 1
    while (rsi_2 u< arg_18)

return result
