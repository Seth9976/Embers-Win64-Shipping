// 函数: sub_140bc92e0
// 地址: 0x140bc92e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if (arg1 != 0)
    if ((*(arg1 + 8) & 0x280000) == 0x280000)
        result.b = 1
        return result
    
    void* rax_1 = sub_140cddea0()
    void* rdx_1 = *(arg1 + 0x10)
    result = sx.q(*(rax_1 + 0x38))
    uint64_t result_1
    
    if (result.d s<= *(rdx_1 + 0x38))
        result_1 = result
    
    if (result.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (result_1 << 3)) == rax_1 + 0x30)
        result.b = 1
        return result
    
    if ((*(arg1 + 8) & 0x8080400) == 0)
        if (data_14399fa4c != 0 && ((*(sub_140d21d80(arg1) + 0x50) u>> 4).b & 1) != 0)
            sub_140bc86a0()
            return sub_140bc95f0(&data_1439a9900, arg1) __tailcall
        
        void* rax_4 = sub_140bdf670()
        void* rdx_4 = *(arg1 + 0x10)
        result = sx.q(*(rax_4 + 0x38))
        
        if (result.d s> *(rdx_4 + 0x38))
            result.b = 1
            return result
        
        if (*(*(rdx_4 + 0x30) + (result << 3)) != rax_4 + 0x30)
            result.b = 1
            return result
        
        if (data_143de5452 == 0)
            if (*(arg1 + 0x118) != 0)
                if (((*(arg1 + 0xcc) u>> 0x16).b & 1) == 0)
                    int64_t var_18
                    int64_t* rax_6 = sub_140d21830(arg1, &var_18, 0, 0)
                    int16_t* const r9_2
                    
                    if (rax_6[1].d == 0)
                        r9_2 = &data_142d40450
                    else
                        r9_2 = *rax_6
                    
                    sub_140af98a0("Unknown", 0x1d0, 
                        Class %s is fully loaded, but does not have its token stream assembled.", r9_2)
                    int64_t rcx_6 = var_18
                    
                    if (rcx_6 != 0)
                        sub_140a74f90(rcx_6)
                    
                    sub_140afbb40()
                
                result.b = 1
                return result
        else if ((*(arg1 + 0xcc) & 0x20000000) != 0)
            result.b = 1
            return result

result.b = 0
return result
