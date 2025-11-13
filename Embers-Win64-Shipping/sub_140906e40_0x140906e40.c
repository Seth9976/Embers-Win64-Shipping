// 函数: sub_140906e40
// 地址: 0x140906e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12 = 0
int32_t* var_68 = nullptr
int32_t rcx = *(arg1 + 0xb8)
int32_t rdi = arg2
int64_t var_60 = 0
int32_t* r8 = nullptr
int32_t arg_10 = rcx
int32_t rsi = *(arg1 + 0xd8)
int32_t r15 = 0
int32_t r14 = *(arg1 + 0xd4)
int32_t rdx = r14 + rsi

if (rdx != 0)
    sub_1405dadb0(&var_68, rdx)
    rcx = arg_10
    r8 = var_68
    r14 = *(arg1 + 0xd4)
    rsi = *(arg1 + 0xd8)
    r15 = var_60.d

int32_t rdx_1 = -1

if (arg3.d f>= (zx.o(0)).d)
    rdx_1 = 1

int32_t arg_18 = rdx_1
int32_t rbx_1 = rdi - rdx_1

while (true)
    if (r14 s> 0)
        if (rdi s< 0)
            int32_t rax_15 = rdi + rcx
            
            if (arg4 == 0)
                rax_15 = rdi
            
            if (arg4 == 0)
                r14 = 0
            
            rdi = rax_15
            goto label_140907072
        
        if (rdi s< rcx)
            goto label_140907072
        
        if (arg4 == 0)
            r14 = 0
        else
            rdi -= rcx
        label_140907072:
            
            if (r14 s> 0)
                int64_t r13_3 = sx.q(r15)
                r15 = (r13_3 + 1).d
                var_60.d = r15
                
                if (r15 s> var_60:4.d)
                    sub_1405a4cf0(&var_68)
                    rcx = arg_10
                    rdx_1 = arg_18
                    r8 = var_68
                    r15 = var_60.d
                
                r8[r13_3] = rdi
        
        rdi += rdx_1
        r14 -= 1
        
        if (rsi s<= 0)
            continue
    else if (rsi s<= 0)
        uint64_t rbp_2 = arg1
        void* lpCriticalSection = rbp_2 + 0x18
        EnterCriticalSection(lpCriticalSection)
        int32_t rsi_1 = *(rbp_2 + 0x150)
        int32_t rsi_2 = rsi_1 - 1
        
        if (rsi_1 - 1 s>= 0)
            int32_t* rdx_2 = var_68
            int64_t r13_1 = sx.q(rsi_2) << 2
            int64_t rbx_2 = r13_1
            void* rdi_1 = &rdx_2[sx.q(r15)]
            int32_t temp5_1
            
            do
                int32_t* rax_3 = rdx_2
                
                if (rdx_2 == rdi_1)
                label_140906f6d:
                    int32_t rdx_3 = *(rbp_2 + 0x150)
                    int32_t rax_6 = rdx_3 - rsi_2 - 1
                    
                    if (rax_6 s>= 1)
                        rax_6 = 1
                    
                    if (rax_6 != 0)
                        int64_t rcx_5 = *(rbp_2 + 0x148)
                        memcpy(rcx_5 + rbx_2, rcx_5 + (sx.q(rdx_3 - rax_6) << 2), rax_6 << 2)
                        rdx_3 = *(rbp_2 + 0x150)
                    
                    *(rbp_2 + 0x150) = rdx_3 - 1
                    sub_1405dac90(rbp_2 + 0x148)
                    rdx_2 = var_68
                else
                    while (*rax_3 != *(*(rbp_2 + 0x148) + r13_1))
                        rax_3 = &rax_3[1]
                        
                        if (rax_3 == rdi_1)
                            goto label_140906f6d
                
                rbx_2 -= 4
                r13_1 -= 4
                temp5_1 = rsi_2
                rsi_2 -= 1
            while (temp5_1 - 1 s>= 0)
            rbp_2 = arg1
            lpCriticalSection = rbp_2 + 0x18
        
        int32_t r10 = 0
        *(rbp_2 + 0x140) = 0
        
        if (*(rbp_2 + 0x144) != 0)
            sub_1405dadb0(rbp_2 + 0x138, 0)
            r10 = *(rbp_2 + 0x140)
        
        int32_t* rdi_2 = var_68
        int64_t r13_2 = 0
        int32_t* r15_1 = rdi_2
        void* rcx_9 = &rdi_2[sx.q(r15)]
        uint64_t rax_13 = (rcx_9 - rdi_2 + 3) u>> 2
        
        if (rdi_2 u> rcx_9)
            rax_13 = 0
        
        if (rax_13 != 0)
            do
                int64_t rdi_3 = sx.q(*r15_1)
                void* rax_14
                
                if (*(rbp_2 + 0x168) != 0)
                    rax_14 = sub_140901f60(*(rbp_2 + 0x100), rbp_2 + 0x128)
                else if (*(rbp_2 + 0x48) == *(rbp_2 + 0x74))
                label_1409071af:
                    rax_14 = nullptr
                else
                    void* r8_4 = rbp_2 + 0x78
                    void* rcx_13 = *(r8_4 + 8)
                    
                    if (rcx_13 != 0)
                        r8_4 = rcx_13
                    
                    int32_t rax_18 = *(r8_4 + (((sx.q(*(rbp_2 + 0x88)) - 1) & rdi_3) << 2))
                    
                    if (rax_18 == 0xffffffff)
                    label_1409071af_1:
                        rax_14 = nullptr
                    else
                        int64_t r8_5 = *(rbp_2 + 0x40)
                        int32_t* rcx_14
                        int64_t r9
                        
                        while (true)
                            r9 = sx.q(rax_18)
                            int64_t rdx_13 = r9 * 2
                            rcx_14 = *(r8_5 + (rdx_13 << 3))
                            
                            if (*rcx_14 == rdi_3.d)
                                break
                            
                            rax_18 = *(r8_5 + (rdx_13 << 3) + 8)
                            
                            if (rax_18 == 0xffffffff)
                                goto label_1409071af_3
                        
                        if (rax_18 == 0xffffffff)
                        label_1409071af_2:
                            rax_14 = nullptr
                        else
                            int64_t r9_1 = r9 << 4
                            
                            if (r9_1 == neg.q(r8_5))
                            label_1409071af_3:
                                rax_14 = nullptr
                            else
                                void* rax_25 = *(rbp_2 + 0x90)
                                
                                if (rcx_14 == rax_25)
                                    int64_t rax_26 = *(rax_25 + 0x10)
                                    
                                    if (rax_26 != 0)
                                        *(rbp_2 + 0x90) = rax_26
                                
                                if (rcx_14 != *(rbp_2 + 0x98))
                                    void* rdx_20 = *(rcx_14 + 8)
                                    
                                    if (rdx_20 != 0)
                                        *(rdx_20 + 0x10) = *(rcx_14 + 0x10)
                                    
                                    void* rdx_21 = *(rcx_14 + 0x10)
                                    
                                    if (rdx_21 != 0)
                                        *(rdx_21 + 8) = *(rcx_14 + 8)
                                    
                                    *(rcx_14 + 8) = 0
                                    *(rcx_14 + 0x10) = 0
                                    void* rax_29 = *(rbp_2 + 0x98)
                                    *(rcx_14 + 8) = rax_29
                                    
                                    if (rax_29 != 0)
                                        *(rax_29 + 0x10) = rcx_14
                                    
                                    *(rbp_2 + 0x98) = rcx_14
                                
                                rax_14 = *(r9_1 + r8_5) + 0x18
                
                rax_14.b = rax_14 == 0
                
                if (rax_14.b != 0)
                    for (int32_t* i = *(rbp_2 + 0x148); i != &i[sx.q(*(rbp_2 + 0x150))]; i = &i[1])
                        if (*i == rdi_3.d)
                            goto label_140907201
                    
                    int64_t rsi_3 = sx.q(*(rbp_2 + 0x140))
                    int32_t rax_20 = (rsi_3 + 1).d
                    *(rbp_2 + 0x140) = rax_20
                    
                    if (rax_20 s> *(rbp_2 + 0x144))
                        sub_1405a4cf0(rbp_2 + 0x138)
                    
                    *(*(rbp_2 + 0x138) + (rsi_3 << 2)) = rdi_3.d
                
            label_140907201:
                r15_1 = &r15_1[1]
                r13_2 += 1
            while (r13_2 != rax_13)
            
            r10 = *(rbp_2 + 0x140)
            rdi_2 = var_68
        
        uint64_t r8_6 = *(rbp_2 + 0x138)
        int32_t temp3
        int32_t temp4
        temp3:temp4 = sx.q(r10)
        int32_t result = (temp4 - temp3) s>> 1
        int64_t result_1 = sx.q(result)
        
        if (result s> 0)
            int64_t rdx_19 = r8_6 + ((sx.q(r10) - 1) << 2)
            
            do
                int32_t rcx_16 = *(r8_6 + (r12 << 2))
                result = *rdx_19
                rdx_19 -= 4
                *(r8_6 + (r12 << 2)) = result
                r12 += 1
                *(rdx_19 + 4) = rcx_16
            while (r12 s< result_1)
        
        if (lpCriticalSection != 0)
            result = LeaveCriticalSection(lpCriticalSection)
        
        if (rdi_2 == 0)
            return result
        
        return sub_140a74f90(rdi_2)
    
    if (rbx_1 s< 0)
        int32_t rax_16 = rbx_1 + rcx
        
        if (arg4 == 0)
            rax_16 = rbx_1
        
        if (arg4 == 0)
            rsi = 0
        
        rbx_1 = rax_16
    else if (rbx_1 s>= rcx)
        if (arg4 == 0)
            rbx_1 -= rdx_1
            rsi = -1
            continue
        else
            rbx_1 -= rcx
    
    if (rsi s> 0)
        int64_t r13_4 = sx.q(r15)
        r15 = (r13_4 + 1).d
        var_60.d = r15
        
        if (r15 s> var_60:4.d)
            sub_1405a4cf0(&var_68)
            rcx = arg_10
            rdx_1 = arg_18
            r8 = var_68
            r15 = var_60.d
        
        r8[r13_4] = rbx_1
    
    rbx_1 -= rdx_1
    rsi -= 1
