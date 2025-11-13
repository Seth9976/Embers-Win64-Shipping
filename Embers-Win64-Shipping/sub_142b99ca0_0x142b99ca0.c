// 函数: sub_142b99ca0
// 地址: 0x142b99ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rbp = arg3
int64_t* r13 = nullptr
int64_t* var_58
__builtin_memset(&var_58, 0, 0x18)
void* rbx = nullptr

if ((arg4 == 0 && arg3 s>= 0) || arg2 == 0)
    return 6

int64_t r12

if ((*arg2 & 2) == 0 || *(arg2 + 0x20) == 0)
    r12.b = 0
else
    r12.b = 1

int32_t rax_1 = sub_142b96840(arg1, arg2, &var_58)
int32_t rdi = rax_1
void* var_48_1
int64_t* rsi_1
void* r15_1

if (rax_1 != 0)
label_142b9a0a3:
    rsi_1 = var_58
label_142b9a0a8:
    uint32_t rax_27 = zx.d(rdi.b)
    
    if (rax_27 == 0x51 || rax_27 == 2 || rax_27 == 0x55)
        if (arg6 != 0)
            int32_t rax_28 = sub_142b9ad50(arg1, rsi_1, rbp, arg4, arg5, arg2)
            rdi = rax_28
            
            if (rax_28 == 0)
                if (rsi_1 != 0)
                    int64_t rax_29 = rsi_1[5]
                    int64_t rbx_2 = rsi_1[6]
                    
                    if (rax_29 != 0)
                        rax_29(rsi_1)
                    
                    if (r12.b == 0)
                        (*(rbx_2 + 0x10))(rbx_2, rsi_1)
                
                return 0
        
        if (rdi.b == 2)
            rdi = 2
    
    if (rsi_1 != 0)
        int64_t rax_30 = rsi_1[5]
        int64_t rbp_2 = rsi_1[6]
        
        if (rax_30 != 0)
            rax_30(rsi_1)
        
        if (r12.b == 0)
            (*(rbp_2 + 0x10))(rbp_2, rsi_1)
    
    r15_1 = var_48_1
    goto label_142b9a149

r15_1 = *arg1
char rdx = (*arg2).b
var_48_1 = r15_1
int64_t* rax_2

if ((rdx & 8) != 0)
    rax_2 = *(arg2 + 0x28)

void** var_78
void* var_50
void* var_40

if ((rdx & 8) == 0 || rax_2 == 0)
    void* r15_2 = &arg1[3]
    rdi = 0xb
    void* rax_7 = r15_2 + (zx.q(*(arg1 + 0x14)) << 3)
    var_40 = rax_7
    
    if (r15_2 u>= rax_7)
        goto label_142b9a0a3
    
    rsi_1 = var_58
    
    while (true)
        int64_t* rcx_5 = *r15_2
        
        if ((**rcx_5 & 1) == 0)
        label_142b99ecf:
            r15_2 += 8
            
            if (r15_2 u< var_40)
                continue
        else
            int32_t rbx_1 = 0
            int32_t* rbp_1 = nullptr
            r13 = rcx_5
            
            if ((*arg2 & 0x10) != 0)
                rbx_1 = arg2[0xc]
                rbp_1 = *(arg2 + 0x38)
            
            var_78.d = rbx_1
            int32_t rax_9 = sub_142b9ae10(rcx_5, &var_58, r12.b, arg3, var_78.d, rbp_1, &var_50)
            rdi = rax_9
            
            if (rax_9 == 0)
                rbp = arg3
                r15_1 = var_48_1
                break
            
            rsi_1 = var_58
            
            if (arg6 == 0)
            label_142b99ec9:
                
                if (rdi.b == 2)
                    goto label_142b99ecf
            else
                if (strcmp(*(**r15_2 + 8), "truetype") != 0 || rdi.b != 0x8e)
                    goto label_142b99ec9
                
                int32_t rax_12 = sub_142b97060(rsi_1, 0, arg5)
                rdi = rax_12
                
                if (rax_12 == 0)
                    void** var_70_3 = arg4
                    int32_t rax_14
                    rax_14, arg5 = sub_142b9aff0(arg1, rsi_1, arg3, rbx_1, arg5, rbp_1)
                    rdi = rax_14
                    
                    if (rax_14 != 0)
                        goto label_142b99ec9
                    
                    sub_142b966b0(rsi_1, zx.d(r12.b))
                    return 0
        
        rbx = var_50
        rbp = arg3
        goto label_142b9a0a8
    
    goto label_142b99f14

r13 = rax_2

if ((**rax_2 & 1) == 0)
    rdi = 0x20
    sub_142b966b0(var_58, zx.d(r12.b))
label_142b9a149:
    
    if (rbx != 0)
        sub_142b98490(r15_1, rbx, r13)
else
    int32_t rax_4 = 0
    int32_t* rcx_1 = nullptr
    
    if ((rdx & 0x10) != 0)
        rax_4 = arg2[0xc]
        rcx_1 = *(arg2 + 0x38)
    
    var_78.d = rax_4
    int32_t rax_5 = sub_142b9ae10(r13, &var_58, r12.b, rbp, var_78.d, rcx_1, &var_50)
    rdi = rax_5
    
    if (rax_5 != 0)
        rbx = var_50
        sub_142b966b0(var_58, zx.d(r12.b))
        goto label_142b9a149
    
label_142b99f14:
    rdi = 0
    int64_t* rax_16 = (*(r15_1 + 8))(r15_1, 0x18)
    
    if (rax_16 != 0)
        __builtin_memset(rax_16, 0, 0x18)
    else
        rdi = (&rax_16[8]).d
    
    rbx = var_50
    
    if (rdi != 0)
    label_142b9a08d:
        
        if (rax_16 == 0)
            goto label_142b9a149
        
        sub_142b917e0(rbx)
    else
        rax_16[2] = rbx
        void* rax_17 = *(rbx + 0x90)
        
        if (rax_17 != -0x20)
            void* rcx_12 = *(rax_17 + 0x28)
            rax_16[1] = 0
            *rax_16 = rcx_12
            
            if (rcx_12 == 0)
                *(rax_17 + 0x20) = rax_16
            else
                *(rcx_12 + 8) = rax_16
            
            *(rax_17 + 0x28) = rax_16
        
        if (rbp s< 0)
            goto label_142b99fb3
        
        int32_t rax_19 = sub_142b93ea0(rbx, nullptr)
        rdi = rax_19
        
        if (rax_19 != 0)
            goto label_142b9a08d
        
        int32_t rax_20 = sub_142b94090(rbx, &var_40)
        rdi = rax_20
        
        if (rax_20 != 0)
            goto label_142b9a08d
        
        *(rbx + 0x80) = var_40
    label_142b99fb3:
        
        if ((*(rbx + 8) & 1) != 0)
            int16_t rax_22 = *(rbx + 0x6e)
            
            if (rax_22 s< 0)
                *(rbx + 0x6e) = neg.w(rax_22)
            
            if ((*(rbx + 8) & 0x20) == 0)
                *(rbx + 0x72) = *(rbx + 0x6e)
        
        if ((*(rbx + 8) & 2) != 0)
            int32_t i = 0
            
            if (*(rbx + 0x28) s> 0)
                int16_t* r8_4 = nullptr
                
                do
                    int64_t rax_24 = *(rbx + 0x30)
                    int16_t rcx_15 = *(r8_4 + rax_24)
                    
                    if (rcx_15 s< 0)
                        *(r8_4 + rax_24) = neg.w(rcx_15)
                    
                    int32_t rcx_16 = *(r8_4 + rax_24 + 8)
                    
                    if (rcx_16 s< 0)
                        *(r8_4 + rax_24 + 8) = neg.d(rcx_16)
                    
                    int32_t rcx_18 = *(r8_4 + rax_24 + 0xc)
                    
                    if (rcx_18 s< 0)
                        *(r8_4 + rax_24 + 0xc) = neg.d(rcx_18)
                    
                    if (*(r8_4 + rax_24) s< 0 || *(r8_4 + rax_24 + 8) s< 0
                            || *(r8_4 + rax_24 + 0xc) s< 0)
                        *(r8_4 + rax_24) = 0
                        *(r8_4 + rax_24 + 8) = 0
                    
                    i += 1
                    r8_4 = &r8_4[8]
                while (i s< *(rbx + 0x28))
        
        int64_t* rax_25 = *(rbx + 0xd0)
        *rax_25 = 0x10000
        rax_25[1].d = 0
        *(rax_25 + 0xc) = 0x10000
        *(rax_25 + 0x14) = 0
        rax_25[0xc].d = 1
        rax_25[0xb].b = 0xff
        
        if (arg4 == 0)
            sub_142b917e0(rbx)
        else
            *arg4 = rbx

return zx.q(rdi)
