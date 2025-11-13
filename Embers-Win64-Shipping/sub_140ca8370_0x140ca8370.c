// 函数: sub_140ca8370
// 地址: 0x140ca8370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg1 + 0xcc) u>> 0xb)

if ((result.b & 1) == 0 && *(arg1 + 0x70) != 0)
    int32_t i_3 = 0
    *(arg1 + 0x108) = 0
    
    if (*(arg1 + 0x10c) != 0)
        sub_1405c5570(arg1 + 0x100, 0)
    
    void* rbx_1 = *(arg1 + 0x40)
    void* r14_1 = arg1 + 0xf0
    int32_t rax_1
    
    if (rbx_1 == 0)
        *(r14_1 + 8) = 0
        
        if (*(r14_1 + 0xc) != 0)
            sub_1405a5410(r14_1, 0)
        
        rax_1 = 0
    else
        sub_140ca8370(rbx_1)
        
        if (r14_1 == rbx_1 + 0xf0)
            rax_1 = *(arg1 + 0xf8)
        else
            int64_t rsi_1 = sx.q(*(rbx_1 + 0xf8))
            int64_t rbx_3 = *(rbx_1 + 0xf0)
            int32_t r8_1 = *(r14_1 + 0xc)
            *(r14_1 + 8) = rsi_1.d
            
            if (rsi_1.d != 0 || r8_1 != 0)
                sub_1405a4be0(r14_1, rsi_1.d, r8_1)
                memcpy(*r14_1, rbx_3, (rsi_1 << 4).d)
                rax_1 = *(arg1 + 0xf8)
            else
                *(r14_1 + 0xc) = 0
                rax_1 = *(arg1 + 0xf8)
    
    *(arg1 + 0x110) = rax_1
    void* i_4 = *(arg1 + 0x50)
    int32_t r15_1 = 0
    uint64_t result_1 = 0
    uint64_t i_8 = 0
    int32_t var_5c_1 = 0
    void* var_58 = arg1
    int32_t var_48_1 = 0xffffffff
    int16_t var_44_1 = 0x100
    char var_42_1 = 0
    sub_140be1e30(&var_58)
    void* i = i_4
    
    if (i != 0)
        uint64_t result_3 = 0
        
        do
            if (((*(*(i + 8) + 0x10) u>> 0xf).b & 1) != 0 && (*(i + 0x40) & 0x20) != 0)
                int64_t rax_5
                
                if (sub_140cc16a0(i + 0x10, sub_140d41340()) == 0)
                    rax_5 = 0
                else
                    rax_5 = *(i + 0x10)
                
                if (rax_5 == arg1)
                    int64_t rsi_2 = sx.q(i_8.d)
                    i_8 = zx.q((rsi_2 + 1).d)
                    int32_t i_9 = i_8.d
                    
                    if (i_8.d s> r15_1)
                        sub_1405a4d70(&result_1)
                        r15_1 = var_5c_1
                        i_8 = zx.q(i_9)
                        result_3 = result_1
                    
                    *(result_3 + (rsi_2 << 3)) = i
            
            void* i_5 = *(i + 0x20)
            sub_140be1e30(&var_58)
            i = i_5
        while (i != 0)
        
        r14_1 = arg1 + 0xf0
    
    void* i_6 = *(arg1 + 0x48)
    var_58 = arg1
    int32_t var_48_2 = 0xffffffff
    int16_t var_44_2 = 0x100
    char var_42_2 = 0
    sub_140bad960(&var_58)
    void* i_1 = i_6
    
    if (i_1 != 0)
        do
            void* rax_6 = sub_140bdfab0()
            void* rdx_5 = *(i_1 + 0x10)
            int64_t rax_7 = sx.q(*(rax_6 + 0x38))
            
            if (rax_7.d s<= *(rdx_5 + 0x38) && *(*(rdx_5 + 0x30) + (rax_7 << 3)) == rax_6 + 0x30
                    && (*(i_1 + 0xb0) & 0x40) != 0 && *(i_1 + 0x40) == 0)
                int64_t rsi_3 = sx.q(*(arg1 + 0x108))
                int32_t rax_9 = (rsi_3 + 1).d
                *(arg1 + 0x108) = rax_9
                
                if (rax_9 s> *(arg1 + 0x10c))
                    sub_1405a4d70(arg1 + 0x100)
                
                *(*(arg1 + 0x100) + (rsi_3 << 3)) = i_1
            
            void* i_7 = *(i_1 + 0x28)
            sub_140bad960(&var_58)
            i_1 = i_7
        while (i_1 != 0)
        
        r14_1 = arg1 + 0xf0
    
    uint64_t result_2 = result_1
    uint8_t rax_12 = (*(arg1 + 0xcc) u>> 7).b & 1
    
    if (rax_12 == 0)
        sub_140bd47e0(result_2, i_8.d, arg2)
    
    int32_t rdx_9 = *(arg1 + 0xf8) + i_8.d
    
    if (rdx_9 s> *(r14_1 + 0xc))
        sub_1405a5410(r14_1, rdx_9)
    
    if (i_8.d s> 0)
        uint64_t result_4 = result_2
        uint64_t i_2
        
        do
            int32_t j = 0
            *(*result_4 + 0x48) = *(arg1 + 0xf8)
            
            if (*(*result_4 + 0x38) s> 0)
                do
                    int64_t rsi_4 = sx.q(*(r14_1 + 8))
                    int32_t rax_15 = (rsi_4 + 1).d
                    *(r14_1 + 8) = rax_15
                    
                    if (rax_15 s> *(r14_1 + 0xc))
                        sub_1405a4f90(r14_1)
                    
                    int64_t rcx_20 = rsi_4 << 4
                    int64_t* rcx_21 = rcx_20 + *r14_1
                    
                    if (rcx_20 != neg.q(*r14_1))
                        *rcx_21 = *result_4
                        rcx_21[1].d = j
                    
                    j += 1
                while (j s< *(*result_4 + 0x38))
            
            result_4 += 8
            i_2 = i_8
            i_8 -= 1
        while (i_2 != 1)
    
    if (rax_12 != 0 && data_143e1ab30 != 0)
        int64_t* rcx_22 = *(arg1 + 0x118)
        
        if (rcx_22 == 0)
            (*(*arg1 + 0x390))(arg1)
            rcx_22 = *(arg1 + 0x118)
        
        (*(*rcx_22 + 0x248))(rcx_22, r14_1)
    
    int32_t rdx_12 = *(arg1 + 0x108)
    
    if (*(arg1 + 0x10c) != rdx_12)
        sub_1405c5570(arg1 + 0x100, rdx_12)
    
    sub_140bd4c20(*(arg1 + 0x100), *(arg1 + 0x108), arg2)
    int32_t rax_21 = *(arg1 + 0xcc) | 0x800
    bool cond:1_1 = data_143e1ab30 == 0
    *(arg1 + 0xcc) = rax_21
    
    if (not(cond:1_1) && (rax_21 & 0x60000) == 0)
        int32_t rdx_14 = *(arg1 + 0xf8)
        
        if (rdx_14 != 0)
            var_58 = nullptr
            int32_t var_50_5 = 0
            
            if (rdx_14 s> 0)
                sub_1405a5410(&var_58, rdx_14)
            
            int64_t* rcx_28 = *(arg1 + 0x118)
            
            if (rcx_28 == 0)
                (*(*arg1 + 0x390))(arg1)
                rcx_28 = *(arg1 + 0x118)
            
            (*(*rcx_28 + 0x1b0))(rcx_28, &var_58)
            int64_t rax_24 = sx.q(var_50_5)
            int32_t r9_1 = *(arg1 + 0xf8)
            
            if (rax_24.d != r9_1)
                void* r8_7 = var_58
                arg2.d = 0
                
                if (r9_1 s> 0)
                    void* rdx_18 = (rax_24 << 4) + r8_7
                    
                    do
                        void* rax_25 = r8_7
                        
                        if (r8_7 != rdx_18)
                            while (zx.d(*rax_25) != i_3)
                                rax_25 += 0x10
                                
                                if (rax_25 == rdx_18)
                                    break
                        
                        i_3 += 1
                        arg2.d = i_3
                    while (i_3 s< r9_1)
                
                if (r8_7 != 0)
                    sub_140a74f90(r8_7)
            else
                void* rcx_29 = var_58
                
                if (rcx_29 != 0)
                    sub_140a74f90(rcx_29)
    
    result = result_1
    
    if (result != 0)
        return sub_140a74f90(result)

return result
