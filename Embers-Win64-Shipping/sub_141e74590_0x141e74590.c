// 函数: sub_141e74590
// 地址: 0x141e74590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = arg2
int64_t* rdi = *(arg2 + 0x10)

if (rdi == 0 || sub_141e64770(rdi).b == 0)
    return 

int32_t r12_1 = data_143f39bac

if (r12_1 == 0)
    int64_t* rax_1 = sub_142475900()
    void* rax_2 = rax_1[0x23]
    
    if (rax_2 == 0)
        int64_t rdx = *rax_1
        (*(rdx + 0x390))(rax_1, rdx)
        rax_2 = rax_1[0x23]
    
    r12_1 = *(rax_2 + 0x100)

EnterCriticalSection(arg1 + 0xf8)
int64_t r10_1 = sx.q(*(arg1 + 0x68))
int32_t rsi_1 = 0
int64_t r14_1 = sx.q(r12_1)

if (r10_1.d s> 0)
    int64_t rdx_1 = 0
    
    while (true)
        if (rdx_1 s>= r14_1)
            goto label_141e74672
        
        int64_t* r8_1 = *(*(*(arg1 + 0x60) + (rdx_1 << 3)) + 0x10)
        
        if (r8_1 != 0)
            void* r8_2 = *r8_1
            
            if (r8_2 != 0 && *(r8_2 + 0x164) s>= *(*rdi + 0x164))
                rsi_1 += 1
                rdx_1 += 1
                
                if (rdx_1 s>= r10_1)
                    goto label_141e74672
                
                continue
        
        if (rsi_1 == 0xffffffff)
            break
        
        int32_t r13_1 = *(arg1 + 0x68)
        *(arg1 + 0x68) = r13_1 + 1
        
        if (r13_1 + 1 s> *(arg1 + 0x6c))
            sub_1405a4d70(arg1 + 0x60)
        
        void** rdi_1 = sx.q(rsi_1) << 3
        void* rdx_5 = *(arg1 + 0x60) + rdi_1
        memmove(rdx_5 + 8, rdx_5, (r13_1 - rsi_1) << 3)
        *(rdi_1 + *(arg1 + 0x60)) = arg_10
        goto label_141e74699

label_141e74672:

if (r10_1.d s< r12_1)
    sub_1405a7050(arg1 + 0x60, &arg_10)

label_141e74699:

for (int64_t i = sx.q(*(arg1 + 0x68) - 1); i s>= r14_1; i -= 1)
    int64_t* rcx_6 = *(*(arg1 + 0x60) + (i << 3))
    (*(*rcx_6 + 0x38))(rcx_6)

if (arg1 != -0xf8)
    LeaveCriticalSection(arg1 + 0xf8)
