// 函数: sub_1421530a0
// 地址: 0x1421530a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x134) u<= 1 || arg1[0xb] == 0)
    return 

char rax_1 = *arg2
uint64_t var_188
void** var_148
int64_t* var_140
int64_t performanceCount
void arg_18

if (rax_1 != 1)
    uint64_t rax_14 = zx.q(rax_1)
    wchar16 const* const rsi_2
    
    if (rax_14.d u> 5)
        rsi_2 = &data_142d40450
    else
        switch (rax_14)
            case 0
                rsi_2 = u"Failure"
            case 2
                rsi_2 = u"InvalidToken"
            case 3
                rsi_2 = u"NoKey"
            case 4
                rsi_2 = u"SessionIdMismatch"
            case 5
                rsi_2 = u"InvalidParams"
    
    int32_t r14_1 = 0
    int32_t rcx_24 = 0
    var_188 = 0
    int32_t var_180_1 = 0
    int32_t var_17c_1 = 0
    
    if (*rsi_2 != 0)
        int64_t rdi_2 = -1
        
        do
            rdi_2 += 1
        while (rsi_2[rdi_2] != 0)
        
        if (rdi_2.d + 1 s> 0)
            sub_1405947f0(&var_188, rdi_2.d + 1)
            rcx_24 = var_17c_1
            r14_1 = var_180_1
        
        int32_t rax_15 = r14_1 + rdi_2.d + 1
        int32_t var_180_2 = rax_15
        
        if (rax_15 s> rcx_24)
            sub_140594770(&var_188)
        
        UnDecorator::getReferenceType(var_188, rsi_2, (rdi_2.d + 1) * 2)
    
    void* rdx_17 = *arg1[0x262]
    
    if (rdx_17 != 0 && (*(rdx_17 + 0x30) & 2) == 0)
        sub_141f79620(&var_148, rdx_17, 0)
        performanceCount.b = 6
        char* rdx_18 = *var_140
        
        if (&rdx_18[1] u> var_140[1])
            var_148[0x2a](&var_148, &performanceCount, 1)
        else
            performanceCount.b = *rdx_18
            *var_140 += 1
        
        sub_140a1d9d0(&var_148, &var_188, arg3)
        int64_t r9_2
        r9_2.b = 1
        int64_t* rcx_32 = *arg1[0x262]
        (*(*rcx_32 + 0x2c8))(rcx_32, &arg_18, &var_148, r9_2)
        sub_141f7bb50(&var_148)
    
    (*(*arg1 + 0x2a8))(arg1, 0)
    uint64_t rcx_35 = var_188
    
    if (rcx_35 != 0)
        sub_140a74f90(rcx_35)
else
    if (*(arg2 + 0x20) s<= 0 || *(arg2 + 0x30) != 0)
        sub_142142020(arg1, &arg2[0x28])
    else
        uint32_t count = *(arg2 + 0x30)
        int64_t r15_1 = *(arg2 + 0x28)
        int64_t var_178 = 0
        uint32_t count_3 = count
        int32_t var_16c
        
        if (count != 0)
            sub_1405da9e0(&var_178, count, 0)
            memcpy(var_178, r15_1, count)
        else
            var_16c = 0
        
        uint32_t count_1 = *(arg2 + 0x40)
        int64_t r15_2 = *(arg2 + 0x38)
        int64_t var_168 = 0
        uint32_t count_5 = count_1
        
        if (count_1 != 0)
            sub_1405da9e0(&var_168, count_1, 0)
            memcpy(var_168, r15_2, count_1)
        else
            int32_t var_15c_1 = 0
        
        int64_t var_158
        sub_140596d10(&var_158, &arg2[0x48])
        
        if (&var_178 != &arg2[0x18])
            uint32_t count_2 = *(arg2 + 0x20)
            int64_t rsi_1 = *(arg2 + 0x18)
            uint32_t count_4 = count_2
            
            if (count_2 != 0 || var_16c != 0)
                sub_1405da9e0(&var_178, count_2, var_16c)
                memcpy(var_178, rsi_1, count_2)
            else
                int32_t var_16c_1 = 0
        
        sub_142142020(arg1, &var_178)
        int64_t rcx_8 = var_158
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
        
        int64_t rcx_9 = var_168
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
        
        int64_t rcx_10 = var_178
        
        if (rcx_10 != 0)
            sub_140a74f90(rcx_10)
    
    if (*(arg1 + 0x134) u> 1 && arg1[0xb] != 0)
        QueryPerformanceCounter(&performanceCount)
        int512_t zmm1 = sub_140a2e390(&var_188, u"%08X", zx.q(performanceCount.d))
        
        if (&arg1[0x32] == &var_188)
            uint64_t rcx_14 = var_188
            
            if (rcx_14 != 0)
                zmm1 = sub_140a74f90(rcx_14)
        else
            int64_t rcx_13 = arg1[0x32]
            
            if (rcx_13 != 0)
                zmm1 = sub_140a74f90(rcx_13)
            
            arg1[0x32] = var_188
            int32_t var_180
            arg1[0x33].d = var_180
            int32_t var_17c
            *(arg1 + 0x19c) = var_17c
        
        void* rax_6 = arg1[0xb]
        
        if (rax_6 != 0 && *(rax_6 + 0x641) == 0 && *(rax_6 + 0x61c) != 0)
            *(rax_6 + 0x648) += 1
        
        if (*(arg1 + 0x1cc) != 5)
            *(arg1 + 0x1cc) = 5
        
        void* rdx_9 = *arg1[0x262]
        
        if (rdx_9 != 0 && (*(rdx_9 + 0x30) & 2) == 0)
            sub_141f79620(&var_148, rdx_9, 0)
            performanceCount.b = 3
            char* rdx_10 = *var_140
            
            if (&rdx_10[1] u> var_140[1])
                var_148[0x2a](&var_148, &performanceCount, 1)
            else
                performanceCount.b = *rdx_10
                *var_140 += 1
            
            sub_140a1d9d0(&var_148, &arg1[0x32], zmm1)
            int64_t r9_1
            r9_1.b = 1
            int64_t* rcx_19 = *arg1[0x262]
            (*(*rcx_19 + 0x2c8))(rcx_19, &arg_18, &var_148, r9_1)
            sub_141f7bb50(&var_148)
        
        (*(*arg1 + 0x2a8))(arg1, 0)
