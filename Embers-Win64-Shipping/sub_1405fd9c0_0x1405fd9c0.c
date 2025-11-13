// 函数: sub_1405fd9c0
// 地址: 0x1405fd9c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_48 = -2
CRITICAL_SECTION* arg_8 = arg1
EnterCriticalSection(arg1)
int32_t rax = arg1->__offset(0x30).d
bool cond:0 = arg2 u<= rax

if (arg2 u< rax)
    int32_t rax_4
    
    do
        int64_t rdx = sx.q(arg1->__offset(0x30).d)
        int64_t* rcx = *(arg1->__offset(0x28).q + (rdx << 3) - 8)
        arg1->__offset(0x30).d = (rdx - 1).d
        
        if (rcx != 0)
            (*(*rcx + 0x40))(rcx, 1)
        
        rax_4 = arg1->__offset(0x30).d
        cond:0 = arg2 u<= rax_4
    while (arg2 u< rax_4)

if (not(cond:0))
    do
        void*** rax_5 = j_sub_140a82f30(0x40)
        void*** rbx_1 = rax_5
        void*** arg_18 = rax_5
        
        if (rax_5 == 0)
            rbx_1 = nullptr
        else
            *rax_5 = &data_142d5f070
            rax_5[1] = &data_142d5f0b8
            __builtin_memset(&rax_5[2], 0, 0x14)
            rax_5[5] = 0
            rax_5[6].d = 0
            rax_5[7] = 0
        
        int64_t rbp_1 = sx.q(arg1->__offset(0x30).d)
        int32_t rax_6 = (rbp_1 + 1).d
        arg1->__offset(0x30).d = rax_6
        
        if (rax_6 s> arg1->__offset(0x34).d)
            sub_1405a4d70(&arg1[1])
        
        *(arg1->__offset(0x28).q + (rbp_1 << 3)) = rbx_1
    while (arg2 u> arg1->__offset(0x30).d)

return LeaveCriticalSection(arg1) __tailcall
