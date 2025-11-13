// 函数: sub_14177ab20
// 地址: 0x14177ab20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_1408d84f0(arg1 + 0x68)
void* rdi = nullptr
int32_t i_2 = 0
uint64_t result_1

if (*(arg1 + 0x60) s> 0)
    int32_t i = 0
    
    do
        void* rax = *(arg1 + 0x58)
        void* rcx_1 = arg1 + 0x50
        
        if (rax != 0)
            rcx_1 = rax
        
        result_1 = *(*(rcx_1 + (sx.q(i) << 3)) + 0x28)
        sub_1415c5bf0(arg1 + 0x68, &result_1, &i_2)
        uint64_t result_2 = result_1
        result = sub_1405e66c0(result_2)
        uint64_t result_4
        
        if (result.b == 4)
            result = result_2
            
            if (*(result_2 + 8) != 4)
                result = 0
            
            result_4 = *(result + 0x10)
        else if (result.b == 0x88)
            result = result_2
            
            if (*(result_2 + 8) != 0x88)
                result = 0
            
            result_4 = *(result + 0x10)
        else if (result.b == 0x81)
            result = result_2
            
            if (*(result_2 + 8) != 0x81)
                result = 0
            
            result_4 = *(result + 0x10)
        else if (result.b == 0x83)
            result = result_2
            
            if (*(result_2 + 8) != 0x83)
                result = 0
            
            result_4 = *(result + 0x10)
        else if (result.b == 0x80)
            result = result_2
            
            if (*(result_2 + 8) != 0x80)
                result = 0
            
            result_4 = *(result + 0x10)
        else if (result.b == 0x8b)
            result = result_2
            
            if (*(result_2 + 8) != 0x8b)
                result = 0
            
            result_4 = *(result + 0x10)
        else if (result.b == 0x48)
            result = result_2
            
            if (*(result_2 + 8) != 0x48)
                result = 0
            
            result_4 = *(result + 0x10)
        else if (result.b == 0x41)
            result = result_2
            
            if (*(result_2 + 8) != 0x41)
                result = 0
            
            result_4 = *(result + 0x10)
        else if (result.b == 0x43)
            result = result_2
            
            if (*(result_2 + 8) != 0x43)
                result = 0
            
            result_4 = *(result + 0x10)
        else if (result.b == 0x40)
            result = result_2
            
            if (*(result_2 + 8) != 0x40)
                result = 0
            
            result_4 = *(result + 0x10)
        else if (result.b != 0x4b)
            result_4 = 0
        else
            result = result_2
            
            if (*(result_2 + 8) != 0x4b)
                result = 0
            
            result_4 = *(result + 0x10)
        
        result_1 = result_4
        
        if (result_4 != result_2)
            result = sub_1415c5bf0(arg1 + 0x68, &result_1, &i_2)
        
        i = i_2 + 1
        i_2 = i
    while (i s< *(arg1 + 0x60))

void* rcx_6 = *(arg1 + 0x40)

if (rcx_6 != 0)
    if (*(rcx_6 + 8) != 5)
        result = sub_141742c60(rcx_6)
        result_1 = result
        uint64_t result_3 = result
        
        if (result != 0)
            uint64_t result_5 = *(arg1 + 0x40)
            int32_t* rdx_13 = &i_2
            
            if (*sub_140865c40(arg1 + 0x68, &i_2, result_5) != 0xffffffff)
                sub_140865c40(arg1 + 0x68, rdx_13, result_5)
                int64_t i_4 = sx.q(i_2)
                
                if (i_4.d != 0xffffffff)
                    rdi = *(arg1 + 0x68) + i_4 * 0x18
                
                i_2 = *(rdi + 8)
                return sub_1415c5bf0(arg1 + 0x68, &result_1, &i_2)
            
            result = sub_140865c40(arg1 + 0x68, rdx_13, result_3)
            
            if (*result != 0xffffffff)
                sub_140865c40(arg1 + 0x68, &i_2, result_3)
                int64_t i_5 = sx.q(i_2)
                
                if (i_5.d != 0xffffffff)
                    rdi = *(arg1 + 0x68) + i_5 * 0x18
                
                i_2 = *(rdi + 8)
                result_1 = result_5
                return sub_1415c5bf0(arg1 + 0x68, &result_1, &i_2)
    else
        void** i_1 = *(rcx_6 + 0x10)
        result = sx.q(*(rcx_6 + 0x18))
        
        for (void* r12_1 = &i_1[result]; i_1 != r12_1; i_1 = &i_1[1])
            void* const rbx_1 = *i_1
            
            if (rbx_1 != 0)
                result = sub_1405e66c0(rbx_1)
                void* const rbx_2
                
                if (result.b == 4)
                    if (*(rbx_1 + 8) != result.b)
                        rbx_1 = nullptr
                    
                    rbx_2 = *(rbx_1 + 0x10)
                else if (result.b == 0x88)
                    if (*(rbx_1 + 8) != result.b)
                        rbx_1 = nullptr
                    
                    rbx_2 = *(rbx_1 + 0x10)
                else if (result.b == 0x81)
                    if (*(rbx_1 + 8) != result.b)
                        rbx_1 = nullptr
                    
                    rbx_2 = *(rbx_1 + 0x10)
                else if (result.b == 0x83)
                    if (*(rbx_1 + 8) != result.b)
                        rbx_1 = nullptr
                    
                    rbx_2 = *(rbx_1 + 0x10)
                else if (result.b == 0x80)
                    if (*(rbx_1 + 8) != result.b)
                        rbx_1 = nullptr
                    
                    rbx_2 = *(rbx_1 + 0x10)
                else if (result.b == 0x8b)
                    if (*(rbx_1 + 8) != result.b)
                        rbx_1 = nullptr
                    
                    rbx_2 = *(rbx_1 + 0x10)
                else if (result.b == 0x48)
                    if (*(rbx_1 + 8) != result.b)
                        rbx_1 = nullptr
                    
                    rbx_2 = *(rbx_1 + 0x10)
                else if (result.b == 0x41)
                    if (*(rbx_1 + 8) != result.b)
                        rbx_1 = nullptr
                    
                    rbx_2 = *(rbx_1 + 0x10)
                else if (result.b == 0x43)
                    if (*(rbx_1 + 8) != result.b)
                        rbx_1 = nullptr
                    
                    rbx_2 = *(rbx_1 + 0x10)
                else if (result.b == 0x40)
                    if (*(rbx_1 + 8) != result.b)
                        rbx_1 = nullptr
                    
                    rbx_2 = *(rbx_1 + 0x10)
                else if (result.b != 0x4b)
                    rbx_2 = nullptr
                else
                    if (*(rbx_1 + 8) != result.b)
                        rbx_1 = nullptr
                    
                    rbx_2 = *(rbx_1 + 0x10)
                
                void* const var_40 = rbx_2
                
                if (rbx_2 != 0)
                    void* r15_1 = *i_1
                    void arg_20
                    
                    if (*sub_140865c40(arg1 + 0x68, &arg_20, r15_1) == 0xffffffff)
                        void var_48
                        result = sub_140865c40(arg1 + 0x68, &var_48, rbx_2)
                        
                        if (*result != 0xffffffff)
                            int32_t arg_18
                            sub_140865c40(arg1 + 0x68, &arg_18, rbx_2)
                            int64_t rax_6 = sx.q(arg_18)
                            void* const rcx_13
                            
                            if (rax_6.d == 0xffffffff)
                                rcx_13 = nullptr
                            else
                                rcx_13 = *(arg1 + 0x68) + rax_6 * 0x18
                            
                            result_1.d = *(rcx_13 + 8)
                            var_40 = r15_1
                            result = sub_1415c5bf0(arg1 + 0x68, &var_40, &result_1)
                    else
                        sub_140865c40(arg1 + 0x68, &i_2, r15_1)
                        int64_t i_3 = sx.q(i_2)
                        void* const rcx_10
                        
                        if (i_3.d == 0xffffffff)
                            rcx_10 = nullptr
                        else
                            rcx_10 = *(arg1 + 0x68) + i_3 * 0x18
                        
                        result_1.d = *(rcx_10 + 8)
                        result = sub_1415c5bf0(arg1 + 0x68, &var_40, &result_1)

return result
