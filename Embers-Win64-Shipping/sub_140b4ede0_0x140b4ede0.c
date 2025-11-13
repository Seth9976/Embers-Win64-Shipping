// 函数: sub_140b4ede0
// 地址: 0x140b4ede0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rcx_1 = *(*arg1 + 0x10) + 0x38
int64_t var_58
int32_t arg_18
int64_t* result
int32_t r8
result, r8 = sub_140b4c620(&var_58, sub_140b58260(&arg_18, u"FGlobalShaderMapContent", 1))

if (*(arg3 + 0x64) != 0 && *(arg3 + 0x66) == 0)
    void* rbp_1 = *arg1
    int64_t rsi_1 = sx.q(*(rbp_1 + 0x50))
    int32_t rax_2 = (rsi_1 + 1).d
    *(rbp_1 + 0x50) = rax_2
    
    if (rax_2 s> *(rbp_1 + 0x54))
        sub_1405a4f90(rbp_1 + 0x48)
    
    int64_t** rsi_3 = (rsi_1 << 4) + *(rbp_1 + 0x48)
    int32_t rax_3
    rax_3, r8 = sub_140b568d0(rbp_1, -1)
    *(rsi_3 + 0xc) = rax_3
    int32_t r11_1 = 0
    result = *(arg4 + 0x50)
    *rsi_3 = result
    
    if (arg4 != arg3)
        void* r9 = *(arg4 + 0x10)
        
        if (*(arg4 + 0x65) u> 0)
            int32_t r10_1
            
            do
                void* rcx_6 = *(r9 + 8)
                arg_18 = r11_1
                void* r9_1
                result, r8, r9_1, r10_1, r11_1 = sub_140b55bd0(rcx_6, arg3, &arg_18)
                
                if (result.b != 0)
                    r11_1 = arg_18 + *(r9_1 + 0x20)
                    break
                
                result = zx.q(*(arg4 + 0x65))
                r9 = *(r9_1 + 0x10)
            while (r10_1 + 1 u< result.d)
    
    rsi_3[1].d = r11_1

void* r15 = *(arg3 + 0x10)
void* rbp_2 = nullptr
uint32_t r11_3 = zx.d(*(arg3 + 0x65))
void* const rdi = nullptr
int32_t rbx_1 = 0
void* var_60 = nullptr
int64_t r12 = 0
void* const var_68 = nullptr
int32_t r13 = 0
int64_t var_78 = 0
int32_t rsi_4 = 0
int32_t var_88 = 0
int32_t r10_3 = 0
int32_t var_84 = 0
uint32_t var_98 = r11_3
arg_18 = 0
int32_t var_80 = 0

if (r15 != 0)
    while (true)
        char rcx_8 = *(r15 + 0x28)
        void* r14_1 = *(r15 + 8)
        
        if ((rcx_8 & 1) != 0 && ((rcx_1[1] u>> 4).b & 1) == 0)
            r8.b = 0
        else if ((rcx_8 & 2) == 0 || ((rcx_1[1] u>> 5).b & 1) != 0)
            r8.b = 1
        else
            r8.b = 0
        
        char rdx_3 = *(r15 + 0x29)
        
        if (rdx_3 != 0 && (rbp_2 != r14_1 || zx.d(rdx_3) + r13 u> *(r14_1 + 0x58) << 3))
            r13 = 0
            var_60 = r14_1
            var_88 = 0
        
        if (r8.b != 0)
            int64_t rbp_4 = zx.q(*(r15 + 0x20)) + arg2
            
            if (rdx_3 != 0)
                if (rdi != r14_1 || zx.d(rdx_3) + rsi_4 u> *(r14_1 + 0x58) << 3)
                    if (rdi != 0)
                        int32_t rdx_13 = *rcx_1
                        
                        if (*(rdi + 0x60) u<= rdx_13)
                            rdx_13 = *(rdi + 0x60)
                        
                        sub_140b56010(arg1, rdx_13)
                        void* rax_25 = *arg1
                        uint32_t count_1 = *(rdi + 0x58)
                        uint64_t rsi_9 = zx.q(*(rax_25 + 0x30))
                        int32_t rax_26 = *(rax_25 + 0x30)
                        int32_t rcx_30 = rsi_9.d + count_1
                        
                        if (rcx_30 s> rax_26)
                            *(rax_25 + 0x30) = rcx_30
                            
                            if (rcx_30 s> *(rax_25 + 0x34))
                                sub_1405daba0(rax_25 + 0x28)
                        else if (rcx_30 s< rax_26 && rcx_30 != rax_26)
                            *(rax_25 + 0x30) = rcx_30
                            sub_1405dac10(rax_25 + 0x28)
                        
                        memcpy(rsi_9 + *(rax_25 + 0x28), &var_78, count_1)
                        rdx_3 = *(r15 + 0x29)
                    
                    r12 = 0
                    var_68 = r14_1
                    var_78 = 0
                    rsi_4 = 0
                
                uint32_t rbx_8 = zx.d(rdx_3)
                r8 = r13
                int32_t r11_4 = rbx_8 + r13
                
                if (r13 u< r11_4)
                    uint64_t r9_4 = zx.q(r13)
                    
                    do
                        uint64_t rax_28 = r9_4 u>> 3
                        r9_4 += 1
                        char rcx_36 = r8.b + rsi_4.b - r13.b
                        uint64_t rdx_18 = zx.q((zx.q(*(rax_28 + rbp_4)) u>> (r8.b & 7)).d) & 1
                        r8 += 1
                        r12 |= rdx_18 << rcx_36
                    while (r8 u< r11_4)
                    
                    var_78 = r12
                
                var_84 = rsi_4 + rbx_8
                rbx_1 = arg_18
            else
                if (rdi != 0)
                    if (rsi_4 != 0)
                        int32_t rdx_4 = *rcx_1
                        
                        if (*(rdi + 0x60) u<= rdx_4)
                            rdx_4 = *(rdi + 0x60)
                        
                        sub_140b56010(arg1, rdx_4)
                        void* rax_10 = *arg1
                        uint32_t count = *(rdi + 0x58)
                        uint64_t rsi_5 = zx.q(*(rax_10 + 0x30))
                        int32_t rax_11 = *(rax_10 + 0x30)
                        int32_t rcx_12 = rsi_5.d + count
                        
                        if (rcx_12 s> rax_11)
                            *(rax_10 + 0x30) = rcx_12
                            
                            if (rcx_12 s> *(rax_10 + 0x34))
                                sub_1405daba0(rax_10 + 0x28)
                        else if (rcx_12 s< rax_11 && rcx_12 != rax_11)
                            *(rax_10 + 0x30) = rcx_12
                            sub_1405dac10(rax_10 + 0x28)
                        
                        memcpy(rsi_5 + *(rax_10 + 0x28), &var_78, count)
                        r10_3 = var_80
                        r11_3 = var_98
                        rbx_1 = arg_18
                    
                    r12 = 0
                    var_68 = nullptr
                    var_78 = 0
                    var_84 = 0
                
                int32_t rdx_7 = *(r14_1 + 0x5c)
                
                if (rdx_7 != 0 || rbx_1 u>= r11_3)
                label_140b4f0a9:
                    int32_t* rsi_6 = rcx_1
                    int32_t rax_12 = (*(r14_1 + 0x38))(r14_1, rsi_6)
                    int32_t rdx_9 = *rsi_6
                    int64_t* rdi_1 = arg1
                    
                    if (rax_12 u<= rdx_9)
                        rdx_9 = rax_12
                    
                    sub_140b56010(rdi_1, rdx_9)
                    int64_t r10_4 = *(r15 + 0x18)
                    int32_t i = 0
                    var_58 = r10_4
                    
                    if (*(r15 + 0x24) u> 0)
                        void* r13_1 = r14_1
                        
                        if (rbx_1 u< var_98)
                            r13_1 = arg4
                        
                        do
                            int32_t rbx_4 = *(*rdi_1 + 0x30)
                            r10_4(rdi_1, arg2, zx.q(*(r14_1 + 0x58) * i) + rbp_4, r14_1, r13_1)
                            
                            if (arg_18 u>= var_98 || ((rsi_6[1] u>> 3).b & 1) != 0)
                                void* rdx_11 = *rdi_1
                                int32_t rax_22 = ((*(rdx_11 + 0x30) - rbx_4 - 1 + rax_12)
                                    & neg.d(rax_12)) + rbx_4
                                int64_t rbx_5 = sx.q(*(rdx_11 + 0x30))
                                
                                if (rax_22 s> rbx_5.d)
                                    *(rdx_11 + 0x30) = rax_22
                                    
                                    if (rax_22 s> *(rdx_11 + 0x34))
                                        sub_1405daba0(rdx_11 + 0x28)
                                    
                                    memset(rbx_5 + *(rdx_11 + 0x28), 0, sx.q(rax_22 - rbx_5.d))
                                    rsi_6 = rcx_1
                                else if (rax_22 s< rbx_5.d && rax_22 != rbx_5.d)
                                    *(rdx_11 + 0x30) = rax_22
                                    sub_1405dac10(rdx_11 + 0x28)
                                
                                rdi_1 = arg1
                            
                            r10_4 = var_58
                            i += 1
                        while (i u< *(r15 + 0x24))
                        
                        r12 = var_78
                        r13 = var_88
                        rbx_1 = arg_18
                else
                    bool cond:8_1 = r10_3 != 0
                    
                    if (r10_3 == 0)
                        r10_3 += 1
                    
                    if (cond:8_1)
                        rdx_7 = 1
                    
                    var_80 = r10_3
                    
                    if (rdx_7 != 0)
                        goto label_140b4f0a9
        
        result = zx.q(*(r15 + 0x29))
        rbx_1 += 1
        r15 = *(r15 + 0x10)
        r13 += result.d
        rsi_4 = var_84
        r10_3 = var_80
        r11_3 = var_98
        rbp_2 = var_60
        var_88 = r13
        arg_18 = rbx_1
        
        if (r15 == 0)
            break
        
        rdi = var_68
    
    if (var_68 != 0)
        int32_t rdx_20 = *rcx_1
        
        if (*(var_68 + 0x60) u<= rdx_20)
            rdx_20 = *(var_68 + 0x60)
        
        sub_140b56010(arg1, rdx_20)
        void* rax_29 = *arg1
        uint32_t count_2 = *(var_68 + 0x58)
        uint64_t rsi_12 = zx.q(*(rax_29 + 0x30))
        int32_t rax_30 = *(rax_29 + 0x30)
        int32_t rcx_39 = rsi_12.d + count_2
        
        if (rcx_39 s> rax_30)
            *(rax_29 + 0x30) = rcx_39
            
            if (rcx_39 s> *(rax_29 + 0x34))
                sub_1405daba0(rax_29 + 0x28)
        else if (rcx_39 s< rax_30 && rcx_39 != rax_30)
            *(rax_29 + 0x30) = rcx_39
            sub_1405dac10(rax_29 + 0x28)
        
        return memcpy(rsi_12 + *(rax_29 + 0x28), &var_78, count_2)

return result
