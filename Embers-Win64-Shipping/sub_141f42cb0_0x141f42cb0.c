// 函数: sub_141f42cb0
// 地址: 0x141f42cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi
int64_t* var_8 = rdi
int64_t result

if (*(arg1 + 0x648) == 0)
    rdi.b = 1
else
    result = sub_14245f6d0()
    
    if (result == 0)
        rdi.b = 1
    else
        rdi = *(arg1 + 0x648)
        void* rdx_1 = result + 0x30
        result = sx.q(*(result + 0x38))
        
        if (result.d s> rdi[7].d)
            rdi.b = 1
        else if (*(rdi[6] + (result << 3)) != rdx_1 || rdi == 0)
            rdi.b = 1
        else
            result = sub_140d21950(rdi, sub_14245d9a0())
            
            if (result != 0)
            label_141f42d7a:
                int64_t rdx_5 = *result
                result = (*(rdx_5 + 0x98))(result, rdx_5)
                
                if (result == 0)
                    rdi.b = 0
                else
                    void* rdx_6 = *(arg1 + 0x430)
                    
                    if (rdx_6 == 0 || *(rdx_6 + 0x60) != result)
                        rdi.b = 0
                    else if (sub_141e44a60(result, rdx_6).b != 0)
                        rdi.b = 1
                    else
                        rdi.b = 0
            else
                void* rax_1 = sub_140bdf670()
                void* rdx_3 = rdi[2]
                result = sx.q(*(rax_1 + 0x38))
                
                if (result.d s> *(rdx_3 + 0x38))
                    rdi.b = 1
                else if (*(*(rdx_3 + 0x30) + (result << 3)) != rax_1 + 0x30)
                    rdi.b = 1
                else
                    if (rdi[0x23] == 0)
                        (*(*rdi + 0x390))(rdi)
                    
                    rdi = rdi[0x54]
                    
                    if (rdi == 0)
                        rdi.b = 1
                    else
                        result = sub_140d21950(rdi, sub_14245d9a0())
                        
                        if (result != 0)
                            goto label_141f42d7a
                        
                        rdi.b = 1

if (*(arg1 + 0x717) == 0 && *(arg1 + 0x648) != 0)
    result = sub_14245f6d0()
    
    if (result != 0)
        void* rdx_7 = *(arg1 + 0x648)
        int64_t r8_2 = result + 0x30
        result = sx.q(*(result + 0x38))
        
        if (result.d s<= *(rdx_7 + 0x38) && *(*(rdx_7 + 0x30) + (result << 3)) == r8_2 && rdx_7 != 0
                && rdi.b != 0)
            result = *(arg1 + 0x650)
            
            if (result == 0)
                result.b = 1
                return result
            
            int64_t rdi_1 = *(result + 0x10)
            void* const rdx_8
            
            if (rdx_7 == 0)
                rdx_8 = nullptr
            else
                result = sub_14245f6d0()
                
                if (result == 0)
                    rdx_8 = nullptr
                else
                    rdx_8 = *(arg1 + 0x648)
                    int64_t r8_3 = result + 0x30
                    result = sx.q(*(result + 0x38))
                    
                    if (result.d s> *(rdx_8 + 0x38))
                        rdx_8 = nullptr
                    else if (*(*(rdx_8 + 0x30) + (result << 3)) != r8_3)
                        rdx_8 = nullptr
            
            if (rdi_1 != rdx_8 || *(*(arg1 + 0x650) + 0x20) != arg1)
                result.b = 1
                return result

result.b = 0
return result
