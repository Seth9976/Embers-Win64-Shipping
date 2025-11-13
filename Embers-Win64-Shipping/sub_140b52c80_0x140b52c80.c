// 函数: sub_140b52c80
// 地址: 0x140b52c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_8 = arg1
int64_t* rsi = *(arg1 + 0x10)
int32_t rdx = 0
void* r12_2 = &rsi[sx.q(*(arg1 + 0x18)) * 2]
int32_t* var_70 = nullptr
int32_t var_64 = 0
int32_t* r8 = nullptr
int32_t r14 = 0
int64_t rax = 0
int32_t rdi = 0

if (rsi != r12_2)
    do
        if (*rsi != rax)
            if (rdi != 0)
                int64_t r15_1 = sx.q(r14)
                r14 = (r15_1 + 1).d
                
                if (r14 s> rdx)
                    sub_1405a4cf0(&var_70)
                    rdx = var_64
                    r8 = var_70
                
                r8[r15_1] = rdi
            
            rax = *rsi
            rdi = 0
        
        rdi += 1
        rsi = &rsi[2]
    while (rsi != r12_2)
    
    if (rdi != 0)
        int64_t rsi_1 = sx.q(r14)
        r14 = (rsi_1 + 1).d
        
        if (r14 s> rdx)
            sub_1405a4cf0(&var_70)
            r8 = var_70
        
        r8[rsi_1] = rdi
    
    arg1 = arg_8

int64_t* rsi_2 = *(arg1 + 0x20)
int32_t rdx_3 = 0
int64_t rax_1 = sx.q(*(arg1 + 0x28))
int32_t* r8_1 = nullptr
int32_t* var_80 = nullptr
int32_t result_1 = 0
int32_t result_2 = 0
int32_t rdi_1 = 0
int32_t var_74 = 0
int64_t arg_10 = 0
void* r12_3 = rsi_2 + rax_1 * 0xc

if (rsi_2 != r12_3)
    int64_t rax_2 = arg_10
    
    do
        if (*rsi_2 != rax_2)
            if (rdi_1 != 0)
                int64_t result_5 = sx.q(result_1)
                result_1 = (result_5 + 1).d
                
                if (result_1 s> rdx_3)
                    sub_1405a4cf0(&var_80)
                    rdx_3 = var_74
                    r8_1 = var_80
                
                r8_1[result_5] = rdi_1
            
            rax_2 = *rsi_2
            rdi_1 = 0
        
        rdi_1 += 1
        rsi_2 += 0xc
    while (rsi_2 != r12_3)
    
    result_2 = result_1
    
    if (rdi_1 != 0)
        int64_t result_4 = sx.q(result_1)
        result_1 = (result_4 + 1).d
        result_2 = result_1
        
        if (result_1 s> rdx_3)
            sub_1405a4cf0(&var_80)
            r8_1 = var_80
            result_2 = result_1
        
        r8_1[result_4] = rdi_1

int64_t* rcx_5 = arg2[1]
int32_t var_98 = r14
int32_t result_3 = result_1
int32_t* rdx_6 = *rcx_5

if (&rdx_6[1] u> rcx_5[1])
    void* rax_5 = *arg2
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        int64_t r9_1 = *(rax_5 + 0x150)
        
        if ((arg2[5].b & 1) == 0)
            arg_10.d = _bswap(r14)
            r9_1(arg2, &arg_10, 4)
        else
            r9_1(arg2, &var_98, 4)
            var_98 = _bswap(var_98)
    else
        (*(rax_5 + 0x150))(arg2, &var_98, 4)
else
    var_98 = *rdx_6
    *rcx_5 += 4

int64_t* rcx_7 = arg2[1]
int32_t* rdx_10 = *rcx_7

if (&rdx_10[1] u> rcx_7[1])
    void* rax_12 = *arg2
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        int64_t r9_2 = *(rax_12 + 0x150)
        
        if ((arg2[5].b & 1) == 0)
            arg_10.d = _bswap(result_3)
            r9_2(arg2, &arg_10, 4)
        else
            r9_2(arg2, &result_3, 4)
            result_3 = _bswap(result_3)
    else
        (*(rax_12 + 0x150))(arg2, &result_3, 4)
else
    result_3 = *rdx_10
    *rcx_7 += 4

int32_t* rdx_14 = var_70
int32_t i = 0
int64_t r15_2 = 0
int32_t* r12_4 = rdx_14
void* rcx_9 = &rdx_14[sx.q(r14)]
uint64_t rax_21 = (rcx_9 - rdx_14 + 3) u>> 2

if (rdx_14 u> rcx_9)
    rax_21 = 0

uint64_t var_58 = rax_21
int32_t arg_20

if (rax_21 != 0)
    int64_t r14_1 = 0
    uint64_t r13 = rax_21
    
    do
        int64_t* rcx_10 = arg2[1]
        arg_10.d = *r12_4
        int64_t rsi_4 = r14_1 << 4
        uint64_t rdx_15 = *(rsi_4 + *(arg_8 + 0x10))
        uint64_t var_60 = rdx_15
        int64_t* r8_2 = *rcx_10
        uint64_t var_88
        
        if (&r8_2[1] u> rcx_10[1])
            void* rax_27 = *arg2
            
            if ((*(arg2 + 0x29) & 0x20) != 0)
                int64_t r9_3 = *(rax_27 + 0x150)
                
                if ((arg2[5].b & 1) == 0)
                    var_88 = _bswap(rdx_15)
                    r9_3(arg2, &var_88, 8)
                else
                    r9_3(arg2, &var_60, 8)
                    var_60 = _bswap(var_60)
            else
                (*(rax_27 + 0x150))(arg2, &var_60, 8)
        else
            var_60 = *r8_2
            *rcx_10 += 8
        
        int64_t* rcx_12 = arg2[1]
        int32_t* rdx_20 = *rcx_12
        
        if (&rdx_20[1] u> rcx_12[1])
            void* rax_32 = *arg2
            
            if ((*(arg2 + 0x29) & 0x20) != 0)
                int64_t r9_4 = *(rax_32 + 0x150)
                
                if ((arg2[5].b & 1) == 0)
                    var_88.d = _bswap(arg_10.d)
                    r9_4(arg2, &var_88, 4)
                else
                    r9_4(arg2, &arg_10, 4)
                    arg_10.d = _bswap(arg_10.d)
            else
                (*(rax_32 + 0x150))(arg2, &arg_10, 4)
        else
            arg_10.d = *rdx_20
            *rcx_12 += 4
        
        if (arg_10.d u> 0)
            void* r13_1 = arg_8
            
            do
                r14_1 += 1
                void* rcx_15 = *(r13_1 + 0x10) + rsi_4
                rsi_4 += 0x10
                int32_t rdx_24 = *(rcx_15 + 8)
                int32_t var_94 = rdx_24
                int64_t* rcx_16 = arg2[1]
                arg_20 = *(rcx_15 + 0xc)
                int32_t* r8_3 = *rcx_16
                
                if (&r8_3[1] u> rcx_16[1])
                    void* rax_40 = *arg2
                    
                    if ((*(arg2 + 0x29) & 0x20) != 0)
                        int64_t r9_5 = *(rax_40 + 0x150)
                        
                        if ((arg2[5].b & 1) == 0)
                            var_88.d = _bswap(rdx_24)
                            r9_5(arg2, &var_88, 4)
                        else
                            r9_5(arg2, &var_94, 4)
                            var_94 = _bswap(var_94)
                    else
                        (*(rax_40 + 0x150))(arg2, &var_94, 4)
                else
                    var_94 = *r8_3
                    *rcx_16 += 4
                
                int64_t* rcx_18 = arg2[1]
                int32_t* rdx_29 = *rcx_18
                
                if (&rdx_29[1] u> rcx_18[1])
                    void* rax_45 = *arg2
                    
                    if ((*(arg2 + 0x29) & 0x20) != 0)
                        int64_t r9_6 = *(rax_45 + 0x150)
                        
                        if ((arg2[5].b & 1) == 0)
                            var_88.d = _bswap(arg_20)
                            r9_6(arg2, &var_88, 4)
                        else
                            r9_6(arg2, &arg_20, 4)
                            arg_20 = _bswap(arg_20)
                    else
                        (*(rax_45 + 0x150))(arg2, &arg_20, 4)
                else
                    arg_20 = *rdx_29
                    *rcx_18 += 4
                
                i += 1
            while (i u< arg_10.d)
            
            r13 = var_58
        
        r12_4 = &r12_4[1]
        r15_2 += 1
        i = 0
    while (r15_2 != r13)
    
    result_1 = result_2

int32_t* rdx_43 = var_80
int64_t r14_2 = 0
int64_t result = sx.q(result_1)
int32_t* r15_3 = rdx_43
void* rcx_20 = &rdx_43[result]
uint64_t r12_8 = (rcx_20 - rdx_43 + 3) u>> 2

if (rdx_43 u> rcx_20)
    r12_8 = 0

if (r12_8 != 0)
    void* r13_2 = arg_8
    int64_t rsi_5 = 0
    
    do
        arg_8.d = *r15_3
        int64_t rax_52 = *arg2
        var_58 = *(*(r13_2 + 0x20) + rsi_5 * 0xc)
        (*(rax_52 + 0x140))(arg2, &var_58)
        int64_t* rcx_24 = arg2[1]
        int32_t* rdx_34 = *rcx_24
        
        if (&rdx_34[1] u> rcx_24[1])
            void* rax_54 = *arg2
            
            if ((*(arg2 + 0x29) & 0x20) != 0)
                int64_t r9_7 = *(rax_54 + 0x150)
                
                if ((arg2[5].b & 1) == 0)
                    arg_20 = _bswap(arg_8.d)
                    result = r9_7(arg2, &arg_20, 4)
                else
                    r9_7(arg2, &arg_8, 4)
                    result = zx.q(_bswap(arg_8.d))
                    arg_8.d = result.d
            else
                result = (*(rax_54 + 0x150))(arg2, &arg_8, 4)
        else
            result = zx.q(*rdx_34)
            arg_8.d = result.d
            *rcx_24 += 4
        
        if (arg_8.d u> 0)
            do
                int64_t rax_58 = rsi_5
                rsi_5 += 1
                int32_t rdx_38 = *(*(r13_2 + 0x20) + rax_58 * 0xc + 8)
                int64_t* rcx_27 = arg2[1]
                arg_10.d = rdx_38
                int32_t* r8_4 = *rcx_27
                
                if (&r8_4[1] u> rcx_27[1])
                    void* rax_61 = *arg2
                    
                    if ((*(arg2 + 0x29) & 0x20) != 0)
                        int64_t r9_8 = *(rax_61 + 0x150)
                        
                        if ((arg2[5].b & 1) == 0)
                            arg_20 = _bswap(rdx_38)
                            result = r9_8(arg2, &arg_20, 4)
                        else
                            r9_8(arg2, &arg_10, 4)
                            result = zx.q(_bswap(arg_10.d))
                            arg_10.d = result.d
                    else
                        result = (*(rax_61 + 0x150))(arg2, &arg_10, 4)
                else
                    result = zx.q(*r8_4)
                    arg_10.d = result.d
                    *rcx_27 += 4
                
                i += 1
            while (i u< arg_8.d)
        
        r15_3 = &r15_3[1]
        r14_2 += 1
        i = 0
    while (r14_2 != r12_8)
    
    rdx_43 = var_80

if (rdx_43 != 0)
    result = sub_140a74f90(rdx_43)

int32_t* r8_5 = var_70

if (r8_5 == 0)
    return result

return sub_140a74f90(r8_5)
