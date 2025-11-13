// 函数: sub_140942650
// 地址: 0x140942650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t var_48 = 0
int32_t var_40 = 0
void* result = sub_140942880(u"OnlineSubsystem", u"ModuleRedirects", &data_143de5780, &var_48)
uint64_t r13 = var_48
int64_t rbp = sx.q(var_40)
int64_t r15_2 = (rbp << 5) + r13

if (r13 != r15_2)
    void* rsi_1 = r13 + 8
    
    do
        int16_t* rdx_1
        
        if (*(rsi_1 + 0x10) == 0)
            rdx_1 = &data_142d40450
        else
            rdx_1 = *(rsi_1 + 8)
        
        void arg_18
        int64_t* rax = sub_140b58260(&arg_18, rdx_1, 1)
        int32_t rax_1 = *(arg1 + 0x18c)
        int64_t rdi_1
        
        if (rax_1 == 0)
            rdi_1 = zx.q(*(arg1 + 0x160))
            int32_t rax_5 = (rdi_1 + 1).d
            *(arg1 + 0x160) = rax_5
            
            if (rax_5 s> *(arg1 + 0x164))
                sub_1405c4e40(arg1 + 0x158)
            
            sub_1405b2ba0(arg1 + 0x168, 0)
        else
            rdi_1 = sx.q(*(arg1 + 0x188))
            int64_t r8_1 = *(arg1 + 0x158)
            int64_t rdx_2 = sx.q(*((rdi_1 << 5) + r8_1 + 4))
            *(arg1 + 0x188) = rdx_2.d
            *(arg1 + 0x18c) = rax_1 - 1
            
            if (rax_1 != 1)
                *((rdx_2 << 5) + r8_1) = 0xffffffff
        
        void* rax_6 = *(arg1 + 0x178)
        void* rcx_5 = arg1 + 0x168
        
        if (rax_6 != 0)
            rcx_5 = rax_6
        
        int32_t rax_7 = rdi_1.d
        
        if (rdi_1.d s< 0)
            rax_7 = (rdi_1 + 0x1f).d
        
        void* r8_2 = rcx_5 + (sx.q(rax_7 s>> 5) << 2)
        *r8_2 |= 1 << (rdi_1.b & 0x1f)
        int64_t* r14_3 = (sx.q(rdi_1.d) << 5) + *(arg1 + 0x158)
        *r14_3 = 0
        *r14_3 = *(rsi_1 - 8)
        *(rsi_1 - 8) = 0
        r14_3[1].d = *rsi_1
        *(r14_3 + 0xc) = *(rsi_1 + 4)
        *rsi_1 = 0
        r14_3[2] = *rax
        r14_3[3].d = 0xffffffff
        int32_t rax_14 = r14_3[1].d
        int16_t* rdx_5
        
        if (rax_14 == 0)
            rdx_5 = &data_142d40450
        else
            rdx_5 = *r14_3
        
        int32_t rcx_8 = rax_14 - 1
        
        if (rax_14 == 0)
            rcx_8 = 0
        
        void arg_10
        sub_1409249d0(arg1 + 0x158, &arg_10, sub_1405969c0(rcx_8, rdx_5), r14_3, rdi_1.d, nullptr)
        rsi_1 += 0x20
        result = rsi_1 - 8
    while (result != r15_2)
    
    r13 = var_48

uint64_t rbx_2 = r13

if (rbp.d != 0)
    int32_t i
    
    do
        int64_t rcx_10 = *(rbx_2 + 0x10)
        
        if (rcx_10 != 0)
            result = sub_140a74f90(rcx_10)
        
        int64_t rcx_11 = *rbx_2
        
        if (rcx_11 != 0)
            result = sub_140a74f90(rcx_11)
        
        rbx_2 += 0x20
        i = rbp.d
        rbp = zx.q(rbp.d - 1)
    while (i != 1)

if (r13 == 0)
    return result

return sub_140a74f90(r13) __tailcall
