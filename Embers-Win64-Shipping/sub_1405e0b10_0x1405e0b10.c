// 函数: sub_1405e0b10
// 地址: 0x1405e0b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp
rbp.b = 0
void* rbx_4
void* rdi

if ((*(arg1 + 0x64) & 1) == 0)
    int64_t rax_5 = sx.q(arg3)
    int32_t var_78
    sub_1405e22d0(rax_5 * 0x50 + &data_143cd84b0, &var_78, arg2)
    int64_t rax_6 = sx.q(var_78)
    int64_t rcx_10
    
    if (rax_6.d != 0xffffffff)
        rcx_10 = rax_6 << 6
    
    void* const rdx_4
    
    if (rax_6.d == 0xffffffff || rcx_10 == neg.q(*(rax_5 * 0x50 + &data_143cd84b0)))
        rdx_4 = nullptr
    else
        rdx_4 = *(rcx_10 + *(rax_5 * 0x50 + &data_143cd84b0) + 0x30)
    
    rdi = &arg1[5]
    sub_1405dfc20(rdi, rdx_4)
    rbx_4 = *rdi
    
    if (rbx_4 != 0)
        int64_t r8_4
        r8_4.b = 1
        sub_1405e2740(rbx_4, arg1)
        rbx_4 = *rdi
else
    void* rbx = arg1[5]
    rdi = &arg1[5]
    void* const rdx = nullptr
    
    if (rbx != 0)
        int64_t rax_1 = sx.q(arg3)
        int32_t arg_8
        sub_1405e22d0(rax_1 * 0x50 + &data_143cd84b0, &arg_8, *(rbx + 0x28) + 0x70)
        int64_t rax_2 = sx.q(arg_8)
        int64_t rcx_2
        
        if (rax_2.d != 0xffffffff)
            rcx_2 = rax_2 << 6
        
        if (rax_2.d == 0xffffffff || rcx_2 == neg.q(*(rax_1 * 0x50 + &data_143cd84b0)))
            rdx = nullptr
        else
            rdx = *(rcx_2 + *(rax_1 * 0x50 + &data_143cd84b0) + 0x30)
        
        rbx = *rdi
    
    if (rdx != 0)
        sub_1405dfc20(rdi, rdx)
    else if (rbx != 0)
        void* rax_3 = *(rbx + 0x28)
        void* var_70 = rbx
        sub_1405ddb80(zx.q(*(rax_3 + 0x58)) * 0x50 + &data_143cd84b0, rax_3 + 0x70, &var_70)
        *(rbx + 0x4c) |= 1
    
    rbx_4 = *rdi

void* rsi_5 = rbx_4

if (rbx_4 == 0)
label_1405e0dcd:
    *rdi = 0
    
    if (rsi_5 != 0)
        int32_t temp5_1 = *(rsi_5 + 0x44)
        *(rsi_5 + 0x44) -= 1
        
        if (temp5_1 == 1)
            if ((*(rsi_5 + 0x4c) & 1) != 0)
                void* rax_18 = *(rsi_5 + 0x28)
                sub_1405e3820(zx.q(*(rax_18 + 0x58)) * 0x50 + &data_143cd84b0, rax_18 + 0x70)
                *(rsi_5 + 0x4c) &= 0xfffffffe
            
            *(rsi_5 + 0x48) = 1
            sub_141997870(rsi_5 + 0x38)
else
    int32_t r13_2 = *(rbx_4 + 0x44) + 1
    int64_t* var_60 = arg1
    *(rbx_4 + 0x44) = r13_2
    void* var_68 = rbx_4
    int32_t var_74
    sub_1405e21c0(&data_14395f3a0, &var_74, &var_68)
    int64_t rax_7 = sx.q(var_74)
    void* const rcx_16
    
    if (rax_7.d == 0xffffffff)
        rcx_16 = nullptr
    else
        rcx_16 = (rax_7 << 5) + data_14395f3a0
    
    int64_t* rsi_4 = rcx_16 + 8
    
    if (rcx_16 == 0)
        rsi_4 = nullptr
    
    *(rbx_4 + 0x44) = r13_2 - 1
    
    if (r13_2 == 1)
        if ((*(rbx_4 + 0x4c) & 1) != 0)
            void* rax_9 = *(rbx_4 + 0x28)
            sub_1405e3820(zx.q(*(rax_9 + 0x58)) * 0x50 + &data_143cd84b0, rax_9 + 0x70)
            *(rbx_4 + 0x4c) &= 0xfffffffe
        
        *(rbx_4 + 0x48) = 1
        sub_141997870(rbx_4 + 0x38)
    
    if (rsi_4 == 0)
        void* rbx_7 = *rdi
        rsi_5 = rbx_7
        
        if (rbx_7 == 0)
            goto label_1405e0dcd
        
        rbp.b = 1
    else
        sub_1405a7050(rsi_4, &var_60)
        void* rbx_5 = &arg1[9]
        int64_t rdx_9 = sx.q(*(rbx_5 + 0x10))
        void* r8_6 = rbx_5
        int32_t i = *(*rdi + 0x40)
        void* rax_12 = *(rbx_5 + 8)
        rbp = rdx_9 << 2
        
        if (rax_12 != 0)
            r8_6 = rax_12
        
        void* rcx_22 = r8_6
        void* rax_13 = r8_6 + rbp
        
        if (r8_6 != rax_13)
            while (*rcx_22 != i)
                rcx_22 += 4
                
                if (rcx_22 == rax_13)
                    goto label_1405e0d53
        
        if (r8_6 == rax_13 || ((rcx_22 - r8_6) s>> 2).d == 0xffffffff)
        label_1405e0d53:
            int32_t rax_14 = (rdx_9 + 1).d
            *(rbx_5 + 0x10) = rax_14
            
            if (rax_14 s> *(rbx_5 + 0x14))
                sub_1405e3f00(rbx_5, rdx_9.d)
            
            void* rax_15 = *(rbx_5 + 8)
            
            if (rax_15 != 0)
                rbx_5 = rax_15
            
            *(rbx_5 + rbp) = i
        
        void* rbx_6 = *rdi
        *rdi = 0
        
        if (rbx_6 != 0)
            int32_t temp7_1 = *(rbx_6 + 0x44)
            *(rbx_6 + 0x44) -= 1
            
            if (temp7_1 == 1)
                if ((*(rbx_6 + 0x4c) & 1) != 0)
                    void* rax_16 = *(rbx_6 + 0x28)
                    sub_1405e3820(zx.q(*(rax_16 + 0x58)) * 0x50 + &data_143cd84b0, rax_16 + 0x70)
                    *(rbx_6 + 0x4c) &= 0xfffffffe
                
                *(rbx_6 + 0x48) = 1
                sub_141997870(rbx_6 + 0x38)
        
        rbp.b = 1

int64_t rbx_8 = *rdi
int64_t var_50 = rbx_8

if (sub_140a80f40() == 0)
    if (data_143f138f4 != 0)
    label_1405e0e82:
        void var_48
        int64_t* rax_23 = sub_1405e1490(&var_48, nullptr, 0xff)
        *(*rax_23 + 0x10) = arg1.o
        void* rcx_36 = *rax_23
        int64_t* rdi_1 = *(rcx_36 + 0x28)
        
        if (rdi_1 != 0)
            rdi_1[9].d += 1
        
        sub_1405e48c0(rcx_36, rax_23[1], rax_23[2].d, 1)
        
        if (rdi_1 != 0)
            rdi_1[9].d -= 1
            
            if (rdi_1[9].d == 1)
                sub_140a2f6e0(rdi_1)
        
        return zx.q(rbp.b)
    
    if (data_143de5480 != 0)
        uint32_t rax_22
        rax_22.b = GetCurrentThreadId() == data_143de5470
        
        if (rax_22.b == 0)
            goto label_1405e0e82

arg1[6] = rbx_8
return zx.q(rbp.b)
