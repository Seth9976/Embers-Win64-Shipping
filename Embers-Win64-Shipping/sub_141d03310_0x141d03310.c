// 函数: sub_141d03310
// 地址: 0x141d03310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 8)
sub_141cfdac0(arg1)
*(arg1 + 0x13c)
void* rdi

if (*(arg1 + 0x110) == *(arg1 + 0x13c))
labelid_4:
    rdi.b = 0
else
    int64_t r10_1 = *(arg2 + 0x10)
    void* r9_1 = arg1 + 0x140
    void* r8_1 = *(r9_1 + 8)
    
    if (r8_1 != 0)
        r9_1 = r8_1
    
    int32_t rax_6 =
        *(r9_1 + ((sx.q((r10_1 u>> 0x20).d * 0x17 + r10_1.d) & (sx.q(*(arg1 + 0x150)) - 1)) << 2))
    
    if (rax_6 == 0xffffffff)
    labelid_4:
        rdi.b = 0
    else
        int64_t r8_2 = *(arg1 + 0x108)
        int64_t rcx_4
        
        while (true)
            rcx_4 = sx.q(rax_6)
            int64_t rdx_2 = rcx_4 * 3
            
            if (*(r8_2 + (rdx_2 << 3)) == r10_1)
                break
            
            rax_6 = *(r8_2 + (rdx_2 << 3) + 0x10)
            
            if (rax_6 == 0xffffffff)
                goto label_141d033b7_2
        
        if (rax_6 == 0xffffffff)
        label_141d033b7:
            rdi.b = 0
        else
            void* rcx_6 = r8_2 + rcx_4 * 0x18
            
            if (rcx_6 == 0)
            label_141d033b7_1:
                rdi.b = 0
            else
                int64_t rdx_3 = sx.q(*(rcx_6 + 8))
                
                if (rdx_3.d == 0)
                label_141d033b7_2:
                    rdi.b = 0
                else
                    int32_t rax_10 = not.d(*(arg1 + 0xdc))
                    int64_t arg_8 = 0
                    void* var_38 = arg1
                    int64_t r8
                    int64_t var_18_1 = r8
                    int64_t* rdx_6 = (sx.q(rax_10) & rdx_3) * 0x30 + *(arg1 + 0xb8)
                    int64_t rax_11 = *rdx_6
                    int64_t r9_2 = rdx_6[1]
                    uint64_t r8_4 = rax_11 & 0xffffffffffff
                    int64_t var_28_1 = r9_2
                    uint64_t var_30_1 = r8_4
                    void* rcx_10 = (rax_11 u>> 0x30) * 0x98 + *(arg1 + 0xa8)
                    int64_t* var_20_1 = &arg_8
                    void* var_10_1 = rcx_10
                    void** var_40_1 = &var_38
                    int64_t (* var_48)(int64_t* arg1, int32_t* arg2) = sub_141cfc820
                    sub_141cf54c0(*(rcx_10 + 0x80), arg1 + 0xe0, r8_4, r9_2 - 1 + r8_4, 0, 
                        *(rcx_10 + 0x18), *(rcx_10 + 0x20), *(rcx_10 + 0x24), &var_48)
                    rdi.b = 1

if (arg1 != -8)
    LeaveCriticalSection(arg1 + 8)

return zx.q(rdi.b)
