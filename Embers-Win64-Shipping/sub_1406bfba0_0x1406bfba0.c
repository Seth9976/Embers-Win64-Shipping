// 函数: sub_1406bfba0
// 地址: 0x1406bfba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

CRITICAL_SECTION* arg_8 = arg1
EnterCriticalSection(arg1)
int32_t rax = arg1->__offset(0x30).d
bool cond:0 = arg2 u<= rax

if (arg2 u< rax)
    int32_t rax_3
    
    do
        int64_t rdx = sx.q(arg1->__offset(0x30).d)
        int64_t* rcx_1 = *(arg1->__offset(0x28).q + (rdx << 3) - 8)
        arg1->__offset(0x30).d = (rdx - 1).d
        
        if (rcx_1 != 0)
            (*(*rcx_1 + 0x80))(rcx_1, 1)
        
        rax_3 = arg1->__offset(0x30).d
        cond:0 = arg2 u<= rax_3
    while (arg2 u< rax_3)

if (not(cond:0))
    do
        void*** rax_4 = j_sub_140a82f30(0x48)
        void*** rbx_1 = rax_4
        void*** arg_18 = rax_4
        
        if (rax_4 == 0)
            rbx_1 = nullptr
        else
            *rax_4 = &data_142d8de80
            rax_4[1] = &data_142d8df08
            rax_4[2] = 0
            rax_4[3] = 0
            rbx_1[4] = data_143dbb180
            rbx_1[5] = 0
            rbx_1[6] = data_143dbb180
            rbx_1[7] = 0
            rbx_1[8] = 0
        
        int64_t rbp_1 = sx.q(arg1->__offset(0x30).d)
        int32_t rax_7 = (rbp_1 + 1).d
        arg1->__offset(0x30).d = rax_7
        
        if (rax_7 s> arg1->__offset(0x34).d)
            sub_140638870(&arg1[1])
        
        *(arg1->__offset(0x28).q + (rbp_1 << 3)) = rbx_1
    while (arg2 u> arg1->__offset(0x30).d)

return LeaveCriticalSection(arg1) __tailcall
